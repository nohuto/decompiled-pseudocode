/*
 * XREFs of PiDmAddCacheReferenceForObject @ 0x1404E4664
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140483340 (PiPnpRtlCmActionCallback.c)
 *     IopRegisterDeviceInterface @ 0x1404E3CE0 (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x1404E49E8 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14059A668 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDmListInitEnumCallback @ 0x1405ADAE0 (PiDmListInitEnumCallback.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1406969CC (PiPnpRtlEnsureObjectCached.c)
 * Callees:
 *     RtlLookupElementGenericTableFullAvl @ 0x14004C520 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x14004CBC0 (RtlInsertElementGenericTableFullAvl.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     PiDmInitializeComparisonObject @ 0x140485970 (PiDmInitializeComparisonObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140485AA0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectCreate @ 0x1405BDA78 (PiDmObjectCreate.c)
 */

__int64 __fastcall PiDmAddCacheReferenceForObject(unsigned int a1, _WORD *a2, volatile signed __int32 **a3)
{
  struct _ERESOURCE *ObjectManagerForObjectType; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _ERESOURCE *v8; // r14
  int v9; // ebx
  PVOID *v10; // rax
  volatile signed __int32 *v11; // rcx
  PVOID inserted; // rax
  PVOID P; // [rsp+30h] [rbp-79h] BYREF
  TABLE_SEARCH_RESULT SearchResult; // [rsp+38h] [rbp-71h] BYREF
  PVOID NodeOrParent; // [rsp+40h] [rbp-69h] BYREF
  _BYTE *Buffer; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v18[112]; // [rsp+50h] [rbp-59h] BYREF

  NodeOrParent = 0LL;
  P = 0LL;
  Buffer = v18;
  ObjectManagerForObjectType = (struct _ERESOURCE *)PiDmGetObjectManagerForObjectType(a1);
  CurrentThread = KeGetCurrentThread();
  v8 = ObjectManagerForObjectType;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(ObjectManagerForObjectType, 1u);
  v9 = PiDmInitializeComparisonObject(a2, a1, (__int64)v18);
  if ( v9 < 0 )
    goto LABEL_14;
  v10 = (PVOID *)RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)&v8[1], &Buffer, &NodeOrParent, &SearchResult);
  if ( v10 )
    v11 = (volatile signed __int32 *)*v10;
  else
    v11 = 0LL;
  P = (PVOID)v11;
  if ( v11 )
  {
    ++*((_DWORD *)v11 + 3);
    goto LABEL_6;
  }
  v9 = PiDmObjectCreate(a1, a2, &P);
  if ( v9 < 0 )
  {
LABEL_14:
    v11 = (volatile signed __int32 *)P;
    goto LABEL_6;
  }
  inserted = RtlInsertElementGenericTableFullAvl((PRTL_AVL_TABLE)&v8[1], &P, 8u, 0LL, NodeOrParent, SearchResult);
  v11 = (volatile signed __int32 *)P;
  if ( inserted )
  {
    *((_DWORD *)P + 3) = 1;
  }
  else
  {
    PiDmObjectRelease((unsigned int *)P);
    v11 = 0LL;
    v9 = -1073741670;
    P = 0LL;
  }
LABEL_6:
  if ( a3 )
  {
    *a3 = v11;
    if ( v11 )
      _InterlockedIncrement(v11 + 2);
  }
  ExReleaseResourceLite(v8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v9;
}
