/*
 * XREFs of ?GetAdjacentDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4FocusNavigationDirection@Input@Xaml@UI@6@PEAPEAU23456@@Z @ 0x1801B80C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualDesktopController::GetAdjacentDesktop(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3,
        _QWORD *a4)
{
  RTL_SRWLOCK *v8; // r15
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 (__fastcall **v11)(_QWORD, GUID *, __int64 *); // rdi
  __int64 *v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rdx
  __int64 v26; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v27[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v29; // [rsp+90h] [rbp+40h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+58h] BYREF

  v27[1] = -2LL;
  *a4 = 0LL;
  v8 = (RTL_SRWLOCK *)(a1 + 104);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 104));
  v27[2] = v8;
  if ( !*(_QWORD *)(a1 + 80) )
  {
    v9 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBB,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_38;
  }
  v10 = 0LL;
  v27[0] = 0LL;
  if ( a2 )
  {
    v29 = 0LL;
    v11 = *a2;
    v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v29);
    v13 = (*v11)(a2, &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2, v12);
    v9 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xC1,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)v13);
      v14 = v29;
      if ( !v29 )
        goto LABEL_36;
      v29 = 0LL;
      goto LABEL_35;
    }
    v15 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 24LL))(v29, &v26);
    v10 = 0LL;
    if ( v27 != v15 )
    {
      v10 = *v15;
      *v15 = 0LL;
    }
    v27[0] = v10;
    v16 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  if ( a3 )
  {
    v18 = a3 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 == 1 )
              v22 = 4LL;
            else
              v22 = 0LL;
          }
          else
          {
            v22 = 3LL;
          }
        }
        else
        {
          v22 = 2LL;
        }
      }
      else
      {
        v22 = 1LL;
      }
    }
    else
    {
      v22 = 6LL;
    }
  }
  else
  {
    v22 = 5LL;
  }
  v30 = 0LL;
  v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)(a1 + 80) + 64LL))(
          *(_QWORD *)(a1 + 80),
          v10,
          v22,
          &v30);
  v9 = v23;
  if ( v23 >= 0 )
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(**(_QWORD **)(a1 + 96) + 24LL))(
            *(_QWORD *)(a1 + 96),
            v30,
            a4);
    v9 = v23;
    if ( v23 >= 0 )
      goto LABEL_33;
    v24 = 211LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v23);
    goto LABEL_33;
  }
  if ( v23 != -2147316575 )
  {
    v24 = 208LL;
    goto LABEL_32;
  }
  v9 = 0;
LABEL_33:
  v14 = v30;
  if ( !v30 )
    goto LABEL_36;
  v30 = 0LL;
LABEL_35:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
LABEL_36:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_38:
  if ( v8 )
    ReleaseSRWLockShared(v8);
  return v9;
}
