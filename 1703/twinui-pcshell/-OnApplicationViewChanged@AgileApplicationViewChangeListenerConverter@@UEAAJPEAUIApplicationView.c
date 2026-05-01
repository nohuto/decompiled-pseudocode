/*
 * XREFs of ?OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007AF90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AgileApplicationViewChangeListenerConverter::OnApplicationViewChanged(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  int v13; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)((a1 + 40) & ((unsigned __int128)-(__int128)a1 >> 64)));
  if ( v13 < 0 )
  {
    v15 = 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 88) + 24LL))(
           *(_QWORD *)(a1 + 88),
           &GUID_727f9e97_76ee_497b_a942_b6371328485c,
           &v15);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v15 + 24LL))(v15, a2, a3, a4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4EC,
        (__int64)"internal\\sdk\\inc\\wil/com.h",
        (const char *)(unsigned int)v9);
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x8A,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
        (const char *)v8);
    }
    v10 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 96) + 24LL))(
           *(_QWORD *)(a1 + 96),
           a2,
           a3,
           a4);
  }
  if ( v13 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return v8;
}
