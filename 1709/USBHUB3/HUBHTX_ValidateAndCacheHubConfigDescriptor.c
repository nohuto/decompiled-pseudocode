/*
 * XREFs of HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x1C0002E4C
 * Callers:
 *     HUBHSM_ValidatingHubConfigurationDescriptor @ 0x1C0008970 (HUBHSM_ValidatingHubConfigurationDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001EA8 (WPP_RECORDER_SF_dD.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002F7F4 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038E80 (memmove.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBHTX_ValidateAndCacheHubConfigDescriptor(__int64 a1)
{
  unsigned __int16 *v2; // rsi
  unsigned __int16 *v3; // rax
  unsigned __int16 v4; // cx
  PVOID PoolWithTag; // rax
  int v6; // ebx
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // ax
  void *v9; // rcx
  int v11; // [rsp+28h] [rbp-60h]
  int v12; // [rsp+30h] [rbp-58h]
  _QWORD v13[7]; // [rsp+40h] [rbp-48h] BYREF

  v2 = 0LL;
  memset(v13, 0, sizeof(v13));
  LOWORD(v13[0]) = *(_WORD *)(a1 + 2450);
  HIDWORD(v13[0]) = *(_DWORD *)(a1 + 248);
  v13[3] = HUBMISC_LogDescriptorValidationErrorForHub;
  v13[4] = HUBMISC_LogDescriptorValidationWarningForHub;
  v3 = *(unsigned __int16 **)(a1 + 1248);
  v13[5] = a1;
  v4 = v3[1];
  if ( v4 < 0xFFu )
  {
    v2 = v3;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v4, 0x68334855u);
    *(_QWORD *)(a1 + 1248) = PoolWithTag;
    if ( !PoolWithTag )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2512), 2u, 3u, 0x15u, (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids);
      v6 = -1073741670;
      goto LABEL_10;
    }
    memmove(PoolWithTag, v2, v2[1]);
  }
  if ( !(unsigned __int8)HUBDESC_ValidateConfigurationDescriptorSet(
                           *(_QWORD *)(a1 + 1248),
                           *(unsigned __int16 *)(*(_QWORD *)(a1 + 1248) + 2LL),
                           (unsigned int)v13,
                           *(_QWORD *)(a1 + 2512),
                           0LL) )
    goto LABEL_6;
  v7 = *(_WORD *)(*(_QWORD *)(a1 + 1248) + 2LL);
  v8 = *(_WORD *)(a1 + 2596);
  if ( v7 != v8 )
  {
    v12 = v8;
    v11 = v7;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a1 + 2512),
      2u,
      3u,
      0x16u,
      (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids,
      v11,
      v12);
    ((void (__fastcall *)(_QWORD, __int64))v13[3])(v13[5], 61LL);
LABEL_6:
    v6 = -1073741823;
    goto LABEL_10;
  }
  v6 = 0;
LABEL_10:
  if ( v2 )
    ExFreePoolWithTag(v2, 0x68334855u);
  if ( v6 < 0 )
  {
    v9 = *(void **)(a1 + 1248);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0x68334855u);
      *(_QWORD *)(a1 + 1248) = 0LL;
    }
  }
  return ((v6 >> 31) & 0xFFFFFFF8) + 2053;
}
