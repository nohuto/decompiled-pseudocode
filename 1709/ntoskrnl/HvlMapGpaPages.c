/*
 * XREFs of HvlMapGpaPages @ 0x140294CA4
 * Callers:
 *     VmpFlushTbVaRange @ 0x140278EF0 (VmpFlushTbVaRange.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1401EF688 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlMapGpaPages(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  unsigned int v6; // esi
  _QWORD *v10; // r15
  __int64 v11; // rax
  unsigned __int16 v12; // bx
  PHYSICAL_ADDRESS v14[3]; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0;
  *a6 = 0LL;
  v10 = (_QWORD *)HvlpAcquireHypercallPage(v14, 1, 0LL, 0LL);
  v10[1] = 0LL;
  v10[2] = 0LL;
  *v10 = a1;
  *((_DWORD *)v10 + 4) = 1024;
  do
  {
    v10[1] = a2 + *a6;
    v11 = HvcallCodeVa();
    v12 = v11;
    if ( (_WORD)v11 )
      break;
    *a6 += WORD2(v11) & 0xFFF;
  }
  while ( a4 != *a6 );
  HvlpReleaseHypercallPage((__int64)v14);
  if ( v12 )
    return (unsigned int)HvlpHvToNtStatus(v12);
  return v6;
}
