/*
 * XREFs of ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0002D2C
 * Callers:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0002D2C (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ?SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C00A4518 (-SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C00E3910 (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0002D2C (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C0006884 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0022264 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::SetPowerState(
        DMMVIDEOPRESENTTARGET *this,
        struct DXGADAPTER *a2,
        unsigned __int8 a3)
{
  unsigned int v5; // edx
  DMMVIDEOPRESENTTARGET *v7; // rcx
  char *v8; // rdi
  char *i; // rbx

  v5 = *((_DWORD *)this + 98);
  if ( v5 == -1 )
  {
    v7 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 56);
    if ( v7 )
      DMMVIDEOPRESENTTARGET::SetPowerState(v7, a2, a3);
  }
  else if ( a3 )
  {
    if ( !*((_BYTE *)this + 396) )
    {
      DXGADAPTER::SetPowerComponentActiveCBInternal(a2, v5, 1u, 0);
      *((_BYTE *)this + 396) = 1;
    }
  }
  else if ( *((_BYTE *)this + 396) )
  {
    DXGADAPTER::SetPowerComponentIdleCBInternal(a2, v5, 0);
    *((_BYTE *)this + 396) = 0;
  }
  v8 = (char *)this + 456;
  for ( i = (char *)*((_QWORD *)this + 57); i != v8; i = *(char **)i )
    DMMVIDEOPRESENTTARGET::SetPowerState((DMMVIDEOPRESENTTARGET *)(i - 472), a2, a3);
}
