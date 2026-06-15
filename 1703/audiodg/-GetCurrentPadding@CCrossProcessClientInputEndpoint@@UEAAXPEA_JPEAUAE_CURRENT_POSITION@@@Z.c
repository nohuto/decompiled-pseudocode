/*
 * XREFs of ?GetCurrentPadding@CCrossProcessClientInputEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x1400554A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x1400547BC (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x140060288 (-AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z.c)
 */

void __fastcall CCrossProcessClientInputEndpoint::GetCurrentPadding(
        CCrossProcessClientInputEndpoint *this,
        unsigned __int64 *a2,
        struct AE_CURRENT_POSITION *a3)
{
  unsigned __int8 v5; // r8
  struct SharedMessageQueueItem *v6; // rcx
  double v7; // xmm0_8
  struct SharedMessageQueueItem *v8; // [rsp+50h] [rbp+8h] BYREF

  if ( CCrossProcessBaseEndpoint::PeekNextTimestampMessage((CCrossProcessClientInputEndpoint *)((char *)this - 8), &v8) )
  {
    v6 = v8;
    v7 = *((float *)this + 33);
    *((_DWORD *)this + 111) = *((_DWORD *)v8 + 14);
    *a2 = (unsigned int)(int)((double)*((int *)v6 + 14) * 10000000.0 / v7 + 0.5);
  }
  else
  {
    *((_DWORD *)this + 111) = 0;
    *a2 = 0LL;
  }
  AEWMILOG_POSITION(
    **((_DWORD **)this + 7),
    (char *)this - 8,
    v5,
    3u,
    **((unsigned int **)this + 7),
    *(unsigned int *)(*((_QWORD *)this + 7) + 4LL),
    *a2,
    0LL);
}
