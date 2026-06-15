/*
 * XREFs of ?TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z @ 0x14005E8F4
 * Callers:
 *     ?GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14005E000 (-GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14005E100 (-GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x14005E200 (-GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSparseIndexMapRT::TranslateIndex(
        CSparseIndexMapRT *this,
        unsigned int a2,
        unsigned int *a3,
        bool *a4)
{
  __int64 result; // rax
  __int64 v5; // r10

  result = 2147942487LL;
  *a4 = 0;
  if ( a2 < *(_DWORD *)this )
  {
    v5 = *((_QWORD *)this + 3);
    if ( !*(_DWORD *)(v5 + 4LL * a2) )
    {
      *(_DWORD *)(v5 + 4LL * a2) = ++*((_DWORD *)this + 1);
      *a4 = 1;
    }
    *a3 = *(_DWORD *)(*((_QWORD *)this + 3) + 4LL * a2) - 1;
    return 0LL;
  }
  return result;
}
