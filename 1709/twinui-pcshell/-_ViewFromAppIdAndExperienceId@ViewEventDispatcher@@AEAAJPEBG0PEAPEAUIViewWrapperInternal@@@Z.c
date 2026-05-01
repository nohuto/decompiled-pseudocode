/*
 * XREFs of ?_ViewFromAppIdAndExperienceId@ViewEventDispatcher@@AEAAJPEBG0PEAPEAUIViewWrapperInternal@@@Z @ 0x180123CDC
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18011C358 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_ViewFromAppIdAndExperienceId(
        ViewEventDispatcher *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct IViewWrapperInternal **a4)
{
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 result; // rax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, struct IViewWrapperInternal **); // rcx
  int v13; // eax
  unsigned int v14; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = 0LL;
  v9 = 0LL;
  if ( *((_QWORD *)this + 47) )
  {
    while ( 1 )
    {
      v10 = *((_QWORD *)this + 46);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, const unsigned __int16 *))(**(_QWORD **)(v10 + 8 * v9) + 592LL))(
             *(_QWORD *)(v10 + 8 * v9),
             a2) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, const unsigned __int16 *))(**(_QWORD **)(v10 + 8 * v9) + 600LL))(
               *(_QWORD *)(v10 + 8 * v9),
               a3) )
        {
          break;
        }
      }
      if ( (unsigned __int64)++v9 >= *((_QWORD *)this + 47) )
        goto LABEL_7;
    }
    v8 = v9;
    result = 0LL;
  }
  else
  {
LABEL_7:
    result = 2147647531LL;
  }
  if ( (int)result >= 0 )
  {
    v12 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IViewWrapperInternal **))(*((_QWORD *)this + 46) + 8 * v8);
    v13 = (**v12)(v12, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, a4);
    v14 = v13;
    if ( v13 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBDB,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v13);
    return v14;
  }
  return result;
}
