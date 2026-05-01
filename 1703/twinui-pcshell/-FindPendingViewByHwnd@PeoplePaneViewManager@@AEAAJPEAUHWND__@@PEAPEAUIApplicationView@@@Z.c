/*
 * XREFs of ?FindPendingViewByHwnd@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1800EA350
 * Callers:
 *     ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1800EA098 (-HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PeoplePaneViewManager::FindPendingViewByHwnd(
        RTL_SRWLOCK *this,
        HWND a2,
        struct IApplicationView **a3)
{
  _QWORD *Ptr; // rdi
  _QWORD *v7; // rsi
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // r14
  HWND v9; // r15
  int (__fastcall **v10)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v11; // rax
  int v12; // eax
  _QWORD *v13; // rbx
  __int64 v14; // r14
  __int64 *v15; // rax
  int v16; // eax
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v24; // [rsp+30h] [rbp-20h] BYREF
  HWND v25; // [rsp+38h] [rbp-18h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v28; // [rsp+90h] [rbp+40h] BYREF
  _QWORD *v29; // [rsp+A8h] [rbp+58h] BYREF

  SRWLock[1] = (PSRWLOCK)-2LL;
  wil::srwlock::lock_exclusive(this + 16, SRWLock);
  Ptr = this[17].Ptr;
  v7 = this[18].Ptr;
  while ( 1 )
  {
    if ( Ptr == v7 )
    {
      v22 = -2147023728;
      goto LABEL_24;
    }
    v8 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*Ptr;
    v9 = 0LL;
    v24 = 0LL;
    v10 = *v8;
    v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v24);
    if ( (*v10)(v8, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, v11) >= 0 )
    {
      v29 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v24 + 24LL))(v24, &v29);
      if ( v12 >= 0 )
      {
        v28 = 0LL;
        v13 = v29;
        v14 = *v29;
        v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v28);
        v16 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, GUID *, __int64 *))(v14 + 24))(
                v13,
                0LL,
                &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                v15);
        if ( v16 >= 0 )
        {
          v17 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v28 + 32LL))(v28, &v25);
          v18 = v17;
          if ( v17 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x2DF,
              (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
              (const char *)(unsigned int)v17);
          v9 = 0LL;
          if ( v18 >= 0 )
            v9 = v25;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2DC,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v16);
        }
        v19 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2D9,
          (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v12);
      }
      v20 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      }
    }
    v21 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    if ( v9 == a2 )
      break;
    ++Ptr;
  }
  if ( *Ptr )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*Ptr + 8LL))(*Ptr);
  *a3 = (struct IApplicationView *)*Ptr;
  v22 = 0;
LABEL_24:
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  return v22;
}
