/*
 * XREFs of VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x14067A844
 * Callers:
 *     IoctlDeviceDispatch @ 0x140678B40 (IoctlDeviceDispatch.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     VrpUnloadDifferencingHive @ 0x14067E278 (VrpUnloadDifferencingHive.c)
 */

__int64 __fastcall VrpHandleIoctlUnloadDifferencingHiveForHost(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  _QWORD *v5; // rsi
  unsigned int v6; // edi
  unsigned __int16 v7; // ax
  unsigned int v8; // eax
  __int64 v9; // rbx
  __int64 *v10; // rdi
  int v11; // eax
  UNICODE_STRING String1; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  v7 = *(_WORD *)(a1 + 4);
  if ( (v7 & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( !v7 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a1 )
    return (unsigned int)-1073741811;
  v8 = v7 + 6;
  if ( v8 < 6 || a2 < v8 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( SeSinglePrivilegeCheck(SeBackupPrivilege, a3) && SeSinglePrivilegeCheck(SeRestorePrivilege, a3) )
  {
    String1.Buffer = (wchar_t *)(a1 + 6);
    String1.MaximumLength = *(_WORD *)(a1 + 4);
    String1.Length = String1.MaximumLength;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&gHostLoadedHivesLock, 0LL);
    v9 = gHostLoadedHives;
    v10 = &gHostLoadedHives;
    while ( v9 )
    {
      String2.Buffer = (wchar_t *)(v9 + 10);
      String2.Length = *(_WORD *)(v9 + 8);
      String2.MaximumLength = String2.Length;
      if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
      {
        v5 = (_QWORD *)v9;
        *v10 = *(_QWORD *)v9;
        *(_QWORD *)v9 = 0LL;
        break;
      }
      v10 = (__int64 *)v9;
      v9 = *(_QWORD *)v9;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&gHostLoadedHivesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&gHostLoadedHivesLock);
    KeAbPostRelease((ULONG_PTR)&gHostLoadedHivesLock);
    if ( v5 )
    {
      v11 = VrpUnloadDifferencingHive(&String1);
      if ( v11 == -1073741772 )
        v11 = 0;
      v6 = v11;
      if ( v11 >= 0 )
      {
        ExFreePoolWithTag(v5, 0);
        v5 = 0LL;
        v6 = 0;
      }
      if ( v5 )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&gHostLoadedHivesLock, 0LL);
        *v5 = gHostLoadedHives;
        gHostLoadedHives = (__int64)v5;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&gHostLoadedHivesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&gHostLoadedHivesLock);
        KeAbPostRelease((ULONG_PTR)&gHostLoadedHivesLock);
      }
    }
    else
    {
      return (unsigned int)-1073741772;
    }
  }
  else
  {
    return (unsigned int)-1073741727;
  }
  return v6;
}
