/*
 * XREFs of HvlLpReadMultipleMsr @ 0x140140E70
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlLpReadMultipleMsr(int a1, unsigned int a2, int *a3, _QWORD *a4)
{
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 *v10; // r14
  _DWORD *v11; // rdx
  __int64 v12; // rax
  int v13; // ecx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  _BYTE v17[24]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v18[24]; // [rsp+48h] [rbp-50h] BYREF

  if ( 16 * a2 > 0x1000 )
    return 3221225485LL;
  v8 = a2;
  v9 = HvlpAcquireHypercallPage(v17, 1LL, 0LL);
  v10 = (__int64 *)HvlpAcquireHypercallPage(v18, 2LL, 0LL);
  if ( a2 )
  {
    v11 = (_DWORD *)(v9 + 8);
    v12 = a2;
    do
    {
      *(v11 - 2) = a1;
      *(v11 - 1) = 65537;
      v13 = *a3++;
      *v11 = v13;
      v11 += 4;
      --v12;
    }
    while ( v12 );
  }
  v14 = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  if ( a2 )
  {
    do
    {
      v15 = *v10;
      v10 += 2;
      *a4++ = v15;
      --v8;
    }
    while ( v8 );
  }
  HvlpReleaseHypercallPage(v17);
  HvlpReleaseHypercallPage(v18);
  return v14;
}
