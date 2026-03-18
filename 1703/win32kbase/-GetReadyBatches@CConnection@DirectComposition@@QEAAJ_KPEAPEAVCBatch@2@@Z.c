/*
 * XREFs of ?GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z @ 0x1C0015440
 * Callers:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C0015964 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C013FF90 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1C0015374 (-KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z.c)
 *     ?GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z @ 0x1C00154E8 (-GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::GetReadyBatches(
        DirectComposition::CConnection *this,
        __int64 a2,
        struct DirectComposition::CBatch **a3)
{
  unsigned int v3; // ebx
  _QWORD *v7; // rcx
  _QWORD *v9; // rdx
  struct DirectComposition::CBatch *v10; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 2, 0) )
  {
    return (unsigned int)-1073740024;
  }
  else
  {
    DirectComposition::CConnection::GetNewBatches(this, a3);
    v7 = (_QWORD *)*((_QWORD *)this + 17);
    if ( v7 )
    {
      do
      {
        v9 = v7;
        *(_BYTE *)(v7[1] + 49LL) = 0;
        v7 = (_QWORD *)*v7;
      }
      while ( v7 );
      v10 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = 0LL;
      *v9 = *a3;
      *a3 = v10;
    }
    DirectComposition::CConnection::KeepOrDeferBatches(this, a2, a3);
  }
  return v3;
}
