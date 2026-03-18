/*
 * XREFs of IrqArbpFindSuitableRangeMsi @ 0x1C00893F0
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C0088E70 (IrqArbFindSuitableRange.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0017654 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     ArbFindSuitableRange @ 0x1C00890F0 (ArbFindSuitableRange.c)
 *     ProcessorMsiSupported @ 0x1C0089620 (ProcessorMsiSupported.c)
 */

char __fastcall IrqArbpFindSuitableRangeMsi(__int64 a1, _DWORD *a2)
{
  _QWORD *v3; // rdx
  __int64 v5; // r10
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // esi
  BOOL v9; // ebx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  bool v13; // cl
  BOOL v15; // [rsp+78h] [rbp+10h] BYREF

  v15 = 0;
  v3 = (_QWORD *)*((_QWORD *)a2 + 7);
  v5 = *((_QWORD *)a2 + 5);
  v6 = *((_QWORD *)a2 + 9);
  v7 = *(_QWORD *)(v5 + 40);
  LOBYTE(v15) = *(_BYTE *)(v3[5] + 4LL) & 1;
  v8 = *(_DWORD *)(v7 + 12) - *(_DWORD *)(v7 + 8) + 1;
  if ( a2[12] == 1 && v3[2] == 1LL && v3[3] == 1LL )
    *((_WORD *)a2 + 32) |= 0x40u;
  v9 = v15;
  v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, _DWORD, BOOL, _DWORD, int))ProcessorFindIdtEntries)(
          *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL),
          *(_QWORD *)(v5 + 40),
          v6,
          v8,
          *a2,
          v15,
          0,
          1);
  if ( v10 >= 0 )
    goto LABEL_3;
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
  if ( v10 >= 0 )
  {
LABEL_3:
    v12 = ProcessorMsiSupported(v6 + 16, &v15);
    if ( v12 < 0 )
    {
      v13 = v15;
    }
    else
    {
      v13 = v15;
      v12 = 0;
    }
    if ( v12 >= 0 && v13 )
      return ArbFindSuitableRange(a1, (__int64)a2);
  }
  else
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      20,
      30,
      (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
      *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL));
  }
  return 0;
}
