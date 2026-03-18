/*
 * XREFs of DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00AFB00
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C00D86D0 (DxgkGetMonitorInternalInfo.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00F4230 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C01C3B80 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0008510 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0008560 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00B3A10 (DxgkIsVirtualizationDisabledForTarget.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1C017FBD0 (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C01AA6C4 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall DxgkConvertLegacyQDCAdapterAndIdToActual(
        struct _LUID *a1,
        unsigned int a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _DWORD *v12; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  DXGFASTMUTEX *v16; // rbx
  __int64 v17; // rcx
  unsigned int v18; // r14d
  __int64 result; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned int v27; // r14d
  __int64 v28; // rdx
  __int64 v29; // rcx
  int HashBitMask; // eax
  struct _LUID v31; // rbx
  __int64 v32; // rax
  struct _LUID v33; // [rsp+30h] [rbp-28h] BYREF
  DXGFASTMUTEX *v34; // [rsp+38h] [rbp-20h] BYREF
  char v35; // [rsp+40h] [rbp-18h]
  char v36; // [rsp+A8h] [rbp+50h]
  int v37; // [rsp+B0h] [rbp+58h]
  unsigned int v38; // [rsp+B8h] [rbp+60h] BYREF

  *a3 = *a1;
  *a4 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v12 = (_DWORD *)((char *)Global + 840);
  v35 = 0;
  v34 = (struct DXGGLOBAL *)((char *)Global + 840);
  if ( Global == (struct DXGGLOBAL *)-840LL )
  {
    v21 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v21 + 24) = 464LL;
    WdLogEvent5_WdAssertion(v21);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v34 + 1) == CurrentThread )
  {
    v22 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v22 + 24) = 471LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( v35 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v9, v11);
    v23[5] = &v34;
    v23[3] = 275LL;
    v23[4] = 4LL;
    v23[6] = 0LL;
    v23[7] = 0LL;
    WdLogEvent5_WdCriticalError(v23);
  }
  DXGFASTMUTEX::Acquire(v34);
  v35 = 0;
  v16 = v34;
  v17 = (unsigned int)(32 - v12[15]);
  v18 = 0xFFFFFFFF >> (32 - *((_BYTE *)v12 + 60)) << (32 - *((_BYTE *)v12 + 60));
  if ( *((struct _KTHREAD **)v34 + 1) != KeGetCurrentThread() )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v14, v15);
    v24[3] = 275LL;
    v24[4] = 4LL;
    v24[5] = v16;
    v24[6] = 0LL;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  if ( *((int *)v16 + 6) <= 0 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v25 + 24) = 406LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( (*((_DWORD *)v16 + 6))-- == 1 )
  {
    *((_QWORD *)v16 + 1) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v16 + 16, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( (v18 & a2) == 0 )
    return 0LL;
  LODWORD(result) = DxgkIsAdapterVirtualTopologyEnabled(*a1);
  v26 = (int)result;
  if ( (int)result < 0 )
    return (unsigned int)result;
  if ( !v37 )
    return 0LL;
  v27 = a2 >> DXGADAPTERSOURCEHASH::GetHashBitShift((DXGADAPTERSOURCEHASH *)v12);
  if ( (int)DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash((DXGADAPTERSOURCEHASH *)v12, v27, &v33, &v38) < 0 )
  {
    v32 = WdLogNewEntry5_WdTrace(v29, v28);
    *(_QWORD *)(v32 + 24) = v27;
    *(_QWORD *)(v32 + 32) = v26;
    return 0LL;
  }
  HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask((DXGADAPTERSOURCEHASH *)v12);
  v31 = v33;
  result = DxgkIsVirtualizationDisabledForTarget(v33, a2 & ~HashBitMask, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( !v36 )
    {
      *a3 = v31;
      *a4 = a2 & ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask((DXGADAPTERSOURCEHASH *)v12);
    }
    return 0LL;
  }
  return result;
}
