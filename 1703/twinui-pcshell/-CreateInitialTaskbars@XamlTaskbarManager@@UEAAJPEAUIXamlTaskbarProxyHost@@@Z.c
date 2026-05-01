/*
 * XREFs of ?CreateInitialTaskbars@XamlTaskbarManager@@UEAAJPEAUIXamlTaskbarProxyHost@@@Z @ 0x180120BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??DIterator@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA?AV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@XZ @ 0x18004363C (--DIterator@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA-AV-$ComPtr@UIImmersiveMonitor@@@WRL@.c)
 *     ?CreateTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180120A24 (-CreateTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?end@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA?AVIterator@1@XZ @ 0x1801213A8 (-end@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA-AVIterator@1@XZ.c)
 *     ?begin@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA?AVIterator@1@XZ @ 0x1801213E4 (-begin@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA-AVIterator@1@XZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@AEAAXXZ @ 0x180121820 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall XamlTaskbarManager::CreateInitialTaskbars(RTL_SRWLOCK *this, struct IXamlTaskbarProxyHost *a2)
{
  RTL_SRWLOCK *v3; // rdi
  const char *v4; // r9
  __int64 result; // rax
  PVOID Ptr; // rcx
  int v7; // eax
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct IImmersiveMonitor *v14; // rsi
  int v15; // eax
  const char *v16; // r9
  int Taskbar; // eax
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-68h] BYREF
  struct IImmersiveMonitor *v19[2]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v20; // [rsp+38h] [rbp-50h] BYREF
  int v21; // [rsp+40h] [rbp-48h] BYREF
  int v22; // [rsp+48h] [rbp-40h] BYREF
  __int64 v23; // [rsp+50h] [rbp-38h]
  __int64 v24; // [rsp+58h] [rbp-30h]
  int v25; // [rsp+60h] [rbp-28h] BYREF
  __int64 v26; // [rsp+68h] [rbp-20h]
  __int64 v27; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v31; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+20h] BYREF

  v19[1] = (struct IImmersiveMonitor *)-2LL;
  v3 = this;
  try
  {
    wil::srwlock::lock_exclusive(this + 33, &SRWLock);
    if ( v3[7].Ptr )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
        (const char *)0x8007139FLL);
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      result = 2147947423LL;
    }
    else if ( v3[11].Ptr )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
        (const char *)0x8007139FLL);
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      result = 2147947423LL;
    }
    else
    {
      if ( v3[7].Ptr != a2 )
      {
        if ( a2 )
          (*(void (__fastcall **)(struct IXamlTaskbarProxyHost *))(*(_QWORD *)a2 + 8LL))(a2);
        Ptr = v3[7].Ptr;
        v3[7].Ptr = a2;
        if ( Ptr )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      }
      v32 = 0LL;
      v7 = (*(__int64 (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)v3[8].Ptr + 112LL))(v3[8].Ptr, &v32);
      if ( v7 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x9F,
          (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
          (const char *)(unsigned int)v7);
      v8 = v32;
      v20 = v32;
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
      v21 = 0;
      v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 24LL))(v8, &v21);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xD,
          (__int64)"internal\\shell\\private\\inc\\objectarrayadapter.h",
          (const char *)(unsigned int)v9);
      ObjectArrayAdapter<IImmersiveMonitor>::begin(&v20, &v22);
      ObjectArrayAdapter<IImmersiveMonitor>::end(&v20, &v25);
      while ( v22 != v25 || v24 != v27 )
      {
        ObjectArrayAdapter<IImmersiveMonitor>::Iterator::operator*((__int64)&v22, v19);
        try
        {
          v14 = v19[0];
          v15 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)v19[0] + 48LL))(v19[0], &v31);
          if ( v15 < 0 )
            wil::details::in1diag3::_Throw_Hr(
              retaddr,
              (void *)0xA6,
              (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
              (const char *)(unsigned int)v15);
          if ( v31 )
          {
            Taskbar = XamlTaskbarManager::CreateTaskbar((XamlTaskbarManager *)v3, v14);
            if ( Taskbar < 0 )
              wil::details::in1diag3::_Throw_Hr(
                retaddr,
                (void *)0xA9,
                (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
                (const char *)(unsigned int)Taskbar);
          }
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0xAC,
            (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
            v16);
          v3 = this;
          v14 = v19[0];
        }
        if ( v14 )
        {
          v19[0] = 0LL;
          (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v14 + 16LL))(v14);
        }
        ++v22;
        ObjectArrayAdapter<IImmersiveMonitor>::Iterator::GetCurrentObject(&v22);
      }
      v10 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v12 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v13 = v32;
      if ( v32 )
      {
        v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB0,
                           (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
                           v4);
  }
  return result;
}
