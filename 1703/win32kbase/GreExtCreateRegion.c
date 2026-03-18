/*
 * XREFs of GreExtCreateRegion @ 0x1C00229E0
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1C00220D0 (NtGdiExtCreateRegion.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012D78 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     PopThreadGuardedObject @ 0x1C0012E10 (PopThreadGuardedObject.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0021570 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     vConvertXformToMatrix @ 0x1C0022E90 (vConvertXformToMatrix.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0022FB0 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0023830 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0037C7C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C003B9A0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C003BFE0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C0A4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C003C474 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C003C6B0 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003D1DC (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C003DD04 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00976F0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0097B48 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

HRGN __fastcall GreExtCreateRegion(__int64 a1, unsigned int a2, struct _RECTL *a3)
{
  unsigned int right; // ebx
  HRGN v6; // rdi
  int v7; // ebx
  REGION *v8; // rsi
  REGION *v9; // r14
  HRGN v10; // rbx
  HRGN v12; // rbx
  REGION *v13; // rcx
  REGION *v14; // [rsp+20h] [rbp-99h] BYREF
  int v15; // [rsp+28h] [rbp-91h]
  __m128 *v16; // [rsp+30h] [rbp-89h] BYREF
  int v17; // [rsp+38h] [rbp-81h]
  int v18; // [rsp+3Ch] [rbp-7Dh]
  REGION *v19; // [rsp+40h] [rbp-79h] BYREF
  int v20; // [rsp+48h] [rbp-71h]
  _BYTE v21[8]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v22; // [rsp+58h] [rbp-61h]
  _QWORD v23[4]; // [rsp+A8h] [rbp-11h] BYREF
  int v24; // [rsp+C8h] [rbp+Fh]
  __m128 v25; // [rsp+D0h] [rbp+17h] BYREF
  float v26; // [rsp+E0h] [rbp+27h]
  float v27; // [rsp+E4h] [rbp+2Bh]
  int v28; // [rsp+E8h] [rbp+2Fh]
  int v29; // [rsp+ECh] [rbp+33h]
  int v30; // [rsp+F0h] [rbp+37h]

  right = a3->right;
  if ( a3->left != 32 || right > 0xFFFFFFD || 16 * (right + 2) > a2 )
    return 0LL;
  v6 = 0LL;
  v15 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v14, 0xD8u);
  if ( !v14 )
  {
    v13 = 0LL;
LABEL_49:
    REGION::vDeleteREGION(v13);
    v8 = 0LL;
    EngSetLastError(8u);
    goto LABEL_35;
  }
  if ( !(unsigned int)RGNOBJ::bSet((RGNOBJ *)&v14, right, a3 + 2) )
  {
    v13 = v14;
    goto LABEL_49;
  }
  if ( !a1 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v14) == 1 )
  {
    RGNOBJ::vTighten((RGNOBJ *)&v14);
    v8 = v14;
    if ( (*((_DWORD *)v14 + 22) & 0xF8000000) != 0 && (*((_DWORD *)v14 + 22) & 0xF8000000) != -134217728
      || (*((_DWORD *)v14 + 25) & 0xF8000000) != -134217728 && (*((_DWORD *)v14 + 25) & 0xF8000000) != 0
      || (*((_DWORD *)v14 + 24) & 0xF8000000) != -134217728 && (*((_DWORD *)v14 + 24) & 0xF8000000) != 0
      || (*((_DWORD *)v14 + 23) & 0xF8000000) != -134217728 && (*((_DWORD *)v14 + 23) & 0xF8000000) != 0 )
    {
      REGION::vDeleteREGION(v14);
      v12 = 0LL;
    }
    else
    {
      v12 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v14);
      if ( v12 )
        goto LABEL_32;
      REGION::vDeleteREGION(v8);
    }
    v8 = 0LL;
LABEL_32:
    v6 = v12;
    goto LABEL_35;
  }
  vConvertXformToMatrix(a1, &v25);
  v28 *= 16;
  v29 *= 16;
  v16 = &v25;
  v18 = 0;
  v25 = _mm_mul_ps(v25, (__m128)_xmm);
  v27 = v27 * 16.0;
  v26 = v26 * 16.0;
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v16, 8);
  if ( (v30 & 0x43) != 0x43 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v21);
    if ( v22 )
    {
      v7 = RGNOBJ::bCreate((RGNOBJ *)&v14, (struct EPATHOBJ *)v21, (struct EXFORMOBJ *)&v16);
      REGION::vDeleteREGION(v14);
      v8 = 0LL;
      if ( v7 )
      {
        v17 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v16, (struct EPATHOBJ *)v21, 1u, 0LL);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v16);
        if ( !v16 )
        {
          EngSetLastError(8u);
          v10 = 0LL;
LABEL_23:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((__int16 **)&v16);
          goto LABEL_24;
        }
        v20 = 0;
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v19, 0xD8u);
        v9 = v19;
        if ( v19 )
        {
          RGNMEMOBJ::iReduce((RGNMEMOBJ *)&v19, (struct RGNOBJ *)&v16);
          RGNOBJ::vTighten((RGNOBJ *)&v19);
          v9 = v19;
          if ( ((*((_DWORD *)v19 + 22) & 0xF8000000) == 0 || (*((_DWORD *)v19 + 22) & 0xF8000000) == -134217728)
            && ((*((_DWORD *)v19 + 25) & 0xF8000000) == 0 || (*((_DWORD *)v19 + 25) & 0xF8000000) == -134217728)
            && ((*((_DWORD *)v19 + 24) & 0xF8000000) == 0 || (*((_DWORD *)v19 + 24) & 0xF8000000) == -134217728)
            && ((*((_DWORD *)v19 + 23) & 0xF8000000) == 0 || (*((_DWORD *)v19 + 23) & 0xF8000000) == -134217728) )
          {
            v10 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v19);
            if ( !v10 )
            {
              REGION::vDeleteREGION(v9);
              v9 = 0LL;
            }
            goto LABEL_21;
          }
          REGION::vDeleteREGION(v19);
          v9 = 0LL;
        }
        else
        {
          EngSetLastError(8u);
        }
        v10 = 0LL;
LABEL_21:
        if ( v20 == 1 )
          REGION::vDeleteREGION(v9);
        goto LABEL_23;
      }
    }
    else
    {
      EngSetLastError(8u);
      REGION::vDeleteREGION(v14);
      v8 = 0LL;
    }
    v10 = 0LL;
LABEL_24:
    EPATHOBJ::vUnlock((EPATHOBJ *)v21);
    if ( v24 )
    {
      PopThreadGuardedObject(v23);
      v24 = 0;
    }
    goto LABEL_26;
  }
  RGNOBJ::vTighten((RGNOBJ *)&v14);
  v8 = v14;
  if ( ((*((_DWORD *)v14 + 22) & 0xF8000000) == 0 || (*((_DWORD *)v14 + 22) & 0xF8000000) == -134217728)
    && ((*((_DWORD *)v14 + 25) & 0xF8000000) == -134217728 || (*((_DWORD *)v14 + 25) & 0xF8000000) == 0)
    && ((*((_DWORD *)v14 + 24) & 0xF8000000) == -134217728 || (*((_DWORD *)v14 + 24) & 0xF8000000) == 0)
    && ((*((_DWORD *)v14 + 23) & 0xF8000000) == -134217728 || (*((_DWORD *)v14 + 23) & 0xF8000000) == 0) )
  {
    v10 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v14);
    if ( !v10 )
    {
      REGION::vDeleteREGION(v8);
      v8 = 0LL;
    }
    goto LABEL_26;
  }
  REGION::vDeleteREGION(v14);
  v8 = 0LL;
LABEL_35:
  v10 = v6;
LABEL_26:
  if ( v15 == 1 )
    REGION::vDeleteREGION(v8);
  return v10;
}
