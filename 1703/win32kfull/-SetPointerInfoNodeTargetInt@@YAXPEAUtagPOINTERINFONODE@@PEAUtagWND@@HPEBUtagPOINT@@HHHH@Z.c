/*
 * XREFs of ?SetPointerInfoNodeTargetInt@@YAXPEAUtagPOINTERINFONODE@@PEAUtagWND@@HPEBUtagPOINT@@HHHH@Z @ 0x1C019A17C
 * Callers:
 *     ?SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPOINT@@HHHH@Z @ 0x1C019A094 (-SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPO.c)
 *     ?UpdateHistoryWithTarget@@YAXPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagWND@@HPEBUtagPOINT@@HHH@Z @ 0x1C019A5D4 (-UpdateHistoryWithTarget@@YAXPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagWND@@HPEBU.c)
 * Callees:
 *     <none>
 */

void __fastcall SetPointerInfoNodeTargetInt(
        struct tagPOINTERINFONODE *a1,
        struct tagWND *a2,
        int a3,
        const struct tagPOINT *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  __int64 v8; // rax
  int v9; // edx
  int v10; // r8d
  int v11; // eax

  *((_DWORD *)a1 + 1) &= ~0x100u;
  if ( a2 )
    v8 = *(_QWORD *)a2;
  else
    v8 = 0LL;
  *(_DWORD *)a1 |= 0x100u;
  *((_QWORD *)a1 + 10) = v8;
  *((_DWORD *)a1 + 8) = a3;
  if ( a8 )
    *(_DWORD *)a1 |= 0x200u;
  if ( !a7 )
    *(_DWORD *)a1 &= ~0x200u;
  if ( a6 )
    *(_DWORD *)a1 = *(_DWORD *)a1 & 0xFFFFF3FF | 0x400;
  if ( a4 )
    *(struct tagPOINT *)((char *)a1 + 36) = *a4;
  v9 = *(_DWORD *)a1;
  if ( a7 )
  {
    v10 = 0x40000;
    if ( (v9 & 0x40000) != 0 )
      return;
    v11 = a5 << 18;
  }
  else
  {
    v10 = 0x20000;
    if ( (v9 & 0x20000) != 0 )
      return;
    v11 = a5 << 17;
  }
  *(_DWORD *)a1 = v9 ^ v10 & (v9 ^ v11);
}
