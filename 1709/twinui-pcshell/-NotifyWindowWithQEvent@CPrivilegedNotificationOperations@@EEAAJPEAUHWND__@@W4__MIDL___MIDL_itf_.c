/*
 * XREFs of ?NotifyWindowWithQEvent@CPrivilegedNotificationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001@@_K_J@Z @ 0x1800F26D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800F20F0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     _Init_thread_footer @ 0x1801E2048 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801E20A8 (_Init_thread_header.c)
 */

__int64 __fastcall CPrivilegedNotificationOperations::NotifyWindowWithQEvent(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rsi
  RTL_SRWLOCK *v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // ebx
  signed int LastError; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v15; // [rsp+40h] [rbp+8h] BYREF

  v8 = a3;
  if ( __TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) )
  {
    Init_thread_header(&__TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA);
    if ( __TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA == -1 )
    {
      `CPrivilegedNotificationOperations::NotifyWindowWithQEvent'::`2'::WM_SHELLAPPACTIVATE = RegisterWindowMessageW(
                                                                                                L"{9993b795-bae5-4752-a837-faa5985c808d}");
      dword_1802B8FB4 = `CPrivilegedNotificationOperations::NotifyWindowWithQEvent'::`2'::WM_SHELLAPPACTIVATE;
      Init_thread_footer(&__TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA);
    }
  }
  v9 = *(RTL_SRWLOCK **)(a1 + 56);
  v10 = a5 | 0x10;
  v15 = v9;
  if ( (_DWORD)v8 )
    v10 = a5;
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&v9[5].Ptr + 1);
    v9 = v15;
  }
  AcquireSRWLockExclusive(v9 + 7);
  EnableIAMAccess(v9[6].Ptr, 1LL);
  if ( (unsigned int)SendEventMessage(a2, dword_1802B8F9C[2 * v8], a4, v10) )
  {
    v11 = 0;
  }
  else
  {
    LastError = GetLastError();
    v11 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v11 = LastError;
    if ( (v11 & 0x80000000) == 0 )
      v11 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12B,
      (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)v11);
  }
  IamAccess::SyncIamAccess::~SyncIamAccess(&v15);
  return v11;
}
