/*
 * XREFs of ?Initialize@CVpoContext@@UEAAJPEAUISubmix@@PEAUIAudioDeviceGraph@@@Z @ 0x140043B50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14002FCC4 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHAEBKAEBQEAVCVpoContext@@@Z @ 0x140043794 (-Add@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAH.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVpoContext::Initialize(CVpoContext *this, struct ISubmix *a2, struct IAudioDeviceGraph *a3)
{
  struct IAudioDeviceGraph *v3; // rsi
  struct ISubmix *v4; // rdi
  CVpoContext *v5; // rbx
  unsigned int v6; // ebx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  ATL::CAtlException *v11; // rbx
  int v12[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  ATL::CAtlException *v14; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char *v19; // [rsp+78h] [rbp+20h] BYREF

  v13 = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  *((_DWORD *)this + 20) = _InterlockedIncrement((volatile signed __int32 *)&CVpoContext::s_VpoContextId);
  try
  {
    v19 = (char *)this - 8;
    ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::Add(
      (__int64)this,
      (_DWORD *)this + 20,
      &v19);
  }
  catch ( ATL::CAtlException *v14 )
  {
    v11 = v14;
    if ( *(_DWORD *)v14 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v19) = *(_DWORD *)v11;
    v6 = (unsigned int)v19;
    if ( (int)v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\vpocontext.cpp",
        (const char *)(unsigned int)v19);
      return v6;
    }
    v5 = this;
    v3 = a3;
    v4 = a2;
  }
  v8 = 0LL;
  *(_QWORD *)v12 = 0LL;
  if ( !v4 )
    goto LABEL_9;
  *(_QWORD *)v12 = 0LL;
  v9 = (**(__int64 (__fastcall ***)(struct ISubmix *, GUID *, int *))v4)(
         v4,
         &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee,
         v12);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v8 = *(_QWORD *)v12;
LABEL_9:
    *((_QWORD *)v5 + 8) = v8;
    *((_QWORD *)v5 + 9) = v3;
    v10 = 0;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\vpocontext.cpp",
    (const char *)(unsigned int)v9);
LABEL_10:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)v12);
  return v10;
}
