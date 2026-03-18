/*
 * XREFs of CmpLinkHiveToMaster @ 0x140557540
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400070F8 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x14062E4B0 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x140702BD0 (CmpLoadHiveVolatile.c)
 *     CmpInitializeSystemHive @ 0x1408B02A4 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x1408B0CD8 (CmpInitializePreloadedHive.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     RtlUnicodeStringCopy @ 0x140008980 (RtlUnicodeStringCopy.c)
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     CmpRemoveHiveFromNamespace @ 0x1400A1E60 (CmpRemoveHiveFromNamespace.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpCleanupParseContext @ 0x14049FF18 (CmpCleanupParseContext.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1404AB0A4 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpConstructNameWithStatus @ 0x1404ABC50 (CmpConstructNameWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpRecordUnloadEventForHive @ 0x14054E5D0 (CmpRecordUnloadEventForHive.c)
 *     ObOpenObjectByName @ 0x140557B60 (ObOpenObjectByName.c)
 *     CmpInitializeKcbCache @ 0x140557BD8 (CmpInitializeKcbCache.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     CmpEtwDumpKcb @ 0x1406EE1C0 (CmpEtwDumpKcb.c)
 *     CmpLogHiveLinkEvent @ 0x1406EE460 (CmpLogHiveLinkEvent.c)
 */

__int64 __fastcall CmpLinkHiveToMaster(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        char a6,
        PRKEVENT Event,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  __int64 v13; // r12
  int v15; // eax
  int v16; // r14d
  int v17; // eax
  volatile signed __int32 **v18; // rdi
  __int64 v19; // rcx
  UNICODE_STRING *v20; // rsi
  PVOID PoolWithTag; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rsi
  char v25; // [rsp+40h] [rbp-C0h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+78h] [rbp-88h]
  int v33; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+90h] [rbp-70h]
  int v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  _QWORD v39[38]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v40[48]; // [rsp+1E0h] [rbp+E0h] BYREF

  v31 = a8;
  v13 = a1;
  v30 = a9;
  v32 = a10;
  Handle = 0LL;
  v25 = 0;
  memset(v40, 0, sizeof(v40));
  memset(v39, 0, 0x128uLL);
  v39[19] = &v39[18];
  v39[18] = &v39[18];
  memset(&v39[27], 0, 0x50uLL);
  v15 = *(_DWORD *)(a3 + 160);
  if ( (v15 & 0x20) == 0 )
  {
    v25 = 1;
    *(_DWORD *)(a3 + 160) = v15 | 0x20;
    *(_QWORD *)(a3 + 4208) = KeGetCurrentThread();
  }
  v16 = CmpInitializeKcbCache(a3, a5);
  if ( v16 >= 0 )
  {
    v17 = 67;
    v39[6] = a3;
    if ( a6 )
      v17 = 2115;
    LODWORD(v39[0]) = v17;
    if ( a4 )
      LODWORD(v39[5]) = -1;
    else
      LODWORD(v39[5]) = *(_DWORD *)(*(_QWORD *)(a3 + 64) + 36LL);
    v39[10] = v30;
    v35 = a1;
    v37 = v31;
    v38 = 0LL;
    v33 = 48;
    v34 = a2;
    v36 = 576;
    v16 = ObOpenObjectByName((unsigned int)&v33, (_DWORD)CmKeyObjectType, 0, 0, 131103, (__int64)v39, (__int64)&Handle);
    if ( v16 >= 0 )
    {
      v16 = 0;
      ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
      v18 = (volatile signed __int32 **)Object;
      ZwClose(Handle);
      CmpAttachToRegistryProcess((__int64)v40);
      if ( !a11 )
        CmpLockRegistry();
      v19 = (__int64)v18[1];
      SourceString = 0LL;
      CmpConstructNameWithStatus(v19, &SourceString);
      if ( !a11 )
        CmpUnlockRegistry();
      v20 = (UNICODE_STRING *)SourceString;
      if ( SourceString
        && (PoolWithTag = ExAllocatePoolWithTag(PagedPool, SourceString->Length, 0x70684D43u),
            (*(_QWORD *)(a3 + 1856) = PoolWithTag) != 0LL) )
      {
        *(_WORD *)(a3 + 1848) = 0;
        *(_WORD *)(a3 + 1850) = v20->Length;
        RtlUnicodeStringCopy((PUNICODE_STRING)(a3 + 1848), v20);
        *(_BYTE *)(a3 + 141) = 0;
        *(_DWORD *)(a3 + 1668) = _InterlockedIncrement(&CmHiveIdentity);
        if ( !a11 )
          CmpLockRegistry();
        if ( a6 )
        {
          CmpReferenceKeyControlBlockUnsafe(v18[1]);
          *(_QWORD *)(a3 + 2928) = v18[1];
          if ( Event )
          {
            KeResetEvent(Event);
            CmpRecordUnloadEventForHive(a3, Event);
          }
        }
        if ( CmpTraceRoutine )
        {
          LOBYTE(v22) = 33;
          CmpEtwDumpKcb(v18[1], v22);
        }
        KiUnstackDetachProcess((__int64)v40, 0LL);
        if ( !a11 )
          CmpUnlockRegistry();
        v23 = (_QWORD *)v32;
        if ( v32 )
        {
          CmpReferenceKeyControlBlockUnsafe(v18[1]);
          *v23 = v18[1];
        }
        ObfDereferenceObject(Object);
        if ( a6 )
          *(_BYTE *)(a3 + 2936) = 1;
        v18 = 0LL;
        v20 = (UNICODE_STRING *)SourceString;
      }
      else
      {
        if ( !a11 )
          CmpLockRegistry();
        CmpRemoveHiveFromNamespace(a3, (__int64)v18[1]);
        if ( !a11 )
          CmpUnlockRegistry();
        KiUnstackDetachProcess((__int64)v40, 0LL);
        v16 = -1073741670;
      }
      if ( v20 )
        CmpFreeTransientPoolWithTag(v20, 0x624E4D43u);
      if ( v18 )
        ObfDereferenceObject(v18);
    }
    v13 = a1;
  }
  if ( v25 )
  {
    *(_DWORD *)(a3 + 160) &= ~0x20u;
    *(_QWORD *)(a3 + 4208) = 0LL;
  }
  if ( v16 >= 0 && (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveLinkEvent(a3, v13);
  CmpCleanupParseContext((__int64)v39, a11);
  return (unsigned int)v16;
}
