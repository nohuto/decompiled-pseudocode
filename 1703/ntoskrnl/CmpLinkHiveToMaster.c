/*
 * XREFs of CmpLinkHiveToMaster @ 0x1404CCCAC
 * Callers:
 *     CmpLoadKeyCommon @ 0x14007EF3C (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3DE0 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x140672BD8 (CmpLoadHiveVolatile.c)
 *     CmpInitializeSystemHive @ 0x1408078A0 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x1408082A4 (CmpInitializePreloadedHive.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     RtlUnicodeStringCopy @ 0x14007FB50 (RtlUnicodeStringCopy.c)
 *     CmpRemoveHiveFromNamespace @ 0x14007FC2C (CmpRemoveHiveFromNamespace.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     CmpReportNotify @ 0x14048CFF4 (CmpReportNotify.c)
 *     CmpRecordUnloadEventForHive @ 0x1404CA910 (CmpRecordUnloadEventForHive.c)
 *     ObOpenObjectByName @ 0x1404CD2A0 (ObOpenObjectByName.c)
 *     CmpInitializeKcbCache @ 0x1404CD318 (CmpInitializeKcbCache.c)
 *     CmpCleanupParseContext @ 0x1404D5440 (CmpCleanupParseContext.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140500604 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     CmpEtwDumpKcb @ 0x140660E60 (CmpEtwDumpKcb.c)
 *     CmpLogHiveLinkEvent @ 0x1406610D8 (CmpLogHiveLinkEvent.c)
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
  __int64 v16; // rdx
  int v17; // esi
  int v18; // eax
  __int64 *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  UNICODE_STRING *v23; // r14
  PVOID PoolWithTag; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rsi
  char v29; // [rsp+40h] [rbp-C0h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h]
  __int64 v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h]
  int v37; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+88h] [rbp-78h]
  __int64 v39; // [rsp+90h] [rbp-70h]
  int v40; // [rsp+98h] [rbp-68h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  _QWORD v43[28]; // [rsp+B0h] [rbp-50h] BYREF

  Handle = 0LL;
  v13 = a1;
  v35 = a8;
  v34 = a9;
  v36 = a10;
  v29 = 0;
  memset(v43, 0, sizeof(v43));
  v15 = *(_DWORD *)(a3 + 144);
  if ( (v15 & 0x20) == 0 )
  {
    v29 = 1;
    *(_DWORD *)(a3 + 144) = v15 | 0x20;
    *(_QWORD *)(a3 + 5416) = KeGetCurrentThread();
  }
  v17 = CmpInitializeKcbCache(a3, a5);
  if ( v17 >= 0 )
  {
    v18 = 67;
    v43[6] = a3;
    if ( a6 )
      v18 = 2115;
    LODWORD(v43[0]) = v18;
    if ( a4 )
      LODWORD(v43[5]) = -1;
    else
      LODWORD(v43[5]) = *(_DWORD *)(*(_QWORD *)(a3 + 64) + 36LL);
    v42 = 0LL;
    v43[10] = v34;
    v39 = a1;
    v41 = v35;
    v37 = 48;
    v38 = a2;
    v40 = 576;
    v17 = ObOpenObjectByName((unsigned int)&v37, (_DWORD)CmKeyObjectType, 0, 0, 131103, (__int64)v43, (__int64)&Handle);
    if ( v17 < 0 )
    {
      v13 = a1;
    }
    else
    {
      ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
      v19 = (__int64 *)Object;
      ZwClose(Handle);
      if ( !a11 )
        CmpLockRegistry(v20);
      v21 = v19[1];
      SourceString = 0LL;
      CmpConstructNameWithStatus(v21, &SourceString);
      if ( !a11 )
        CmpUnlockRegistry();
      v23 = (UNICODE_STRING *)SourceString;
      if ( SourceString
        && (PoolWithTag = ExAllocatePoolWithTag(PagedPool, SourceString->Length, 0x70684D43u),
            (*(_QWORD *)(a3 + 3032) = PoolWithTag) != 0LL) )
      {
        *(_WORD *)(a3 + 3024) = 0;
        *(_WORD *)(a3 + 3026) = v23->Length;
        RtlUnicodeStringCopy((PUNICODE_STRING)(a3 + 3024), v23);
        *(_BYTE *)(a3 + 125) = 0;
        *(_DWORD *)(a3 + 2828) = _InterlockedIncrement(&CmHiveIdentity);
        if ( !a11 )
          CmpLockRegistry(v25);
        CmpReportNotify(v19[1], *(_QWORD *)(v19[1] + 24), *(_DWORD *)(v19[1] + 32), 0LL, 1, 0LL);
        if ( a6 )
        {
          CmpReferenceKeyControlBlockUnsafe(v19[1]);
          *(_QWORD *)(a3 + 4104) = v19[1];
          if ( Event )
          {
            KeResetEvent(Event);
            CmpRecordUnloadEventForHive(a3, Event);
          }
        }
        if ( CmpTraceRoutine )
        {
          LOBYTE(v26) = 33;
          CmpEtwDumpKcb(v19[1], v26);
        }
        if ( !a11 )
          CmpUnlockRegistry();
        v27 = (_QWORD *)v36;
        if ( v36 )
        {
          CmpReferenceKeyControlBlockUnsafe(v19[1]);
          *v27 = v19[1];
        }
        ObfDereferenceObject(Object);
        v19 = 0LL;
        if ( a6 )
          *(_BYTE *)(a3 + 4112) = 1;
        v17 = 0;
        v23 = (UNICODE_STRING *)SourceString;
      }
      else
      {
        v17 = -1073741670;
        if ( !a11 )
          CmpLockRegistry(v22);
        CmpRemoveHiveFromNamespace(a3, v19[1]);
        if ( !a11 )
          CmpUnlockRegistry();
      }
      if ( v23 )
        CmpFreeTransientPoolWithTag(v23, 0x624E4D43u);
      if ( v19 )
        ObfDereferenceObject(v19);
      v13 = a1;
    }
  }
  if ( v29 )
  {
    *(_DWORD *)(a3 + 144) &= ~0x20u;
    *(_QWORD *)(a3 + 5416) = 0LL;
  }
  if ( v17 >= 0 && (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveLinkEvent(a3, v13);
  LOBYTE(v16) = a11;
  CmpCleanupParseContext(v43, v16);
  return (unsigned int)v17;
}
