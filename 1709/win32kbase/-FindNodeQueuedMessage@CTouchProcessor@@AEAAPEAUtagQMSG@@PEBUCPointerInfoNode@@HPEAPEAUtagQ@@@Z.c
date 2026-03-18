/*
 * XREFs of ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C011D374
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C011ACDC (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00172E4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ApiSetEditionFindNodeQueuedMessage @ 0x1C0139C58 (ApiSetEditionFindNodeQueuedMessage.c)
 */

struct tagQMSG *__fastcall CTouchProcessor::FindNodeQueuedMessage(
        CTouchProcessor *this,
        const struct CPointerInfoNode *a2,
        __int64 a3,
        struct tagQ **a4)
{
  struct tagQMSG *result; // rax
  __int64 v6; // r8
  _OWORD *v7; // r10
  __int64 v8; // r11
  __int64 v9; // rdx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  _OWORD *v17; // r10
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  _OWORD v21[12]; // [rsp+20h] [rbp-C8h] BYREF

  result = (struct tagQMSG *)CInputDest::GetQueue((const struct CPointerInfoNode *)((char *)a2 + 408), 2);
  if ( result )
  {
    v9 = *(_QWORD *)(v8 + 16);
    v10 = v7[1];
    v21[0] = *v7;
    v11 = v7[2];
    v21[1] = v10;
    v12 = v7[3];
    v21[2] = v11;
    v13 = v7[4];
    v21[3] = v12;
    v14 = v7[5];
    v21[4] = v13;
    v15 = v7[6];
    v21[5] = v14;
    v21[6] = v15;
    v16 = v7[7];
    v17 = v7 + 8;
    v21[7] = v16;
    v18 = v17[1];
    v21[8] = *v17;
    v19 = v17[2];
    v21[9] = v18;
    v20 = v17[3];
    v21[10] = v19;
    v21[11] = v20;
    return (struct tagQMSG *)((__int64 (__fastcall *)(_OWORD *, __int64, __int64, struct tagQ **))ApiSetEditionFindNodeQueuedMessage)(
                               v21,
                               v9,
                               v6,
                               a4);
  }
  return result;
}
