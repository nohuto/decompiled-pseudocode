/*
 * XREFs of rimExtractPointerDeviceUsages @ 0x1C0111434
 * Callers:
 *     rimPopulateContactFrameData @ 0x1C01120A8 (rimPopulateContactFrameData.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     rimHidP_GetUsageValue @ 0x1C0094650 (rimHidP_GetUsageValue.c)
 *     rimHidP_GetUsageValueArray @ 0x1C0107B64 (rimHidP_GetUsageValueArray.c)
 *     rimHidP_GetUsages @ 0x1C0107BCC (rimHidP_GetUsages.c)
 *     RIMEnsureUsageWithinLogicalBoundary @ 0x1C010F7A4 (RIMEnsureUsageWithinLogicalBoundary.c)
 *     rimExtractData @ 0x1C0110CBC (rimExtractData.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C0110D78 (rimExtractDigitizerPageButtonUsages.c)
 *     rimExtractGeometryPoints @ 0x1C0110FAC (rimExtractGeometryPoints.c)
 *     rimExtractPenInfo @ 0x1C0111358 (rimExtractPenInfo.c)
 *     rimExtractTouchInfo @ 0x1C0111B74 (rimExtractTouchInfo.c)
 */

__int64 __fastcall rimExtractPointerDeviceUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11)
{
  __int64 v11; // rdi
  unsigned __int8 v12; // bl
  unsigned int v13; // r14d
  __int64 v14; // rsi
  struct _HIDP_PREPARSED_DATA *v16; // r15
  __int64 v18; // rcx
  unsigned int v19; // r12d
  int v20; // eax
  unsigned __int16 v21; // r9
  unsigned __int16 v22; // r8
  BOOL v23; // r15d
  int UsageValueArray; // eax
  int DigitizerPageButtonUsages; // ebx
  _DWORD *v26; // r14
  int v27; // ecx
  _DWORD *v28; // rax
  unsigned __int16 v29; // r9
  int v30; // edx
  int v31; // eax
  unsigned __int16 v32; // r8
  __int64 v34; // [rsp+28h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp+8h]
  char v37; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v38; // [rsp+B8h] [rbp+20h]

  v38 = a4;
  v11 = a1 + 312;
  v12 = *a3;
  v13 = a4;
  v14 = a7;
  v35 = *(_QWORD *)(a1 + 672);
  v16 = a2;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x34u,
    (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
  *a8 = 1;
  v18 = 0LL;
  v19 = 0;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  if ( !*(_DWORD *)(a1 + 684) )
  {
LABEL_23:
    *(_DWORD *)(v14 + 4) = rimExtractData(a1, 1, 48, 0, 0LL);
    *(_DWORD *)(v14 + 8) = rimExtractData(a1, 1, 49, 0, 0LL);
    v27 = *(_DWORD *)(a1 + 24);
    if ( (unsigned int)(v27 - 1) > 3 )
    {
      if ( v27 != 7 )
      {
        if ( (unsigned int)(v27 - 5) > 1 )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x14u,
            0x37u,
            (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
        }
        else
        {
          v30 = a6;
          *(_DWORD *)(v14 + 64) = 3;
          rimExtractPenInfo(a1, v30, (_DWORD *)v14);
        }
LABEL_44:
        DigitizerPageButtonUsages = rimExtractDigitizerPageButtonUsages(a1, v16, a3, v13, v14);
        if ( DigitizerPageButtonUsages >= 0 )
        {
          v31 = *(_DWORD *)(a1 + 276);
          if ( (v31 & 0x20) != 0 && (v31 & 0x8000) == 0 )
          {
            v32 = *(_WORD *)(v14 + 58);
            LOWORD(a8) = 0;
            LODWORD(a9) = 1;
            if ( rimHidP_GetUsages(HidP_Input, 0xFF00u, v32, (unsigned __int16 *)&a8, (unsigned int *)&a9, v16, a3, v13) >= 0
              && (_DWORD)a9 == 1
              && (_WORD)a8 == 207 )
            {
              *a11 = 1;
            }
          }
        }
        goto LABEL_51;
      }
      *(_DWORD *)(v14 + 64) = 5;
    }
    else
    {
      *(_DWORD *)(v14 + 64) = 2;
    }
    rimExtractTouchInfo(a1, a6, v14);
    goto LABEL_44;
  }
  v20 = v12;
  LODWORD(a7) = v12;
  while ( v20 != *(_DWORD *)(v11 + 4) )
  {
LABEL_21:
    ++v19;
    v11 += 60LL;
    if ( v19 >= *(_DWORD *)(a1 + 684) )
    {
      v16 = a2;
      goto LABEL_23;
    }
  }
  v21 = *(_WORD *)(v11 + 12);
  v22 = *(_WORD *)(v14 + 58);
  v23 = (unsigned __int16)(v21 - 48) <= 1u;
  if ( v35 && *(_WORD *)(v35 + 8) && *(_WORD *)v11 == 1 && (unsigned __int16)(*(_WORD *)(v11 + 12) - 48) <= 1u )
  {
    *(_DWORD *)(v11 + 48) = 0;
    v18 = *(unsigned __int16 *)(v14 + 58);
    v22 = *(_WORD *)(*(_QWORD *)(v35 + 24) + 8 * v18 + 2);
  }
  if ( (*(_DWORD *)(a1 + 276) & 0x800) != 0 && *(_WORD *)v11 == 1 && (unsigned __int16)(v21 - 48) <= 1u )
  {
    UsageValueArray = rimHidP_GetUsageValueArray(v18, 1u, v22, v21, &v37, v34, a2, a3, v13);
    DigitizerPageButtonUsages = UsageValueArray;
    if ( UsageValueArray < 0 )
    {
      v29 = 53;
      goto LABEL_36;
    }
    v26 = (_DWORD *)(v11 + 52);
    rimExtractGeometryPoints(*(_WORD *)(v11 + 12), v14, v11 + 52, (__int64)&v37, *(unsigned __int16 *)(v11 + 56));
    v18 = 0LL;
LABEL_15:
    if ( *(_DWORD *)(v11 + 16) )
    {
      if ( *v26 < *(_DWORD *)(v11 + 32) || *v26 > *(_DWORD *)(v11 + 36) )
      {
        if ( *(_WORD *)v11 == 1 && v23 && *(_DWORD *)(a1 + 24) == 5 )
        {
          v13 = v38;
          if ( *(_WORD *)(v11 + 12) == 48 )
            v28 = a9;
          else
            v28 = a10;
          *v28 = 1;
          goto LABEL_20;
        }
      }
      else
      {
        *a8 = 0;
      }
    }
    else
    {
      *a8 = 0;
      if ( !v23 || a5 )
      {
        RIMEnsureUsageWithinLogicalBoundary(v11);
        v18 = 0LL;
      }
    }
    v13 = v38;
LABEL_20:
    v20 = a7;
    goto LABEL_21;
  }
  v26 = (_DWORD *)(v11 + 52);
  UsageValueArray = rimHidP_GetUsageValue(HidP_Input, *(_WORD *)v11, v22, v21, (unsigned int *)(v11 + 52), a2, a3, v38);
  v18 = 0LL;
  DigitizerPageButtonUsages = UsageValueArray;
  if ( UsageValueArray >= 0 )
    goto LABEL_15;
  v29 = 54;
LABEL_36:
  LODWORD(v34) = UsageValueArray;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    v29,
    (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids,
    v34);
LABEL_51:
  LODWORD(v34) = DigitizerPageButtonUsages;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x38u,
    (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids,
    v34);
  return (unsigned int)DigitizerPageButtonUsages;
}
