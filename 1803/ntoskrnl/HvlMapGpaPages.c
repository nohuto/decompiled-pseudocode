/*
 * XREFs of HvlMapGpaPages @ 0x1402CA7E4
 * Callers:
 *     VmpFlushTbVaRange @ 0x1402ABFDC (VmpFlushTbVaRange.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x14022DF28 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlMapGpaPages(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, int a5, __int64 *a6)
{
  unsigned int v6; // edi
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // r14
  int v13; // ebp
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int16 v16; // bx
  PHYSICAL_ADDRESS v18[3]; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0;
  *a6 = 0LL;
  v10 = (_QWORD *)HvlpAcquireHypercallPage(v18, 1, 0LL, 0LL);
  v11 = *a6;
  v12 = v10;
  v13 = 0;
  v14 = a4;
  v10[1] = 0LL;
  v10[2] = 0LL;
  *v10 = a1;
  *((_DWORD *)v10 + 4) = 1024;
  do
  {
    if ( v14 >= 0x1FD )
      LOWORD(v14) = 509;
    v13 ^= ((unsigned __int16)v14 ^ (unsigned __int16)v13) & 0xFFF;
    v12[1] = v11 + a2;
    v15 = HvcallCodeVa();
    v16 = v15;
    if ( (_WORD)v15 )
      break;
    v11 = *a6 + (WORD2(v15) & 0xFFF);
    *a6 = v11;
    v14 = a4 - v11;
  }
  while ( a4 != v11 );
  HvlpReleaseHypercallPage((__int64)v18);
  if ( v16 )
    return (unsigned int)HvlpHvToNtStatus(v16);
  return v6;
}
