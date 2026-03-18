/*
 * XREFs of _OpenClipboard @ 0x1C00C6198
 * Callers:
 *     NtUserOpenClipboard @ 0x1C00C5F10 (NtUserOpenClipboard.c)
 *     xxxSnapWindow @ 0x1C013F298 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00C6624 (CheckClipboardAccess.c)
 */

__int64 __fastcall OpenClipboard(__int64 a1, int *a2)
{
  int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a1 && *(char *)(a1 + 59) < 0 )
  {
    v10 = 87LL;
LABEL_18:
    UserSetLastError(v10, (__int64)a2);
    return 0LL;
  }
  v5 = CheckClipboardAccess();
  v6 = v5;
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 64);
    if ( a1 == v7 )
    {
      if ( gptiCurrent == *(_QWORD *)(v6 + 48) )
        return 1LL;
      if ( a1 == v7 )
        goto LABEL_8;
    }
    if ( !*(_QWORD *)(v6 + 48) )
    {
LABEL_8:
      v11[0] = v6 + 64;
      v11[1] = a1;
      HMAssignmentLock(v11);
      *(_QWORD *)(v6 + 48) = gptiCurrent;
      if ( a2 )
      {
        v8 = *(_QWORD *)(v6 + 80);
        if ( !v8 || *(_QWORD *)(gptiCurrent + 400LL) != *(_QWORD *)(*(_QWORD *)(v8 + 16) + 400LL) )
          v2 = 1;
        *a2 = v2;
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 680LL) = *(_DWORD *)(v6 + 108);
      }
      return 1LL;
    }
    v10 = 5LL;
    goto LABEL_18;
  }
  return 0LL;
}
