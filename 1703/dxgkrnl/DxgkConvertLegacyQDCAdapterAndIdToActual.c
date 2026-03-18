/*
 * XREFs of DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00AC7A0
 * Callers:
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00AC1D0 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00AC3D0 (DxgkGetMonitorInternalInfo.c)
 *     DxgkGetMonitorEdid @ 0x1C01AB1A0 (DxgkGetMonitorEdid.c)
 * Callees:
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0003B58 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C00399D8 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00AAF40 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1C017C214 (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C019578C (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall DxgkConvertLegacyQDCAdapterAndIdToActual(
        struct _LUID *a1,
        unsigned int a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  DXGADAPTERSOURCEHASH *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  unsigned int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int HashBitMask; // eax
  struct _LUID v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  char v28; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v29; // [rsp+68h] [rbp+10h] BYREF
  struct _LUID v30; // [rsp+70h] [rbp+18h] BYREF

  *a3 = *a1;
  *a4 = a2;
  v8 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 840);
  if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v8, v9, v10, v11) & a2) == 0 )
    return 0LL;
  LODWORD(result) = DxgkIsAdapterVirtualTopologyEnabled(*a1);
  v16 = (int)result;
  if ( (int)result < 0 )
    return (unsigned int)result;
  if ( !v29 )
    return 0LL;
  v17 = a2 >> DXGADAPTERSOURCEHASH::GetHashBitShift(v8, v13, v14, v15);
  if ( (int)DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(v8, v17, &v30, &v29) < 0 )
  {
    v27 = WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
    *(_QWORD *)(v27 + 24) = v17;
    *(_QWORD *)(v27 + 32) = v16;
    return 0LL;
  }
  HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(v8, v18, v20, v21);
  v23 = v30;
  result = DxgkIsVirtualizationDisabledForTarget(v30, a2 & ~HashBitMask, (__int64)&v28, (__int64)&v29, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( !(_BYTE)v29 )
    {
      *a3 = v23;
      *a4 = a2 & ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v8, v24, v25, v26);
    }
    return 0LL;
  }
  return result;
}
