/*
 * XREFs of NtUserShutdownBlockReasonCreate @ 0x1C0113800
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 *     RtlStringCchCopyW @ 0x1C009DD08 (RtlStringCchCopyW.c)
 *     _GetAncestor @ 0x1C0113990 (_GetAncestor.c)
 *     QueueShutdownData @ 0x1C0141F74 (QueueShutdownData.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonCreate(__int64 a1, volatile void *a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  wchar_t *v11; // rax
  wchar_t *v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v18; // rcx

  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v8 = 0LL;
  if ( !v7 )
    goto LABEL_15;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  v6 = *(_QWORD *)(v7 + 16);
  if ( *(_QWORD *)(v6 + 400) != CurrentProcessWin32Process )
  {
    v8 = 5LL;
    goto LABEL_15;
  }
  if ( v7 != GetAncestor(v7, 2LL) || a3 > 0x101 )
  {
    v18 = 87LL;
LABEL_20:
    UserSetLastError(v18, v10);
    goto LABEL_15;
  }
  v11 = (wchar_t *)Win32AllocPool(2LL * (a3 + 1), 1919054677LL);
  v12 = v11;
  if ( !v11 )
  {
    v18 = 8LL;
    goto LABEL_20;
  }
  if ( a3 )
  {
    ProbeForRead(a2, 2LL * (a3 + 1), 2u);
    RtlStringCchCopyW(v12, a3 + 1, (NTSTRSAFE_PCWSTR)a2);
  }
  else
  {
    *v11 = 0;
  }
  v13 = InternalRemoveProp(v7, (unsigned __int16)gatomShutdownBlockingReason, 1LL);
  if ( v13 )
    Win32FreePool(v13, v14, v15);
  if ( (unsigned int)InternalSetProp(v7, (unsigned __int16)gatomShutdownBlockingReason, (__int64)v12, 1) )
  {
    if ( gptiShutdownWaiter )
      QueueShutdownData(a1, 1LL);
    v8 = 1LL;
  }
  else
  {
    Win32FreePool(v12, v5, v16);
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v8;
}
