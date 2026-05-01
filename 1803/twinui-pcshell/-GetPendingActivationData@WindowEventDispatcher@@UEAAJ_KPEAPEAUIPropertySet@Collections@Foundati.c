/*
 * XREFs of ?GetPendingActivationData@WindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801D5C90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowEventDispatcher::GetPendingActivationData(
        RTL_SRWLOCK *this,
        __int64 a2,
        struct Windows::Foundation::Collections::IPropertySet **a3)
{
  RTL_SRWLOCK *v6; // rdi
  _QWORD *Ptr; // rbx
  __int64 v8; // rax
  struct Windows::Foundation::Collections::IPropertySet *v9; // rcx
  const char *v10; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    *a3 = 0LL;
    v6 = this + 55;
    AcquireSRWLockShared(this + 55);
    Ptr = this[59].Ptr;
    while ( 1 )
    {
      Ptr = (_QWORD *)*Ptr;
      if ( Ptr == this[59].Ptr )
        break;
      v8 = Ptr[2];
      if ( *(_QWORD *)(v8 + 8) == a2 )
      {
        v9 = *(struct Windows::Foundation::Collections::IPropertySet **)(v8 + 32);
        if ( v9 )
        {
          *a3 = v9;
          (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v9 + 8LL))(v9);
        }
        else
        {
          *a3 = 0LL;
        }
      }
    }
    if ( !a3 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1243LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)0x80070490LL);
    if ( v6 )
      ReleaseSRWLockShared(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4DF,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v10);
  }
  return result;
}
