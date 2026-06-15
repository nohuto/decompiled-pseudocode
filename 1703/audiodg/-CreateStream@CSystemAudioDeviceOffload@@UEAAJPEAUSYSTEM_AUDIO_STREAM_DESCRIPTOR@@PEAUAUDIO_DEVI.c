/*
 * XREFs of ?CreateStream@CSystemAudioDeviceOffload@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003C7D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x140038DB0 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_Ds @ 0x140038E54 (WPP_SF_Ds.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::CreateStream(
        CSystemAudioDeviceOffload *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  HRESULT v9; // ebx
  char *v10; // r15
  __int64 v11; // r8
  struct IUnknown *v12; // rcx
  GUID v13; // xmm0
  struct IUnknown *v15; // [rsp+40h] [rbp-40h] BYREF
  struct IUnknown *v16; // [rsp+48h] [rbp-38h] BYREF
  __int128 v17; // [rsp+50h] [rbp-30h]
  __int128 v18; // [rsp+60h] [rbp-20h] BYREF

  v17 = *(_OWORD *)((char *)this + 248);
  v18 = v17;
  EtwEventActivityIdControl(4LL, &v18);
  v16 = 0LL;
  v15 = 0LL;
  if ( !a2 )
  {
    v9 = -2147467261;
    goto LABEL_34;
  }
  if ( !a3 && !*(_DWORD *)a2 && !*((_DWORD *)a2 + 33) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
    v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))this + 29))(
           *((_QWORD *)this + 29),
           &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
           &v16);
    if ( v9 < 0 )
      goto LABEL_33;
    v9 = CoImpersonateClient();
    if ( v9 < 0 )
      goto LABEL_33;
    v10 = (char *)OpenProcess(0x40u, 0, *((_DWORD *)a2 + 3));
    CoRevertToSelf();
    v11 = *((_QWORD *)a2 + 4);
    if ( (*((_DWORD *)this + 56) & 0x40000) != 0 )
    {
      if ( !v11 )
      {
LABEL_11:
        v9 = -2005139379;
        goto LABEL_31;
      }
      if ( v11 >= *((_QWORD *)this + 49) && v11 <= 6000000000LL )
      {
        if ( v11 != *((_QWORD *)a2 + 3) )
        {
          v9 = -2005139371;
          goto LABEL_31;
        }
        goto LABEL_20;
      }
    }
    else if ( !v11 || v11 >= *((_QWORD *)this + 49) && v11 <= 6000000000LL )
    {
      if ( *((_QWORD *)a2 + 3) > 0x165A0BC00uLL )
        goto LABEL_11;
LABEL_20:
      v9 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v16->lpVtbl[2].QueryInterface)(v16, v10);
      if ( v9 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(struct IAudioGraphCallback *, CSystemAudioDeviceOffload *))(*(_QWORD *)a4 + 32LL))(
               a4,
               this);
        if ( v9 >= 0 )
        {
          v12 = v15;
          if ( v15 != v16 )
          {
            ATL::AtlComQIPtrAssign(&v15, v16, &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63);
            v12 = v15;
          }
          if ( !v12
            || (v9 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v12->lpVtbl[2].Release)(v12, (char *)a5 + 40),
                v9 >= 0) )
          {
            if ( *(_DWORD *)a2 )
              v13 = GUID_1fe45ed3_b842_4cf2_8df6_43e3d6d10e64;
            else
              v13 = GUID_20404060_f24f_4f89_84c6_8af80b0a17cb;
            *(GUID *)a5 = v13;
            *((_DWORD *)a5 + 22) = 1;
            goto LABEL_33;
          }
        }
      }
LABEL_31:
      if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v10);
LABEL_33:
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
      if ( v9 >= 0 )
        goto LABEL_39;
      goto LABEL_34;
    }
    v9 = -2005139386;
    goto LABEL_31;
  }
  v9 = -2147024809;
LABEL_34:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_Ds(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      (__int64)&WPP_280372cfd5753b11ae35f7647d6422a5_Traceguids,
      v9,
      (__int64)"CSystemAudioDeviceOffload::CreateStream");
  }
  AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffload::CreateStream", 0x19Bu, v9);
LABEL_39:
  if ( v15 )
    ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->Release)(v15);
  if ( v16 )
    ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
  EtwEventActivityIdControl(4LL, &v18);
  return (unsigned int)v9;
}
