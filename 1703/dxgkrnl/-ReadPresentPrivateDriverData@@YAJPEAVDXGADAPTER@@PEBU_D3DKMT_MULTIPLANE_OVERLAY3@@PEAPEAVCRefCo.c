/*
 * XREFs of ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C01B9CB0
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01B9D98 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z @ 0x1C00147EC (-AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00201C8 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 */

__int64 __fastcall ReadPresentPrivateDriverData(
        struct DXGADAPTER *a1,
        const struct _D3DKMT_MULTIPLANE_OVERLAY3 *a2,
        struct CRefCountedBuffer **a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ecx
  __int64 v9; // rcx
  struct CRefCountedBuffer *RefCountedBuffer; // rbx
  __int64 v11; // rax
  size_t DriverPrivateDataSize; // r8
  char *pDriverPrivateData; // rdx

  *a3 = 0LL;
  if ( DXGADAPTER::IsDxgmms2(a1) )
  {
    v8 = *(_DWORD *)(v5 + 32);
    if ( v8 )
    {
      RefCountedBuffer = CRefCountedBuffer::AllocateRefCountedBuffer(v8, v5, v6, v7);
      if ( !RefCountedBuffer )
      {
        v11 = WdLogNewEntry5_WdLowResource(v9);
        *(_QWORD *)(v11 + 24) = 1302LL;
        WdLogEvent5_WdLowResource(v11);
        return 3221225495LL;
      }
      *(_DWORD *)RefCountedBuffer = a2->DriverPrivateDataSize;
      *((_DWORD *)RefCountedBuffer + 1) = 1;
      DriverPrivateDataSize = a2->DriverPrivateDataSize;
      pDriverPrivateData = (char *)a2->pDriverPrivateData;
      if ( &pDriverPrivateData[DriverPrivateDataSize] < pDriverPrivateData
        || (unsigned __int64)&pDriverPrivateData[DriverPrivateDataSize] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove((char *)RefCountedBuffer + 8, pDriverPrivateData, DriverPrivateDataSize);
      *a3 = RefCountedBuffer;
    }
  }
  return 0LL;
}
