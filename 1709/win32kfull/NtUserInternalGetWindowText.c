/*
 * XREFs of NtUserInternalGetWindowText @ 0x1C00F3F30
 * Callers:
 *     <none>
 * Callees:
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00F4038 (DesktopVerifyHeapLargeUnicodeString.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtUserInternalGetWindowText(__int64 a1, _WORD *a2, int a3)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r14
  unsigned int v10; // esi
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rbx

  v3 = a3;
  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = v6;
  v10 = 0;
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
      if ( *(_DWORD *)(v9 + 232) )
      {
        v11 = *(_DWORD *)(v9 + 232) >> 1;
        if ( (unsigned int)v11 >= (int)v3 - 1 )
          v11 = (unsigned int)(v3 - 1);
        v12 = v11;
        v13 = v11;
        memmove(a2, *(const void **)(v9 + 240), 2 * v11);
        a2[v13] = 0;
        v10 = v12;
      }
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v10;
}
