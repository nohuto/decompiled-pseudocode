/*
 * XREFs of ?GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z @ 0x1C001D3C0
 * Callers:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0014B78 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C0014568 (-GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
        DirectComposition::CApplicationChannel *this,
        struct UCE_RDP_HEADER **a2,
        struct UCE_RDP_HEADER **a3)
{
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rdx

  v5 = *((_QWORD *)this + *((unsigned int *)this + 170) + 83);
  result = DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(
             *((DirectComposition::CBatchSharedMemoryPool **)this + 82),
             v5,
             (void **)a3);
  if ( (int)result >= 0 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 82) + 56LL);
    ++*((_DWORD *)this + 170);
    *a2 = (struct UCE_RDP_HEADER *)(v5 + v7);
  }
  return result;
}
