/*
 * XREFs of HvlQueryAssociatedProcessors @ 0x1401ECB10
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall HvlQueryAssociatedProcessors(int a1, unsigned int *a2, void *a3)
{
  unsigned int v7; // edi
  _DWORD *v8; // rbx
  unsigned int *v9; // r14
  unsigned int v10; // ebx
  PHYSICAL_ADDRESS v11[3]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v12[3]; // [rsp+40h] [rbp-38h] BYREF

  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  v7 = 0;
  if ( !a2 )
    return 3221225485LL;
  v8 = (_DWORD *)HvlpAcquireHypercallPage(v11, 1, 0LL, 8LL);
  v9 = (unsigned int *)HvlpAcquireHypercallPage(v12, 2, 0LL, 2056LL);
  *v8 = a1;
  if ( (unsigned __int16)HvcallCodeVa() )
  {
    v7 = -1073741823;
  }
  else
  {
    v10 = *v9;
    if ( *a2 < *v9 )
      v7 = -1073741789;
    else
      memmove(a3, v9 + 1, 4LL * v10);
    *a2 = v10;
  }
  HvlpReleaseHypercallPage((__int64)v11);
  HvlpReleaseHypercallPage((__int64)v12);
  return v7;
}
