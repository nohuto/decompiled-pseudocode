/*
 * XREFs of ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x18004A9C4
 * Callers:
 *     ?GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z @ 0x18004A920 (-GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z.c)
 *     ?GetChannelCount@CMeterHardware@@MEAAJPEAI@Z @ 0x1800A04C0 (-GetChannelCount@CMeterHardware@@MEAAJPEAI@Z.c)
 * Callees:
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x180049610 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x18004A6E8 (-GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z.c)
 *     ?Release@CPolicyConfig@@UEAAKXZ @ 0x18004A730 (-Release@CPolicyConfig@@UEAAKXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMeterControlBase::GetChannelCountFromDeviceFormat(CMeterControlBase *this, unsigned int *a2)
{
  int PolicyConfig; // ebx
  unsigned __int16 *v5; // rdx
  __int64 (__fastcall *v6)(CPolicyConfig *, unsigned __int16 *, int, struct tWAVEFORMATEX **); // rax
  int DeviceFormat; // eax
  void *v8; // rcx
  void (*v9)(void); // rax
  LPVOID pv; // [rsp+60h] [rbp+18h] BYREF
  CPolicyConfig *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  PolicyConfig = GetPolicyConfig(&v12);
  if ( PolicyConfig < 0 )
    goto LABEL_15;
  pv = 0LL;
  v5 = (unsigned __int16 *)*((_QWORD *)this + 2);
  v6 = *(__int64 (__fastcall **)(CPolicyConfig *, unsigned __int16 *, int, struct tWAVEFORMATEX **))(*(_QWORD *)v12 + 32LL);
  if ( v6 == CPolicyConfig::GetDeviceFormat )
    DeviceFormat = CPolicyConfig::GetDeviceFormat(v12, v5, 0, (struct tWAVEFORMATEX **)&pv);
  else
    DeviceFormat = v6(v12, v5, 0, (struct tWAVEFORMATEX **)&pv);
  PolicyConfig = DeviceFormat;
  v8 = pv;
  if ( DeviceFormat >= 0 )
    *a2 = *((unsigned __int16 *)pv + 1);
  if ( v8 )
    CoTaskMemFree(v8);
  if ( PolicyConfig < 0 )
LABEL_15:
    AudSrvTraceLoggingErrorHelper("CMeterControlBase::GetChannelCountFromDeviceFormat", 187, PolicyConfig);
  if ( v12 )
  {
    v9 = *(void (**)(void))(*(_QWORD *)v12 + 16LL);
    if ( (char *)v9 == (char *)CPolicyConfig::Release )
      CPolicyConfig::Release(v12);
    else
      v9();
  }
  return (unsigned int)PolicyConfig;
}
