/*
 * XREFs of ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x1800091D0
 * Callers:
 *     AudioVolumeConnect @ 0x180008FA0 (AudioVolumeConnect.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18000AA00 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x180035588 (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180059EF0 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$copy_to@UIVolumeStrip@@@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIVolumeStrip@@@Z @ 0x18005BC08 (--$copy_to@UIVolumeStrip@@@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEA.c)
 *     ??I?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIVolumeStrip@@XZ @ 0x18005BC58 (--I-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIVolumeStrip@@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x18006E7A4 (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVolumeProvider::GetDeviceVolumeStrip(
        CVolumeProvider *this,
        const unsigned __int16 *a2,
        struct IVolumeStrip **a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  _QWORD *v6; // r12
  _QWORD *v7; // rbx
  const WCHAR *v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  char v11; // r15
  struct IVolumeStrip **v12; // rax
  int DeviceVolumeStrip; // eax
  unsigned int v14; // ebx
  const char *v15; // r9
  __int64 result; // rax
  int lpString2; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IUnknown *v19; // [rsp+80h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+88h] [rbp+10h] BYREF
  struct IVolumeStrip **v21; // [rsp+90h] [rbp+18h]
  PCNZWCH v22; // [rsp+98h] [rbp+20h]

  v21 = a3;
  try
  {
    v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    v20 = v5;
    v19 = 0LL;
    v6 = (_QWORD *)wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::operator&(&v19);
    v22 = a2;
    *v6 = 0LL;
    EnterCriticalSection(v5);
    v7 = (_QWORD *)*((_QWORD *)this + 8);
    v9 = (_QWORD *)*((_QWORD *)this + 7);
    v11 = 1;
    while ( v9 != v7 )
    {
      v8 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 32LL))(*v9);
      if ( CompareStringW(0x7Fu, 1u, v8, -1, v22, -1) == 2 )
        break;
      ++v9;
    }
    if ( v9 == *((_QWORD **)this + 8) )
    {
      if ( v5 )
        LeaveCriticalSection(v5);
      v11 = 0;
    }
    else
    {
      v10 = *v9;
      if ( *v9 )
      {
        *v6 = v10;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      }
      else
      {
        *v6 = 0LL;
      }
      if ( v5 )
        LeaveCriticalSection(v5);
    }
    if ( v11
      || (v12 = (struct IVolumeStrip **)wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::operator&(&v19),
          DeviceVolumeStrip = CVolumeProvider::CreateDeviceVolumeStrip(this, a2, v12),
          v14 = DeviceVolumeStrip,
          DeviceVolumeStrip >= 0) )
    {
      if ( HasTooManyReferences(v19) )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
        Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v20);
        result = 2147942414LL;
      }
      else
      {
        wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::copy_to<IVolumeStrip>(&v19, v21);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
        Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v20);
        result = 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x9E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
        (const char *)(unsigned int)DeviceVolumeStrip,
        lpString2);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
      Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v20);
      result = v14;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAB,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
                           v15);
  }
  return result;
}
