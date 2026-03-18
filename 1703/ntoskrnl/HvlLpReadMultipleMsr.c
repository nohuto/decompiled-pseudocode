/*
 * XREFs of HvlLpReadMultipleMsr @ 0x1401E7080
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpReadMultipleMsr(int a1, unsigned int a2, int *a3, _QWORD *a4)
{
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 *v10; // rbx
  _DWORD *v11; // rdx
  __int64 v12; // rax
  int v13; // ecx
  unsigned int v14; // ebp
  __int64 v15; // rcx
  PHYSICAL_ADDRESS v17[3]; // [rsp+28h] [rbp-70h] BYREF
  PHYSICAL_ADDRESS v18[3]; // [rsp+48h] [rbp-50h] BYREF

  if ( 16 * a2 > 0x1000 )
    return 3221225485LL;
  v8 = a2;
  v9 = HvlpAcquireHypercallPage(v17, 1, 0LL, 16LL * a2);
  v10 = (__int64 *)HvlpAcquireHypercallPage(v18, 2, 0LL, 16LL * a2);
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
  v14 = 0;
  if ( (unsigned __int16)HvcallCodeVa() )
    v14 = -1073741823;
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
  HvlpReleaseHypercallPage((__int64)v17);
  HvlpReleaseHypercallPage((__int64)v18);
  return v14;
}
