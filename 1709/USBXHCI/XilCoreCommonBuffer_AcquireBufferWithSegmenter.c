/*
 * XREFs of XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C0040324
 * Callers:
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x1C00401F0 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     XilCoreCommonBuffer_AcquireBuffersWithSegmenter @ 0x1C0040500 (XilCoreCommonBuffer_AcquireBuffersWithSegmenter.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0008A40 (memset.c)
 */

__int64 *__fastcall XilCoreCommonBuffer_AcquireBufferWithSegmenter(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        int a4,
        bool *a5)
{
  unsigned int *v5; // rax
  __int64 *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax

  v5 = a2 + 8;
  if ( *(unsigned int **)v5 == v5 )
  {
    v10 = 0LL;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      3u,
      8u,
      0x10u,
      (__int64)&WPP_476c7f6a61583b4cf1c220e4dc815a48_Traceguids);
  }
  else
  {
    v10 = *(__int64 **)v5;
    if ( *(unsigned int **)(*(_QWORD *)v5 + 8LL) != v5 || (v11 = *v10, *(__int64 **)(*v10 + 8) != v10) )
      __fastfail(3u);
    *(_QWORD *)v5 = v11;
    *(_QWORD *)(v11 + 8) = v5;
    memset((void *)v10[2], 0, *a2);
    --a2[7];
    v10[9] = a3;
    *((_DWORD *)v10 + 16) = a4;
    *((_DWORD *)v10 + 20) = 1;
    *((_DWORD *)v10 + 11) = *a2;
    v12 = v10[4];
    if ( *(_BYTE *)(v12 + 16) )
    {
      *(_BYTE *)(v12 + 16) = 0;
      ++*(_DWORD *)(a1 + 204);
    }
  }
  *a5 = a2[7] < a2[3];
  return v10;
}
