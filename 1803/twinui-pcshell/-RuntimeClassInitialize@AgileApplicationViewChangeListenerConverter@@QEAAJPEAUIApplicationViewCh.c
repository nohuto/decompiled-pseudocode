/*
 * XREFs of ?RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewChangeListener@@@Z @ 0x18001F0F8
 * Callers:
 *     ??$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListener@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewChangeListener@@AEAPEAU3@@Z @ 0x180092910 (--$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListen.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x18008FFB0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??$com_agile_query@AEAPEAUIApplicationViewChangeListener@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationViewChangeListener@@W4AgileReferenceOptions@@@Z @ 0x180092A0C (--$com_agile_query@AEAPEAUIApplicationViewChangeListener@@@wil@@YA-AV-$com_ptr_t@UIAgileReferenc.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@IEAAKXZ @ 0x180095790 (-InternalRelease@-$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AgileApplicationViewChangeListenerConverter::RuntimeClassInitialize(
        AgileApplicationViewChangeListenerConverter *this,
        struct IApplicationViewChangeListener *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int inited; // eax
  const char *v8; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationViewChangeListener *v11; // [rsp+40h] [rbp+8h] BYREF
  struct IApplicationViewChangeListener *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  try
  {
    if ( *((struct IApplicationViewChangeListener **)this + 13) != a2 )
    {
      v11 = a2;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v11);
      v11 = (struct IApplicationViewChangeListener *)*((_QWORD *)this + 13);
      *((_QWORD *)this + 13) = a2;
      Microsoft::WRL::ComPtr<IApplicationViewChangeListener>::InternalRelease(&v11);
    }
    v4 = (__int64 *)wil::com_agile_query<IApplicationViewChangeListener * &>(&v11, &v12);
    v5 = *v4;
    *v4 = 0LL;
    v6 = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = v5;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v11 )
      (*(void (__fastcall **)(struct IApplicationViewChangeListener *))(*(_QWORD *)v11 + 16LL))(v11);
    inited = CObjectWithThreadUseDetection::InitApartmentId((AgileApplicationViewChangeListenerConverter *)((char *)this + 48));
    if ( inited < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x77,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
        (const char *)(unsigned int)inited,
        -2);
      JUMPOUT(0x1800C077ALL);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7A,
                           (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
                           v8);
  }
  return result;
}
