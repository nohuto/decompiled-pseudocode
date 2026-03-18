/*
 * XREFs of PiDmAddCacheReferenceForObject @ 0x140518534
 * Callers:
 *     IopRegisterDeviceInterface @ 0x140517BAC (IopRegisterDeviceInterface.c)
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 *     IopProcessSetInterfaceState @ 0x140556128 (IopProcessSetInterfaceState.c)
 *     PiDmListInitEnumCallback @ 0x1405B9CF0 (PiDmListInitEnumCallback.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1405E1D68 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1406C259C (PiPnpRtlEnsureObjectCached.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1400DF180 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1400DFD30 (RtlInsertElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PiDmInitializeComparisonObject @ 0x140523AD0 (PiDmInitializeComparisonObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140523BF4 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectRelease @ 0x140523DEC (PiDmObjectRelease.c)
 *     PiDmObjectCreate @ 0x1405CD66C (PiDmObjectCreate.c)
 */

__int64 __fastcall PiDmAddCacheReferenceForObject(__int64 a1, __int64 a2, volatile signed __int32 **a3)
{
  unsigned int v5; // r15d
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
  v5 = a1;
  ObjectManagerForObjectType = (struct _ERESOURCE *)PiDmGetObjectManagerForObjectType(a1);
  CurrentThread = KeGetCurrentThread();
  v8 = ObjectManagerForObjectType;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(ObjectManagerForObjectType, 1u);
  v9 = PiDmInitializeComparisonObject(a2, v5, v18);
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
  v9 = PiDmObjectCreate(v5, a2, &P);
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
    PiDmObjectRelease(P);
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v9;
}
