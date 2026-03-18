/*
 * XREFs of ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C0111860
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C010E970 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0036FA4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionFindNodeQueuedMessage @ 0x1C013E150 (ApiSetEditionFindNodeQueuedMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagQMSG *__fastcall CTouchProcessor::FindNodeQueuedMessage(
        struct _KTHREAD **this,
        const struct CPointerInfoNode *a2,
        __int64 a3,
        struct tagQ **a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagQMSG *result; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  _OWORD v20[11]; // [rsp+20h] [rbp-B8h] BYREF

  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  result = (struct tagQMSG *)CInputDest::GetQueue((const struct CPointerInfoNode *)((char *)a2 + 392), 2LL);
  if ( result )
  {
    v10 = *((_QWORD *)a2 + 2);
    v11 = *(_OWORD *)((char *)a2 + 408);
    v20[0] = *(_OWORD *)((char *)a2 + 392);
    v12 = *(_OWORD *)((char *)a2 + 424);
    v20[1] = v11;
    v13 = *(_OWORD *)((char *)a2 + 440);
    v20[2] = v12;
    v14 = *(_OWORD *)((char *)a2 + 456);
    v20[3] = v13;
    v15 = *(_OWORD *)((char *)a2 + 472);
    v20[4] = v14;
    v16 = *(_OWORD *)((char *)a2 + 488);
    v20[5] = v15;
    v17 = *(_OWORD *)((char *)a2 + 520);
    v20[6] = v16;
    v20[7] = *(_OWORD *)((char *)a2 + 504);
    v18 = *(_OWORD *)((char *)a2 + 536);
    v20[8] = v17;
    v19 = *(_OWORD *)((char *)a2 + 552);
    v20[9] = v18;
    v20[10] = v19;
    return (struct tagQMSG *)((__int64 (__fastcall *)(_OWORD *, __int64, __int64, struct tagQ **))ApiSetEditionFindNodeQueuedMessage)(
                               v20,
                               v10,
                               v9,
                               a4);
  }
  return result;
}
