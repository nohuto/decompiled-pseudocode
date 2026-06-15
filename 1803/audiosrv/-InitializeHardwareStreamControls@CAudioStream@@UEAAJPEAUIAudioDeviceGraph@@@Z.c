/*
 * XREFs of ?InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800B5AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800184EC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     ?IsEqualObject@?$CComPtrBase@UIAudioMuteAPO@@@ATL@@QEAA_NPEAUIUnknown@@@Z @ 0x1800FD2E0 (-IsEqualObject@-$CComPtrBase@UIAudioMuteAPO@@@ATL@@QEAA_NPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CAudioStream::InitializeHardwareStreamControls(CAudioStream *this, struct IAudioDeviceGraph *a2)
{
  int v4; // edi
  struct IUnknown *v5; // rcx
  struct IUnknown *v7; // [rsp+40h] [rbp+20h] BYREF
  struct IUnknown *v8; // [rsp+48h] [rbp+28h] BYREF
  __int64 v9; // [rsp+50h] [rbp+30h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  *((_DWORD *)this + 33) = 2;
  if ( (**(int (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, struct IUnknown **))a2)(
         a2,
         &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
         &v7) >= 0
    && *((struct IUnknown **)this + 22) != v7 )
  {
    ATL::AtlComPtrAssign((struct IUnknown **)this + 22, v7);
  }
  if ( (**(int (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, __int64 *))a2)(
         a2,
         &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd,
         &v9) >= 0
    && !(unsigned __int8)ATL::CComPtrBase<IAudioMuteAPO>::IsEqualObject((char *)this + 184, v7) )
  {
    ATL::AtlComQIPtrAssign((struct IUnknown **)this + 23, v7, &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd);
  }
  v4 = (**(__int64 (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, struct IUnknown **))a2)(
         a2,
         &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
         &v8);
  if ( v4 >= 0 )
  {
    v5 = (struct IUnknown *)*((_QWORD *)this + 24);
    if ( v5 != v8 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)this + 24, v8);
      v5 = (struct IUnknown *)*((_QWORD *)this + 24);
    }
    v4 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v5->lpVtbl[1].AddRef)(v5, (char *)this + 96);
    if ( v4 < 0
      && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        29LL,
        &WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids,
        (unsigned int)v4);
    }
  }
  if ( !*((_BYTE *)this + 49) && (!*((_QWORD *)this + 22) || !*((_QWORD *)this + 23) || !*((_QWORD *)this + 24)) )
    v4 = -2147467262;
  if ( v4 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::InitializeHardwareStreamControls", 1174, v4);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v8 )
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  if ( v7 )
    ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
  return (unsigned int)v4;
}
