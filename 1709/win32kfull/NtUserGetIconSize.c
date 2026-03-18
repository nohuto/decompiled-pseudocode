/*
 * XREFs of NtUserGetIconSize @ 0x1C009CA30
 * Callers:
 *     <none>
 * Callees:
 *     GetAnimatedCursorFrame @ 0x1C0089978 (GetAnimatedCursorFrame.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     FindSystemDpiCursorSize @ 0x1C00992C0 (FindSystemDpiCursorSize.c)
 *     _GetIconSize @ 0x1C009B6FC (_GetIconSize.c)
 */

__int64 __fastcall NtUserGetIconSize(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  ULONG64 v14; // rcx
  __int64 SystemDpiCursorSize; // rax
  int v17; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v18[9]; // [rsp+24h] [rbp-24h] BYREF

  v8 = 0;
  v17 = 0;
  v18[0] = 0;
  EnterSharedCrit(0LL, 1LL);
  LOBYTE(v9) = 3;
  v12 = HMValidateHandle(a1, v9, v10, v11);
  if ( v12 )
  {
    SystemDpiCursorSize = FindSystemDpiCursorSize(v12);
    if ( (*(_DWORD *)(SystemDpiCursorSize + 80) & 8) == 0
      || (SystemDpiCursorSize = GetAnimatedCursorFrame(SystemDpiCursorSize, a2)) != 0 )
    {
      GetIconSize(SystemDpiCursorSize, &v17, v18);
      v14 = MmUserProbeAddress;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_DWORD *)MmUserProbeAddress;
      *a3 = v17;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v18[0];
      v8 = 1;
      v18[1] = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v14, v13);
  return v8;
}
