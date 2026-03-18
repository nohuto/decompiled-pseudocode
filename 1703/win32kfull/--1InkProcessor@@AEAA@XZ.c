/*
 * XREFs of ??1InkProcessor@@AEAA@XZ @ 0x1C00DA2F0
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00FD8FC (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00DAA84 (-RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     ?UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z @ 0x1C02186F8 (-UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z.c)
 */

void __fastcall InkProcessor::~InkProcessor(InkProcessor **this)
{
  InkFeedbackServer *v2; // rcx
  InkProcessor *v3; // rdi
  struct InkDevice *v4; // rax
  struct InkFeedbackProviderBase *v5; // rdx
  struct InkDevice *v6; // [rsp+30h] [rbp+8h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v3 = this[2];
  while ( v3 != (InkProcessor *)(this + 2) )
  {
    v4 = (InkProcessor *)((char *)v3 - 88);
    v3 = *(InkProcessor **)v3;
    v6 = v4;
    if ( v4 )
      v5 = (struct InkDevice *)((char *)v4 + 32);
    else
      v5 = 0LL;
    if ( *((_QWORD *)v5 + 1) )
      InkFeedbackServer::RemoveInkFeedbackProvider(v2, v5);
    InkProcessor::UnlinkAndReleaseInkDevice(v2, &v6);
  }
  if ( this[5] )
    InkFeedbackServer::RemoveInkFeedbackProvider(v2, (struct InkFeedbackProviderBase *)(this + 4));
  EtwUnregister(RegHandle);
  RegHandle = 0LL;
  hProvider = 0;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
  this[4] = (InkProcessor *)&InkFeedbackProviderBase::`vftable';
}
