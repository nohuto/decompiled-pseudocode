/*
 * XREFs of RtlInitializeResource @ 0x18005C7A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180024408 @ 0x180024408 (sub_180024408.c)
 *     sub_1800244C4 @ 0x1800244C4 (sub_1800244C4.c)
 *     sub_1800244F8 @ 0x1800244F8 (sub_1800244F8.c)
 *     sub_180029EA4 @ 0x180029EA4 (sub_180029EA4.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005C890 (RtlInitializeCriticalSectionEx.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwCreateSemaphore @ 0x18009C1D0 (ZwCreateSemaphore.c)
 */

_WORD *__fastcall RtlInitializeResource(__int64 a1)
{
  PSLIST_ENTRY v2; // rax
  PSLIST_ENTRY v3; // rdi
  int v4; // eax
  int v5; // esi
  int v6; // esi
  __int64 v7; // rax
  _WORD *result; // rax
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = sub_1800244F8();
  v3 = v2;
  if ( !v2 )
    RtlRaiseStatus(3221225495LL);
  HIDWORD(v2[2].Next) = 0;
  v4 = sub_1800244C4(1u);
  WORD1(v3->Next) = v4;
  *((_WORD *)&v3[2].Next + 6) = HIWORD(v4);
  v5 = ZwCreateSemaphore(&v9, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v5 < 0 )
  {
    sub_180029EA4(v3);
    RtlRaiseStatus((unsigned int)v5);
  }
  v6 = ZwCreateSemaphore(&v10, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v6 < 0 )
  {
    ZwClose(v9);
    sub_180029EA4(v3);
    RtlRaiseStatus((unsigned int)v6);
  }
  v7 = v9;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 40) = v7;
  *(_QWORD *)(a1 + 56) = v10;
  *(_QWORD *)(a1 + 88) = v3;
  RtlInitializeCriticalSectionEx(a1, 0LL, 0x8000000LL);
  sub_180024408(a1);
  result = *(_WORD **)a1;
  if ( *(_QWORD *)a1 != -1LL )
    *result = 1;
  return result;
}
