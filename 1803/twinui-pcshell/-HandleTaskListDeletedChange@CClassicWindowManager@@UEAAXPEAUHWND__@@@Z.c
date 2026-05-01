/*
 * XREFs of ?HandleTaskListDeletedChange@CClassicWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x1800063F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180006D44 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ??_GCClassicWindow@@MEAAPEAXI@Z @ 0x180007D60 (--_GCClassicWindow@@MEAAPEAXI@Z.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CClassicWindowManager::HandleTaskListDeletedChange(CClassicWindowManager *this, HWND a2)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rdi
  HWND *v6; // rbx
  __int64 (__fastcall *v7)(HWND *, GUID *, HWND **); // rax
  volatile int *v8; // rdx
  HWND *v9; // r10
  bool (__fastcall *v10)(CClassicWindow *__hidden, HWND); // rax
  bool v11; // al
  int v12; // esi
  void (__fastcall *v13)(struct Microsoft::WRL::Details::ModuleBase *, volatile int *); // rax
  CClassicWindow *v14; // r10
  void *(__fastcall *v15)(CClassicWindow *__hidden, unsigned int); // rax
  struct Microsoft::WRL::Details::ModuleBase *v16; // rcx
  int v17; // eax
  int (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int PropW; // eax
  __int64 v20; // r8
  __int64 v21; // rcx
  HWND *v22; // [rsp+80h] [rbp+8h] BYREF
  __int64 v23; // [rsp+88h] [rbp+10h] BYREF
  __int64 v24; // [rsp+90h] [rbp+18h]
  __int64 v25; // [rsp+98h] [rbp+20h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v23 = 0LL;
  v24 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( *((_QWORD *)this + 11) )
  {
    v25 = 0LL;
    do
    {
      v6 = *(HWND **)(*((_QWORD *)this + 10) + 8 * v5);
      if ( v6 )
        (*((void (__fastcall **)(HWND *))*v6 + 1))(v6);
      v22 = 0LL;
      v7 = *(__int64 (__fastcall **)(HWND *, GUID *, HWND **))*v6;
      if ( (char *)v7 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::QueryInterface )
      {
        v22 = v6;
        (*((void (__fastcall **)(HWND *))*v6 + 1))(v6);
      }
      else if ( (int)v7(v6, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v22) < 0 )
      {
        v9 = v22;
        goto LABEL_14;
      }
      v9 = v22;
      v10 = (bool (__fastcall *)(CClassicWindow *__hidden, HWND))*((_QWORD *)*v22 + 24);
      if ( v10 == CClassicWindow::IsEqualByHWND )
      {
        v11 = a2 == v22[2];
      }
      else
      {
        v11 = v10((CClassicWindow *)v22, a2);
        v9 = v22;
      }
      if ( v11 )
      {
        v12 = 0;
        goto LABEL_15;
      }
LABEL_14:
      v12 = -1;
LABEL_15:
      if ( !v9 )
        goto LABEL_26;
      v22 = 0LL;
      v13 = (void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *, volatile int *))*((_QWORD *)*v9 + 2);
      if ( (char *)v13 != (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release )
      {
        v16 = (struct Microsoft::WRL::Details::ModuleBase *)v9;
LABEL_25:
        v13(v16, v8);
        goto LABEL_26;
      }
      if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)v9 + 12), v8) )
      {
        v15 = *(void *(__fastcall **)(CClassicWindow *__hidden, unsigned int))(*(_QWORD *)v14 + 216LL);
        if ( v15 == CClassicWindow::`scalar deleting destructor' )
          CClassicWindow::`scalar deleting destructor'(v14, 1u);
        else
          v15(v14, 1u);
        v16 = Microsoft::WRL::Details::ModuleBase::module_;
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
        {
          v13 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, volatile int *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
          v8 = (volatile int *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount;
          if ( (char *)v13 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
          {
            Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
            goto LABEL_26;
          }
          goto LABEL_25;
        }
      }
LABEL_26:
      (*((void (__fastcall **)(HWND *))*v6 + 2))(v6);
      if ( !v12 )
      {
        v4 = v5;
        v17 = 0;
        goto LABEL_29;
      }
      ++v5;
    }
    while ( v5 < *((_QWORD *)this + 11) );
  }
  v17 = -2147319765;
LABEL_29:
  if ( v17 >= 0 )
  {
    v18 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 10) + 8 * v4);
    if ( (**v18)(v18, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v23) >= 0 )
    {
      PropW = (unsigned int)GetPropW(a2, L"ITaskList_Deleted");
      v20 = 512LL;
      if ( !PropW )
        v20 = 1024LL;
      CClassicWindowManager::_ChangeWindowType((char *)this - 112, v23, v20);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v21 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
}
