/*
 * XREFs of NtUserGetIconSize @ 0x1C00F47F0
 * Callers:
 *     <none>
 * Callees:
 *     GetAnimatedCursorFrame @ 0x1C00465D8 (GetAnimatedCursorFrame.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     _GetIconSize @ 0x1C0048BA8 (_GetIconSize.c)
 *     FindSystemDpiCursorSize @ 0x1C0049920 (FindSystemDpiCursorSize.c)
 */

__int64 __fastcall NtUserGetIconSize(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 SystemDpiCursorSize; // rax
  int v16; // [rsp+20h] [rbp-28h] BYREF
  int v17; // [rsp+24h] [rbp-24h] BYREF
  int v18; // [rsp+28h] [rbp-20h]

  v8 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  EnterSharedCrit(0LL, 1LL);
  v9 = HMValidateHandle(a1, 3);
  if ( v9 )
  {
    SystemDpiCursorSize = FindSystemDpiCursorSize(v9);
    if ( (*(_DWORD *)(SystemDpiCursorSize + 80) & 8) == 0
      || (SystemDpiCursorSize = GetAnimatedCursorFrame(SystemDpiCursorSize, a2)) != 0 )
    {
      GetIconSize(SystemDpiCursorSize, &v16, &v17);
      v11 = W32UserProbeAddress;
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        a3 = (_DWORD *)W32UserProbeAddress;
      *a3 = v16;
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (_DWORD *)W32UserProbeAddress;
      *a4 = v17;
      v8 = 1;
      v18 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v8;
}
