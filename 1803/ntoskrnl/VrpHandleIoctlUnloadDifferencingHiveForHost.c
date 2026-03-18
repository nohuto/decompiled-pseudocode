/*
 * XREFs of VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x1407095E8
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140707A60 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     VrpUnloadDifferencingHive @ 0x14070DA14 (VrpUnloadDifferencingHive.c)
 */

__int64 __fastcall VrpHandleIoctlUnloadDifferencingHiveForHost(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  void *v5; // r14
  unsigned int v6; // edi
  unsigned __int16 v7; // ax
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 *v13; // rsi
  __int64 v14; // rdi
  int v15; // ebp
  _QWORD *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  UNICODE_STRING String1; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-28h] BYREF

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
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&VrpHostLoadedHivesLock, 0LL);
    v12 = VrpHostLoadedHives;
    v13 = &VrpHostLoadedHives;
    if ( VrpHostLoadedHives )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)v12;
        String2.Buffer = (wchar_t *)(v12 + 10);
        String2.Length = *(_WORD *)(v12 + 8);
        String2.MaximumLength = String2.Length;
        if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
          break;
        v13 = (__int64 *)v12;
        v12 = v14;
        if ( !v14 )
          goto LABEL_16;
      }
      *v13 = v14;
      v5 = (void *)v12;
      *(_QWORD *)v12 = 0LL;
    }
LABEL_16:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpHostLoadedHivesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&VrpHostLoadedHivesLock, v9, v10, v11);
    KeAbPostRelease((ULONG_PTR)&VrpHostLoadedHivesLock);
    if ( v5 )
    {
      v15 = VrpUnloadDifferencingHive(&String1);
      if ( v15 == -1073741772 )
        v15 = 0;
      if ( v15 >= 0 )
        ExFreePoolWithTag(v5, 0);
      v16 = 0LL;
      v6 = 0;
      if ( v15 < 0 )
      {
        v16 = v5;
        v6 = v15;
      }
      if ( v16 )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&VrpHostLoadedHivesLock, 0LL);
        *v16 = VrpHostLoadedHives;
        VrpHostLoadedHives = (__int64)v16;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpHostLoadedHivesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&VrpHostLoadedHivesLock, v17, v18, v19);
        KeAbPostRelease((ULONG_PTR)&VrpHostLoadedHivesLock);
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
