/*
 * XREFs of HvlMapSparseGpaPages @ 0x140294DC0
 * Callers:
 *     VmpProcessUpdateSlat @ 0x1402796D4 (VmpProcessUpdateSlat.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     HvlpHvToNtStatus @ 0x1401EF688 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlMapSparseGpaPages(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // esi
  _QWORD *v10; // rax
  unsigned __int64 v11; // rbp
  void *v12; // r13
  unsigned __int64 v13; // rax
  unsigned __int16 v14; // bx
  PHYSICAL_ADDRESS v16[3]; // [rsp+20h] [rbp-48h] BYREF

  v5 = 0;
  *a5 = 0LL;
  v10 = (_QWORD *)HvlpAcquireHypercallPage(v16, 1, 0LL, 0LL);
  v11 = a3;
  v10[1] = 0LL;
  v12 = v10 + 2;
  *((_DWORD *)v10 + 2) = a2;
  *v10 = a1;
  do
  {
    if ( v11 >= 0xFF )
      v11 = 255LL;
    memmove(v12, (const void *)(a4 + 16LL * *a5), 16 * v11);
    v13 = HvcallCodeVa();
    v14 = v13;
    if ( (_WORD)v13 )
      break;
    *a5 += HIDWORD(v13) & 0xFFF;
    v11 = a3 - *a5;
  }
  while ( a3 != *a5 );
  HvlpReleaseHypercallPage((__int64)v16);
  if ( v14 )
    return (unsigned int)HvlpHvToNtStatus(v14);
  return v5;
}
