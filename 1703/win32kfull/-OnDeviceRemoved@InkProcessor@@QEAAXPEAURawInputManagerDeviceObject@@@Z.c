/*
 * XREFs of ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C021823C
 * Callers:
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01E949C (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00DAA84 (-RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject@@@Z @ 0x1C0217C3C (-FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject.c)
 *     ?UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z @ 0x1C02186F8 (-UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z.c)
 */

void __fastcall InkProcessor::OnDeviceRemoved(InkProcessor *this, struct RawInputManagerDeviceObject *a2)
{
  unsigned int v4; // ebx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  struct InkDevice *InkDeviceByRimDeviceObject; // rax
  InkFeedbackServer *v8; // rcx
  InkProcessor *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int v12; // [rsp+30h] [rbp-69h] BYREF
  struct InkDevice *v13; // [rsp+38h] [rbp-61h] BYREF
  struct InkDevice *v14; // [rsp+40h] [rbp-59h] BYREF
  struct RawInputManagerDeviceObject *v15; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  unsigned int *v17; // [rsp+70h] [rbp-29h]
  int v18; // [rsp+78h] [rbp-21h]
  int v19; // [rsp+7Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-19h] BYREF
  struct InkDevice **v21; // [rsp+90h] [rbp-9h]
  int v22; // [rsp+98h] [rbp-1h]
  int v23; // [rsp+9Ch] [rbp+3h]
  struct InkDevice **v24; // [rsp+A0h] [rbp+7h]
  int v25; // [rsp+A8h] [rbp+Fh]
  int v26; // [rsp+ACh] [rbp+13h]
  struct RawInputManagerDeviceObject **v27; // [rsp+B0h] [rbp+17h]
  int v28; // [rsp+B8h] [rbp+1Fh]
  int v29; // [rsp+BCh] [rbp+23h]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v4 = *((_BYTE *)this + 8) == 0 ? 0xC0000001 : 0;
  if ( *((_BYTE *)this + 8) )
  {
    InkDeviceByRimDeviceObject = InkProcessor::FindInkDeviceByRimDeviceObject(this, a2);
    v13 = InkDeviceByRimDeviceObject;
    if ( InkDeviceByRimDeviceObject )
    {
      InkFeedbackServer::RemoveInkFeedbackProvider(v8, (struct InkDevice *)((char *)InkDeviceByRimDeviceObject + 32));
      InkProcessor::UnlinkAndReleaseInkDevice(v9, &v13);
      if ( hProvider > 4u )
      {
        v19 = 0;
        v17 = &v12;
        v12 = v4;
        v18 = 4;
        TlgCreateSz(&pDesc, "Ink device removed");
        v23 = 0;
        v21 = &v14;
        v22 = 8;
        v14 = v13;
        if ( v13 )
          v13 = (struct InkDevice *)((char *)v13 + 32);
        else
          v13 = 0LL;
        v26 = 0;
        v29 = 0;
        v24 = &v13;
        v27 = &v15;
        v25 = 8;
        v15 = a2;
        v28 = 8;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC0CF, v10, v11, 7u, &pData);
      }
    }
  }
  else if ( hProvider > 2u )
  {
    v19 = 0;
    v17 = &v12;
    v12 = v4;
    v18 = 4;
    TlgCreateSz(&pDesc, "Ink processor not enabled");
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC09D, v5, v6, 4u, &pData);
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
