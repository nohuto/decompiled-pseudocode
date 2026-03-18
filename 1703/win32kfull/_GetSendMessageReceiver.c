/*
 * XREFs of _GetSendMessageReceiver @ 0x1C01E6B90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall GetSendMessageReceiver(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  int v8; // eax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax

  v1 = PtiFromThreadId(a1);
  v2 = v1;
  if ( !v1 || (v3 = *(_QWORD *)(gptiCurrent + 408LL), *(_QWORD *)(v1 + 408) != v3) )
  {
    v11 = 87LL;
    goto LABEL_22;
  }
  v4 = *(_QWORD *)(v1 + 376);
  v5 = *(_QWORD *)(gptiCurrent + 376LL);
  if ( gbEnforceUIPI )
  {
    v6 = *(_QWORD *)(v4 + 824);
    v7 = *(_QWORD *)(v5 + 824);
    if ( (unsigned int)v7 > (unsigned int)v6
      || (_DWORD)v7 == (_DWORD)v6
      && ((v9 = HIDWORD(v7), v10 = HIDWORD(v6), (_DWORD)v9 == (_DWORD)v10) || (_DWORD)v9 == -1 || (_DWORD)v10 == -1) )
    {
      v8 = 1;
      goto LABEL_14;
    }
  }
  else if ( *(_DWORD *)(v5 + 732) == *(_DWORD *)(v4 + 732) && *(_DWORD *)(v5 + 736) == *(_DWORD *)(v4 + 736) )
  {
    goto LABEL_17;
  }
  v8 = 0;
LABEL_14:
  if ( v8 )
  {
LABEL_17:
    v12 = *(_QWORD *)(v2 + 456);
    if ( !v12 )
      return 0LL;
    result = *(_QWORD *)(v12 + 112);
    if ( !result )
      return 0LL;
    if ( *(_QWORD *)(*(_QWORD *)(result + 16) + 408LL) == v3 )
      return result;
    goto LABEL_16;
  }
  EtwTraceUIPIMsgError(v5, v4, 0LL, 0LL, 0LL);
LABEL_16:
  v11 = 5LL;
LABEL_22:
  UserSetLastError(v11);
  return 0LL;
}
