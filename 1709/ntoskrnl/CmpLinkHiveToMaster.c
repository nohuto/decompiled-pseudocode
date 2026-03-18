/*
 * XREFs of CmpLinkHiveToMaster @ 0x1404E46C4
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400AF5E8 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1405C09E0 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x14069DCAC (CmpLoadHiveVolatile.c)
 *     CmpInitializeSystemHive @ 0x14083BCC8 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x14083C6D0 (CmpInitializePreloadedHive.c)
 * Callees:
 *     CmpRemoveHiveFromNamespace @ 0x140015CA8 (CmpRemoveHiveFromNamespace.c)
 *     CmpFreeTransientPoolWithTag @ 0x14001655C (CmpFreeTransientPoolWithTag.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlUnicodeStringCopy @ 0x1400AF93C (RtlUnicodeStringCopy.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpRecordUnloadEventForHive @ 0x14046EDD4 (CmpRecordUnloadEventForHive.c)
 *     CmpReportNotify @ 0x14047C204 (CmpReportNotify.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14047F63C (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpConstructNameWithStatus @ 0x14047F6E0 (CmpConstructNameWithStatus.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     CmpCleanupParseContext @ 0x1404E322C (CmpCleanupParseContext.c)
 *     CmpInitializeKcbCache @ 0x1404E4A54 (CmpInitializeKcbCache.c)
 *     ObOpenObjectByName @ 0x14051AD00 (ObOpenObjectByName.c)
 *     CmpEtwDumpKcb @ 0x140689DE4 (CmpEtwDumpKcb.c)
 *     CmpLogHiveLinkEvent @ 0x14068A05C (CmpLogHiveLinkEvent.c)
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
  int v16; // esi
  int v17; // eax
  __int64 *v18; // rdi
  __int64 v19; // rcx
  UNICODE_STRING *v20; // r14
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
  _QWORD v39[30]; // [rsp+B0h] [rbp-50h] BYREF

  v31 = a8;
  v13 = a1;
  v30 = a9;
  v32 = a10;
  Handle = 0LL;
  v25 = 0;
  memset(v39, 0, sizeof(v39));
  v39[19] = &v39[18];
  v39[18] = &v39[18];
  memset(&v39[20], 0, 0x50uLL);
  v15 = *(_DWORD *)(a3 + 144);
  if ( (v15 & 0x20) == 0 )
  {
    v25 = 1;
    *(_DWORD *)(a3 + 144) = v15 | 0x20;
    *(_QWORD *)(a3 + 5416) = KeGetCurrentThread();
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
      ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
      v18 = (__int64 *)Object;
      ZwClose(Handle);
      if ( !a11 )
        CmpLockRegistry();
      v19 = v18[1];
      SourceString = 0LL;
      CmpConstructNameWithStatus(v19, &SourceString);
      if ( !a11 )
        CmpUnlockRegistry();
      v20 = (UNICODE_STRING *)SourceString;
      if ( SourceString
        && (PoolWithTag = ExAllocatePoolWithTag(PagedPool, SourceString->Length, 0x70684D43u),
            (*(_QWORD *)(a3 + 3032) = PoolWithTag) != 0LL) )
      {
        *(_WORD *)(a3 + 3024) = 0;
        *(_WORD *)(a3 + 3026) = v20->Length;
        RtlUnicodeStringCopy((PUNICODE_STRING)(a3 + 3024), v20);
        *(_BYTE *)(a3 + 125) = 0;
        *(_DWORD *)(a3 + 2828) = _InterlockedIncrement(&CmHiveIdentity);
        if ( !a11 )
          CmpLockRegistry();
        CmpReportNotify(v18[1], *(_QWORD *)(v18[1] + 24), *(_DWORD *)(v18[1] + 32), 0LL, 1, 0LL);
        if ( a6 )
        {
          CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)v18[1]);
          *(_QWORD *)(a3 + 4104) = v18[1];
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
        if ( !a11 )
          CmpUnlockRegistry();
        v23 = (_QWORD *)v32;
        if ( v32 )
        {
          CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)v18[1]);
          *v23 = v18[1];
        }
        ObfDereferenceObject(Object);
        v18 = 0LL;
        if ( a6 )
          *(_BYTE *)(a3 + 4112) = 1;
        v16 = 0;
        v20 = (UNICODE_STRING *)SourceString;
      }
      else
      {
        if ( !a11 )
          CmpLockRegistry();
        CmpRemoveHiveFromNamespace(a3, v18[1]);
        v16 = -1073741670;
        if ( !a11 )
          CmpUnlockRegistry();
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
    *(_DWORD *)(a3 + 144) &= ~0x20u;
    *(_QWORD *)(a3 + 5416) = 0LL;
  }
  if ( v16 >= 0 && (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveLinkEvent(a3, v13);
  CmpCleanupParseContext((__int64)v39, a11);
  return (unsigned int)v16;
}
