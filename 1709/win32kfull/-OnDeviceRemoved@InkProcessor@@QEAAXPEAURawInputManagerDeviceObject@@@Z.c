/*
 * XREFs of ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0219408
 * Callers:
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F5490 (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00E15E4 (-RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject@@@Z @ 0x1C0218DCC (-FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject.c)
 *     ?UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z @ 0x1C02198F0 (-UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z.c)
 */

void __fastcall InkProcessor::OnDeviceRemoved(InkProcessor *this, struct RawInputManagerDeviceObject *a2)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  unsigned int v6; // edi
  struct InkDevice *InkDeviceByRimDeviceObject; // rax
  InkFeedbackServer *v8; // rcx
  InkProcessor *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int v12; // [rsp+30h] [rbp-59h] BYREF
  struct InkDevice *v13; // [rsp+38h] [rbp-51h] BYREF
  struct InkDevice *v14; // [rsp+40h] [rbp-49h] BYREF
  struct RawInputManagerDeviceObject *v15; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  unsigned int *v17; // [rsp+70h] [rbp-19h]
  int v18; // [rsp+78h] [rbp-11h]
  int v19; // [rsp+7Ch] [rbp-Dh]
  const char *v20; // [rsp+80h] [rbp-9h]
  int v21; // [rsp+88h] [rbp-1h]
  int v22; // [rsp+8Ch] [rbp+3h]
  struct InkDevice **v23; // [rsp+90h] [rbp+7h]
  int v24; // [rsp+98h] [rbp+Fh]
  int v25; // [rsp+9Ch] [rbp+13h]
  struct InkDevice **v26; // [rsp+A0h] [rbp+17h]
  int v27; // [rsp+A8h] [rbp+1Fh]
  int v28; // [rsp+ACh] [rbp+23h]
  struct RawInputManagerDeviceObject **v29; // [rsp+B0h] [rbp+27h]
  int v30; // [rsp+B8h] [rbp+2Fh]
  int v31; // [rsp+BCh] [rbp+33h]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v6 = *((_BYTE *)this + 8) == 0 ? 0xC0000001 : 0;
  if ( *((_BYTE *)this + 8) )
  {
    InkDeviceByRimDeviceObject = InkProcessor::FindInkDeviceByRimDeviceObject(this, a2);
    v13 = InkDeviceByRimDeviceObject;
    if ( InkDeviceByRimDeviceObject )
    {
      InkFeedbackServer::RemoveInkFeedbackProvider(v8, (struct InkDevice *)((char *)InkDeviceByRimDeviceObject + 32));
      InkProcessor::UnlinkAndReleaseInkDevice(v9, &v13);
      if ( (unsigned int)pRelatedActivityId > 4 )
      {
        v19 = 0;
        v22 = 0;
        v25 = 0;
        v17 = &v12;
        v20 = "Ink device removed";
        v23 = &v14;
        v12 = v6;
        v18 = 4;
        v21 = 19;
        v14 = v13;
        v24 = 8;
        if ( v13 )
          v13 = (struct InkDevice *)((char *)v13 + 32);
        else
          v13 = 0LL;
        v28 = 0;
        v31 = 0;
        v26 = &v13;
        v29 = &v15;
        v27 = 8;
        v15 = a2;
        v30 = 8;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E8BE3, v10, v11, 7u, &pData);
      }
    }
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v19 = 0;
    v22 = 0;
    v17 = &v12;
    v20 = "Ink processor not enabled";
    v12 = v6;
    v18 = 4;
    v21 = 26;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E8C52, v4, v5, 4u, &pData);
  }
  if ( this )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
}
