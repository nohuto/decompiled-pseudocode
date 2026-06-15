/*
 * XREFs of ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18004B1A0
 * Callers:
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18004AEB8 (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMuteSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x1800A0D40 (-Initialize@CMuteSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?GetLevelData@CMuteHardware@@MEAAJXZ @ 0x18004B120 (-GetLevelData@CMuteHardware@@MEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004B238 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMuteControlBase::Initialize(CMuteControlBase *this, struct IMMDevice *a2)
{
  _QWORD *v2; // rsi
  int v5; // ebx
  __int64 (__fastcall *v6)(CMuteHardware *); // rax
  int LevelData; // eax
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 32);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    (char *)this + 32,
    0LL);
  v5 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD *))a2->lpVtbl->GetId)(a2, v2);
  if ( v5 < 0 )
  {
    v9 = 161LL;
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      (char *)this + 40,
      0LL);
    mmdDevGetInstanceIdFromMMDeviceId(*v2, (char *)this + 40);
    v6 = *(__int64 (__fastcall **)(CMuteHardware *))(*(_QWORD *)this + 112LL);
    if ( v6 == CMuteHardware::GetLevelData )
      LevelData = CMuteHardware::GetLevelData(this);
    else
      LevelData = v6(this);
    v5 = LevelData;
    if ( LevelData >= 0 )
      return 0LL;
    v9 = 166LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
    (const char *)(unsigned int)v5,
    v10);
  return (unsigned int)v5;
}
