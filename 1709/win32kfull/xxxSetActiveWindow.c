/*
 * XREFs of xxxSetActiveWindow @ 0x1C00C8C60
 * Callers:
 *     NtUserSetActiveWindow @ 0x1C00C8BC0 (NtUserSetActiveWindow.c)
 *     xxxActivateEnabledPopup @ 0x1C020F3C8 (xxxActivateEnabledPopup.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     xxxActivateWindow @ 0x1C00CB624 (xxxActivateWindow.c)
 */

__int64 __fastcall xxxSetActiveWindow(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 *v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = 0LL;
  if ( a1 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) != *(_QWORD *)(gptiCurrent + 408LL) )
    return 0LL;
  v2 = *(unsigned __int64 **)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL);
  if ( v2 )
    v1 = *v2;
  xxxActivateWindow((struct tagWND *)a1);
  LOBYTE(v3) = 1;
  return HMValidateHandleNoSecure(v1, v3, v4, v5);
}
