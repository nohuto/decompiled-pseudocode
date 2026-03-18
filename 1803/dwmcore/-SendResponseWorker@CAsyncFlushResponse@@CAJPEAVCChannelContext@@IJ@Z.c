/*
 * XREFs of ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x1800207A8
 * Callers:
 *     ?SendResponse@CAsyncFlushResponse@@UEAAJJ@Z @ 0x18001F710 (-SendResponse@CAsyncFlushResponse@@UEAAJJ@Z.c)
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x180021138 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAsyncFlushResponse::SendResponseWorker(struct CChannelContext *a1, int a2, int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  _DWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+44h] [rbp-14h]

  v6[0] = 13;
  v6[4] = 0;
  v6[1] = 0;
  v7 = 0LL;
  v6[2] = a2;
  v6[3] = a3;
  v3 = CChannelContext::PostMessageToChannel(a1, (const struct MIL_MESSAGE *)v6);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x75u);
  return v4;
}
