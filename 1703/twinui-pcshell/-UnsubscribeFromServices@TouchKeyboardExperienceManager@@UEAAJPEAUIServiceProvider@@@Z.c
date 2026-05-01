/*
 * XREFs of ?UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18016BEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180026F18 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::UnsubscribeFromServices(
        TouchKeyboardExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned int v9; // r12d
  __int64 v10; // rax
  unsigned int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  LPCRITICAL_SECTION lpCriticalSection[9]; // [rsp+20h] [rbp-48h] BYREF

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  wil::critical_section::lock((struct _RTL_CRITICAL_SECTION *)((char *)this + 208), lpCriticalSection);
  v6 = *((_QWORD *)this + 18);
  if ( v6 )
  {
    v3 = *((_QWORD *)this + 18);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v3);
  }
  v7 = *((_QWORD *)this + 31);
  v8 = *((_QWORD *)this + 36);
  if ( v8 )
  {
    v4 = *((_QWORD *)this + 36);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v4);
  }
  v9 = *((_DWORD *)this + 34);
  v10 = *((_QWORD *)this + 21);
  if ( v10 )
  {
    v5 = *((_QWORD *)this + 21);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v5);
  }
  v11 = *((_DWORD *)this + 35);
  v12 = *((_QWORD *)this + 18);
  if ( v12 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  *((_QWORD *)this + 31) = 0LL;
  v13 = *((_QWORD *)this + 36);
  if ( v13 )
  {
    *((_QWORD *)this + 36) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  *((_DWORD *)this + 34) = 0;
  v14 = *((_QWORD *)this + 21);
  if ( v14 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  *((_DWORD *)this + 35) = 0;
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  if ( v5 && v11 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(v5, v11);
  if ( v4 && v9 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 48LL))(v4, v9);
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, v7);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return 0LL;
}
