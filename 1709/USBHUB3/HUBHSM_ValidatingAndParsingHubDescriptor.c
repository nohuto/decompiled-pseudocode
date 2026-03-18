/*
 * XREFs of HUBHSM_ValidatingAndParsingHubDescriptor @ 0x1C00087C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     HUBDESC_Validate30HubDescriptor @ 0x1C0032AC0 (HUBDESC_Validate30HubDescriptor.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x1C0032DF0 (HUBDESC_Validate20HubDescriptor.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBHSM_ValidatingAndParsingHubDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  int v3; // eax
  __int16 v4; // ax
  unsigned int v5; // ecx
  __int16 v6; // dx
  __int16 v7; // ax
  _QWORD v9[8]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  memset(v9, 0, 0x38uLL);
  LOWORD(v9[0]) = *(_WORD *)(v1 + 2450);
  v3 = *(_DWORD *)(v1 + 248);
  v9[3] = HUBMISC_LogDescriptorValidationErrorForHub;
  v9[4] = HUBMISC_LogDescriptorValidationWarningForHub;
  HIDWORD(v9[0]) = v3;
  v9[5] = v1;
  if ( v3 <= 0 )
    goto LABEL_16;
  if ( v3 > 2 )
  {
    if ( v3 == 3 && (unsigned __int8)HUBDESC_Validate30HubDescriptor(v1 + 1172, v2, v9, *(_QWORD *)(v1 + 2512)) )
    {
      v4 = *(unsigned __int8 *)(v1 + 1174);
      v5 = 2053;
      *(_WORD *)(v1 + 48) = v4;
      *(_WORD *)(v1 + 150) = v4;
      if ( (*(_BYTE *)(v1 + 1175) & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)(v1 + 40), 4u);
      v6 = (*(_WORD *)(v1 + 1175) >> 3) & 3;
      if ( (unsigned __int16)(v6 - 2) <= 1u )
      {
        _InterlockedOr((volatile signed __int32 *)(v1 + 40), 0x10u);
        return v5;
      }
      if ( v6 == 1 )
        goto LABEL_9;
      return v5;
    }
LABEL_16:
    WPP_RECORDER_SF_(*(_QWORD *)(v1 + 2512), 2u, 3u, 0x21u, (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids);
    return 2045;
  }
  if ( !(unsigned __int8)HUBDESC_Validate20HubDescriptor(v1 + 1172, v2, v9, *(_QWORD *)(v1 + 2512)) )
    goto LABEL_16;
  v7 = *(unsigned __int8 *)(v1 + 1174);
  v5 = 2053;
  *(_WORD *)(v1 + 48) = v7;
  *(_WORD *)(v1 + 144) = v7;
  if ( (*(_BYTE *)(v1 + 1175) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)(v1 + 40), 4u);
  if ( (*(_BYTE *)(v1 + 1175) & 8) != 0 )
LABEL_9:
    _InterlockedOr((volatile signed __int32 *)(v1 + 40), 8u);
  return v5;
}
