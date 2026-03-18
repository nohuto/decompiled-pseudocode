/*
 * XREFs of CmpVolumeManagerGetContextForFile @ 0x140495B50
 * Callers:
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x140632BCC (CmpVolumeManagerGetContextForFilePath.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     IoGetAttachedDeviceReference @ 0x1400DF830 (IoGetAttachedDeviceReference.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpVolumeManagerGetContextForGuidUnsafe @ 0x140495D08 (CmpVolumeManagerGetContextForGuidUnsafe.c)
 *     IoVolumeDeviceToGuid @ 0x140495D70 (IoVolumeDeviceToGuid.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     CmpVolumeContextCreate @ 0x14065197C (CmpVolumeContextCreate.c)
 *     CmpVolumeContextCleanup @ 0x1406F7508 (CmpVolumeContextCleanup.c)
 */

__int64 __fastcall CmpVolumeManagerGetContextForFile(__int64 a1, void *a2, __int64 a3, PPRIVILEGE_SET *a4)
{
  NTSTATUS v5; // ebx
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  PPRIVILEGE_SET ContextForGuidUnsafe; // rbx
  __int64 v11; // rcx
  struct _PRIVILEGE_SET *v12; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  PPRIVILEGE_SET *v18; // rcx
  char v19; // al
  bool v20; // zf
  PPRIVILEGE_SET *v21; // rcx
  PPRIVILEGE_SET Privileges; // [rsp+30h] [rbp-30h] BYREF
  PVOID Object; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v24[16]; // [rsp+48h] [rbp-18h] BYREF

  Privileges = 0LL;
  v5 = ObReferenceObjectByHandle(a2, 0x80u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
  if ( v5 < 0 )
    goto LABEL_14;
  AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)Object + 1));
  v7 = IoVolumeDeviceToGuid(AttachedDeviceReference, v24);
  v5 = v7;
  if ( v7 == -1073741811 || v7 == -1073741637 || v7 == -1073741808 )
  {
    v5 = CmpVolumeContextCreate(v8, 0LL, &Privileges);
    if ( v5 >= 0 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpVolumeManager, 0LL);
      v21 = (PPRIVILEGE_SET *)qword_140862DE0;
      if ( *(__int64 **)qword_140862DE0 != &qword_140862DD8 )
        __fastfail(3u);
      ContextForGuidUnsafe = Privileges;
      Privileges = 0LL;
      *(_QWORD *)&ContextForGuidUnsafe->PrivilegeCount = &qword_140862DD8;
      ContextForGuidUnsafe->Privilege[0].Luid = (LUID)v21;
      *v21 = ContextForGuidUnsafe;
      qword_140862DE0 = (__int64)ContextForGuidUnsafe;
      v20 = (_InterlockedExchangeAdd64((volatile signed __int64 *)&CmpVolumeManager, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2;
      goto LABEL_29;
    }
LABEL_10:
    v12 = Privileges;
    if ( Privileges )
    {
      CmpVolumeContextCleanup(Privileges);
      CmSiFreeMemory(v12);
    }
    goto LABEL_12;
  }
  if ( v7 >= 0 )
  {
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpVolumeManager, 0LL);
    ContextForGuidUnsafe = (PPRIVILEGE_SET)CmpVolumeManagerGetContextForGuidUnsafe(v9, v24);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpVolumeManager, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&CmpVolumeManager);
    KeAbPostRelease((ULONG_PTR)&CmpVolumeManager);
    if ( ContextForGuidUnsafe )
      goto LABEL_9;
    v5 = CmpVolumeContextCreate(v11, AttachedDeviceReference, &Privileges);
    if ( v5 >= 0 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpVolumeManager, 0LL);
      ContextForGuidUnsafe = (PPRIVILEGE_SET)CmpVolumeManagerGetContextForGuidUnsafe(v14, v24);
      if ( !ContextForGuidUnsafe )
      {
        v18 = (PPRIVILEGE_SET *)qword_140862DE0;
        if ( *(__int64 **)qword_140862DE0 != &qword_140862DD8 )
          __fastfail(3u);
        ContextForGuidUnsafe = Privileges;
        Privileges = 0LL;
        *(_QWORD *)&ContextForGuidUnsafe->PrivilegeCount = &qword_140862DD8;
        ContextForGuidUnsafe->Privilege[0].Luid = (LUID)v18;
        *v18 = ContextForGuidUnsafe;
        qword_140862DE0 = (__int64)ContextForGuidUnsafe;
      }
      v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)&CmpVolumeManager, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v19 & 2) == 0 )
        goto LABEL_22;
      v20 = (v19 & 4) == 0;
LABEL_29:
      if ( v20 )
        ExfTryToWakePushLock((volatile signed __int64 *)&CmpVolumeManager, v15, v16, v17);
LABEL_22:
      KeAbPostRelease((ULONG_PTR)&CmpVolumeManager);
LABEL_9:
      *a4 = ContextForGuidUnsafe;
      v5 = 0;
      goto LABEL_10;
    }
    goto LABEL_10;
  }
LABEL_12:
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
LABEL_14:
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v5;
}
