/*
 * XREFs of HvlLpWriteMultipleMsr @ 0x1401E71B0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpWriteMultipleMsr(int a1, unsigned int a2, int *a3, __int64 *a4)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v9; // rbp
  __int64 v12; // rax
  _DWORD *v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  PHYSICAL_ADDRESS v16[3]; // [rsp+28h] [rbp-40h] BYREF

  v6 = 0;
  v7 = 32LL * a2;
  v9 = a2;
  if ( v7 > 0x1000 )
    return 3221225485LL;
  v12 = HvlpAcquireHypercallPage(v16, 1, 0LL, v7);
  if ( a2 )
  {
    v13 = (_DWORD *)(v12 + 8);
    do
    {
      *(v13 - 2) = a1;
      *(v13 - 1) = 65537;
      v14 = *a3++;
      *v13 = v14;
      v13 += 8;
      v15 = *a4++;
      *((_QWORD *)v13 - 3) = v15;
      --v9;
    }
    while ( v9 );
  }
  if ( (unsigned __int16)HvcallCodeVa() )
    v6 = -1073741823;
  HvlpReleaseHypercallPage((__int64)v16);
  return v6;
}
