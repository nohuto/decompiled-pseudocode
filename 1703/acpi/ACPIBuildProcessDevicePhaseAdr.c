/*
 * XREFs of ACPIBuildProcessDevicePhaseAdr @ 0x1C000E610
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     AMLIIsNamedChildPresent @ 0x1C000A900 (AMLIIsNamedChildPresent.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0012240 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C0028E8C (ACPIVerifyAndCopyFirmwareDependencies.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseAdr(__int64 a1)
{
  ULONG_PTR v1; // rdi
  const char *v2; // r14
  int v3; // ebp
  __int64 v5; // rdx
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  const char *v9; // rax
  int v11; // eax
  __int64 v12; // rax
  const char *v13; // rdx
  const char *v14; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C0066CD0;
  v3 = 0;
  if ( (*(_BYTE *)(v1 + 952) & 0x20) != 0 )
  {
    if ( *(_QWORD *)(v1 + 600) && (*(_QWORD *)(v1 + 8) & 0x300000000000LL) == 0 )
      goto LABEL_17;
  }
  else
  {
    v11 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 712), a1 + 80, v1 + 600);
    dword_1C00776F8 = 0;
    pszDest = 0;
    v3 = v11;
    FreeDataBuffs(a1 + 80, 1LL);
    if ( v3 >= 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x20uLL);
LABEL_17:
      *(_DWORD *)(a1 + 20) |= 0x20u;
      goto LABEL_3;
    }
    v12 = *(_QWORD *)(v1 + 8);
    v13 = (const char *)&unk_1C0066CD0;
    v14 = (const char *)&unk_1C0066CD0;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v13 = *(const char **)(v1 + 560);
      if ( (v12 & 0x400000000000LL) != 0 )
        v14 = *(const char **)(v1 + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0x20u,
      (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
      v3,
      v1,
      v13,
      v14);
  }
LABEL_3:
  if ( (*(_QWORD *)(v1 + 8) & 0x100000000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 10;
  }
  else if ( AMLIIsNamedChildPresent(*(__int64 **)(v1 + 712), 1145653343) )
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
    v6 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1380204895);
    if ( !v6 )
      KeBugCheckEx(0xA5u, 0xDuLL, v1, 0x5244415FuLL, 0LL);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x100000000000uLL);
    v7 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 10;
    if ( v7 )
    {
      AMLIDereferenceHandleEx(v7, v5);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    *(_QWORD *)(a1 + 56) = v6;
    v3 = ACPIGet(
           (__int64 *)v1,
           1380204895,
           -1610349566,
           0LL,
           0,
           (__int64)ACPIBuildCompleteMustSucceed,
           a1,
           v1 + 560,
           0LL);
  }
  v8 = *(_QWORD *)(v1 + 8);
  v9 = (const char *)&unk_1C0066CD0;
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v2 = *(const char **)(v1 + 560);
    if ( (v8 & 0x400000000000LL) != 0 )
      v9 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x21u,
    (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
    v3,
    v1,
    v2,
    v9);
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return (unsigned int)v3;
}
