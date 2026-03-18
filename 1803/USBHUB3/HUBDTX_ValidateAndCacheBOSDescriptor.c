/*
 * XREFs of HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0024260
 * Callers:
 *     HUBDSM_ValidatingBOSDescriptor @ 0x1C001CAA0 (HUBDSM_ValidatingBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0006374 (McTemplateK0p.c)
 *     HUBDTX_CacheBillboardInfo @ 0x1C002644C (HUBDTX_CacheBillboardInfo.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0033088 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C003827C (UsbDualRoleFeaturesQueryLocalMachine.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0039BC0 (memmove.c)
 *     memset @ 0x1C0039F00 (memset.c)
 *     HUBWNF_PublishUsbPartnerDualRoleFeatures @ 0x1C0075014 (HUBWNF_PublishUsbPartnerDualRoleFeatures.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheBOSDescriptor(__int64 a1)
{
  unsigned __int16 *v1; // rsi
  __int64 v3; // rbx
  char v4; // al
  __int64 v5; // r10
  char v6; // r12
  int v7; // ecx
  volatile signed __int32 *v8; // rbx
  char v9; // al
  char v10; // al
  bool v11; // zf
  char v12; // al
  char v13; // r12
  __int64 v14; // rcx
  unsigned int v15; // r14d
  PVOID PoolWithTag; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  char v20; // al
  __int64 v21; // rdx
  int v22; // ecx
  unsigned __int64 v23; // r9
  PVOID v24; // rax
  unsigned int v25; // ebx
  __int64 v27; // [rsp+58h] [rbp-51h]
  __int64 v28[8]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v29[16]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v30; // [rsp+B0h] [rbp+7h]
  __int64 v31; // [rsp+B8h] [rbp+Fh]
  __int64 v32; // [rsp+C0h] [rbp+17h]
  char v33; // [rsp+C8h] [rbp+1Fh]
  __int64 *v34; // [rsp+D0h] [rbp+27h]
  __int64 v35; // [rsp+D8h] [rbp+2Fh]
  __int64 v36; // [rsp+110h] [rbp+67h] BYREF

  v1 = *(unsigned __int16 **)(a1 + 2056);
  LOBYTE(v36) = 0;
  if ( !v1 )
    v1 = (unsigned __int16 *)(a1 + 1732);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  memset(v28, 0, 0x38uLL);
  v4 = BYTE5(v28[1]);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_BYTE *)(a1 + 2464);
  HIDWORD(v28[0]) = *(_DWORD *)(a1 + 172);
  v7 = *(_DWORD *)(v3 + 4);
  v8 = (volatile signed __int32 *)(a1 + 1632);
  v28[5] = a1;
  if ( (v7 & 0x20) != 0 )
    v4 = 1;
  BYTE5(v28[1]) = v4;
  v9 = HIBYTE(v28[1]);
  if ( (v7 & 0x2000) != 0 )
    v9 = 1;
  HIBYTE(v28[1]) = v9;
  v10 = BYTE4(v28[1]);
  if ( (v7 & 0x4000) != 0 )
    v10 = 1;
  v11 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  BYTE4(v28[1]) = v10;
  v12 = v28[6];
  if ( !v11 )
    v12 = 1;
  v13 = v6 & 1;
  LOBYTE(v28[6]) = v12;
  LODWORD(v28[2]) = *(_DWORD *)(v5 + 220);
  v28[3] = (__int64)HUBMISC_LogDescriptorValidationErrorForDevice;
  v28[4] = (__int64)&HUBMISC_LogDescriptorValidationWarningForDevice;
  LOWORD(v28[0]) = *(_WORD *)(a1 + 1990);
  v27 = *(_QWORD *)(v5 + 1432);
  LODWORD(v28[1]) = *(_DWORD *)(*(_QWORD *)a1 + 92LL);
  if ( !(unsigned __int8)HUBDESC_ValidateBOSDescriptorSet(
                           a1,
                           (int)v1,
                           (int)a1 + 1988,
                           *(_DWORD *)(a1 + 256),
                           (__int64)v28,
                           v29,
                           a1 + 2192,
                           a1 + 2194,
                           (__int64)&v36,
                           a1 + 2440,
                           a1 + 1632,
                           v27) )
  {
    if ( (*(_DWORD *)(a1 + 1644) & 0x40) == 0 )
    {
      *(_DWORD *)(a1 + 2432) = 1073807378;
      goto LABEL_44;
    }
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      4u,
      5u,
      0x36u,
      (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids);
  }
  if ( (_BYTE)v36 )
    _InterlockedOr(v8, 0x100000u);
  if ( v30 && !*(_QWORD *)(a1 + 2568) )
  {
    v15 = (*(_DWORD *)(v30 + 4) & 0x1F) + 1;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 4LL * v15, 0x64334855u);
    *(_QWORD *)(a1 + 2568) = PoolWithTag;
    if ( !PoolWithTag )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x37u,
        (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids);
      goto LABEL_44;
    }
    memmove(PoolWithTag, (const void *)(v30 + 12), 4LL * v15);
    *(_DWORD *)(a1 + 2576) = v15;
  }
  if ( v31 )
  {
    _InterlockedOr(v8, 0x10u);
    if ( (*v8 & 8) == 0 )
      *(_OWORD *)(a1 + 2064) = *(_OWORD *)(v31 + 4);
  }
  if ( v32 )
    HUBDTX_CacheBillboardInfo(a1);
  if ( v35 )
  {
    _InterlockedOr(v8, 0x40000u);
    *(_BYTE *)(a1 + 2665) = *(_BYTE *)(v35 + 21);
    UsbDualRoleFeaturesQueryLocalMachine(a1 + 2657);
    v17 = v35;
    v18 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 2661) = *(_DWORD *)(v35 + 22);
    v19 = *(unsigned int *)(v17 + 22);
    LOBYTE(v17) = 1;
    HUBWNF_PublishUsbPartnerDualRoleFeatures(*(_QWORD *)(v18 + 1416), v17, v19);
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 2016) + 4LL) > 1u && v33 == 1 )
  {
    v20 = *(_BYTE *)(a1 + 1992);
    if ( !v20 || v20 == -17 && *(_BYTE *)(a1 + 1993) == 2 && *(_BYTE *)(a1 + 1994) == 1 )
      _InterlockedOr(v8, 4u);
  }
  if ( !v13 )
  {
    if ( v34 )
    {
      v21 = *v34;
      v22 = *(_DWORD *)(a1 + 2464) | 1;
      v23 = HIBYTE(*v34);
      *(_QWORD *)(a1 + 2480) = *v34;
      *(_DWORD *)(a1 + 2464) = v22;
      if ( HIBYTE(v21) )
      {
        if ( (*(_DWORD *)(a1 + 2468) & 4) == 0 )
        {
          *(_BYTE *)(a1 + 2472) = v23;
          *(_DWORD *)(a1 + 2464) = v22 | 4;
          *(_BYTE *)(a1 + 2052) = BYTE6(v21);
        }
      }
    }
  }
  if ( !*(_QWORD *)(a1 + 2056) )
  {
    v24 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v1[1], 0x64334855u);
    *(_QWORD *)(a1 + 2056) = v24;
    if ( !v24 )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x38u,
        (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids);
LABEL_44:
      v25 = 4065;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
        McTemplateK0p(v14, &USBHUB3_ETW_EVENT_INVALID_BOS_DESCRIPTOR, (const GUID *)(a1 + 1516), *(_QWORD *)(a1 + 24));
      return v25;
    }
    memmove(v24, v1, v1[1]);
  }
  if ( (*v8 & 0x800) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 0x200u);
  v25 = 4077;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 0x20u);
  return v25;
}
