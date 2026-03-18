/*
 * XREFs of ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@PEAH@Z @ 0x1C0144F34
 * Callers:
 *     NtDCompositionGetConnectionBatch @ 0x1C0045910 (NtDCompositionGetConnectionBatch.c)
 * Callees:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@PEAH@Z @ 0x1C004686C (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@PEAH@Z.c)
 *     ?AppendRetrievingBatches@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C009F7E0 (-AppendRetrievingBatches@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z @ 0x1C009F958 (-GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::GetBatches(
        DirectComposition::CConnection *this,
        const struct UCE_RDP_HEADER **a2,
        int *a3)
{
  struct _ERESOURCE *v3; // rbx
  unsigned int Batches; // ebx
  struct DirectComposition::CBatch *v9; // [rsp+40h] [rbp+8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+20h] BYREF

  v3 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v3, 1u);
  if ( *((_DWORD *)this + 37) )
  {
    if ( (int)DirectComposition::CConnection::GetReadyBatches(this, 0LL, &v9) >= 0 && v9 )
    {
      while ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 1, 2) != 2 )
      {
        Interval.QuadPart = 0LL;
        KeDelayExecutionThread(1, 0, &Interval);
      }
      DirectComposition::CConnection::AppendRetrievingBatches(this, v9);
    }
    if ( *((_DWORD *)this + 36) == 1 || _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 1, 2) == 2 )
      Batches = DirectComposition::CConnection::RetrieveBatches(this, 0LL, a2, a3);
    else
      Batches = -1073740024;
  }
  else
  {
    Batches = -1073741300;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return Batches;
}
