/*
 * XREFs of ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C00C9068
 * Callers:
 *     NtUserSetClipboardData @ 0x1C00C5C00 (NtUserSetClipboardData.c)
 *     NtUserOpenClipboard @ 0x1C00C5F10 (NtUserOpenClipboard.c)
 *     InForegroundQueue @ 0x1C00CB420 (InForegroundQueue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ForegroundInputOwnerMatch(const struct tagTHREADINFO *a1, int a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  _BOOL8 result; // rax

  v3 = *(_QWORD *)(gpqForeground + 96LL);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 400);
  v4 = *(_QWORD *)(gpqForeground + 88LL);
  if ( v4 )
    v4 = *(_QWORD *)(v4 + 400);
  v5 = *((_QWORD *)a1 + 50);
  result = 1;
  if ( v3 != v5 && v4 != v5 )
  {
    v6 = *(_DWORD *)(v5 + 836);
    if ( !a2 || !v6 )
      return 0;
    if ( *(_DWORD *)(gpqForeground + 424LL) != v6
      && (!v3 || *(_DWORD *)(v3 + 836) != v6)
      && (!v4 || *(_DWORD *)(v4 + 836) != v6) )
    {
      return 0;
    }
  }
  return result;
}
