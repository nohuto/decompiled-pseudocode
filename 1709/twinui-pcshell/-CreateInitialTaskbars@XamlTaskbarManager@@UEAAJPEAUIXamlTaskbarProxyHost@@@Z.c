/*
 * XREFs of ?CreateInitialTaskbars@XamlTaskbarManager@@UEAAJPEAUIXamlTaskbarProxyHost@@@Z @ 0x18014B120
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18014AF78 (-CreateTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@AEAAXXZ @ 0x18014BD4C (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall XamlTaskbarManager::CreateInitialTaskbars(RTL_SRWLOCK *this, struct IXamlTaskbarProxyHost *a2)
{
  RTL_SRWLOCK *v3; // r14
  RTL_SRWLOCK *v4; // rdi
  const char *v5; // r9
  __int64 result; // rax
  PVOID Ptr; // rcx
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  struct IImmersiveMonitor *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct IImmersiveMonitor *v15; // rbx
  int v16; // eax
  const char *v17; // r9
  int Taskbar; // eax
  int v19[2]; // [rsp+20h] [rbp-78h]
  struct IImmersiveMonitor *v21; // [rsp+28h] [rbp-70h]
  __int64 v23; // [rsp+38h] [rbp-60h] BYREF
  int v24; // [rsp+40h] [rbp-58h] BYREF
  int v25; // [rsp+48h] [rbp-50h] BYREF
  struct IImmersiveMonitor *v26; // [rsp+50h] [rbp-48h]
  __int64 *v27; // [rsp+58h] [rbp-40h]
  int v28; // [rsp+60h] [rbp-38h] BYREF
  __int64 v29; // [rsp+68h] [rbp-30h]
  __int64 *v30; // [rsp+70h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v34; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+20h] BYREF

  v3 = this;
  try
  {
    v4 = this + 35;
    AcquireSRWLockExclusive(this + 35);
    *(_QWORD *)v19 = v4;
    if ( v3[9].Ptr )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
        (const char *)0x8007139FLL);
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
      result = 2147947423LL;
    }
    else if ( v3[13].Ptr )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
        (const char *)0x8007139FLL);
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
      result = 2147947423LL;
    }
    else
    {
      if ( v3[9].Ptr != a2 )
      {
        if ( a2 )
          (*(void (__fastcall **)(struct IXamlTaskbarProxyHost *))(*(_QWORD *)a2 + 8LL))(a2);
        Ptr = v3[9].Ptr;
        v3[9].Ptr = a2;
        if ( Ptr )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      }
      v35 = 0LL;
      v8 = (*(__int64 (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)v3[10].Ptr + 112LL))(v3[10].Ptr, &v35);
      if ( v8 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x9F,
          (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
          (const char *)(unsigned int)v8);
      v9 = v35;
      v23 = v35;
      if ( v35 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
      v24 = 0;
      v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 24LL))(v9, &v24);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xD,
          (__int64)"internal\\shell\\private\\inc\\objectarrayadapter.h",
          (const char *)(unsigned int)v10);
      v25 = 0;
      v26 = 0LL;
      v27 = &v23;
      ObjectArrayAdapter<IImmersiveMonitor>::Iterator::GetCurrentObject(&v25);
      v28 = v24;
      v29 = 0LL;
      v30 = &v23;
      ObjectArrayAdapter<IImmersiveMonitor>::Iterator::GetCurrentObject(&v28);
      while ( v25 != v28 || v27 != v30 )
      {
        v15 = v26;
        v21 = v26;
        if ( v26 )
          (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v26 + 8LL))(v26);
        try
        {
          v16 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)v15 + 48LL))(v15, &v34);
          if ( v16 < 0 )
            wil::details::in1diag3::_Throw_Hr(
              retaddr,
              (void *)0xA6,
              (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
              (const char *)(unsigned int)v16);
          if ( v34 )
          {
            Taskbar = XamlTaskbarManager::CreateTaskbar((XamlTaskbarManager *)v3, v15);
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
            v17);
          v3 = this;
          v4 = *(RTL_SRWLOCK **)v19;
          v15 = v21;
        }
        if ( v15 )
          (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v15 + 16LL))(v15);
        ++v25;
        ObjectArrayAdapter<IImmersiveMonitor>::Iterator::GetCurrentObject(&v25);
      }
      v11 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v12 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v13 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      v14 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB0,
                           (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
                           v5);
  }
  return result;
}
