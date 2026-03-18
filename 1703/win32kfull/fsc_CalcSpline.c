/*
 * XREFs of fsc_CalcSpline @ 0x1C02CE6F4
 * Callers:
 *     EvaluateSpline @ 0x1C02BFEA8 (EvaluateSpline.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     PowerOf2 @ 0x1C02BD448 (PowerOf2.c)
 *     fsc_BeginElement @ 0x1C02CD440 (fsc_BeginElement.c)
 */

__int64 __fastcall fsc_CalcSpline(int a1, int a2, int a3, int a4, int a5, int a6, __int16 a7)
{
  int v8; // edi
  int v9; // r14d
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // r12d
  int v13; // esi
  int v14; // r11d
  signed int v15; // ebx
  int v17; // r15d
  unsigned int v18; // edi
  signed int v19; // edi
  __int64 result; // rax
  unsigned int v21; // edi
  unsigned int v22; // edi
  unsigned int v23; // ebx
  int v24; // r11d
  int v25; // ecx
  int v26; // eax
  int v27; // r8d
  int v28; // r9d
  int v29; // r10d
  int v30; // r11d
  int v31; // edx
  char v32; // cl
  int v33; // eax
  int v34; // r9d
  int v35; // r13d
  int v36; // r11d
  int v37; // esi
  int v38; // edx
  int v39; // eax
  int v40; // esi
  int v41; // r11d
  int v42; // esi
  int v43; // r12d
  int v44; // esi
  int v45; // edx
  int v46; // r8d
  int v47; // r9d
  int v48; // r12d
  int v49; // r13d
  unsigned int v50; // esi
  int v51; // r11d
  int v52; // r8d
  int v53; // r13d
  int v54; // r8d
  __int64 v55; // r9
  int v56; // eax
  __int64 v57; // r8
  int v58; // edx
  unsigned int v59; // edi
  int v60; // r15d
  int v61; // ecx
  int v62; // ecx
  int v63; // r8d
  int v64; // ecx
  int v65; // edx
  unsigned int v66; // edi
  int v67; // ecx
  int v68; // edx
  int v69; // [rsp+44h] [rbp-3Dh]
  char v70; // [rsp+48h] [rbp-39h]
  int v71; // [rsp+4Ch] [rbp-35h]
  __int64 (__fastcall *v72)(_QWORD, _QWORD); // [rsp+50h] [rbp-31h] BYREF
  int v73; // [rsp+58h] [rbp-29h]
  _DWORD v74[2]; // [rsp+60h] [rbp-21h] BYREF
  int v75[2]; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v76[10]; // [rsp+70h] [rbp-11h] BYREF
  int v77; // [rsp+D0h] [rbp+4Fh]
  unsigned int v78; // [rsp+D0h] [rbp+4Fh]
  int v79; // [rsp+D8h] [rbp+57h]
  int v80; // [rsp+E0h] [rbp+5Fh]
  int v81; // [rsp+E0h] [rbp+5Fh]
  unsigned int v82; // [rsp+E0h] [rbp+5Fh]
  int v83; // [rsp+E8h] [rbp+67h]
  int v84; // [rsp+F0h] [rbp+6Fh]
  int v85; // [rsp+F0h] [rbp+6Fh]
  int v86; // [rsp+F8h] [rbp+77h]
  __int16 v87; // [rsp+100h] [rbp+7Fh]

  v79 = -1;
  if ( a6 <= a2 )
  {
    v86 = -1;
    v15 = ((a2 - 33) & 0xFFFFFFC0) + 32;
    v10 = a2 - v15;
    v9 = ((a6 + 32) >> 6) - 1;
    v11 = v15 >> 6;
    v12 = a2 - a4;
    v8 = 1;
    v13 = a2 - a6;
    v14 = 4;
  }
  else
  {
    v8 = 0;
    v86 = 1;
    v9 = ((a6 - 33) >> 6) + 1;
    v10 = ((a2 + 32) & 0xFFFFFFC0) + 32 - a2;
    v11 = (int)(((a2 + 32) & 0xFFFFFFC0) + 32) >> 6;
    v12 = a4 - a2;
    v13 = a6 - a2;
    v14 = 1;
  }
  v69 = v10;
  v73 = v8;
  v71 = v8;
  if ( a5 <= a1 )
  {
    v83 = 1;
    v73 = 1 - v8;
    v19 = ((a1 - 33) & 0xFFFFFFC0) + 32;
    v17 = ((a5 + 32) >> 6) - 1;
    v84 = a1 - v19;
    v18 = v19 >> 6;
    v80 = a1 - a3;
    v77 = a1 - a5;
    v14 = (v14 != 1) + 2;
  }
  else
  {
    v79 = 1;
    v17 = ((a5 - 33) >> 6) + 1;
    v18 = (int)(((a1 + 32) & 0xFFFFFFC0) + 32) >> 6;
    v84 = ((a1 + 32) & 0xFFFFFFC0) + 32 - a1;
    v83 = 0;
    v80 = a3 - a1;
    v77 = a5 - a1;
  }
  v74[0] = a3;
  v75[0] = a4;
  v74[1] = a5;
  v75[1] = a6;
  fsc_BeginElement(a7, v14, 1, 2, (__int64)v74, v75, &v72, v76);
  v87 = a7 & 2;
  if ( v87 )
  {
    if ( v11 == v9 )
      return 0LL;
    if ( v18 == v17 )
    {
      v21 = v83 + v18;
      while ( 1 )
      {
        result = v72(v21, v11);
        if ( (_DWORD)result )
          break;
        v11 += v86;
        if ( v11 == v9 )
          return 0LL;
      }
      return result;
    }
LABEL_25:
    PowerOf2(2 * (v13 * v80 - v12 * v77));
    v25 = v24;
    if ( v24 <= v13 )
      v25 = v13;
    v26 = PowerOf2(v25);
    v81 = v26;
    if ( v26 > 12 || v28 > 25 )
      return 4870LL;
    v31 = dword_1C02F49E0[v28 + v26];
    v32 = 6 - v31;
    v70 = 6 - v31;
    if ( v31 <= 0 )
    {
      v34 = v69;
    }
    else
    {
      v33 = 1 << (v31 - 1);
      v84 = (v33 + v84) >> v31;
      v27 = (v33 + v27) >> v31;
      v30 = (v33 + v30) >> v31;
      v12 = (v33 + v12) >> v31;
      v13 = (v33 + v13) >> v31;
      v34 = (v33 + v69) >> v31;
      v32 = 6 - v31;
      v69 = v34;
      v29 = 2 * (v13 * v27 - v12 * v30);
    }
    if ( (int)abs32(v30 * v29) >= 587202560 || (int)abs32(v13 * v29) >= 587202560 )
      return 4870LL;
    v35 = 1 << v32;
    v36 = v30 - 2 * v27;
    v37 = v13 - 2 * v12;
    v38 = v12 * v29;
    v39 = v37 * v37;
    v40 = v36 * v37;
    v41 = v36 * v36;
    v74[0] = v12 * v29;
    v42 = -v40;
    v43 = -(v27 * v29);
    v75[0] = v43;
    if ( v81 > 7 )
    {
      v53 = v35 >> 1;
      v48 = v74[0] + v34 * v42 + v39 * (v84 + v53);
      v49 = v75[0] + v41 * (v34 + v53) + v84 * v42;
      v54 = v74[0] + v34 * v42 + v84 * (v39 >> 1);
      v78 = v39 << (v70 - 1);
      v50 = v42 << v70;
      v52 = v54 >> v70;
      v82 = v41 << (v70 - 1);
      v51 = v34 * ((v75[0] + v34 * (v41 >> 1)) >> v70);
    }
    else
    {
      v44 = 2 * v42;
      v45 = 2 * v38;
      v46 = v34 * v44;
      v47 = 2 * v43;
      v48 = (v46 + v45 + v39 * (v35 + 2 * v84)) << v70;
      v49 = (v47 + v41 * (v35 + 2 * v69) + v84 * v44) << v70;
      v78 = v39 << (2 * v70);
      v82 = v41 << (2 * v70);
      v50 = v44 << (2 * v70);
      v51 = v69 * (v47 + v69 * v41);
      v52 = v46 + v45 + v84 * v39;
    }
    v55 = v82;
    v56 = v51 + v84 * v52 + v73;
    v57 = v78;
    v85 = v56;
    v58 = 2 * v78;
    if ( v87 )
    {
      v59 = v83 + v18;
      v60 = v83 + v17;
      if ( v29 <= 0 )
      {
        while ( v59 != v60 )
        {
          if ( v11 == v9 )
            return 0LL;
          if ( v56 < 0 || v48 > (int)v57 )
          {
            result = v72(v59, v11);
            if ( (_DWORD)result )
              return result;
            v11 += v86;
            v62 = v49;
            v58 = v50;
            v56 = v85;
            v63 = 2 * v82;
          }
          else
          {
            v59 += v79;
            v62 = v48;
            v63 = v50;
          }
          v56 += v62;
          v48 += v58;
          v58 = 2 * v78;
          v49 += v63;
          LODWORD(v57) = v78;
          v85 = v56;
        }
LABEL_59:
        while ( v11 != v9 )
        {
          result = v72(v59, v11);
          if ( (_DWORD)result )
            return result;
          v11 += v86;
        }
      }
      else
      {
        if ( v59 == v60 )
          goto LABEL_59;
        while ( v11 != v9 )
        {
          if ( v56 < 0 || v49 > (int)v55 )
          {
            v59 += v79;
            v61 = v48;
            v57 = v50;
          }
          else
          {
            result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v72)(v59, v11, v57, v55);
            if ( (_DWORD)result )
              return result;
            v55 = v82;
            v61 = v49;
            v11 += v86;
            v58 = v50;
            v56 = v85;
            v57 = 2 * v82;
          }
          v56 += v61;
          v48 += v58;
          v49 += v57;
          v85 = v56;
          if ( v59 == v60 )
            goto LABEL_59;
          v58 = 2 * v78;
        }
      }
      return 0LL;
    }
    if ( v29 <= 0 )
    {
      while ( v11 != v9 )
      {
        if ( v56 < 0 || v48 > (int)v57 )
        {
          result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v72)(v18 + v83, v11, v57, v55);
          if ( (_DWORD)result )
            return result;
          v11 += v86;
          v67 = v49;
          v68 = v50;
          v57 = 2 * v82;
        }
        else
        {
          result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v76[0])(v18, v11 + v71, v57, v55);
          if ( (_DWORD)result )
            return result;
          v18 += v79;
          v67 = v48;
          v68 = 2 * v78;
          v57 = v50;
        }
        v48 += v68;
        v56 = v67 + v85;
        v49 += v57;
        v85 += v67;
        if ( v18 == v17 )
          goto LABEL_73;
        v57 = v78;
      }
    }
    else
    {
      do
      {
        if ( v11 == v9 )
          break;
        if ( v56 < 0 || v49 > (int)v55 )
        {
          result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v76[0])(v18, v11 + v71, v57, v55);
          if ( (_DWORD)result )
            return result;
          v18 += v79;
          v64 = v48;
          v65 = 2 * v78;
          v57 = v50;
          v55 = v82;
        }
        else
        {
          result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v72)(v18 + v83, v11, v57, v55);
          if ( (_DWORD)result )
            return result;
          v55 = v82;
          v64 = v49;
          v11 += v86;
          v65 = v50;
          v57 = 2 * v82;
        }
        v48 += v65;
        v56 = v64 + v85;
        v49 += v57;
        v85 += v64;
      }
      while ( v18 != v17 );
    }
    if ( v18 == v17 )
    {
LABEL_73:
      if ( v11 == v9 )
        return 0LL;
      v66 = v83 + v18;
      while ( 1 )
      {
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v72)(v66, v11, v57, v55);
        if ( (_DWORD)result )
          break;
        v11 += v86;
        if ( v11 == v9 )
          return 0LL;
      }
    }
    else
    {
      while ( 1 )
      {
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v76[0])(v18, v11 + v71, v57, v55);
        if ( (_DWORD)result )
          break;
        v18 += v79;
        if ( v18 == v17 )
          goto LABEL_73;
      }
    }
    return result;
  }
  if ( v18 != v17 )
  {
    if ( v11 == v9 )
    {
      v23 = v71 + v11;
      while ( 1 )
      {
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD))v76[0])(v18, v23);
        if ( (_DWORD)result )
          break;
        v18 += v79;
        if ( v18 == v17 )
          return 0LL;
      }
      return result;
    }
    goto LABEL_25;
  }
  v22 = v83 + v18;
  if ( v11 == v9 )
    return 0LL;
  while ( 1 )
  {
    result = v72(v22, v11);
    if ( (_DWORD)result )
      break;
    v11 += v86;
    if ( v11 == v9 )
      return 0LL;
  }
  return result;
}
