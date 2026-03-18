/*
 * XREFs of PiDmObjectGetCachedObjectProperty @ 0x1404854F0
 * Callers:
 *     PiDmObjectGetCachedCmProperty @ 0x1404846C8 (PiDmObjectGetCachedCmProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x140484FD0 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14004C420 (RtlLookupElementGenericTableAvl.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140449BD8 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     PiDmInitializeComparisonObject @ 0x140485970 (PiDmInitializeComparisonObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140485AA0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140485AF0 (PiDmObjectGetCachedObjectPropertyData.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectProperty(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // rbp
  int v10; // r12d
  int v13; // ebx
  __int64 ObjectManagerForObjectType; // r14
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int32 **v16; // rax
  volatile signed __int32 *v17; // rsi
  unsigned int CachedObjectPropertyData; // edi
  __int64 v20; // rax
  PVOID v21; // rbx
  int v22; // [rsp+30h] [rbp-E8h]
  _BYTE *Buffer; // [rsp+48h] [rbp-D0h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v25[112]; // [rsp+60h] [rbp-B8h] BYREF

  v9 = a7;
  v10 = 0;
  if ( a7 )
  {
    v13 = a8;
    if ( !a8 )
      v9 = 0LL;
  }
  else
  {
    v13 = 0;
  }
  if ( a1 >= 6 || a4 )
    return 3221225494LL;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)ObjectManagerForObjectType, 1u);
  Buffer = v25;
  if ( a2
    && (int)PiDmInitializeComparisonObject(a2, *(unsigned int *)(ObjectManagerForObjectType + 208), v25) >= 0
    && (v16 = (volatile signed __int32 **)RtlLookupElementGenericTableAvl(
                                            (PRTL_AVL_TABLE)(ObjectManagerForObjectType + 104),
                                            &Buffer)) != 0LL )
  {
    v17 = *v16;
    if ( *v16 )
    {
      _InterlockedIncrement(v17 + 2);
      goto LABEL_11;
    }
  }
  else
  {
    v17 = 0LL;
  }
  v10 = -1073741772;
LABEL_11:
  ExReleaseResourceLite((PERESOURCE)ObjectManagerForObjectType);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( a1 != 3 || *(_DWORD *)(a5 + 16) != 2 )
    goto LABEL_13;
  v20 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
  if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
    v20 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
  if ( !v20
    && (int)PiDmObjectGetCachedObjectReference(3LL, a2, (ULONG_PTR)v17, (__int64)&DEVPKEY_Device_InstanceId, P) >= 0 )
  {
    v22 = v13;
    v21 = P[0];
    CachedObjectPropertyData = PiDmObjectGetCachedObjectPropertyData(
                                 *((_DWORD *)P[0] + 7),
                                 *((_QWORD *)P[0] + 2),
                                 P[0],
                                 a5,
                                 a6,
                                 v9,
                                 v22,
                                 a9);
    PiDmObjectRelease(v21);
  }
  else
  {
LABEL_13:
    CachedObjectPropertyData = PiDmObjectGetCachedObjectPropertyData(a1, a2, (_DWORD)v17, a5, a6, v9, v13, a9);
  }
  PiDmObjectRelease((PVOID)v17);
  return CachedObjectPropertyData;
}
