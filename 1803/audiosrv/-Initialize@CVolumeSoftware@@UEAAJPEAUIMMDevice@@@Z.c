/*
 * XREFs of ?Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x1800A25E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x18004A6E8 (-GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z.c)
 *     ?Release@CPolicyConfig@@UEAAKXZ @ 0x18004A730 (-Release@CPolicyConfig@@UEAAKXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18004E0B0 (-Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetFormFactor@@YAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@@Z @ 0x1800A2068 (-GetFormFactor@@YAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CVolumeSoftware::Initialize(
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 *this,
        struct IMMDevice *a2)
{
  int PolicyConfig; // ebx
  __int64 v5; // rax
  signed int LastError; // eax
  void (*v7)(void); // rax
  LPVOID pv; // [rsp+60h] [rbp+20h] BYREF
  LPVOID v10; // [rsp+70h] [rbp+30h] BYREF
  CPolicyConfig *v11; // [rsp+78h] [rbp+38h] BYREF

  GetFormFactor(a2, this + 74);
  v11 = 0LL;
  PolicyConfig = GetPolicyConfig(&v11);
  if ( PolicyConfig < 0 )
    goto LABEL_13;
  v10 = 0LL;
  PolicyConfig = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &v10);
  if ( PolicyConfig >= 0 )
  {
    pv = 0LL;
    PolicyConfig = (*(__int64 (__fastcall **)(CPolicyConfig *, LPVOID, _QWORD, LPVOID *))(*(_QWORD *)v11 + 32LL))(
                     v11,
                     v10,
                     0LL,
                     &pv);
    if ( PolicyConfig >= 0 )
      *((_DWORD *)this + 31) = *((unsigned __int16 *)pv + 1);
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  CoTaskMemFree(v10);
  v10 = 0LL;
  if ( PolicyConfig < 0 )
    goto LABEL_13;
  PolicyConfig = CVolumeControlBase::Initialize((void **)this, (struct IUnknown *)a2);
  if ( PolicyConfig < 0 )
    goto LABEL_13;
  if ( ThreadPool )
  {
    v5 = (*(__int64 (__fastcall **)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 *))(*(_QWORD *)ThreadPool + 8LL))(
           ThreadPool,
           CVolumeSoftware::OnPersistState,
           this);
    *((_QWORD *)this + 38) = v5;
    if ( !v5 )
    {
      LastError = GetLastError();
      PolicyConfig = LastError;
      if ( LastError > 0 )
        PolicyConfig = (unsigned __int16)LastError | 0x80070000;
    }
  }
  if ( PolicyConfig < 0 )
LABEL_13:
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::Initialize", 2128, PolicyConfig);
  if ( v11 )
  {
    v7 = *(void (**)(void))(*(_QWORD *)v11 + 16LL);
    if ( (char *)v7 == (char *)CPolicyConfig::Release )
      CPolicyConfig::Release(v11);
    else
      v7();
  }
  return (unsigned int)PolicyConfig;
}
