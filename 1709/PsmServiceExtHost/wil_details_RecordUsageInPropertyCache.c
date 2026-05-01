/*
 * XREFs of wil_details_RecordUsageInPropertyCache @ 0x18001EC18
 * Callers:
 *     wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x18001EBA4 (wil_details_FeaturePropertyCache_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_details_ModifyFeatureData @ 0x18001ECE4 (wil_details_ModifyFeatureData.c)
 */

_DWORD *__fastcall wil_details_RecordUsageInPropertyCache(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5)
{
  int v6; // esi
  _DWORD *v7; // rdi
  __int64 *v8; // r8
  __int64 (__fastcall *v9)(); // rdx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  int v13; // [rsp+28h] [rbp-38h]
  int v14; // [rsp+2Ch] [rbp-34h]
  _DWORD *v15; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+38h] [rbp-28h]
  int v17; // [rsp+3Ch] [rbp-24h]
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  int v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  int v21; // [rsp+88h] [rbp+28h]

  *(_QWORD *)a1 = 0LL;
  v6 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  v7 = (_DWORD *)a1;
  *(_DWORD *)(a1 + 16) = 0;
  if ( a3 < 0 )
    goto LABEL_19;
  if ( a3 <= 1 )
  {
LABEL_16:
    v9 = wil_details_SetPropertyCacheUsageCallback;
    v20 = a5;
    v18 = a1;
    a1 = (a3 & 0xFFFFFFFB) == 0;
    v19 = a3;
    v8 = &v18;
    if ( (a3 & 0xFFFFFFFB) != 0 )
      v9 = wil_details_SetPropertyCacheOpportunityCallback;
    goto LABEL_11;
  }
  if ( a3 > 3 )
  {
    if ( a3 > 5 )
    {
      if ( a3 <= 7 )
        goto LABEL_6;
LABEL_19:
      if ( (unsigned int)(a3 - 320) <= 0x3F )
      {
        v11 = ((unsigned int)Feature_HamOptIn__private_propertyCache >> 7) & 0x3F;
        if ( a3 - 320 == (_DWORD)v11 )
        {
          if ( (Feature_HamOptIn__private_propertyCache & 0x40) != 0 )
          {
            v7[4] = 1;
            return v7;
          }
          v17 = 1;
          v16 = 64;
          v15 = v7;
          wil_details_ModifyFeatureData(v11, wil_details_SetPropertyFlagCallback, &v15);
        }
      }
      v7[1] = a5;
      v7[2] = a3;
      v7[3] = 0;
      return v7;
    }
    goto LABEL_16;
  }
LABEL_6:
  switch ( a3 )
  {
    case 2:
      v21 = 0x10000;
      break;
    case 3:
      v21 = 0x40000;
      break;
    case 6:
      v21 = 0x20000;
      break;
    default:
      v21 = 0x80000;
      break;
  }
  v8 = &v12;
  v13 = v21;
  v9 = wil_details_SetPropertyFlagCallback;
  v14 = 0;
  v12 = a1;
LABEL_11:
  LOBYTE(v6) = (unsigned int)wil_details_ModifyFeatureData(a1, v9, v8) == 0;
  v7[4] = v6;
  return v7;
}
