/*
 * XREFs of RegisterOperationRegionHandler @ 0x1C0080D54
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C0021D28 (ACPIEcInitOpRegionHandler.c)
 *     ACPIIoctlRegisterOpRegionHandler @ 0x1C002D410 (ACPIIoctlRegisterOpRegionHandler.c)
 *     ACPIEcInstallOpRegionHandler @ 0x1C007A234 (ACPIEcInstallOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1C0080CF0 (RegisterOpRegionHandler.c)
 *     OSInitializeCallbacks @ 0x1C0098E48 (OSInitializeCallbacks.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0035BDC (EnableDisableDeviceTreeRegionSpace.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 *     AMLIRegEventHandler @ 0x1C0044038 (AMLIRegEventHandler.c)
 */

__int64 __fastcall RegisterOperationRegionHandler(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v8; // rsi
  int v9; // edx
  int v11; // ebp
  _QWORD *PoolWithTag; // rax
  __int64 v13; // rbx
  __int64 v14; // r15
  int v15; // edi
  int v16; // eax
  __int64 v17; // rdi
  __int64 i; // rax
  unsigned int v19; // ecx
  __int64 *v20; // rcx
  __int64 v21; // rax
  int v22; // edx
  unsigned int v23; // edx
  __int64 *v24; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v25[10]; // [rsp+40h] [rbp-68h] BYREF

  v24 = 0LL;
  v8 = a3;
  *a6 = 0LL;
  v9 = a2 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return 3221225712LL;
    v11 = 6;
  }
  else
  {
    v11 = 7;
  }
  if ( a3 > 9 && a3 - 128 > 0x7F )
    return 3221225713LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x4F706341u);
  v13 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[1] = PoolWithTag;
  *PoolWithTag = PoolWithTag;
  PoolWithTag[2] = a4;
  PoolWithTag[3] = a5;
  *((_DWORD *)PoolWithTag + 8) = v11;
  *((_DWORD *)PoolWithTag + 9) = v8;
  *((_BYTE *)PoolWithTag + 40) = 0;
  if ( v11 == 6 )
  {
    v14 = v8;
    v16 = AMLIRegEventHandler(6u, v8, InternalOpRegionHandler, PoolWithTag);
    if ( v16 )
      v16 = -1073741823;
    v15 = v16;
  }
  else
  {
    v14 = v8;
    v15 = AMLIRegEventHandler(7u, v8, InternalRawAccessOpRegionHandler, PoolWithTag);
    if ( v15 )
      v15 = -1073741823;
  }
  if ( v15 >= 0 )
  {
    *a6 = v13;
    v17 = 0LL;
    ExAcquireFastMutex(&AcpiOpRegionLock);
    for ( i = AcpiOpRegionHandlerList; (__int64 *)i != &AcpiOpRegionHandlerList; i = *(_QWORD *)i )
    {
      v19 = *(_DWORD *)(i + 36);
      v17 = i;
      if ( v19 >= (unsigned int)v8 && (v19 != (_DWORD)v8 || *(_DWORD *)(i + 32) == v11) )
        break;
    }
    v20 = *(__int64 **)(i + 8);
    v21 = *v20;
    if ( *(__int64 **)(*v20 + 8) != v20 )
      __fastfail(3u);
    *(_QWORD *)v13 = v21;
    *(_QWORD *)(v13 + 8) = v20;
    *(_QWORD *)(v21 + 8) = v13;
    *v20 = v13;
    if ( v17 && *(_DWORD *)(v17 + 36) == (_DWORD)v8 )
    {
      ExReleaseFastMutex(&AcpiOpRegionLock);
    }
    else
    {
      if ( (unsigned int)v8 < 0x1F )
        v22 = 1 << v8;
      else
        v22 = 0x80000000;
      AcpiRegisteredOpRegionMask |= v22;
      ExReleaseFastMutex(&AcpiOpRegionLock);
      v23 = *(_DWORD *)(v13 + 36);
      if ( v23 - 8 <= 1 )
      {
        EnableDisableDeviceTreeRegionSpace(RootDeviceExtension, v23, 1);
      }
      else if ( a1 )
      {
        if ( (int)AMLIGetNameSpaceObject("_REG", a1, (__int64)&v24, 1u) >= 0 )
        {
          memset(v25, 0, sizeof(v25));
          WORD1(v25[0]) = 1;
          v25[2] = v14;
          WORD1(v25[5]) = 1;
          v25[7] = 1LL;
          AMLIAsyncEvalObject(v24, 0LL, 2u, v25, 0LL, 0LL);
          AMLIDereferenceHandleEx((volatile signed __int32 *)v24);
        }
      }
    }
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag((PVOID)v13, 0);
    return (unsigned int)v15;
  }
}
