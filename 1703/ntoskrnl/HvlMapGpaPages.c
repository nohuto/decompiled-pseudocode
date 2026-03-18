/*
 * XREFs of HvlMapGpaPages @ 0x140269DC4
 * Callers:
 *     VmAccessFault @ 0x1402519D0 (VmAccessFault.c)
 *     VmpFlushTbVaRange @ 0x140251F98 (VmpFlushTbVaRange.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlMapGpaPages(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, __int64 a5, _QWORD *a6)
{
  unsigned int v6; // esi
  _QWORD *v10; // r15
  unsigned __int64 v11; // rbp
  int v12; // r12d
  __int64 v13; // rax
  unsigned __int16 v14; // bx
  PHYSICAL_ADDRESS v16[3]; // [rsp+20h] [rbp-48h] BYREF

  v6 = 0;
  *a6 = 0LL;
  v10 = (_QWORD *)HvlpAcquireHypercallPage(v16, 1, 0LL, 0LL);
  v11 = a4;
  v10[1] = 0LL;
  v10[2] = 0LL;
  *((_DWORD *)v10 + 4) = a3;
  v12 = a3 & 0x700;
  *v10 = a1;
  do
  {
    if ( v11 >= 0x1FD )
      v11 = 509LL;
    if ( !v12 )
      memmove(v10 + 3, (const void *)(a5 + 8LL * *a6), 8 * v11);
    v10[1] = *a6 + a2;
    v13 = HvcallCodeVa();
    v14 = v13;
    if ( (_WORD)v13 )
      break;
    *a6 += WORD2(v13) & 0xFFF;
    v11 = a4 - *a6;
  }
  while ( a4 != *a6 );
  HvlpReleaseHypercallPage((__int64)v16);
  if ( v14 )
    return v14 | 0xC0350000;
  return v6;
}
