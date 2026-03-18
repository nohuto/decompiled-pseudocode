/*
 * XREFs of ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0171B48
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C010DDB0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?SetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJII@Z @ 0x1C01D4490 (-SetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJII@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::InitializePowerManagement(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r15
  int v5; // ebx
  unsigned int v6; // esi
  unsigned int v8; // r14d
  __int64 v9; // rbp
  __int64 v10; // rax
  VIDPN_MGR *v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 2);
  v5 = 0;
  v6 = 0;
  v8 = *(_DWORD *)(v4 + 2464);
  if ( v8 )
  {
    v9 = 0LL;
    do
    {
      v10 = *(_QWORD *)(v4 + 2320);
      if ( *(_DWORD *)(v10 + v9 + 208) == 1 )
      {
        v11 = (VIDPN_MGR *)*((_QWORD *)this + 11);
        v12 = *(_DWORD *)(v10 + v9 + 212);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v17, (__int64)v11, a3, a4);
        v5 = VIDPN_MGR::SetTargetPowerComponentIndex(v11, v12, v6);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v17 + 40), v13, v14, v15);
        if ( v5 < 0 )
          break;
      }
      ++v6;
      v9 += 520LL;
    }
    while ( v6 < v8 );
  }
  return (unsigned int)v5;
}
