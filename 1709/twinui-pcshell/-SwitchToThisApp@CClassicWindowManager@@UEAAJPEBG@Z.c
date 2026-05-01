/*
 * XREFs of ?SwitchToThisApp@CClassicWindowManager@@UEAAJPEBG@Z @ 0x180038130
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x18002BF78 (-GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CClassicWindowManager::SwitchToThisApp(CClassicWindowManager *this, const unsigned __int16 *a2)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  __int64 v6; // rbx
  int v7; // r14d
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  HWND v11; // rdx
  CApplicationManagerUtility *LastActiveVisiblePopupOrSelf; // rax
  int v14; // [rsp+80h] [rbp+40h] BYREF
  __int64 v15; // [rsp+88h] [rbp+48h] BYREF
  CApplicationManagerUtility *v16; // [rsp+90h] [rbp+50h] BYREF
  __int64 v17; // [rsp+98h] [rbp+58h]

  v16 = 0LL;
  v14 = 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v17 = 0LL;
  while ( 1 )
  {
    v4 = 0LL;
    v5 = 0LL;
    if ( *((_QWORD *)this + 14) )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v5);
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        v15 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v6)(
               v6,
               &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
               &v15) >= 0
          && (*(unsigned __int8 (__fastcall **)(__int64, const unsigned __int16 *))(*(_QWORD *)v15 + 184LL))(v15, a2) )
        {
          v7 = 0;
        }
        else
        {
          v7 = -1;
        }
        v8 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        if ( !v7 )
          break;
        if ( (unsigned __int64)++v5 >= *((_QWORD *)this + 14) )
          goto LABEL_15;
      }
      v4 = v5;
      v9 = 0;
    }
    else
    {
LABEL_15:
      v9 = -2147319765;
    }
    if ( v9 < 0 )
      break;
    v10 = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v4);
    v9 = (*(__int64 (__fastcall **)(__int64, CApplicationManagerUtility **, int *))(*(_QWORD *)v10 + 40LL))(
           v10,
           &v16,
           &v14);
    if ( v9 < 0 || v14 )
      break;
    (*(void (__fastcall **)(char *, CApplicationManagerUtility *))(*((_QWORD *)this - 2) + 72LL))(
      (char *)this - 16,
      v16);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v9 >= 0 )
  {
    LastActiveVisiblePopupOrSelf = CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(v16, v11);
    SwitchToThisWindow((HWND)LastActiveVisiblePopupOrSelf, 1);
  }
  return (unsigned int)v9;
}
