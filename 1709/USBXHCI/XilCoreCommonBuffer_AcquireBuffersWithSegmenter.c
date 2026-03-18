/*
 * XREFs of XilCoreCommonBuffer_AcquireBuffersWithSegmenter @ 0x1C0040500
 * Callers:
 *     XilCoreCommonBuffer_AcquireBuffers @ 0x1C0040408 (XilCoreCommonBuffer_AcquireBuffers.c)
 * Callees:
 *     WPP_RECORDER_SF_qdd @ 0x1C001EFB4 (WPP_RECORDER_SF_qdd.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C0040324 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 */

__int64 __fastcall XilCoreCommonBuffer_AcquireBuffersWithSegmenter(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        bool *a7)
{
  unsigned int v8; // ebx
  unsigned int i; // esi
  __int64 *v14; // rax
  __int64 **v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-38h]
  unsigned int v17; // [rsp+30h] [rbp-38h]
  __int64 v18; // [rsp+38h] [rbp-30h]
  unsigned int v19; // [rsp+38h] [rbp-30h]

  v8 = 0;
  *(_BYTE *)(a1 + 25) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v19 = a2[7];
    v17 = a3;
    WPP_RECORDER_SF_qdd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      5u,
      8u,
      0x13u,
      (__int64)&WPP_476c7f6a61583b4cf1c220e4dc815a48_Traceguids,
      a2,
      v17,
      v19);
  }
  if ( a2[7] >= a3 )
  {
    for ( i = 0; i < a3; *(_QWORD *)(a4 + 8) = v14 )
    {
      v14 = XilCoreCommonBuffer_AcquireBufferWithSegmenter(a1, a2, a5, a6, a7);
      v15 = *(__int64 ***)(a4 + 8);
      if ( *v15 != (__int64 *)a4 )
        __fastfail(3u);
      *v14 = a4;
      ++i;
      v14[1] = (__int64)v15;
      *v15 = v14;
    }
  }
  else
  {
    LODWORD(v18) = a2[7];
    LODWORD(v16) = a3;
    WPP_RECORDER_SF_qdd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      3u,
      8u,
      0x14u,
      (__int64)&WPP_476c7f6a61583b4cf1c220e4dc815a48_Traceguids,
      a2,
      v16,
      v18);
    v8 = -1073741670;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
  return v8;
}
