/*
 * XREFs of ?RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewChangeListener@@@Z @ 0x18007DB9C
 * Callers:
 *     ??$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListener@@AEAPEAU2@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@012@AEAPEAUIApplicationViewChangeListener@@@Z @ 0x180077C0C (--$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListen.c)
 * Callees:
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1800246F8 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AgileApplicationViewChangeListenerConverter::RuntimeClassInitialize(
        AgileApplicationViewChangeListenerConverter *this,
        struct IApplicationViewChangeListener *a2)
{
  __int64 v4; // rcx
  int AgileReference; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  int inited; // eax
  const char *v10; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    if ( *((struct IApplicationViewChangeListener **)this + 14) != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(struct IApplicationViewChangeListener *))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = *((_QWORD *)this + 14);
      *((_QWORD *)this + 14) = a2;
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v13 = 0LL;
    AgileReference = RoGetAgileReference(0LL, &GUID_727f9e97_76ee_497b_a942_b6371328485c, a2, &v13);
    if ( AgileReference < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x60C,
        (__int64)"internal\\sdk\\inc\\wil/com.h",
        (const char *)(unsigned int)AgileReference);
    v6 = v13;
    v7 = 0LL;
    v13 = 0LL;
    v8 = *((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = v6;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v7 = v13;
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    inited = CObjectWithThreadUseDetection::InitApartmentId((AgileApplicationViewChangeListenerConverter *)((char *)this + 56));
    if ( inited < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x77,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
        (const char *)(unsigned int)inited);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7A,
                           (__int64)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
                           v10);
  }
  return result;
}
