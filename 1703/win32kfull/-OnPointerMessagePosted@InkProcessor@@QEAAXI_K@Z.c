/*
 * XREFs of ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1C02183F0
 * Callers:
 *     InkProcessorOnPointerMessagePosted @ 0x1C01E96A0 (InkProcessorOnPointerMessagePosted.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?OnPointerMessagePosted@InkFeedbackServer@@QEAAXI_K@Z @ 0x1C021C468 (-OnPointerMessagePosted@InkFeedbackServer@@QEAAXI_K@Z.c)
 */

void __fastcall InkProcessor::OnPointerMessagePosted(InkProcessor *this, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v6; // r8d
  LPCGUID v7; // r8
  LPCGUID cData; // r9
  unsigned int v9; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  unsigned int *v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v6 = *((_BYTE *)this + 8) == 0 ? 0xC0000001 : 0;
  if ( *((_BYTE *)this + 8) )
  {
    InkFeedbackServer::OnPointerMessagePosted((InkProcessor *)((char *)this + 96), a2, a3);
  }
  else if ( hProvider > 2u )
  {
    v13 = 0;
    v11 = &v9;
    v12 = 4;
    v9 = v6;
    TlgCreateSz(&pDesc, "Ink processor not enabled");
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC09D, v7, cData, (UINT32)cData, &pData);
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
