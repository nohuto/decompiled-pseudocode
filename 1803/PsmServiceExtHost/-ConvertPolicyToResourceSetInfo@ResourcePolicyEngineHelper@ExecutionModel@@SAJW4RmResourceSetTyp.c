/*
 * XREFs of ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x18002C8A0
 * Callers:
 *     ?HampRpGetActivityResourceSetInfo@@YAJPEAXPEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18004118C (-HampRpGetActivityResourceSetInfo@@YAJPEAXPEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001E620 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?GetLegacyPriorityForActivityPriority@ResourcePolicyEngineHelper@ExecutionModel@@SAKE@Z @ 0x18002CBE0 (-GetLegacyPriorityForActivityPriority@ResourcePolicyEngineHelper@ExecutionModel@@SAKE@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineHelper::ConvertPolicyToResourceSetInfo(int a1, __int64 *a2)
{
  __int64 v4; // r11
  unsigned __int8 v5; // r10
  unsigned int LegacyPriorityForActivityPriority; // eax
  unsigned __int8 v7; // cl
  unsigned int v8; // eax
  int v9; // r8d
  __int64 v10; // r9
  char v11; // r10
  __int64 v12; // r11
  unsigned int v13; // edx
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rax
  int v17; // r10d
  int v18; // esi
  __int64 v19; // r14
  unsigned int v20; // r8d
  unsigned int v21; // eax
  int v22; // eax
  unsigned __int8 v23; // al
  _DWORD *v24; // rax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int64 v39; // rax
  _DWORD v41[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v42; // [rsp+40h] [rbp-C0h]
  __int64 v43; // [rsp+48h] [rbp-B8h]
  unsigned int v44; // [rsp+50h] [rbp-B0h]
  __int16 v45; // [rsp+58h] [rbp-A8h]
  char v46; // [rsp+5Ah] [rbp-A6h]
  unsigned int v47; // [rsp+5Ch] [rbp-A4h]
  int v48; // [rsp+60h] [rbp-A0h]
  __int64 v49; // [rsp+68h] [rbp-98h]
  __int64 v50; // [rsp+70h] [rbp-90h]
  int v51; // [rsp+80h] [rbp-80h]
  __int64 v52; // [rsp+88h] [rbp-78h]
  unsigned int v53; // [rsp+90h] [rbp-70h]
  int v54; // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-60h]
  unsigned int v56; // [rsp+A8h] [rbp-58h]
  int v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  unsigned int v59; // [rsp+C0h] [rbp-40h]
  _DWORD v60[49]; // [rsp+D4h] [rbp-2Ch]
  __int64 v61; // [rsp+198h] [rbp+98h]
  unsigned int v62; // [rsp+1A4h] [rbp+A4h]

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v41);
  if ( !a2 || !v4 )
    return 2147942487LL;
  if ( a1 == 57 )
    v41[0] = 57;
  else
    v41[0] = a1;
  v5 = *((_BYTE *)a2 + 60);
  v41[1] = -1;
  if ( v5 == 0xFF )
  {
    v5 = -1;
  }
  else if ( v5 <= 1u )
  {
    v5 = 1;
  }
  LegacyPriorityForActivityPriority = ExecutionModel::ResourcePolicyEngineHelper::GetLegacyPriorityForActivityPriority(v5);
  v7 = *((_BYTE *)a2 + 61);
  v41[2] = LegacyPriorityForActivityPriority;
  v53 = LegacyPriorityForActivityPriority;
  v56 = LegacyPriorityForActivityPriority;
  v59 = LegacyPriorityForActivityPriority;
  v8 = ExecutionModel::ResourcePolicyEngineHelper::GetLegacyPriorityForActivityPriority(v7);
  v13 = *((_DWORD *)a2 + 28);
  v44 = v8;
  v49 = a2[3];
  v61 = a2[2];
  v50 = *a2;
  v14 = v10;
  if ( (v13 & 0x40000000) == 0 )
    v14 = a2[1];
  v15 = *((_DWORD *)a2 + 10) == 3;
  v42 = v9;
  v55 = v14;
  v16 = a2[4];
  HIBYTE(v42) = v11;
  v17 = 1;
  v43 = v16;
  v54 = 1;
  if ( v15 )
  {
    v18 = 1;
    v48 = 1;
  }
  else
  {
    v18 = v48;
  }
  v52 = *((unsigned int *)a2 + 11);
  v19 = 2LL;
  v41[3] = *((_DWORD *)a2 + 12);
  v58 = *((unsigned int *)a2 + 13);
  v62 = v62 & 0xFFF3FFFF | ((v13 & 0x40 | (4 * (v13 & 8))) << 13);
  v51 = v10;
  v57 = 2;
  v45 = v45 & 0xFFE4 | (v13 >> 4) & 1 | (2 * ((v13 >> 5) & 1 | (4 * ((v13 >> 14) & 1 | (2 * ((v13 >> 11) & 1))))));
  if ( (v13 & 1) != 0 )
  {
    if ( (v13 & 4) != 0 )
      LOBYTE(v20) = 4;
    else
      v20 = (v13 & 2 | 4) >> 1;
    v21 = v13 >> 8;
  }
  else
  {
    LOBYTE(v20) = v10;
    v21 = v13 >> 8;
    if ( (v13 & 0x100) != 0 )
      LOBYTE(v20) = 1;
  }
  v46 = v20 & 7 | (v46 ^ (v46 ^ ((unsigned __int8)(v13 >> 13) << 6)) & 0x40) & 0xC0 | (8
                                                                                     * (((v13 & 0x400) != 0) | (2 * ((2 * (v21 & 1)) | ((v13 & 0x200) != 0)))));
  if ( (v13 & 0x1000) != 0 )
  {
    v17 = v10;
  }
  else if ( (v13 & 0x80u) != 0 )
  {
    v17 = 2;
  }
  v22 = v10;
  if ( v18 )
    v22 = 4;
  v47 = v22 | v17 & 0xFFFFFFF3 | (v13 >> 3) & 8;
  do
  {
    v23 = *((_BYTE *)a2 + v10 + 64);
    if ( v23 )
      v60[v10] = v23;
    ++v10;
  }
  while ( v10 < 47 );
  v24 = v41;
  do
  {
    v12 += 128LL;
    v25 = *(_OWORD *)v24;
    v26 = *((_OWORD *)v24 + 1);
    v24 += 32;
    *(_OWORD *)(v12 - 128) = v25;
    v27 = *((_OWORD *)v24 - 6);
    *(_OWORD *)(v12 - 112) = v26;
    v28 = *((_OWORD *)v24 - 5);
    *(_OWORD *)(v12 - 96) = v27;
    v29 = *((_OWORD *)v24 - 4);
    *(_OWORD *)(v12 - 80) = v28;
    v30 = *((_OWORD *)v24 - 3);
    *(_OWORD *)(v12 - 64) = v29;
    v31 = *((_OWORD *)v24 - 2);
    *(_OWORD *)(v12 - 48) = v30;
    v32 = *((_OWORD *)v24 - 1);
    *(_OWORD *)(v12 - 32) = v31;
    *(_OWORD *)(v12 - 16) = v32;
    --v19;
  }
  while ( v19 );
  v33 = *((_OWORD *)v24 + 1);
  *(_OWORD *)v12 = *(_OWORD *)v24;
  v34 = *((_OWORD *)v24 + 2);
  *(_OWORD *)(v12 + 16) = v33;
  v35 = *((_OWORD *)v24 + 3);
  *(_OWORD *)(v12 + 32) = v34;
  v36 = *((_OWORD *)v24 + 4);
  *(_OWORD *)(v12 + 48) = v35;
  v37 = *((_OWORD *)v24 + 5);
  *(_OWORD *)(v12 + 64) = v36;
  v38 = *((_OWORD *)v24 + 6);
  v39 = *((_QWORD *)v24 + 14);
  *(_OWORD *)(v12 + 80) = v37;
  *(_OWORD *)(v12 + 96) = v38;
  *(_QWORD *)(v12 + 112) = v39;
  return 0LL;
}
