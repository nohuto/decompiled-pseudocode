/*
 * XREFs of fsg_ExecuteGlyph @ 0x1C02C7254
 * Callers:
 *     fsg_CreateGlyphData @ 0x1C02C6CA0 (fsg_CreateGlyphData.c)
 * Callees:
 *     FixMul @ 0x1C02BD1FC (FixMul.c)
 *     mth_MxConcat2x2 @ 0x1C02BDAA4 (mth_MxConcat2x2.c)
 *     scl_IncrementChildElement @ 0x1C02BE788 (scl_IncrementChildElement.c)
 *     fsg_AllocateGlyphDataMemory @ 0x1C02C61C0 (fsg_AllocateGlyphDataMemory.c)
 *     fsg_CheckOutlineOrientation @ 0x1C02C6208 (fsg_CheckOutlineOrientation.c)
 *     fsg_CompositeInnerGridFit @ 0x1C02C694C (fsg_CompositeInnerGridFit.c)
 *     fsg_DoScanControl @ 0x1C02C6EA8 (fsg_DoScanControl.c)
 *     fsg_InitializeGlyphData @ 0x1C02C7E0C (fsg_InitializeGlyphData.c)
 *     fsg_LinkChild @ 0x1C02C7EF8 (fsg_LinkChild.c)
 *     fsg_MergeGlyphData @ 0x1C02C7F5C (fsg_MergeGlyphData.c)
 *     fsg_SimpleInnerGridFit @ 0x1C02C86C8 (fsg_SimpleInnerGridFit.c)
 *     sfac_ReadComponentData @ 0x1C02CA7EC (sfac_ReadComponentData.c)
 *     sfac_ReadGlyphHeader @ 0x1C02CAAE0 (sfac_ReadGlyphHeader.c)
 *     sfac_ReadGlyphMetrics @ 0x1C02CAD54 (sfac_ReadGlyphMetrics.c)
 *     sfac_ReadOutlineData @ 0x1C02CAF68 (sfac_ReadOutlineData.c)
 *     sfac_ReleaseGlyph @ 0x1C02CB348 (sfac_ReleaseGlyph.c)
 */

__int64 __fastcall fsg_ExecuteGlyph(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int *a11,
        __int64 a12,
        __int64 a13,
        int a14)
{
  __int64 v14; // r14
  int *v15; // rdi
  __int64 v17; // r8
  __int64 v19; // rdx
  __int64 result; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 *v23; // r12
  __int16 *v24; // r13
  int v25; // r8d
  __int64 v26; // rdx
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // r8
  int fixed; // eax
  int v31; // r10d
  unsigned __int16 i; // dx
  __int64 v33; // r8
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  unsigned __int16 v39; // r8
  __int16 v40; // dx
  unsigned __int16 v41; // ax
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned __int16 v44; // ax
  unsigned __int16 v45; // dx
  unsigned int v46; // ecx
  __int64 v47; // rdx
  __int64 v48; // r13
  int *v49; // r12
  unsigned int ComponentData; // eax
  unsigned int v51; // ebx
  int v52; // eax
  int v53; // edx
  int v54; // ecx
  int v55; // ecx
  __int16 *v56; // rcx
  __int16 v57; // ax
  unsigned __int64 v58; // rax
  char *v59; // rdx
  __int16 v60; // [rsp+30h] [rbp-B1h]
  __int16 v61; // [rsp+30h] [rbp-B1h]
  __int16 v62; // [rsp+38h] [rbp-A9h]
  unsigned __int16 v63; // [rsp+38h] [rbp-A9h]
  __int16 v64; // [rsp+40h] [rbp-A1h]
  unsigned __int16 v65; // [rsp+40h] [rbp-A1h]
  __int16 v66; // [rsp+48h] [rbp-99h]
  __int16 v67; // [rsp+48h] [rbp-99h]
  __int16 psResult; // [rsp+50h] [rbp-91h]
  __int16 psResulta; // [rsp+50h] [rbp-91h]
  int v70; // [rsp+58h] [rbp-89h]
  unsigned int v71; // [rsp+58h] [rbp-89h]
  __int16 v72; // [rsp+70h] [rbp-71h]
  unsigned __int16 v73; // [rsp+70h] [rbp-71h]
  __int64 v74; // [rsp+78h] [rbp-69h]
  __int64 v75; // [rsp+78h] [rbp-69h]
  int v76; // [rsp+98h] [rbp-49h] BYREF
  int v77; // [rsp+9Ch] [rbp-45h]
  int v78; // [rsp+A0h] [rbp-41h] BYREF
  int v79; // [rsp+A4h] [rbp-3Dh] BYREF
  __int64 v80; // [rsp+A8h] [rbp-39h] BYREF
  __int128 v81; // [rsp+B8h] [rbp-29h] BYREF
  __int128 v82; // [rsp+C8h] [rbp-19h]
  int v83; // [rsp+D8h] [rbp-9h]
  unsigned int v85; // [rsp+140h] [rbp+5Fh]

  v85 = a4;
  v14 = a6;
  v15 = a11;
  v17 = a2;
  *a11 = 0;
  if ( *(_DWORD *)(v14 + 56) == 3 )
  {
    v19 = *(_QWORD *)(v14 + 24);
    if ( v19 )
    {
      scl_IncrementChildElement(*(_QWORD *)(v14 + 176), *(_QWORD *)(v19 + 176));
    }
    else
    {
      *(_OWORD *)(v14 + 184) = *(_OWORD *)(a3 + 2);
      *(_OWORD *)(v14 + 200) = *(_OWORD *)(a3 + 10);
      *(_DWORD *)(v14 + 216) = *((_DWORD *)a3 + 9);
    }
    result = sfac_ReadGlyphHeader(
               a1,
               *(unsigned __int16 *)(v14 + 60),
               (int)v14 + 32,
               (unsigned int)&a11,
               (__int64)v15,
               *(_QWORD *)(v14 + 176) + 80LL,
               v14 + 62);
    if ( (_DWORD)result )
      return result;
    result = sfac_ReadGlyphMetrics(
               a1,
               *(unsigned __int16 *)(v14 + 60),
               (int)v14 + 70,
               (int)v14 + 72,
               v14 + 74,
               v14 + 76);
    if ( (_DWORD)result )
      return result;
    v17 = a2;
    a4 = v85;
    *(_DWORD *)(v14 + 56) = (_DWORD)a11 != 0;
  }
  v21 = *(_DWORD *)(v14 + 56);
  if ( v21 )
  {
    if ( v21 != 2 )
    {
      if ( v21 == 1 )
      {
        v78 = 0;
        v40 = 0;
        v76 = 0;
        v77 = 0;
        *(_DWORD *)(v14 + 56) = 2;
        do
        {
          v41 = *(_WORD *)(v17 + 30);
          v42 = v41;
          if ( v41 <= 1u )
            v42 = 1;
          if ( v42 >= 0x14 )
          {
            v43 = 20;
          }
          else if ( v41 <= 1u )
          {
            v43 = 1;
          }
          else
          {
            v43 = v41;
          }
          if ( (unsigned int)*(unsigned __int16 *)(v14 + 78) + 1 > v43 )
            return 5131LL;
          v44 = *(_WORD *)(v17 + 28);
          v45 = v40 + 1;
          LOWORD(a11) = v45;
          v46 = v44;
          if ( v44 <= 3u )
            v46 = 3;
          if ( v45 > v46 )
            return 5131LL;
          result = fsg_AllocateGlyphDataMemory(a4, a7, &v80);
          if ( (_DWORD)result )
            return result;
          v48 = v80;
          fsg_InitializeGlyphData(v80, v47, 0LL, (unsigned __int16)(*(_WORD *)(v14 + 78) + 1));
          fsg_LinkChild(v14, v48);
          v49 = (int *)(v48 + 96);
          ComponentData = sfac_ReadComponentData(
                            (int)v14 + 32,
                            (int)v48 + 80,
                            (int)v48 + 84,
                            (int)v48 + 136,
                            v48 + 140,
                            (__int64)&v76,
                            v48 + 60,
                            v48 + 88,
                            v48 + 90,
                            v48 + 92,
                            v48 + 94,
                            v48 + 96,
                            (__int64)&v79,
                            (__int64)&v78);
          v17 = a2;
          v51 = ComponentData;
          v14 = a6;
          if ( *(_WORD *)(v48 + 60) >= *(_WORD *)(a2 + 4) )
            return 5136LL;
          if ( v79 )
          {
            mth_MxConcat2x2((int *)(v48 + 96), v48 + 184);
            if ( *(_DWORD *)(v48 + 100) || *(_DWORD *)(v48 + 108) )
              goto LABEL_68;
            v52 = *v49;
            v53 = *v49;
            if ( *v49 < 0 )
              v53 = -v53;
            v54 = *(_DWORD *)(v48 + 112);
            if ( v54 < 0 )
              v54 = -v54;
            if ( v53 != v54 )
              goto LABEL_68;
            if ( v52 < 0 )
              v52 = -v52;
            if ( v52 != 0x10000 )
LABEL_68:
              *(_DWORD *)(v48 + 220) = 0;
            v17 = a2;
          }
          if ( v51 )
            return v51;
          v55 = v76 | v77;
          v40 = (__int16)a11;
          a4 = v85;
          v77 |= v76;
        }
        while ( !v78 );
        if ( v55 )
        {
          v56 = *(__int16 **)(v14 + 40);
          v57 = *v56++;
          *(_WORD *)(v14 + 162) = __ROR2__(v57, 8);
          *(_QWORD *)(v14 + 168) = v56;
          v58 = *(_QWORD *)(v14 + 48);
          v59 = (char *)v56 + *(unsigned __int16 *)(v14 + 162);
          *(_QWORD *)(v14 + 40) = v59;
          if ( (unsigned __int64)v59 > v58 )
            return v58 < (unsigned __int64)v59 ? 0x140D : 0;
        }
      }
      return 0LL;
    }
    v34 = *(_OWORD *)(v14 + 184);
    v35 = *(_OWORD *)(v14 + 200);
    v36 = *(_QWORD *)(v14 + 176);
    v83 = *(_DWORD *)(v14 + 216);
    v75 = *(_QWORD *)(v14 + 168);
    v73 = *(_WORD *)(v14 + 162);
    v71 = *(_DWORD *)(v14 + 220);
    psResulta = *(_WORD *)(v14 + 76);
    v67 = *(_WORD *)(v14 + 74);
    v65 = *(_WORD *)(v14 + 72);
    v63 = *(_WORD *)(v14 + 70);
    v61 = *a3;
    v81 = v34;
    v82 = v35;
    result = fsg_CompositeInnerGridFit(
               a5,
               a8,
               v36,
               a10,
               a9,
               v61,
               v63,
               v65,
               v67,
               psResulta,
               v71,
               (__int64)&v81,
               (__int16 *)(v14 + 62),
               v73,
               v75,
               &a11,
               &a6,
               &v76);
    if ( !(_DWORD)result )
    {
      if ( *(_DWORD *)(v14 + 132) )
      {
        v37 = *(_QWORD *)(v14 + 176);
        v38 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v37 + 64) + 2LL * (*(__int16 *)(v37 + 80) - 1)) + 1);
        v39 = *(_WORD *)(*(_QWORD *)(v37 + 64) + 2LL * (*(__int16 *)(v37 + 80) - 1)) + 2;
        *(_DWORD *)(*(_QWORD *)v37 + 4 * v38) = *(_DWORD *)(v14 + 144);
        *(_DWORD *)(*(_QWORD *)(v37 + 8) + 4 * v38) = *(_DWORD *)(v14 + 148);
        *(_DWORD *)(*(_QWORD *)v37 + 4LL * v39) = *(_DWORD *)(v14 + 152);
        *(_DWORD *)(*(_QWORD *)(v37 + 8) + 4LL * v39) = *(_DWORD *)(v14 + 156);
      }
      if ( v76 )
      {
        if ( fsg_DoScanControl(a6, *((_DWORD *)a3 + 14)) )
          *(_WORD *)(v14 + 160) = (_WORD)a11;
        else
          *(_WORD *)(v14 + 160) = 2;
      }
      if ( !*(_QWORD *)(v14 + 24) || (result = fsg_MergeGlyphData(a5, v14, *a3), !(_DWORD)result) )
      {
        result = sfac_ReleaseGlyph(a1, v14 + 32);
        if ( !(_DWORD)result )
        {
          *(_QWORD *)(v14 + 168) = 0LL;
          *(_WORD *)(v14 + 162) = 0;
          return 0LL;
        }
      }
    }
  }
  else
  {
    v22 = *(_QWORD *)(v14 + 176);
    v23 = (__int64 *)(v14 + 168);
    v24 = (__int16 *)(v14 + 162);
    result = sfac_ReadOutlineData(
               *(_QWORD *)(v22 + 48),
               *(_QWORD *)(v22 + 40),
               *(_QWORD *)(v22 + 32),
               (int)v14 + 32,
               v17,
               *v15,
               *(_QWORD *)(v14 + 24) != 0LL,
               *(_WORD *)(v22 + 80),
               *(_QWORD *)(v22 + 56),
               *(SHORT **)(v22 + 64),
               v14 + 162,
               v14 + 168,
               a12,
               a13);
    if ( !(_DWORD)result )
    {
      if ( *((_DWORD *)a3 + 15) || a14 )
      {
        fsg_CheckOutlineOrientation(*(_QWORD *)(v14 + 176));
      }
      else
      {
        v25 = 0;
        if ( *(__int16 *)(*(_QWORD *)(v14 + 176) + 80LL) > 0 )
        {
          v26 = 0LL;
          do
          {
            ++v25;
            *(_BYTE *)(v26 + *(_QWORD *)(*(_QWORD *)(v14 + 176) + 88LL)) = 0;
            ++v26;
          }
          while ( v25 < *(__int16 *)(*(_QWORD *)(v14 + 176) + 80LL) );
        }
      }
      v27 = *(_OWORD *)(v14 + 184);
      v28 = *(_OWORD *)(v14 + 200);
      v29 = *(_QWORD *)(v14 + 176);
      v83 = *(_DWORD *)(v14 + 216);
      v74 = *v23;
      v72 = *v24;
      v70 = *(_DWORD *)(v14 + 220);
      psResult = *(_WORD *)(v14 + 76);
      v66 = *(_WORD *)(v14 + 74);
      v64 = *(_WORD *)(v14 + 72);
      v62 = *(_WORD *)(v14 + 70);
      v60 = *a3;
      v81 = v27;
      v82 = v28;
      result = fsg_SimpleInnerGridFit(
                 a5,
                 a8,
                 v29,
                 a10,
                 a9,
                 v60,
                 v62,
                 v64,
                 v66,
                 psResult,
                 v70,
                 (__int64)&v81,
                 v14 + 62,
                 v72,
                 v74,
                 (__int64)&a11,
                 (__int64)&a6,
                 (__int64)&v76);
      if ( !(_DWORD)result )
      {
        if ( fsg_DoScanControl(a6, *((_DWORD *)a3 + 14)) )
          *(_WORD *)(v14 + 160) = (_WORD)a11;
        else
          *(_WORD *)(v14 + 160) = 2;
        FixMul(*(_DWORD *)(v14 + 96), *(_DWORD *)(v14 + 112));
        fixed = FixMul(*(_DWORD *)(v14 + 100), *(_DWORD *)(v14 + 108));
        if ( v31 - fixed < 0 )
        {
          for ( i = 0;
                i < *(__int16 *)(*(_QWORD *)(v14 + 176) + 80LL);
                *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 176) + 88LL) + v33) ^= 1u )
          {
            v33 = i++;
          }
        }
        if ( !*(_QWORD *)(v14 + 24) || (result = fsg_MergeGlyphData(a5, v14, *a3), !(_DWORD)result) )
        {
          result = sfac_ReleaseGlyph(a1, v14 + 32);
          if ( !(_DWORD)result )
          {
            *v23 = 0LL;
            *v24 = 0;
            return 0LL;
          }
        }
      }
    }
  }
  return result;
}
