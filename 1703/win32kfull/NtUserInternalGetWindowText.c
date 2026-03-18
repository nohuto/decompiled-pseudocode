/*
 * XREFs of NtUserInternalGetWindowText @ 0x1C00E1480
 * Callers:
 *     <none>
 * Callees:
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00E1584 (DesktopVerifyHeapLargeUnicodeString.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall NtUserInternalGetWindowText(__int64 a1, _WORD *a2, int a3)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  unsigned int v12; // esi
  unsigned int v13; // eax
  __int64 v14; // rdi

  v3 = a3;
  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = v6;
  v12 = 0;
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 240) )
      DesktopVerifyHeapLargeUnicodeString(*(_QWORD *)(v6 + 24), v6 + 232);
    if ( (_DWORD)v3 )
    {
      if ( v3 > 0x7FFFFFFFFFFFFFFFLL )
        ExRaiseAccessViolation();
      ProbeForWrite(a2, 2 * v3, 2u);
      *a2 = 0;
      if ( *(_DWORD *)(v11 + 232) )
      {
        v13 = *(_DWORD *)(v11 + 232) >> 1;
        v14 = (unsigned int)(v3 - 1);
        if ( v13 < (unsigned int)v14 )
          v14 = v13;
        memmove(a2, *(const void **)(v11 + 240), 2 * v14);
        a2[v14] = 0;
        v12 = v14;
      }
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v12;
}
