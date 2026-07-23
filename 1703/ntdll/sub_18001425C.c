/*
 * XREFs of sub_18001425C @ 0x18001425C
 * Callers:
 *     TpAllocWait @ 0x180013DF0 (TpAllocWait.c)
 *     TpAllocTimer @ 0x180013F90 (TpAllocTimer.c)
 * Callees:
 *     sub_180013D14 @ 0x180013D14 (sub_180013D14.c)
 *     sub_1800142F8 @ 0x1800142F8 (sub_1800142F8.c)
 *     sub_1800179EC @ 0x1800179EC (sub_1800179EC.c)
 */

__int64 __fastcall sub_18001425C(__int64 a1, char a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  __int64 result; // rax

  v6 = a4;
  if ( a4 )
    LODWORD(a4) = *(_DWORD *)(a4 + 56);
  result = sub_1800179EC(a1, a3, v6, a4, a5, a6);
  if ( (int)result >= 0 )
  {
    sub_1800142F8(*(_QWORD *)(a1 + 144), 1LL);
    *(_QWORD *)(a1 + 240) = 0LL;
    *(_BYTE *)(a1 + 353) = a2;
    if ( v6 )
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(v6 + 48);
    if ( *(_QWORD *)(a1 + 16) )
      sub_180013D14(a1);
    return 0LL;
  }
  return result;
}
