/*
 * XREFs of NtUserShutdownBlockReasonCreate @ 0x1C0015BE0
 * Callers:
 *     <none>
 * Callees:
 *     _GetAncestor @ 0x1C00178E0 (_GetAncestor.c)
 *     RtlStringCchCopyW @ 0x1C003767C (RtlStringCchCopyW.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C005F3F8 (InternalRemoveProp.c)
 *     QueueShutdownData @ 0x1C013B038 (QueueShutdownData.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonCreate(__int64 a1, volatile void *a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 CurrentProcessWin32Process; // rax
  wchar_t *v12; // rax
  wchar_t *v13; // rdi
  __int64 v14; // rax
  unsigned __int16 v15; // r11
  __int64 v17; // rcx

  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v10 = 0LL;
  if ( !v7 )
    goto LABEL_15;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5);
  v6 = *(_QWORD *)(v7 + 16);
  if ( *(_QWORD *)(v6 + 376) != CurrentProcessWin32Process )
  {
    v10 = 5LL;
    goto LABEL_15;
  }
  if ( v7 != GetAncestor(v7, 2LL, v8, v9) || a3 > 0x101 )
  {
    v17 = 87LL;
LABEL_20:
    UserSetLastError(v17);
    goto LABEL_15;
  }
  v12 = (wchar_t *)Win32AllocPool(2LL * (a3 + 1), 1919054677LL);
  v13 = v12;
  if ( !v12 )
  {
    v17 = 8LL;
    goto LABEL_20;
  }
  if ( a3 )
  {
    ProbeForRead(a2, 2LL * (a3 + 1), 2u);
    RtlStringCchCopyW(v13, a3 + 1, (NTSTRSAFE_PCWSTR)a2);
  }
  else
  {
    *v12 = 0;
  }
  v14 = InternalRemoveProp(v7, (unsigned __int16)gatomShutdownBlockingReason, 1LL);
  if ( v14 )
  {
    Win32FreePool(v14);
    v15 = gatomShutdownBlockingReason;
  }
  if ( (unsigned int)InternalSetProp(v7, v15, v13, 1LL) )
  {
    if ( gptiShutdownWaiter )
      QueueShutdownData(a1, 1LL);
    v10 = 1LL;
  }
  else
  {
    Win32FreePool(v13);
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v10;
}
