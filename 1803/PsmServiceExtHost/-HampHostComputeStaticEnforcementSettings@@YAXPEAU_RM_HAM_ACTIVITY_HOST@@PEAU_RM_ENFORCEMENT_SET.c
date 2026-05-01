/*
 * XREFs of ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180019AC0
 * Callers:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800172C0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostNeedsEnforcementUpdate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180018F30 (-HampHostNeedsEnforcementUpdate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019090 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18001B8A0 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     RmpActivityImportanceMergeVectors @ 0x18001A160 (RmpActivityImportanceMergeVectors.c)
 *     ?RmpCommitThresholdsSubtractValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x18001A320 (-RmpCommitThresholdsSubtractValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A390 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004057C (-HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z @ 0x18004E814 (-RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z.c)
 */

void __fastcall HampHostComputeStaticEnforcementSettings(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2,
        __m128i *a3,
        __m128i *a4,
        struct _HAM_ACTIVITY **a5)
{
  __int64 v5; // r15
  struct _RM_ENFORCEMENT_SETTINGS *v6; // r13
  struct _HAM_ACTIVITY *v7; // rsi
  __int64 v8; // r12
  unsigned __int64 v9; // r14
  __int64 v10; // rdi
  int v11; // edx
  struct _HAM_ACTIVITY *FirstActivity; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v13; // r8
  int v14; // r9d
  unsigned __int16 v15; // r10
  __int64 v16; // r11
  unsigned int v17; // eax
  __int64 v18; // r11
  __int64 v19; // r13
  char v20; // cl
  int v21; // edx
  char v22; // cl
  BOOL v23; // ecx
  int v24; // ecx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  struct _HAM_ACTIVITY *v29; // rcx
  bool v30; // zf
  struct _HAM_ACTIVITY *v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r10
  __int64 v35; // rcx
  bool v36; // cf
  __int64 v37; // rdx
  char *v38; // rcx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  char v41; // cl
  __int64 v42; // rcx
  int v43; // edx
  __int64 v44; // r8
  __int64 v45; // rdx
  struct _HAM_ACTIVITY *v46; // rcx
  int v47; // eax
  char v48; // al
  char v49; // al
  char v50; // cl
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // r10
  unsigned __int64 v54; // r9
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  __m128i v58; // xmm0
  unsigned __int64 v59; // rdx
  __int64 v60; // rcx
  __m128i v61; // xmm1
  __m128i v62; // xmm2
  __m128i v63; // xmm3
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rcx
  __m128i v67; // xmm1
  char v68; // [rsp+20h] [rbp-38h]
  int v69; // [rsp+24h] [rbp-34h]
  __int64 v70; // [rsp+28h] [rbp-30h]
  __m128i v71; // [rsp+30h] [rbp-28h] BYREF
  __m128i v72; // [rsp+40h] [rbp-18h]

  v5 = 0LL;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  v6 = a2;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 6) = 1;
  v7 = 0LL;
  *((_DWORD *)a2 + 7) = 100;
  v8 = 0LL;
  v9 = 0LL;
  v68 = 1;
  v69 = 0;
  *((_DWORD *)a2 + 6) = *((_DWORD *)a1 + 140) != 2;
  v71 = 0uLL;
  v72 = 0uLL;
  v70 = 0LL;
  v10 = -1LL;
  FirstActivity = HampHostGetFirstActivity(a1);
  if ( FirstActivity )
  {
    v17 = 1;
    while ( 1 )
    {
      v18 = *((_QWORD *)FirstActivity + 63);
      v19 = *((_QWORD *)v13 + 96);
      if ( v18 == v19 )
      {
        v20 = *((_BYTE *)FirstActivity + 540);
      }
      else
      {
        if ( v18 )
          goto LABEL_64;
        if ( *((_BYTE *)FirstActivity + 540) != 2 )
          goto LABEL_64;
        v20 = 2;
        if ( *((_BYTE *)FirstActivity + 541) < 4u )
          goto LABEL_64;
      }
      v69 = v14 + 1;
      if ( (*((_BYTE *)FirstActivity + 476) & 0x20) == 0 )
      {
        v32 = *((_QWORD *)FirstActivity + 58);
        v13 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)FirstActivity + 57);
        v33 = *((_QWORD *)FirstActivity + 56);
        v34 = *((_QWORD *)FirstActivity + 55);
        if ( v32 == -1LL || v70 == -1 )
        {
          v70 = -1LL;
          v72.m128i_i64[1] = -1LL;
        }
        else
        {
          v35 = v32 + v70;
          v36 = v32 + v70 < v32;
          v37 = -1LL;
          if ( !v36 )
            v37 = v35;
          v70 = v37;
          v72.m128i_i64[1] = v37;
        }
        if ( v13 == (struct _RM_HAM_ACTIVITY_HOST *)-1LL || v9 == -1LL )
        {
          v9 = -1LL;
          v72.m128i_i64[0] = -1LL;
        }
        else
        {
          v38 = (char *)v13 + v9;
          v9 = -1LL;
          if ( v38 >= (char *)v13 )
            v9 = (unsigned __int64)v38;
          v72.m128i_i64[0] = v9;
        }
        if ( v33 == -1LL || v8 == -1 )
        {
          v8 = -1LL;
          v71.m128i_i64[1] = -1LL;
        }
        else
        {
          v39 = v33 + v8;
          v8 = -1LL;
          if ( v39 >= v33 )
            v8 = v39;
          v71.m128i_i64[1] = v8;
        }
        if ( v34 == -1LL || v5 == -1 )
        {
          v5 = -1LL;
          v71.m128i_i64[0] = -1LL;
        }
        else
        {
          v40 = v34 + v5;
          v5 = -1LL;
          if ( v40 >= v34 )
            v5 = v40;
          v71.m128i_i64[0] = v5;
        }
        goto LABEL_64;
      }
      if ( v7 )
      {
        v13 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)FirstActivity + 10);
        if ( v20 == 3 )
        {
          v21 = 1;
        }
        else
        {
          v21 = 0;
          if ( v20 == 2 )
            LOBYTE(v21) = *((_BYTE *)FirstActivity + 541) >= 4u;
        }
        v22 = *((_BYTE *)v7 + 540);
        if ( v22 == 3 )
          v23 = 1;
        else
          v23 = v22 == 2 && *((_BYTE *)v7 + 541) >= 4u;
        if ( v21 )
        {
          if ( !v23 )
          {
            v7 = FirstActivity;
            goto LABEL_64;
          }
        }
        else if ( v23 )
        {
          goto LABEL_64;
        }
        v24 = *((_DWORD *)v7 + 28) & 0x80;
        if ( *((char *)FirstActivity + 112) >= 0 )
        {
          if ( !v24 )
          {
LABEL_29:
            v25 = *((_QWORD *)FirstActivity + 57);
            v26 = *((_QWORD *)v7 + 57);
            if ( v25 <= v26 )
            {
              if ( v25 >= v26 )
              {
                v27 = *((_QWORD *)FirstActivity + 58);
                v28 = *((_QWORD *)v7 + 58);
                if ( v27 <= v28 )
                {
                  if ( v27 >= v28 )
                  {
                    v29 = (struct _HAM_ACTIVITY *)*((_QWORD *)v13 + 116);
                    if ( FirstActivity == v29 )
                    {
                      v7 = FirstActivity;
                    }
                    else
                    {
                      v30 = v7 == v29;
                      v31 = FirstActivity;
                      if ( !v30 - 1 <= 0 )
                        v31 = v7;
                      v7 = v31;
                    }
                  }
                }
                else
                {
                  v7 = FirstActivity;
                }
              }
            }
            else
            {
              v7 = FirstActivity;
            }
          }
        }
        else
        {
          if ( v24 )
            goto LABEL_29;
          v7 = FirstActivity;
        }
      }
      else
      {
        v7 = FirstActivity;
      }
LABEL_64:
      v41 = *((_BYTE *)FirstActivity + 540);
      if ( v41 == 3 || v41 == 2 && *((_BYTE *)FirstActivity + 541) >= 2u || v18 == v19 )
      {
        v42 = *((unsigned int *)FirstActivity + 106);
        if ( (v42 & 1) != 0 )
          v17 = RmpActivityImportanceMergeVectors(v42, v17, v13);
        v6 = a2;
        v43 = *((_DWORD *)FirstActivity + 119) & 3;
        if ( v43 <= *((_DWORD *)a2 + 6) )
          v43 = *((_DWORD *)a2 + 6);
        *((_DWORD *)a2 + 6) = v43;
        v41 = *((_BYTE *)FirstActivity + 540);
      }
      else
      {
        v6 = a2;
      }
      if ( v41 == 3 || v41 == 2 && *((_BYTE *)FirstActivity + 541) >= 4u )
        *((_BYTE *)v6 + 32) ^= (*((_BYTE *)v6 + 32) ^ (*((_BYTE *)v6 + 32) | (2 * (*((_DWORD *)FirstActivity + 119) >> 3)))) & 2;
      v44 = *((_QWORD *)FirstActivity + 12);
      v45 = *((_QWORD *)FirstActivity + 10);
      FirstActivity = 0LL;
      v14 = v69;
      v30 = v44 == v45 + 584;
      v46 = (struct _HAM_ACTIVITY *)(v44 - 96);
      v13 = a1;
      if ( !v30 )
        FirstActivity = v46;
      if ( !FirstActivity )
      {
        v11 = *((_DWORD *)v6 + 6);
        v16 = v70;
        v68 = v17;
        v15 = v17;
        break;
      }
    }
  }
  if ( ((v15 >> 6) & 1) != 0 )
    v47 = 2;
  else
    v47 = (v68 & 0xEu) >= 8 && (v68 & 0x30u) >= 0x20;
  if ( v11 <= v47 )
  {
    if ( ((v15 >> 6) & 1) != 0 )
      v11 = 2;
    else
      v11 = (v68 & 0xEu) >= 8 && (v68 & 0x30u) >= 0x20;
  }
  v48 = (*((_BYTE *)v6 + 32) ^ (4 * (v15 >> 7))) & 4;
  *((_DWORD *)v6 + 6) = v11;
  v49 = *((_BYTE *)v6 + 32) ^ v48;
  *((_BYTE *)v6 + 32) = v49;
  if ( (v15 & 0x400) == 0 || (*((_QWORD *)a1 + 79) & 0x400000000000LL) != 0 )
    v50 = 0;
  else
    v50 = 8;
  *((_BYTE *)v6 + 32) = v50 | v49 & 0xF7;
  if ( v7 )
  {
    v51 = *((_QWORD *)v7 + 58);
    v52 = *((_QWORD *)v7 + 57);
    v53 = *((_QWORD *)v7 + 56);
    v54 = *((_QWORD *)v7 + 55);
    if ( v51 == -1LL || v16 == -1 )
    {
      v72.m128i_i64[1] = -1LL;
    }
    else
    {
      v55 = -1LL;
      if ( v16 + v51 >= v51 )
        v55 = v16 + v51;
      v72.m128i_i64[1] = v55;
    }
    if ( v52 == -1LL || v9 == -1LL )
    {
      v9 = -1LL;
      v72.m128i_i64[0] = -1LL;
    }
    else
    {
      v56 = v52 + v9;
      v9 = -1LL;
      if ( v56 >= v52 )
        v9 = v56;
      v72.m128i_i64[0] = v9;
    }
    if ( v53 == -1LL || v8 == -1 )
    {
      v71.m128i_i64[1] = -1LL;
    }
    else
    {
      v57 = -1LL;
      if ( v8 + v53 >= v53 )
        v57 = v8 + v53;
      v71.m128i_i64[1] = v57;
    }
    if ( v54 != -1LL && v5 != -1 && v54 + v5 >= v54 )
      v10 = v54 + v5;
    v71.m128i_i64[0] = v10;
  }
  if ( !v69 )
  {
    v58 = *(__m128i *)((char *)a1 + 824);
    v72 = *(__m128i *)((char *)a1 + 840);
    v9 = v72.m128i_i64[0];
    v71 = v58;
  }
  v59 = *((_QWORD *)a1 + 112);
  if ( v9 < v59 && v9 )
    RmpCommitThresholdsScaleToTarget((struct _RM_COMMIT_THRESHOLDS *)&v71, v59, (struct _RM_COMMIT_THRESHOLDS *)&v71);
  if ( HampHostIsElasticRecipient(a1) )
  {
    v60 = *((_QWORD *)HampHostGetFirstActivity(a1) + 9);
    v61 = *(__m128i *)(v60 + 88);
    v71 = *(__m128i *)(v60 + 72);
    v72 = v61;
  }
  RmpCommitThresholdsSubtractValue((struct _RM_COMMIT_THRESHOLDS *)&v71, *((_QWORD *)a1 + 113));
  RmpCommitThresholdsSubtractValue((struct _RM_COMMIT_THRESHOLDS *)&v71, *((_QWORD *)a1 + 114));
  v62 = v72;
  v63 = v71;
  v64 = _mm_srli_si128(v72, 8).m128i_u64[0];
  v65 = v72.m128i_i64[0];
  if ( v64 <= *((_QWORD *)a1 + 101) )
    v64 = *((_QWORD *)a1 + 101);
  v66 = *((_QWORD *)a1 + 102);
  v72.m128i_i64[1] = v64;
  *((_QWORD *)v6 + 2) = v64;
  if ( v65 <= v66 )
    v65 = v66;
  v72.m128i_i64[0] = v65;
  if ( a3 )
  {
    *a3 = v63;
    a3[1] = v62;
  }
  if ( a4 )
  {
    v67 = v72;
    *a4 = v63;
    a4[1] = v67;
  }
  if ( a5 )
    *a5 = v7;
}
