/*
 * XREFs of ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x1800480E0
 * Callers:
 *     ?HampRpGetActivityResourceSetInfo@@YAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_RESOURCE_SET_TYPE@@PEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180048478 (-HampRpGetActivityResourceSetInfo@@YAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_RESOURCE.c)
 * Callees:
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x180001F40 (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800100E0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?GetLegacyPriorityForActivityPriority@ResourcePolicyEngineHelper@ExecutionModel@@SAKE@Z @ 0x180048400 (-GetLegacyPriorityForActivityPriority@ResourcePolicyEngineHelper@ExecutionModel@@SAKE@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineHelper::ConvertPolicyToResourceSetInfo(__int64 a1, __int64 *a2)
{
  int v3; // r9d
  __int64 v4; // r11
  int v5; // eax
  unsigned __int8 v6; // r9
  unsigned __int8 v7; // al
  unsigned int LegacyPriorityForActivityPriority; // eax
  __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned int *v11; // rcx
  unsigned int v12; // eax
  char v13; // r9
  int v14; // r10d
  __int64 v15; // rax
  int v16; // r8d
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r8
  unsigned int v21; // r10d
  _OWORD *v22; // r11
  unsigned int v23; // edx
  int v24; // edx
  unsigned int v25; // r10d
  char *v26; // rdx
  __int64 i; // rcx
  unsigned __int8 v28; // al
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  _DWORD v38[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v39; // [rsp+40h] [rbp-C0h]
  __int64 v40; // [rsp+48h] [rbp-B8h]
  unsigned int v41; // [rsp+50h] [rbp-B0h]
  __int16 v42; // [rsp+58h] [rbp-A8h]
  char v43; // [rsp+5Ah] [rbp-A6h]
  unsigned int v44; // [rsp+5Ch] [rbp-A4h]
  int v45; // [rsp+60h] [rbp-A0h]
  __int64 v46; // [rsp+70h] [rbp-90h]
  __int64 v47; // [rsp+78h] [rbp-88h]
  char v48; // [rsp+98h] [rbp-68h] BYREF
  char v49; // [rsp+DCh] [rbp-24h] BYREF
  __int64 v50; // [rsp+1A0h] [rbp+A0h]
  unsigned int v51; // [rsp+1ACh] [rbp+ACh]

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v38);
  if ( !a2 || !v4 )
    return 2147942487LL;
  v5 = 57;
  if ( v3 != 57 )
    v5 = v3;
  v38[1] = -1;
  v38[0] = v5;
  v6 = -1;
  v7 = *((_BYTE *)a2 + 60);
  if ( v7 != 0xFF )
  {
    v6 = *((_BYTE *)a2 + 60);
    if ( v7 <= 1u )
      v6 = 1;
  }
  LegacyPriorityForActivityPriority = ExecutionModel::ResourcePolicyEngineHelper::GetLegacyPriorityForActivityPriority(v6);
  v9 = 3LL;
  v38[2] = LegacyPriorityForActivityPriority;
  v10 = 3LL;
  v11 = (unsigned int *)&v48;
  do
  {
    *v11 = LegacyPriorityForActivityPriority;
    v11 += 6;
    --v10;
  }
  while ( v10 );
  v12 = ExecutionModel::ResourcePolicyEngineHelper::GetLegacyPriorityForActivityPriority(*((_BYTE *)a2 + 61));
  v14 = *((_DWORD *)a2 + 28);
  v41 = v12;
  v15 = a2[3];
  v39 = v16;
  v17 = a2[1];
  v46 = v15;
  if ( (v14 & 0x40000000) != 0 )
    v17 = 0LL;
  v50 = a2[2];
  v47 = *a2;
  HIBYTE(v39) = v13;
  ExecutionModel::_ResourceSetInfo::SetAmount((__int64)v38, 1, v17);
  v18 = v45;
  v19 = *((unsigned int *)a2 + 11);
  if ( *((_DWORD *)a2 + 10) == 3 )
    v18 = 1;
  v40 = a2[4];
  v45 = v18;
  ExecutionModel::_ResourceSetInfo::SetAmount((__int64)v38, 0, v19);
  v20 = *((unsigned int *)a2 + 13);
  v38[3] = *((_DWORD *)a2 + 12);
  ExecutionModel::_ResourceSetInfo::SetAmount((__int64)v38, 2, v20);
  v51 = v51 & 0xFFF3FFFF | ((v21 & 0x40 | (4 * (v21 & 8))) << 13);
  v42 = v42 & 0xFFE4 | (v21 >> 4) & 1 | (2 * ((v21 >> 5) & 1 | (4 * ((v21 >> 14) & 1 | (2 * ((v21 >> 11) & 1))))));
  if ( (v21 & 1) != 0 )
  {
    if ( (v21 & 4) != 0 )
      LOBYTE(v23) = 4;
    else
      v23 = (v21 & 2 | 4) >> 1;
  }
  else
  {
    LOBYTE(v23) = (v21 & 0x100) != 0;
  }
  v43 = v23 & 7 | ((v43 ^ ((unsigned __int8)(v21 >> 13) << 6)) & 0x40 ^ v43) & 0xC0 | (8
                                                                                     * (((v21 & 0x400) != 0) | (2 * (((v21 & 0x200) != 0) | (2 * (BYTE1(v21) & 1))))));
  if ( (v21 & 0x1000) != 0 )
    v24 = 0;
  else
    v24 = ((v21 & 0x80u) != 0) + 1;
  v25 = (v45 != 0 ? 4 : 0) | v24 & 0xFFFFFFF3 | (v21 >> 3) & 8;
  v26 = &v49;
  v44 = v25;
  for ( i = 0LL; i < 47; ++i )
  {
    v28 = *((_BYTE *)a2 + i + 64);
    if ( v28 )
      *(_DWORD *)v26 = v28;
    v26 += 4;
  }
  v29 = v38;
  do
  {
    v30 = v29[1];
    *v22 = *v29;
    v31 = v29[2];
    v22[1] = v30;
    v32 = v29[3];
    v22[2] = v31;
    v33 = v29[4];
    v22[3] = v32;
    v34 = v29[5];
    v22[4] = v33;
    v35 = v29[6];
    v22[5] = v34;
    v36 = v29[7];
    v29 += 8;
    v22[6] = v35;
    v22 += 8;
    *(v22 - 1) = v36;
    --v9;
  }
  while ( v9 );
  return 0LL;
}
