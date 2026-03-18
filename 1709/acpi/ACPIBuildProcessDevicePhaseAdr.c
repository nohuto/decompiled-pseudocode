/*
 * XREFs of ACPIBuildProcessDevicePhaseAdr @ 0x1C00142A0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     AMLIIsNamedChildPresent @ 0x1C00058A0 (AMLIIsNamedChildPresent.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0014D80 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C0029B2C (ACPIVerifyAndCopyFirmwareDependencies.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseAdr(__int64 a1)
{
  ULONG_PTR v1; // rdi
  const char *v2; // r14
  int v3; // ebp
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  const char *v8; // rax
  int v10; // eax
  __int64 v11; // rax
  const char *v12; // rdx
  const char *v13; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C0067B08;
  v3 = 0;
  if ( (*(_BYTE *)(v1 + 952) & 0x20) != 0 )
  {
    if ( *(_QWORD *)(v1 + 600) && (*(_QWORD *)(v1 + 8) & 0x300000000000LL) == 0 )
      goto LABEL_17;
  }
  else
  {
    v10 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 712), a1 + 80, v1 + 600);
    dword_1C00797B8 = 0;
    pszDest = 0;
    v3 = v10;
    FreeDataBuffs(a1 + 80, 1u);
    if ( v3 >= 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x20uLL);
LABEL_17:
      *(_DWORD *)(a1 + 20) |= 0x20u;
      goto LABEL_3;
    }
    v11 = *(_QWORD *)(v1 + 8);
    v12 = (const char *)&unk_1C0067B08;
    v13 = (const char *)&unk_1C0067B08;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v12 = *(const char **)(v1 + 560);
      if ( (v11 & 0x400000000000LL) != 0 )
        v13 = *(const char **)(v1 + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0x20u,
      (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
      v3,
      v1,
      v12,
      v13);
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
    v5 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1380204895);
    if ( !v5 )
      KeBugCheckEx(0xA5u, 0xDuLL, v1, 0x5244415FuLL, 0LL);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x100000000000uLL);
    v6 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 10;
    if ( v6 )
    {
      AMLIDereferenceHandleEx(v6);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    *(_QWORD *)(a1 + 56) = v5;
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
  v7 = *(_QWORD *)(v1 + 8);
  v8 = (const char *)&unk_1C0067B08;
  if ( (v7 & 0x200000000000LL) != 0 )
  {
    v2 = *(const char **)(v1 + 560);
    if ( (v7 & 0x400000000000LL) != 0 )
      v8 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x21u,
    (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
    v3,
    v1,
    v2,
    v8);
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return (unsigned int)v3;
}
