/*
 * XREFs of GreExtCreateRegion @ 0x1C0056650
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1C005AC90 (NtGdiExtCreateRegion.c)
 * Callees:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C001C9A0 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C001D210 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     PopThreadGuardedObject @ 0x1C001DE60 (PopThreadGuardedObject.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003AC98 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00449B0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0045000 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0045114 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00453F4 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C0045610 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00461E0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0046D44 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C00546D0 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0054DEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 *     vConvertXformToMatrix @ 0x1C009E2D0 (vConvertXformToMatrix.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00A0240 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00A0318 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

struct HOBJ__ *__fastcall GreExtCreateRegion(__int64 a1, unsigned int a2, struct _RECTL *a3)
{
  unsigned int right; // ebx
  struct HOBJ__ *v6; // rdi
  int v7; // ebx
  REGION *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  REGION *v12; // r14
  __int64 v13; // rdx
  struct HOBJ__ *v14; // rbx
  __int64 v15; // r8
  struct HOBJ__ *v17; // rbx
  REGION *v18; // rcx
  REGION *v19; // [rsp+20h] [rbp-99h] BYREF
  int v20; // [rsp+28h] [rbp-91h]
  __m128 *v21; // [rsp+30h] [rbp-89h] BYREF
  int v22; // [rsp+38h] [rbp-81h]
  int v23; // [rsp+3Ch] [rbp-7Dh]
  REGION *v24; // [rsp+40h] [rbp-79h] BYREF
  int v25; // [rsp+48h] [rbp-71h]
  _BYTE v26[8]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v27; // [rsp+58h] [rbp-61h]
  _QWORD v28[4]; // [rsp+A8h] [rbp-11h] BYREF
  int v29; // [rsp+C8h] [rbp+Fh]
  __m128 v30; // [rsp+D0h] [rbp+17h] BYREF
  float v31; // [rsp+E0h] [rbp+27h]
  float v32; // [rsp+E4h] [rbp+2Bh]
  int v33; // [rsp+E8h] [rbp+2Fh]
  int v34; // [rsp+ECh] [rbp+33h]
  int v35; // [rsp+F0h] [rbp+37h]

  right = a3->right;
  if ( a3->left != 32 || right > 0xFFFFFFD || 16 * (right + 2) > a2 )
    return 0LL;
  v6 = 0LL;
  v20 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v19, 0xD8u);
  if ( !v19 )
  {
    v18 = 0LL;
LABEL_44:
    REGION::vDeleteREGION(v18);
    v8 = 0LL;
    EngSetLastError(8u);
    goto LABEL_33;
  }
  if ( !(unsigned int)RGNOBJ::bSet((RGNOBJ *)&v19, right, a3 + 2) )
  {
    v18 = v19;
    goto LABEL_44;
  }
  if ( !a1 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v19) == 1 )
  {
    RGNOBJ::vTighten((RGNOBJ *)&v19);
    v8 = v19;
    if ( (((*((_DWORD *)v19 + 22) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((*((_DWORD *)v19 + 25) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((*((_DWORD *)v19 + 24) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((*((_DWORD *)v19 + 23) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
    {
      REGION::vDeleteREGION(v19);
      v17 = 0LL;
    }
    else
    {
      v17 = RGNOBJ::hrgnAssociate(&v19);
      if ( v17 )
      {
LABEL_32:
        v6 = v17;
        goto LABEL_33;
      }
      REGION::vDeleteREGION(v8);
    }
    v8 = 0LL;
    goto LABEL_32;
  }
  vConvertXformToMatrix(a1, &v30);
  v33 *= 16;
  v34 *= 16;
  v21 = &v30;
  v23 = 0;
  v30 = _mm_mul_ps(v30, (__m128)_xmm);
  v32 = v32 * 16.0;
  v31 = v31 * 16.0;
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v21, 8);
  if ( (v35 & 0x43) != 0x43 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v26);
    if ( v27 )
    {
      v7 = RGNOBJ::bCreate((RGNOBJ *)&v19, (struct EPATHOBJ *)v26, (struct EXFORMOBJ *)&v21);
      REGION::vDeleteREGION(v19);
      v8 = 0LL;
      if ( v7 )
      {
        v22 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v21, (struct EPATHOBJ *)v26, 1u, 0LL);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v21, v9, v10, v11);
        if ( !v21 )
        {
          EngSetLastError(8u);
          v14 = 0LL;
LABEL_21:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((__int16 **)&v21, v13, v15);
          goto LABEL_22;
        }
        v25 = 0;
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v24, 0xD8u);
        v12 = v24;
        if ( v24 )
        {
          RGNMEMOBJ::iReduce((RGNMEMOBJ *)&v24, (struct RGNOBJ *)&v21);
          RGNOBJ::vTighten((RGNOBJ *)&v24);
          v12 = v24;
          if ( (((*((_DWORD *)v24 + 22) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
            && (((*((_DWORD *)v24 + 25) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
            && (((*((_DWORD *)v24 + 24) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
            && (((*((_DWORD *)v24 + 23) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
          {
            v14 = RGNOBJ::hrgnAssociate(&v24);
            if ( !v14 )
            {
              REGION::vDeleteREGION(v12);
              v12 = 0LL;
            }
            goto LABEL_19;
          }
          REGION::vDeleteREGION(v24);
          v12 = 0LL;
        }
        else
        {
          EngSetLastError(8u);
        }
        v14 = 0LL;
LABEL_19:
        if ( v25 == 1 )
          REGION::vDeleteREGION(v12);
        goto LABEL_21;
      }
    }
    else
    {
      EngSetLastError(8u);
      REGION::vDeleteREGION(v19);
      v8 = 0LL;
    }
    v14 = 0LL;
LABEL_22:
    EPATHOBJ::vUnlock((EPATHOBJ *)v26);
    if ( v29 )
    {
      PopThreadGuardedObject(v28);
      v29 = 0;
    }
    goto LABEL_24;
  }
  RGNOBJ::vTighten((RGNOBJ *)&v19);
  v8 = v19;
  if ( (((*((_DWORD *)v19 + 22) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((*((_DWORD *)v19 + 25) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((*((_DWORD *)v19 + 24) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((*((_DWORD *)v19 + 23) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
  {
    v14 = RGNOBJ::hrgnAssociate(&v19);
    if ( !v14 )
    {
      REGION::vDeleteREGION(v8);
      v8 = 0LL;
    }
    goto LABEL_24;
  }
  REGION::vDeleteREGION(v19);
  v8 = 0LL;
LABEL_33:
  v14 = v6;
LABEL_24:
  if ( v20 == 1 )
    REGION::vDeleteREGION(v8);
  return v14;
}
