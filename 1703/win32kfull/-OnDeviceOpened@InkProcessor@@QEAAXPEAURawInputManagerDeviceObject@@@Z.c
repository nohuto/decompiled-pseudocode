/*
 * XREFs of ?OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C02180B4
 * Callers:
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01E93F8 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?OnDeviceOpened@RimBackedDeviceBase@Rim@@UEAAXXZ @ 0x1C0209EC0 (-OnDeviceOpened@RimBackedDeviceBase@Rim@@UEAAXXZ.c)
 *     ?FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject@@@Z @ 0x1C0217C3C (-FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject.c)
 */

void __fastcall InkProcessor::OnDeviceOpened(InkProcessor *this, struct RawInputManagerDeviceObject *a2)
{
  unsigned int v4; // ebx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  Rim::RimBackedDeviceBase *InkDeviceByRimDeviceObject; // rax
  Rim::RimBackedDeviceBase *v8; // rsi
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  unsigned int v11; // [rsp+30h] [rbp-59h] BYREF
  Rim::RimBackedDeviceBase *v12; // [rsp+38h] [rbp-51h] BYREF
  struct RawInputManagerDeviceObject *v13; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  unsigned int *v15; // [rsp+70h] [rbp-19h]
  int v16; // [rsp+78h] [rbp-11h]
  int v17; // [rsp+7Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-9h] BYREF
  Rim::RimBackedDeviceBase **v19; // [rsp+90h] [rbp+7h]
  int v20; // [rsp+98h] [rbp+Fh]
  int v21; // [rsp+9Ch] [rbp+13h]
  struct RawInputManagerDeviceObject **v22; // [rsp+A0h] [rbp+17h]
  int v23; // [rsp+A8h] [rbp+1Fh]
  int v24; // [rsp+ACh] [rbp+23h]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v4 = *((_BYTE *)this + 8) == 0 ? 0xC0000001 : 0;
  if ( *((_BYTE *)this + 8) )
  {
    InkDeviceByRimDeviceObject = InkProcessor::FindInkDeviceByRimDeviceObject(this, a2);
    v8 = InkDeviceByRimDeviceObject;
    if ( InkDeviceByRimDeviceObject )
    {
      Rim::RimBackedDeviceBase::OnDeviceOpened(InkDeviceByRimDeviceObject);
      if ( hProvider > 4u )
      {
        v17 = 0;
        v15 = &v11;
        v11 = v4;
        v16 = 4;
        TlgCreateSz(&pDesc, "Ink device opened");
        v21 = 0;
        v24 = 0;
        v19 = &v12;
        v22 = &v13;
        v12 = v8;
        v20 = 8;
        v13 = a2;
        v23 = 8;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC043, v9, v10, 6u, &pData);
      }
    }
  }
  else if ( hProvider > 2u )
  {
    v17 = 0;
    v15 = &v11;
    v11 = v4;
    v16 = 4;
    TlgCreateSz(&pDesc, "Ink processor not enabled");
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC09D, v5, v6, 4u, &pData);
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
