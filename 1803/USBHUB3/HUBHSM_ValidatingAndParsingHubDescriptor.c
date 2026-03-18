/*
 * XREFs of HUBHSM_ValidatingAndParsingHubDescriptor @ 0x1C0008770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     HUBDESC_Validate30HubDescriptor @ 0x1C0033CA4 (HUBDESC_Validate30HubDescriptor.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x1C0033FE4 (HUBDESC_Validate20HubDescriptor.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

__int64 __fastcall HUBHSM_ValidatingAndParsingHubDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  int v3; // eax
  __int16 v4; // ax
  unsigned int v5; // edx
  unsigned __int16 v6; // cx
  __int16 v7; // cx
  __int16 v8; // ax
  __int16 v9; // ax
  _QWORD v11[8]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  memset(v11, 0, 0x38uLL);
  LOWORD(v11[0]) = *(_WORD *)(v1 + 2450);
  v3 = *(_DWORD *)(v1 + 248);
  v11[3] = HUBMISC_LogDescriptorValidationErrorForHub;
  v11[4] = HUBMISC_LogDescriptorValidationWarningForHub;
  HIDWORD(v11[0]) = v3;
  v11[5] = v1;
  if ( v3 <= 0 )
    goto LABEL_16;
  if ( v3 > 2 )
  {
    if ( v3 == 3 && (unsigned __int8)HUBDESC_Validate30HubDescriptor(v1 + 1172, v2, v11, *(_QWORD *)(v1 + 2512)) )
    {
      v4 = *(unsigned __int8 *)(v1 + 1174);
      v5 = 2053;
      *(_WORD *)(v1 + 48) = v4;
      *(_WORD *)(v1 + 150) = v4;
      v6 = *(_WORD *)(v1 + 1175);
      if ( (v6 & 1) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(v1 + 40), 4u);
        v6 = *(_WORD *)(v1 + 1175);
      }
      v7 = (v6 >> 3) & 3;
      if ( (unsigned __int16)(v7 - 2) <= 1u )
      {
        _InterlockedOr((volatile signed __int32 *)(v1 + 40), 0x10u);
        return v5;
      }
      if ( v7 == 1 )
        goto LABEL_9;
      return v5;
    }
LABEL_16:
    WPP_RECORDER_SF_(*(_QWORD *)(v1 + 2512), 2u, 3u, 0x21u, (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids);
    return 2045;
  }
  if ( !(unsigned __int8)HUBDESC_Validate20HubDescriptor(v1 + 1172, v2, v11, *(_QWORD *)(v1 + 2512)) )
    goto LABEL_16;
  v8 = *(unsigned __int8 *)(v1 + 1174);
  v5 = 2053;
  *(_WORD *)(v1 + 48) = v8;
  *(_WORD *)(v1 + 144) = v8;
  v9 = *(_WORD *)(v1 + 1175);
  if ( (v9 & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v1 + 40), 4u);
    v9 = *(_WORD *)(v1 + 1175);
  }
  if ( (v9 & 8) != 0 )
LABEL_9:
    _InterlockedOr((volatile signed __int32 *)(v1 + 40), 8u);
  return v5;
}
