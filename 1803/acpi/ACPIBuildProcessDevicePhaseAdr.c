/*
 * XREFs of ACPIBuildProcessDevicePhaseAdr @ 0x1C000C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00121F0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     AMLIIsNamedChildPresent @ 0x1C0043DAC (AMLIIsNamedChildPresent.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseAdr(__int64 a1)
{
  ULONG_PTR v1; // rdi
  void *v2; // r14
  int v3; // ebp
  int v5; // eax
  __int64 v6; // rax
  void *v7; // rdx
  void *v8; // rcx
  __int64 *v9; // rbx
  volatile signed __int32 *v10; // rcx
  __int64 v11; // rcx
  void *v12; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = &unk_1C005B1F0;
  v3 = 0;
  if ( (*(_BYTE *)(v1 + 952) & 0x20) != 0 )
  {
    if ( !*(_QWORD *)(v1 + 600) || (*(_QWORD *)(v1 + 8) & 0x300000000000LL) != 0 )
      goto LABEL_11;
LABEL_10:
    *(_DWORD *)(a1 + 20) |= 0x20u;
    goto LABEL_11;
  }
  v5 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 712), a1 + 80, v1 + 600);
  dword_1C00677B8 = 0;
  pszDest = 0;
  v3 = v5;
  FreeDataBuffs(a1 + 80, 1u);
  if ( v3 >= 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x20uLL);
    goto LABEL_10;
  }
  v6 = *(_QWORD *)(v1 + 8);
  v7 = &unk_1C005B1F0;
  v8 = &unk_1C005B1F0;
  if ( (v6 & 0x200000000000LL) != 0 )
  {
    v7 = *(void **)(v1 + 560);
    if ( (v6 & 0x400000000000LL) != 0 )
      v8 = *(void **)(v1 + 568);
  }
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    2,
    6,
    32,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v3,
    v1,
    (__int64)v7,
    (__int64)v8);
LABEL_11:
  if ( (*(_QWORD *)(v1 + 8) & 0x100000000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 10;
  }
  else if ( (unsigned __int8)AMLIIsNamedChildPresent(*(_QWORD *)(v1 + 712), 1145653343LL) )
  {
    if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
      *(_DWORD *)(a1 + 32) = 16;
    }
    else
    {
      *(_DWORD *)(a1 + 32) = 6;
    }
  }
  else
  {
    v9 = AMLIGetNamedChild(*(_QWORD **)(v1 + 712), 1380204895);
    if ( !v9 )
      KeBugCheckEx(0xA5u, 0xDuLL, v1, 0x5244415FuLL, 0LL);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x100000000000uLL);
    v10 = *(volatile signed __int32 **)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 10;
    if ( v10 )
    {
      AMLIDereferenceHandleEx(v10);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    *(_QWORD *)(a1 + 56) = v9;
    v3 = ACPIGet(v1, 0x5244415Fu, -1610349566, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 560, 0LL);
  }
  v11 = *(_QWORD *)(v1 + 8);
  v12 = &unk_1C005B1F0;
  if ( (v11 & 0x200000000000LL) != 0 )
  {
    v2 = *(void **)(v1 + 560);
    if ( (v11 & 0x400000000000LL) != 0 )
      v12 = *(void **)(v1 + 568);
  }
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    6,
    33,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v3,
    v1,
    (__int64)v2,
    (__int64)v12);
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v3, 0LL, a1);
  return (unsigned int)v3;
}
