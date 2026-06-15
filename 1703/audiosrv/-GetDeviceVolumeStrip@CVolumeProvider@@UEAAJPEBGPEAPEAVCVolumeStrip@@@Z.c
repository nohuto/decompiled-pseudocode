/*
 * XREFs of ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18001E170
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x180011CC0 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     AudioVolumeConnect @ 0x18002E690 (AudioVolumeConnect.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x180039CBC (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x18004B7E0 (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??0?$SP_MEM@PEAG@@QEAA@XZ @ 0x18007C1A8 (--0-$SP_MEM@PEAG@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z @ 0x18007D368 (-Attach@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z.c)
 */

__int64 __fastcall CVolumeProvider::GetDeviceVolumeStrip(
        CVolumeProvider *this,
        const unsigned __int16 *a2,
        struct IUnknown **a3)
{
  int v6; // ebx
  PCNZWCH *v7; // rdi
  _QWORD *v8; // rsi
  struct IUnknown *v9; // rdi
  int DeviceVolumeStrip; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-20h] BYREF
  char v13; // [rsp+38h] [rbp-18h]
  LPCRITICAL_SECTION v14; // [rsp+40h] [rbp-10h] BYREF
  char v15; // [rsp+48h] [rbp-8h]
  struct IUnknown *v16; // [rsp+80h] [rbp+30h] BYREF

  v6 = 0;
  SP_MEM<unsigned short *>::SP_MEM<unsigned short *>(&v16);
  v15 = 0;
  v14 = (LPCRITICAL_SECTION)((char *)this + 16);
  ATL::CCritSecLock::Lock(&v14);
  if ( a2 )
  {
    if ( a3 )
    {
      v7 = 0LL;
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
      v13 = 0;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      v8 = (_QWORD *)*((_QWORD *)this + 7);
      while ( v8 )
      {
        v7 = (PCNZWCH *)v8[2];
        v8 = (_QWORD *)*v8;
        if ( CompareStringW(0x7Fu, 1u, v7[28], -1, a2, -1) == 2 )
        {
          (*((void (__fastcall **)(PCNZWCH *))*v7 + 1))(v7);
          break;
        }
        v7 = 0LL;
      }
      if ( v13 )
        LeaveCriticalSection(lpCriticalSection);
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::Attach(&v16, v7);
      v9 = v16;
      if ( (v16
         || (DeviceVolumeStrip = CVolumeProvider::CreateDeviceVolumeStrip(this, a2, (struct CVolumeStrip **)&v16),
             v9 = v16,
             v6 = DeviceVolumeStrip,
             DeviceVolumeStrip >= 0))
        && HasTooManyReferences(v9) )
      {
        v6 = -2147024882;
      }
      else
      {
        v16 = 0LL;
        *a3 = v9;
        if ( v6 >= 0 )
          goto LABEL_19;
      }
    }
    else
    {
      v6 = -2147467261;
    }
  }
  else
  {
    v6 = -2147024809;
  }
  AudSrvTraceLoggingErrorHelper("CVolumeProvider::GetDeviceVolumeStrip", 0xB6u, v6);
LABEL_19:
  if ( v15 )
    LeaveCriticalSection(v14);
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v16);
  return (unsigned int)v6;
}
