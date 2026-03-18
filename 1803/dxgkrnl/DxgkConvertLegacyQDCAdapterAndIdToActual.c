/*
 * XREFs of DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00ABA00
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C00ABB70 (DxgkGetMonitorInternalInfo.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00DAF10 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C01C4900 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 * Callees:
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0002CCC (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0002D44 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1C009C36C (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00AB090 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C019E680 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall DxgkConvertLegacyQDCAdapterAndIdToActual(
        struct _LUID *a1,
        unsigned int a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  DXGADAPTERSOURCEHASH *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rbx
  unsigned int v11; // ebp
  int AdapterAndSourceForHash; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int HashBitMask; // eax
  struct _LUID v18; // rbx
  __int64 v19; // rax
  char v20; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+10h] BYREF
  struct _LUID v22; // [rsp+80h] [rbp+18h] BYREF

  *a3 = *a1;
  *a4 = a2;
  v8 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal((__int64)a1) + 920);
  if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v8) & a2) == 0 )
    return 0LL;
  LODWORD(result) = DxgkIsAdapterVirtualTopologyEnabled(*a1, &v21);
  v10 = (int)result;
  if ( (int)result < 0 )
    return (unsigned int)result;
  if ( !v21 )
    return 0LL;
  v11 = a2 >> DXGADAPTERSOURCEHASH::GetHashBitShift(v8);
  AdapterAndSourceForHash = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(v8, v11, &v22, &v21);
  if ( AdapterAndSourceForHash < 0 )
  {
    v19 = WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
    *(_QWORD *)(v19 + 24) = v11;
    *(_QWORD *)(v19 + 32) = v10;
    return 0LL;
  }
  HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(v8);
  v18 = v22;
  result = DxgkIsVirtualizationDisabledForTarget(v22, a2 & ~HashBitMask, (__int64)&v20, (__int64)&v21, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( !(_BYTE)v21 )
    {
      *a3 = v18;
      *a4 = a2 & ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v8);
    }
    return 0LL;
  }
  return result;
}
