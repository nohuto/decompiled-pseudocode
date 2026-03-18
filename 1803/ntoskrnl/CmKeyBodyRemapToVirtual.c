/*
 * XREFs of CmKeyBodyRemapToVirtual @ 0x1406F3FF0
 * Callers:
 *     NtDeleteValueKey @ 0x14049ACA0 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14056D9C4 (NtDeleteKey.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KCBNeedsVirtualImage @ 0x1400BCF48 (KCBNeedsVirtualImage.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140489AB4 (SeCreateAccessStateFromSubjectContext.c)
 *     CmpCleanupParseContext @ 0x14049FF18 (CmpCleanupParseContext.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     ObReferenceObjectByName @ 0x1404D2990 (ObReferenceObjectByName.c)
 *     SeDeleteAccessState @ 0x140544AA0 (SeDeleteAccessState.c)
 *     CmpReparseToVirtualPath @ 0x1406F5694 (CmpReparseToVirtualPath.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtual(__int64 *a1, char a2, ACCESS_MASK a3, __int64 a4, _DWORD *a5)
{
  __int64 v8; // rsi
  int AccessStateFromSubjectContext; // ebx
  ULONG_PTR v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rdx
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v20[38]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v21[48]; // [rsp+190h] [rbp+90h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v22[5]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v23[28]; // [rsp+260h] [rbp+160h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v21, 0, sizeof(v21));
  memset(v20, 0, 0x128uLL);
  v20[19] = &v20[18];
  v20[18] = &v20[18];
  memset(&v20[27], 0, 0x50uLL);
  v8 = *a1;
  AccessStateFromSubjectContext = 0;
  v18 = 0LL;
  v10 = *(_QWORD *)(v8 + 8);
  if ( !*(_WORD *)(v10 + 58) && (*(_DWORD *)(v8 + 48) & 0x10) == 0 && KCBNeedsVirtualImage() )
  {
    v11 = *(_DWORD *)(v10 + 176);
    if ( (v11 & 0x800000) != 0 && (v11 & 0x20) == 0 )
    {
      CmpAttachToRegistryProcess((__int64)v21);
      CmpLockRegistry();
      ExAcquirePushLockSharedEx(v10 + 40, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 48));
      AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v8, 0LL);
      if ( AccessStateFromSubjectContext >= 0 )
      {
        if ( (unsigned __int8)CmpReparseToVirtualPath(v10, v12, a4, &DestinationString) )
        {
          CmpUnlockKcb(*(_QWORD *)(*a1 + 8), v12, v13, v14);
          CmpUnlockRegistry();
          LODWORD(v20[2]) = *a5;
          LODWORD(v20[0]) = 8;
          v20[9] = *(_QWORD *)(v8 + 56);
          AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                            a4,
                                            (int *)v22,
                                            v23,
                                            a3,
                                            (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76));
          if ( AccessStateFromSubjectContext >= 0 )
          {
            v16 = 1600LL;
            if ( a2 != 1 )
              v16 = 576LL;
            if ( (int)ObReferenceObjectByName(
                        (__int64)&DestinationString,
                        v16,
                        (__int64 *)v22,
                        a3,
                        (__int64)CmKeyObjectType,
                        0,
                        (__int64)v20,
                        &v18) >= 0 )
            {
              *a1 = v18;
              ObfDereferenceObject((PVOID)v8);
            }
            SeDeleteAccessState(v22);
            AccessStateFromSubjectContext = 0;
          }
          goto LABEL_10;
        }
        AccessStateFromSubjectContext = 0;
      }
      CmpUnlockKcb(v10, v12, v13, v14);
      CmpUnlockRegistry();
LABEL_10:
      KiUnstackDetachProcess((__int64)v21, 0LL);
    }
  }
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpCleanupParseContext((__int64)v20, 0);
  return (unsigned int)AccessStateFromSubjectContext;
}
