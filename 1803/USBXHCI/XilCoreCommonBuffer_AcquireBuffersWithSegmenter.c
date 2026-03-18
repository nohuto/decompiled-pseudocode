/*
 * XREFs of XilCoreCommonBuffer_AcquireBuffersWithSegmenter @ 0x1C003EC10
 * Callers:
 *     XilCoreCommonBuffer_AcquireBuffers @ 0x1C003EB18 (XilCoreCommonBuffer_AcquireBuffers.c)
 * Callees:
 *     WPP_RECORDER_SF_qdd @ 0x1C00182B4 (WPP_RECORDER_SF_qdd.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C003EA34 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 */

__int64 __fastcall XilCoreCommonBuffer_AcquireBuffersWithSegmenter(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        bool *a7)
{
  unsigned int v8; // ebx
  unsigned int i; // esi
  unsigned int *v14; // rax
  unsigned int **v15; // rcx
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
      (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids,
      a2,
      v17,
      v19);
  }
  if ( a2[7] >= a3 )
  {
    for ( i = 0; i < a3; *(_QWORD *)(a4 + 8) = v14 )
    {
      v14 = XilCoreCommonBuffer_AcquireBufferWithSegmenter(a1, a2, a5, a6, a7);
      v15 = *(unsigned int ***)(a4 + 8);
      if ( *v15 != (unsigned int *)a4 )
        __fastfail(3u);
      *(_QWORD *)v14 = a4;
      ++i;
      *((_QWORD *)v14 + 1) = v15;
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
      (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids,
      a2,
      v16,
      v18);
    v8 = -1073741670;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
  return v8;
}
