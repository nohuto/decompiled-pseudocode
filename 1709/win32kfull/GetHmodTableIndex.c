/*
 * XREFs of GetHmodTableIndex @ 0x1C00590E8
 * Callers:
 *     zzzSetWindowsHookEx @ 0x1C005634C (zzzSetWindowsHookEx.c)
 *     _SetWinEventHook @ 0x1C0058360 (_SetWinEventHook.c)
 *     _RegisterUserApiHook @ 0x1C010B46C (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C010B6C4 (_RegisterDManipHook.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C005A10C (--0-$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall GetHmodTableIndex(ULONG64 a1)
{
  int v2; // ecx
  ULONG64 v3; // rdx
  ULONG64 v4; // r8
  unsigned __int16 v5; // ax
  __int64 v6; // r9
  int v8; // ebx
  unsigned __int16 near **v9; // rcx
  unsigned __int16 near **v10; // rcx
  tagObjLock *v11; // [rsp+60h] [rbp+18h] BYREF

  CLockDomainExclusive<DLT_CLIENTLIB>::CLockDomainExclusive<DLT_CLIENTLIB>(&v11);
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v2 = *(_DWORD *)a1;
  v3 = *(_QWORD *)(a1 + 8);
  if ( (v3 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v4 = (unsigned __int16)v2 + v3 + 2;
  if ( v4 >= MmUserProbeAddress
    || (unsigned __int16)v2 > (unsigned __int16)HIWORD(*(_DWORD *)a1)
    || (v2 & 1) != 0
    || v4 <= v3 )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  v5 = UserAddAtomToAtomTableEx(UserLibmgmtAtomTableHandle, v3, 0LL, 2LL);
  if ( !v5 )
    goto LABEL_11;
  v8 = 0;
  if ( catomSysTableEntries > 0 )
  {
    v9 = &aatomSysLoaded;
    do
    {
      if ( *(_WORD *)v9 == v5 )
        break;
      ++v8;
      v9 = (unsigned __int16 near **)((char *)v9 + 2);
    }
    while ( v8 < catomSysTableEntries );
  }
  if ( v8 == catomSysTableEntries )
  {
    v8 = 0;
    if ( catomSysTableEntries > 0 )
    {
      v10 = &aatomSysLoaded;
      do
      {
        if ( !*(_WORD *)v10 )
          break;
        ++v8;
        v10 = (unsigned __int16 near **)((char *)v10 + 2);
      }
      while ( v8 < catomSysTableEntries );
    }
    if ( v8 == catomSysTableEntries )
    {
      if ( v8 == 32 )
      {
        UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v5, &aatomSysLoaded, v6);
        UserSetLastError(8LL);
LABEL_11:
        tagObjLock::UnLock(v11);
        return 0xFFFFFFFFLL;
      }
      ++catomSysTableEntries;
    }
    *((_WORD *)&aatomSysLoaded + v8) = v5;
    *((_DWORD *)&acatomSysUse + v8) = 0;
    *((_DWORD *)&acatomSysDepends + v8) = 0;
  }
  else
  {
    UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v5, &aatomSysLoaded, v6);
  }
  tagObjLock::UnLock(v11);
  return (unsigned int)v8;
}
