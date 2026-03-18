/*
 * XREFs of NtUserGetClipboardViewer @ 0x1C01D86A0
 * Callers:
 *     <none>
 * Callees:
 *     CheckClipboardAccess @ 0x1C00AF8CC (CheckClipboardAccess.c)
 */

__int64 NtUserGetClipboardViewer()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 *v6; // rax

  EnterSharedCrit(0LL, 1LL);
  v0 = CheckClipboardAccess();
  v5 = 0LL;
  if ( v0 )
  {
    v6 = *(__int64 **)(v0 + 72);
    if ( v6 )
      v5 = *v6;
  }
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v5;
}
