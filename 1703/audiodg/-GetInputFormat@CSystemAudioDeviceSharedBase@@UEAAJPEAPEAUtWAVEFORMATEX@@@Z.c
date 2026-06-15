/*
 * XREFs of ?GetInputFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140004DC0
 * Callers:
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x1400067C0 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400060A0 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14000EAF0 (-GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetInputFormat(
        CSystemAudioDeviceSharedBase *this,
        struct tWAVEFORMATEX **a2)
{
  void (__fastcall ***v4)(_QWORD, GUID *, CAudioDeviceGraph **); // r9
  CAudioDeviceGraph *v5; // rcx
  void (__fastcall *v6)(_QWORD, GUID *, CAudioDeviceGraph **); // rax
  __int64 (__fastcall *v7)(CAudioDeviceGraph *__hidden, struct tWAVEFORMATEX **); // rax
  unsigned int DevicePipeFormat; // eax
  unsigned int v9; // ebx
  CAudioDeviceGraph *v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+28h] [rbp-30h]
  __int128 v13; // [rsp+38h] [rbp-20h] BYREF

  v12 = *(_OWORD *)((char *)this - 56);
  v13 = v12;
  EtwEventActivityIdControl(4LL, &v13);
  v4 = (void (__fastcall ***)(_QWORD, GUID *, CAudioDeviceGraph **))*((_QWORD *)this + 3);
  v5 = 0LL;
  v11 = 0LL;
  if ( v4 )
  {
    v6 = **v4;
    if ( (char *)v6 == (char *)ATL::CComObject<CAudioDeviceGraph>::QueryInterface )
      ATL::CComObject<CAudioDeviceGraph>::QueryInterface(v4, &GUID_a58eaafa_16b4_41ca_82d6_645113442e7d, &v11);
    else
      v6(v4, &GUID_a58eaafa_16b4_41ca_82d6_645113442e7d, &v11);
    v5 = v11;
  }
  v7 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden, struct tWAVEFORMATEX **))(*(_QWORD *)v5 + 64LL);
  if ( v7 == CAudioDeviceGraph::GetDevicePipeFormat )
    DevicePipeFormat = CAudioDeviceGraph::GetDevicePipeFormat(v5, a2);
  else
    DevicePipeFormat = v7(v5, a2);
  v9 = DevicePipeFormat;
  if ( v11 )
    (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)v11 + 16LL))(v11);
  EtwEventActivityIdControl(4LL, &v13);
  return v9;
}
