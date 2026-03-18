/*
 * XREFs of IrqArbpFindSuitableRangeMsi @ 0x1C0091388
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C0090610 (IrqArbFindSuitableRange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_q @ 0x1C00299A8 (WPP_RECORDER_SF_q.c)
 *     ProcessorMsiSupported @ 0x1C008E660 (ProcessorMsiSupported.c)
 *     ArbFindSuitableRange @ 0x1C00940C0 (ArbFindSuitableRange.c)
 */

char __fastcall IrqArbpFindSuitableRangeMsi(__int64 a1, _DWORD *a2)
{
  _QWORD *v2; // r9
  __int64 v4; // r10
  __int64 v6; // rbp
  __int64 v7; // rdx
  unsigned int v8; // esi
  BOOL v9; // ebx
  int v10; // eax
  int v11; // edx
  int v13; // eax
  bool v14; // cl
  BOOL v15; // [rsp+78h] [rbp+10h] BYREF

  v2 = (_QWORD *)*((_QWORD *)a2 + 7);
  v4 = *((_QWORD *)a2 + 5);
  v15 = 0;
  v6 = *((_QWORD *)a2 + 9);
  LOBYTE(v15) = *(_BYTE *)(v2[5] + 4LL) & 1;
  v7 = *(_QWORD *)(v4 + 40);
  v8 = *(_DWORD *)(v7 + 12) - *(_DWORD *)(v7 + 8) + 1;
  if ( a2[12] == 1 && v2[2] == 1LL && v2[3] == 1LL )
  {
    *((_WORD *)a2 + 32) |= 0x40u;
    v7 = *(_QWORD *)(v4 + 40);
  }
  v9 = v15;
  v10 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD, _DWORD, BOOL, _DWORD, int))ProcessorFindIdtEntries)(
          *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL),
          v7,
          v6,
          v8,
          *a2,
          v15,
          0,
          1);
  if ( v10 < 0 )
  {
    if ( v8 > 1 )
      v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, _DWORD, BOOL, _DWORD, int))ProcessorFindIdtEntries)(
              *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL),
              *(_QWORD *)(*((_QWORD *)a2 + 5) + 40LL),
              v6,
              1LL,
              *a2,
              v9,
              0,
              1);
    if ( v10 < 0 )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        20,
        30,
        (__int64)&WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids,
        *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL));
      return 0;
    }
  }
  v13 = ProcessorMsiSupported((__int64 *)(v6 + 16), &v15);
  if ( v13 >= 0 )
  {
    v14 = v15;
    v13 = 0;
  }
  else
  {
    v14 = v15;
  }
  if ( v13 < 0 || !v14 )
    return 0;
  return ArbFindSuitableRange(a1, a2);
}
