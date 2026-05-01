/*
 * XREFs of ?_ViewFromHostIdAndExperienceId@ViewEventDispatcher@@AEAAJ_KPEBGPEAPEAUIViewWrapperInternal@@@Z @ 0x180032AA0
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     ?IsEqualByHostId@ViewWrapperBase@@UEAA_N_K@Z @ 0x180051CC0 (-IsEqualByHostId@ViewWrapperBase@@UEAA_N_K@Z.c)
 *     ?IsEqualByExperienceId@ViewWrapperBase@@UEAA_NPEBG@Z @ 0x180051CD0 (-IsEqualByExperienceId@ViewWrapperBase@@UEAA_NPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_ViewFromHostIdAndExperienceId(
        ViewEventDispatcher *this,
        unsigned __int64 a2,
        const unsigned __int16 *a3,
        struct IViewWrapperInternal **a4)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rsi
  ViewWrapperBase *v11; // rcx
  bool (__fastcall *v12)(ViewWrapperBase *__hidden, unsigned __int64); // rax
  __int64 result; // rax
  ViewWrapperBase *v15; // rcx
  bool (*v16)(ViewWrapperBase *__hidden, const unsigned __int16 *); // rax
  char v17; // al
  __int64 (__fastcall ***v18)(_QWORD, GUID *, struct IViewWrapperInternal **); // rcx
  int v19; // eax
  unsigned int v20; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = 0LL;
  v9 = 0LL;
  if ( *((_QWORD *)this + 47) )
  {
    while ( 1 )
    {
      v10 = *((_QWORD *)this + 46);
      v11 = *(ViewWrapperBase **)(v10 + 8 * v9);
      v12 = *(bool (__fastcall **)(ViewWrapperBase *__hidden, unsigned __int64))(*(_QWORD *)v11 + 624LL);
      if ( v12 == ViewWrapperBase::IsEqualByHostId ? ViewWrapperBase::IsEqualByHostId(v11, a2) : v12(v11, a2) )
      {
        v15 = *(ViewWrapperBase **)(v10 + 8 * v9);
        v16 = *(bool (**)(ViewWrapperBase *__hidden, const unsigned __int16 *))(*(_QWORD *)v15 + 616LL);
        v17 = v16 == ViewWrapperBase::IsEqualByExperienceId
            ? ViewWrapperBase::IsEqualByExperienceId(v15, a3)
            : ((__int64 (__fastcall *)(ViewWrapperBase *, const unsigned __int16 *))v16)(v15, a3);
        if ( v17 )
          break;
      }
      if ( (unsigned __int64)++v9 >= *((_QWORD *)this + 47) )
        goto LABEL_6;
    }
    v8 = v9;
    result = 0LL;
  }
  else
  {
LABEL_6:
    result = 2147647531LL;
  }
  if ( (int)result >= 0 )
  {
    v18 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IViewWrapperInternal **))(*((_QWORD *)this + 46) + 8 * v8);
    v19 = (**v18)(v18, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, a4);
    v20 = v19;
    if ( v19 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA42,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v19,
        -2);
    return v20;
  }
  return result;
}
