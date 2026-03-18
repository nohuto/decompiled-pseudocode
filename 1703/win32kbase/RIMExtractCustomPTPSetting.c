/*
 * XREFs of RIMExtractCustomPTPSetting @ 0x1C011798C
 * Callers:
 *     RIMExtractCustomPTPSettings @ 0x1C0117C94 (RIMExtractCustomPTPSettings.c)
 * Callees:
 *     rimHidP_GetUsageValue @ 0x1C000848C (rimHidP_GetUsageValue.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0009EC4 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C000B1BC (rimHidP_GetSpecificValueCaps.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C008A0DC (RIMComputeSpecificHighMetricValue.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     rimHidP_GetUsages @ 0x1C0106EE0 (rimHidP_GetUsages.c)
 */

__int64 __fastcall RIMExtractCustomPTPSetting(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        __int64 a3,
        char *a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        unsigned __int16 a7,
        int a8,
        _DWORD *a9)
{
  int v9; // ebx
  int UsageValue; // edi
  unsigned __int16 v12; // r12
  unsigned __int16 v13; // r13
  unsigned __int16 v14; // r15
  int SpecificValueCaps; // eax
  int v16; // eax
  struct _HIDP_PREPARSED_DATA *v18; // [rsp+30h] [rbp-D0h]
  struct _HIDP_PREPARSED_DATA *v19; // [rsp+30h] [rbp-D0h]
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v21[2]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v22; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v23; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h]
  char *v25; // [rsp+68h] [rbp-98h]
  struct _HIDP_PREPARSED_DATA *v26; // [rsp+70h] [rbp-90h]
  _DWORD *v27; // [rsp+78h] [rbp-88h]
  struct _HIDP_BUTTON_CAPS v28; // [rsp+80h] [rbp-80h] BYREF
  struct _HIDP_BUTTON_CAPS v29; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v30[12]; // [rsp+120h] [rbp+20h] BYREF

  v9 = 0;
  v24 = a3;
  v26 = a2;
  v25 = a4;
  v27 = a9;
  UsageValue = -1073741823;
  v20 = 0;
  memset(&v28, 0, sizeof(v28));
  v21[0] = 1;
  v22 = 10;
  if ( a8 < 0 )
    goto LABEL_31;
  if ( a8 <= 1 )
  {
    v12 = a6;
    v13 = a5;
    v19 = a2;
    v14 = a7;
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                          HidP_Feature,
                          a5,
                          a6,
                          a7,
                          (struct _HIDP_VALUE_CAPS *)&v28,
                          v21,
                          v19);
  }
  else
  {
    if ( a8 != 2 )
      goto LABEL_31;
    v12 = a6;
    v13 = a5;
    v18 = a2;
    v14 = a7;
    SpecificValueCaps = rimHidP_GetSpecificButtonCaps(HidP_Feature, a5, a6, a7, &v29, v21, v18);
  }
  UsageValue = SpecificValueCaps;
  if ( SpecificValueCaps < 0 )
    goto LABEL_31;
  if ( !a8 )
  {
    if ( !*(_QWORD *)&v28.Reserved[8]
      && (v28.Reserved[6] & 0x80000000) == 0
      && (int)v28.Reserved[7] >= (int)v28.Reserved[6] )
    {
      UsageValue = rimHidP_GetUsageValue(HidP_Feature, v13, v12, v14, &v23, v26, v25, *(unsigned __int16 *)(v24 + 8));
      if ( UsageValue < 0 )
        goto LABEL_31;
      v16 = v23;
      if ( v23 < v28.Reserved[6] || v23 > v28.Reserved[7] || v23 >= 0x7FFFFFFF )
      {
        UsageValue = -1073741762;
        goto LABEL_31;
      }
      goto LABEL_21;
    }
LABEL_30:
    UsageValue = -1072627706;
    goto LABEL_31;
  }
  if ( a8 == 1 )
  {
    if ( *(_QWORD *)&v28.Reserved[8] )
    {
      if ( gpfnHidP_GetScaledUsageValue )
        UsageValue = gpfnHidP_GetScaledUsageValue(
                       HidP_Feature,
                       v13,
                       v12,
                       v14,
                       &v20,
                       v26,
                       v25,
                       *(unsigned __int16 *)(v24 + 8));
      else
        UsageValue = -1073741637;
      if ( UsageValue < 0 )
        goto LABEL_31;
      v29 = v28;
      v16 = RIMComputeSpecificHighMetricValue(v20, (__int64)&v29);
LABEL_21:
      v20 = v16;
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  UsageValue = rimHidP_GetUsages(HidP_Feature, v13, v12, v30, &v22, v26, v25, *(unsigned __int16 *)(v24 + 8));
  if ( UsageValue >= 0 && v22 )
  {
    while ( v30[v9] != v14 )
    {
      if ( ++v9 == v22 )
        goto LABEL_31;
    }
    v20 = 1;
  }
LABEL_31:
  *v27 = v20;
  return (unsigned int)UsageValue;
}
