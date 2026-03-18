/*
 * XREFs of xxxSetActiveWindow @ 0x1C00B2D78
 * Callers:
 *     NtUserSetActiveWindow @ 0x1C00B2CE0 (NtUserSetActiveWindow.c)
 *     xxxActivateEnabledPopup @ 0x1C020DBAC (xxxActivateEnabledPopup.c)
 * Callees:
 *     xxxActivateWindow @ 0x1C00B3994 (xxxActivateWindow.c)
 */

__int64 __fastcall xxxSetActiveWindow(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 *v2; // rdx

  v1 = 0LL;
  if ( a1 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) != *(_QWORD *)(gptiCurrent + 384LL) )
    return 0LL;
  v2 = *(unsigned __int64 **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
  if ( v2 )
    v1 = *v2;
  xxxActivateWindow((struct tagWND *)a1);
  return HMValidateHandleNoSecure(v1, 1);
}
