/*
 * XREFs of NtUserNotifyProcessCreate @ 0x1C001A9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C001AA68 (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 */

__int64 __fastcall NtUserNotifyProcessCreate(unsigned int a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx

  EnterCrit(0LL, 1LL);
  if ( PsGetCurrentProcess(v8) == gpepCSRSS )
    v13 = xxxUserNotifyProcessCreate(a1, a2, a3, a4);
  else
    v13 = -1073741790;
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
