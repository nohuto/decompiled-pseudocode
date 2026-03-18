/*
 * XREFs of ?ProcessInput@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@PEBX@Z @ 0x1C0218628
 * Callers:
 *     ?InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C01E9358 (-InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall InkProcessor::ProcessInput(InkProcessor *this, struct RawInputManagerDeviceObject *a2, const void *a3)
{
  unsigned int v4; // edx
  LPCGUID v5; // r8
  LPCGUID cData; // r9
  unsigned int v7; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  unsigned int *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v4 = *((_BYTE *)this + 8) == 0 ? 0xC0000001 : 0;
  if ( !*((_BYTE *)this + 8) && hProvider > 2u )
  {
    v11 = 0;
    v7 = v4;
    v9 = &v7;
    v10 = 4;
    TlgCreateSz(&pDesc, "Ink processor not enabled");
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC09D, v5, cData, (UINT32)cData, &pData);
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
