/*
 * XREFs of NtUserIsClipboardFormatAvailable @ 0x1C00AF810
 * Callers:
 *     <none>
 * Callees:
 *     FindClipFormat @ 0x1C00AF864 (FindClipFormat.c)
 *     CheckClipboardAccess @ 0x1C00AF8CC (CheckClipboardAccess.c)
 */

__int64 __fastcall NtUserIsClipboardFormatAvailable(unsigned int a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx

  EnterSharedCrit(0LL, 1LL);
  v2 = CheckClipboardAccess();
  v7 = 0LL;
  if ( v2 )
    LOBYTE(v7) = FindClipFormat(v2, a1, 1LL) != 0;
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
