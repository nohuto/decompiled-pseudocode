/*
 * XREFs of ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C001AA68
 * Callers:
 *     NtUserNotifyProcessCreate @ 0x1C001A9F0 (NtUserNotifyProcessCreate.c)
 * Callees:
 *     LockThreadByClientId @ 0x1C001AB48 (LockThreadByClientId.c)
 *     LockProcessByClientId @ 0x1C001BB38 (LockProcessByClientId.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUserNotifyProcessCreate(int a1, int a2, __int64 a3, int a4)
{
  int v4; // r11d
  char v5; // bl
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 ProcessWin32Process; // rax
  __int64 v14; // rbx
  struct _KEVENT *v15; // rcx
  __int64 v16; // rax
  PVOID v17; // [rsp+20h] [rbp-18h] BYREF
  PVOID Object[2]; // [rsp+28h] [rbp-10h] BYREF

  v4 = `GiveForegroundActivateRight'::`2'::index;
  v5 = a4;
  v8 = a2;
  ghCanActivateForegroundPIDs[`GiveForegroundActivateRight'::`2'::index] = a1;
  `GiveForegroundActivateRight'::`2'::index = v4 + 1;
  if ( v4 == 4 )
    `GiveForegroundActivateRight'::`2'::index = 0;
  if ( (a4 & 0xB) != 0 )
  {
    result = LockProcessByClientId(a1, Object);
    if ( (int)result >= 0 )
    {
      xxxSetProcessInitState(Object[0], (v5 & 1) != 0 ? 64 : 128);
      if ( (v5 & 8) != 0 )
      {
        ProcessWin32Process = PsGetProcessWin32Process(Object[0]);
        if ( ProcessWin32Process )
          *(_DWORD *)(ProcessWin32Process + 12) |= 8u;
      }
      ObfDereferenceObject(Object[0]);
      result = LockThreadByClientId(v8, &v17);
      if ( (int)result >= 0 )
      {
        W32GetThreadWin32Thread(v17, v10, v11, v12);
LABEL_11:
        ObfDereferenceObject(v17);
        return 0LL;
      }
    }
  }
  else
  {
    if ( a4 != 4 )
      return 0LL;
    v14 = gpwtiFirst;
    if ( !gpwtiFirst )
      goto LABEL_22;
    do
    {
      if ( *(_DWORD *)(v14 + 8) == a1 )
        break;
      v14 = *(_QWORD *)v14;
    }
    while ( v14 );
    if ( v14 )
    {
      v15 = *(struct _KEVENT **)(v14 + 32);
      if ( v15 == (struct _KEVENT *)-1LL )
      {
        *(_QWORD *)(v14 + 32) = 0LL;
      }
      else if ( v15 )
      {
        KeClearEvent(v15);
      }
    }
    else
    {
LABEL_22:
      v16 = Win32AllocPoolWithQuota(48LL, 1953985365LL);
      v14 = v16;
      if ( !v16 )
        return 3221225495LL;
      *(_QWORD *)(v16 + 32) = 0LL;
      *(_DWORD *)(v16 + 8) = a1;
      *(_DWORD *)(v16 + 40) = 0;
      *(_QWORD *)v16 = gpwtiFirst;
      gpwtiFirst = v16;
    }
    *(_QWORD *)(v14 + 16) = a3;
    result = LockThreadByClientId(v8, &v17);
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(v14 + 24) = (unsigned int)PsGetThreadProcessId((PETHREAD)v17);
      goto LABEL_11;
    }
  }
  return result;
}
