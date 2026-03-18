/*
 * XREFs of ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0217C64
 * Callers:
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01E91BC (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00DAAFC (-AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ??_EInkDevice@@UEAAPEAXI@Z @ 0x1C0217C00 (--_EInkDevice@@UEAAPEAXI@Z.c)
 *     ??0InkDevice@@QEAA@XZ @ 0x1C021CF54 (--0InkDevice@@QEAA@XZ.c)
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021DA00 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

__int64 __fastcall InkProcessor::OnDeviceAttached(InkProcessor ***this, struct RawInputManagerDeviceObject *a2)
{
  InkDevice *v4; // rdi
  signed int v5; // ebx
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  InkDevice *v8; // rax
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v11; // eax
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  InkProcessor **v14; // rdx
  InkProcessor *v15; // rcx
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  int v19; // [rsp+30h] [rbp-79h] BYREF
  struct RawInputManagerDeviceObject *v20; // [rsp+38h] [rbp-71h] BYREF
  char *v21; // [rsp+40h] [rbp-69h] BYREF
  struct RawInputManagerDeviceObject *v22; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  int *v24; // [rsp+70h] [rbp-39h]
  int v25; // [rsp+78h] [rbp-31h]
  int v26; // [rsp+7Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-29h] BYREF
  struct RawInputManagerDeviceObject **v28; // [rsp+90h] [rbp-19h]
  int v29; // [rsp+98h] [rbp-11h]
  int v30; // [rsp+9Ch] [rbp-Dh]
  char **v31; // [rsp+A0h] [rbp-9h]
  int v32; // [rsp+A8h] [rbp-1h]
  int v33; // [rsp+ACh] [rbp+3h]
  struct RawInputManagerDeviceObject **v34; // [rsp+B0h] [rbp+7h]
  int v35; // [rsp+B8h] [rbp+Fh]
  int v36; // [rsp+BCh] [rbp+13h]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v4 = 0LL;
  v5 = *((_BYTE *)this + 8) == 0 ? 0xC0000001 : 0;
  if ( !*((_BYTE *)this + 8) )
  {
    if ( hProvider > 2u )
    {
      v26 = 0;
      v24 = &v19;
      v19 = v5;
      v25 = 4;
      TlgCreateSz(&pDesc, "Ink processor not enabled");
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC09D, v6, v7, 4u, &pData);
    }
LABEL_16:
    if ( v5 < 0 && v4 )
      InkDevice::`vector deleting destructor'(v4, 1);
    goto LABEL_19;
  }
  v8 = (InkDevice *)Win32AllocPoolZInit(168LL, 1349217865LL);
  if ( v8 )
    v4 = InkDevice::InkDevice(v8);
  if ( v4 )
  {
    v11 = InkDevice::Initialize(v4, a2);
    v5 = v11;
    if ( v11 >= 0 )
    {
      v14 = this[3];
      v15 = (InkDevice *)((char *)v4 + 88);
      if ( *v14 != (InkProcessor *)(this + 2) )
        __fastfail(3u);
      *((_QWORD *)v4 + 12) = v14;
      *(_QWORD *)v15 = this + 2;
      *v14 = v15;
      this[3] = (InkProcessor **)v15;
      InkFeedbackServer::AddInkFeedbackProvider((InkFeedbackServer *)(this + 12), (InkDevice *)((char *)v4 + 32));
      if ( hProvider > 4u )
      {
        v26 = 0;
        v24 = &v19;
        v19 = v5;
        v25 = 4;
        TlgCreateSz(&pDesc, "Ink device attached");
        v30 = 0;
        v33 = 0;
        v36 = 0;
        v28 = &v20;
        v31 = &v21;
        v29 = 8;
        v32 = 8;
        v35 = 8;
        v20 = v4;
        v21 = (char *)v4 + 32;
        v22 = a2;
        v34 = &v22;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC0CF, v16, v17, 7u, &pData);
      }
    }
    else if ( hProvider > 2u )
    {
      v26 = 0;
      v19 = v11;
      v25 = 4;
      v24 = &v19;
      TlgCreateSz(&pDesc, "Failed to initialize ink device");
      v30 = 0;
      v28 = &v20;
      v29 = 8;
      v20 = a2;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC13E, v12, v13, 5u, &pData);
    }
    goto LABEL_16;
  }
  v5 = -1073741801;
  if ( hProvider > 2u )
  {
    v26 = 0;
    v24 = &v19;
    v19 = -1073741801;
    v25 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v9, v10, 3u, &pData);
  }
LABEL_19:
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
