/*
 * XREFs of GetHmodTableIndex @ 0x1C00E48C0
 * Callers:
 *     _RegisterUserApiHook @ 0x1C00E3CBC (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C00E3EE4 (_RegisterDManipHook.c)
 *     _SetWinEventHook @ 0x1C00E42BC (_SetWinEventHook.c)
 *     zzzSetWindowsHookEx @ 0x1C00E45A4 (zzzSetWindowsHookEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall GetHmodTableIndex(int *a1)
{
  int *v1; // r8
  int v2; // ecx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int16 v5; // ax
  int v7; // ebx
  unsigned __int16 near **v8; // rcx
  unsigned __int16 near **v9; // rcx
  int v10; // [rsp+58h] [rbp+10h]

  v1 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v1 = (int *)W32UserProbeAddress;
  v2 = *v1;
  v10 = *v1;
  v3 = *((_QWORD *)v1 + 1);
  if ( (v3 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v4 = (unsigned __int16)v2 + v3 + 2;
  if ( v4 >= W32UserProbeAddress || (unsigned __int16)v2 > HIWORD(v10) || (v2 & 1) != 0 || v4 <= v3 )
    *W32UserProbeAddress = 0;
  v5 = UserAddAtomToAtomTableEx(UserLibmgmtAtomTableHandle, v3, 0LL, 2LL);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  v7 = 0;
  if ( catomSysTableEntries > 0 )
  {
    v8 = &aatomSysLoaded;
    do
    {
      if ( *(_WORD *)v8 == v5 )
        break;
      ++v7;
      v8 = (unsigned __int16 near **)((char *)v8 + 2);
    }
    while ( v7 < catomSysTableEntries );
  }
  if ( v7 == catomSysTableEntries )
  {
    v7 = 0;
    if ( catomSysTableEntries > 0 )
    {
      v9 = &aatomSysLoaded;
      do
      {
        if ( !*(_WORD *)v9 )
          break;
        ++v7;
        v9 = (unsigned __int16 near **)((char *)v9 + 2);
      }
      while ( v7 < catomSysTableEntries );
    }
    if ( v7 == catomSysTableEntries )
    {
      if ( v7 == 32 )
      {
        UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v5, &aatomSysLoaded);
        UserSetLastError(8LL);
        return 0xFFFFFFFFLL;
      }
      ++catomSysTableEntries;
    }
    *((_WORD *)&aatomSysLoaded + v7) = v5;
    *((_DWORD *)&acatomSysUse + v7) = 0;
    *((_DWORD *)&acatomSysDepends + v7) = 0;
  }
  else
  {
    UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v5, &aatomSysLoaded);
  }
  return (unsigned int)v7;
}
