/*
 * XREFs of XilCoreCommonBuffer_PreAllocateBuffers @ 0x1C0040BB0
 * Callers:
 *     CommonBuffer_WorkItem @ 0x1C000FB70 (CommonBuffer_WorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0040638 (XilCoreCommonBuffer_AllocateBuffers.c)
 */

void __fastcall XilCoreCommonBuffer_PreAllocateBuffers(__int64 a1)
{
  _DWORD *v1; // rbx
  unsigned int i; // edi
  int v4; // ebp
  __int64 v5; // [rsp+28h] [rbp-30h]
  __int64 v6; // [rsp+30h] [rbp-28h]

  v1 = (_DWORD *)(a1 + 44);
  for ( i = 0; i < 2; ++i )
  {
    v4 = 0;
    *(_BYTE *)(a1 + 25) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
    if ( v1[4] < *v1 )
      v4 = v1[1];
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
    if ( v4 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v6) = v4;
        LODWORD(v5) = i;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          5u,
          8u,
          0xFu,
          (__int64)&WPP_476c7f6a61583b4cf1c220e4dc815a48_Traceguids,
          v5,
          v6);
      }
      XilCoreCommonBuffer_AllocateBuffers((__int64 **)a1, (__int64)(v1 - 3), v4);
    }
    v1 += 16;
  }
}
