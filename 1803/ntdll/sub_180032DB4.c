/*
 * XREFs of sub_180032DB4 @ 0x180032DB4
 * Callers:
 *     RtlLoadString @ 0x180031360 (RtlLoadString.c)
 *     LdrFindResource_U @ 0x180032D20 (LdrFindResource_U.c)
 *     sub_180033B60 @ 0x180033B60 (sub_180033B60.c)
 *     sub_180033EB8 @ 0x180033EB8 (sub_180033EB8.c)
 *     sub_18004EC98 @ 0x18004EC98 (sub_18004EC98.c)
 *     RtlFindMessage @ 0x180069F10 (RtlFindMessage.c)
 *     LdrFindResourceEx_U @ 0x18007FE40 (LdrFindResourceEx_U.c)
 *     LdrFindResourceDirectory_U @ 0x1800DB500 (LdrFindResourceDirectory_U.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_18003394C @ 0x18003394C (sub_18003394C.c)
 *     sub_180033ADC @ 0x180033ADC (sub_180033ADC.c)
 *     sub_180033B60 @ 0x180033B60 (sub_180033B60.c)
 *     sub_180033EB8 @ 0x180033EB8 (sub_180033EB8.c)
 *     sub_180034B2C @ 0x180034B2C (sub_180034B2C.c)
 *     sub_180034D90 @ 0x180034D90 (sub_180034D90.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     LdrpResGetMappingSize @ 0x180053280 (LdrpResGetMappingSize.c)
 *     sub_18007A164 @ 0x18007A164 (sub_18007A164.c)
 *     sub_18007D2F4 @ 0x18007D2F4 (sub_18007D2F4.c)
 *     sub_18007EC88 @ 0x18007EC88 (sub_18007EC88.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008CAD0 (_wcsicmp.c)
 *     ZwQueryDefaultLocale @ 0x18009AD60 (ZwQueryDefaultLocale.c)
 *     sub_1800DAAB4 @ 0x1800DAAB4 (sub_1800DAAB4.c)
 */

__int64 __fastcall sub_180032DB4(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 *a5)
{
  unsigned int v5; // esi
  __int64 *v7; // rdi
  unsigned __int64 v8; // r8
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned int v11; // r13d
  __int16 v12; // r14
  unsigned __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // r14
  __int64 v19; // r9
  unsigned __int64 v20; // rcx
  int v21; // r15d
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 Heap; // rax
  unsigned __int64 v27; // rdx
  unsigned int v28; // edi
  unsigned __int64 v29; // rdi
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  __int16 v35; // ax
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // r14
  int v40; // edi
  unsigned int v41; // ecx
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  _DWORD *v47; // rax
  __int64 v48; // r10
  unsigned __int16 v49; // r11
  unsigned int *v50; // rdx
  unsigned __int64 v51; // r14
  unsigned __int64 v52; // r8
  int v54; // eax
  int v55; // eax
  unsigned int v56; // r9d
  unsigned __int64 v57; // rsi
  _WORD v58[2]; // [rsp+40h] [rbp-118h] BYREF
  bool v59; // [rsp+44h] [rbp-114h]
  int v60; // [rsp+48h] [rbp-110h]
  __int16 v61; // [rsp+4Ch] [rbp-10Ch]
  __int64 v62; // [rsp+50h] [rbp-108h] BYREF
  unsigned int v63; // [rsp+58h] [rbp-100h]
  unsigned int v64; // [rsp+5Ch] [rbp-FCh]
  unsigned __int64 v65; // [rsp+60h] [rbp-F8h]
  unsigned int v66; // [rsp+68h] [rbp-F0h]
  char v67[4]; // [rsp+6Ch] [rbp-ECh] BYREF
  int v68; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v69; // [rsp+78h] [rbp-E0h]
  __int64 *v70; // [rsp+80h] [rbp-D8h]
  __int64 v71; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v72; // [rsp+90h] [rbp-C8h]
  __int64 v73; // [rsp+98h] [rbp-C0h] BYREF
  int v74; // [rsp+A0h] [rbp-B8h] BYREF
  int v75; // [rsp+A4h] [rbp-B4h] BYREF
  unsigned int v76; // [rsp+A8h] [rbp-B0h] BYREF
  unsigned int v77; // [rsp+ACh] [rbp-ACh] BYREF
  __int64 v78; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v79; // [rsp+B8h] [rbp-A0h] BYREF
  __int64 v80; // [rsp+C0h] [rbp-98h]
  int v81; // [rsp+C8h] [rbp-90h] BYREF
  struct _TEB *v82; // [rsp+D0h] [rbp-88h]
  unsigned int *v83; // [rsp+D8h] [rbp-80h]
  __int64 *v84; // [rsp+E0h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v86; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v87; // [rsp+100h] [rbp-58h]
  __int64 v88; // [rsp+108h] [rbp-50h]
  __int64 v89; // [rsp+110h] [rbp-48h]
  unsigned int v90; // [rsp+178h] [rbp+20h]

  v90 = a4;
  v5 = a4;
  v7 = (__int64 *)a2;
  v8 = a1;
  v65 = a1;
  v70 = a5;
  v72 = a2;
  v9 = 0LL;
  v59 = 0;
  v78 = 0LL;
  v66 = 0;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 )
    return 3221225713LL;
  if ( (a4 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return 3221225713LL;
  }
  else if ( a3 != 4 )
  {
    goto LABEL_10;
  }
  if ( (a4 & 0x41) == 0 )
    return 3221225713LL;
LABEL_10:
  v11 = a3;
  if ( a3 == 4 )
    v11 = 3;
  v64 = v11;
  if ( (~(_BYTE)a4 & 0x10) != 0 && v11 - 1 <= 2 )
  {
    if ( v11 == 3 )
      v12 = *(_WORD *)(a2 + 16);
    else
      v12 = 0;
    v61 = v12;
    v13 = *(_QWORD *)a2;
    if ( ((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v13 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v14 = wcsicmp((const wchar_t *)v13, L"MUI"), v8 = v65, v14))
      || (~(_BYTE)v5 & 8) == 0
      || (v12 & 0xF3FF) != 0
      || v12 == 3072 )
    {
      v5 |= sub_180033ADC(v8, v7, v8, v5);
      v90 = v5;
      if ( (v5 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v60 = -1073741686;
        if ( (v5 & 0x20000) == 0 )
        {
          v86 = *v7;
          if ( v11 < 2 )
            v15 = 0LL;
          else
            v15 = v7[1];
          v87 = v15;
          if ( v11 == 3 )
            v9 = v7[2];
          v88 = v9;
          if ( a3 == 4 )
            v89 = v7[3];
          result = sub_180033EB8(v65, (unsigned int)&v86, a3, v5, (__int64)v70);
          v60 = result;
        }
        return result;
      }
    }
    else
    {
      v5 |= 0x10u;
      v90 = v5;
    }
  }
  v16 = sub_18001014C(v65, 1, 2u, &v81, &v79);
  v18 = v79;
  if ( v16 < 0 )
    v18 = 0LL;
  v79 = v18;
  v80 = v18;
  if ( !v18 )
    return 3221225609LL;
  LOBYTE(v17) = 1;
  result = LdrpResGetMappingSize(v65, &v78, 256LL, v17);
  v60 = result;
  if ( (int)result >= 0 )
  {
    v73 = v18;
    v62 = 61166LL;
    v63 = 0;
    v20 = 0LL;
    v71 = 0LL;
    v69 = 0LL;
    v58[0] = 0;
    v61 = 0;
    v68 = 0;
    v21 = -1073741811;
    while ( 1 )
    {
      v22 = 3221225610LL;
      if ( !v18 )
        goto LABEL_50;
      v23 = v64;
      v22 = --v64;
      if ( !v23 )
        goto LABEL_49;
      if ( !(_DWORD)v22 )
      {
        v24 = v69;
        if ( v11 == 3 )
          v24 = v18;
        v69 = v24;
      }
      if ( v69 )
      {
        v25 = (__int64 *)v72;
        v61 = *(_WORD *)(v72 + 16);
        v59 = (v61 & 0x3FF) == 0;
        goto LABEL_69;
      }
LABEL_150:
      result = sub_18007D2F4(*(unsigned __int16 *)(v18 + 12), *(unsigned __int16 *)(v18 + 14), &v76);
      v60 = result;
      if ( (int)result < 0 )
        return result;
      result = sub_1800DAAB4(v76, 8LL, &v77);
      v60 = result;
      if ( (int)result < 0 )
        return result;
      v50 = (unsigned int *)(v18 + 16);
      v83 = v50;
      v51 = v65;
      v52 = v78 + (v65 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (unsigned __int64)v50 + v77 > v52 )
        return 3221225595LL;
      v19 = *v7;
      if ( *v7 & 0xFFFFFFFFFFFF0000uLL )
      {
        v49 = v48;
      }
      else
      {
        v50 += 2 * v48;
        v83 = v50;
      }
      if ( !v49 )
      {
        switch ( v11 - v64 )
        {
          case 1u:
            v21 = -1073741686;
            break;
          case 2u:
            v21 = -1073741685;
            v60 = -1073741685;
            goto LABEL_165;
          case 3u:
            v21 = -1073741308;
            v60 = -1073741308;
            return (unsigned int)v21;
        }
        v60 = v21;
        if ( (unsigned int)(v21 + 1073741686) <= 1 )
        {
LABEL_165:
          v54 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v54 & 0x20000) != 0 && (v54 & 0x10) != 0 && v11 == 3 )
          {
            v86 = *(_QWORD *)v72;
            v87 = *(_QWORD *)(v72 + 8);
            v88 = *(_QWORD *)(v72 + 16);
            if ( a3 == 4 )
              v89 = *(_QWORD *)(v72 + 24);
            v21 = sub_180033EB8(v65, (unsigned int)&v86, a3, v5, (__int64)v70);
            v60 = v21;
            if ( v21 >= 0 )
              sub_18007A164(v51, 0LL, &v86, a3);
          }
        }
        return (unsigned int)v21;
      }
      if ( v69 && (v5 & 0x20) != 0 )
        break;
      if ( !(unsigned __int8)sub_18003394C(v65, v78, v49, v80, (__int64)v50, v19, (__int64)&v73, (__int64)&v71) )
        return 3221225595LL;
      v84 = ++v7;
      v18 = v73;
      v20 = v71;
    }
    v18 = 0LL;
    v73 = 0LL;
    v62 = *v50;
    v20 = v80 + v50[1];
    if ( v20 > v52 )
      return 3221225595LL;
    v71 = v80 + v50[1];
LABEL_49:
    v22 = 3221225610LL;
LABEL_50:
    if ( v20 && (v5 & 2) == 0 )
    {
      *v70 = v20;
      if ( !NtCurrentTeb()->ResourceRetValue )
      {
        v82 = NtCurrentTeb();
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 24LL);
        v82->ResourceRetValue = (void *)Heap;
      }
      if ( NtCurrentTeb()->ResourceRetValue )
      {
        v27 = v65;
        *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v65;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v71;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v27;
      }
LABEL_56:
      v28 = 0;
      v60 = 0;
      return v28;
    }
    if ( v18 && (v5 & 2) != 0 )
    {
      *v70 = v18;
      goto LABEL_56;
    }
    if ( v11 - v64 == 1 )
    {
      v28 = -1073741686;
      v60 = -1073741686;
      goto LABEL_182;
    }
    if ( v11 - v64 == 2 )
    {
      v28 = -1073741685;
      v60 = -1073741685;
      goto LABEL_183;
    }
    if ( v11 - v64 != 3 )
    {
      v28 = -1073741811;
      v60 = -1073741811;
LABEL_182:
      if ( v28 + 1073741686 > 1 )
        return v28;
LABEL_183:
      v55 = ~v5;
      if ( (~v5 & 0x80000) != 0 && (v55 & 0x20000) != 0 && (v55 & 0x10) != 0 && v11 == 3 )
      {
        v86 = *(_QWORD *)v72;
        v87 = *(_QWORD *)(v72 + 8);
        v88 = *(_QWORD *)(v72 + 16);
        if ( a3 == 4 )
          v89 = *(_QWORD *)(v72 + 24);
        v56 = v5;
        v57 = v65;
        v28 = sub_180033EB8(v65, (unsigned int)&v86, a3, v56, (__int64)v70);
        v60 = v28;
        if ( (v28 & 0x80000000) == 0 )
          sub_18007A164(v57, 0LL, &v86, a3);
      }
      return v28;
    }
    v28 = -1073741308;
    v60 = -1073741308;
    if ( !v69 )
      goto LABEL_182;
    v71 = 0LL;
    v25 = (__int64 *)v72;
LABEL_69:
    v29 = v65;
    while ( 1 )
    {
      v30 = v63++;
      if ( v30 > 6 )
      {
        v42 = v30 - 7;
        if ( !v42 )
        {
          if ( (~v5 & 0x80000) == 0 )
            goto LABEL_106;
          LOBYTE(v19) = 1;
          v47 = (_DWORD *)sub_180033B60(v29, v22, 0LL, v19);
          if ( !v47 )
            goto LABEL_106;
          if ( *v47 != -20054323 )
            goto LABEL_106;
          if ( !v47[31] )
            goto LABEL_106;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v47 + (unsigned int)v47[31]));
          if ( !(unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v75) )
            goto LABEL_106;
          v35 = v75;
          goto LABEL_107;
        }
        v43 = v42 - 1;
        if ( v43 )
        {
          v44 = v43 - 1;
          if ( !v44 )
          {
            v58[0] = v62;
            LOBYTE(v25) = 1;
            v60 = ZwQueryDefaultLocale(v25, &v68, 1023LL);
            if ( v60 < 0 )
              goto LABEL_108;
            v35 = v68;
            goto LABEL_107;
          }
          v45 = v44 - 1;
          if ( v45 )
          {
            v46 = v45 - 1;
            if ( v46 )
            {
              if ( v46 != 1 )
                return 3221225988LL;
LABEL_139:
              v5 |= 0x20u;
              v90 = v5;
              goto LABEL_108;
            }
            v35 = 1033;
            goto LABEL_107;
          }
          v58[0] = v62;
          v60 = ZwQueryDefaultLocale(0LL, &v74, 1023LL);
          if ( v60 >= 0 )
          {
            v35 = v74;
            if ( v74 != v68 )
              goto LABEL_107;
          }
        }
        else
        {
          v58[0] = v62;
          if ( (~v5 & 0x80000) != 0 )
            goto LABEL_139;
          if ( NtCurrentTeb() )
            v58[0] = NtCurrentTeb()->CurrentLocale;
          v5 = v90;
        }
      }
      else
      {
        if ( v30 == 6 )
        {
          v58[0] = v62;
          if ( (v5 & 0x20) != 0 )
            goto LABEL_108;
          v58[0] = 0;
          if ( (unsigned __int8)sub_180034B2C(v25, v22, 1023LL) )
          {
            v41 = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
            if ( v66 >= v41 )
              v58[0] = 0;
            else
              sub_180034D90(v41, NtCurrentTeb()->MergedPrefLanguages, v66, (unsigned int)v58, (__int64)v67);
            v5 = v90;
          }
          else
          {
            v58[0] = 0;
          }
          if ( v58[0] )
          {
            ++v66;
LABEL_124:
            --v63;
            goto LABEL_108;
          }
LABEL_106:
          v35 = v62;
          goto LABEL_107;
        }
        if ( !v30 )
        {
          if ( v61 )
          {
            v35 = v62;
            if ( (v5 & 0x80000) != 0 )
              v35 = v61;
            goto LABEL_107;
          }
LABEL_88:
          v58[0] = 0;
          goto LABEL_108;
        }
        v31 = v30 - 1;
        if ( !v31 )
        {
          v36 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v36 & 0x20000) != 0 && (v36 & 0x10) != 0 )
          {
            v86 = *v25;
            if ( v11 < 2 )
              v37 = 0LL;
            else
              v37 = v25[1];
            v87 = v37;
            if ( v11 == 3 )
              v38 = v25[2];
            else
              v38 = 0LL;
            v88 = v38;
            if ( a3 == 4 )
              v89 = v25[3];
            v39 = v65;
            v40 = sub_180033EB8(v65, (unsigned int)&v86, a3, v5, (__int64)v70);
            v60 = v40;
            if ( v40 >= 0 )
            {
              sub_18007A164(v39, 0LL, &v86, a3);
              return (unsigned int)v40;
            }
            v29 = v39;
          }
          goto LABEL_106;
        }
        v32 = v31 - 1;
        if ( !v32 )
        {
          v35 = v61;
          if ( v59 )
            v35 = v62;
          goto LABEL_107;
        }
        v33 = v32 - 1;
        if ( v33 )
        {
          v34 = v33 - 1;
          if ( v34 )
          {
            if ( v34 != 1 )
              return 3221225988LL;
            if ( !v59 )
              return 3221225988LL;
            goto LABEL_106;
          }
          if ( v59 )
            goto LABEL_106;
          v35 = v61 & 0x3FF;
LABEL_107:
          v58[0] = v35;
          goto LABEL_108;
        }
        if ( (v5 & 4) != 0 )
          return 3221225988LL;
        if ( v59 )
          goto LABEL_106;
        if ( (int)sub_18007EC88(v58[0], v58, 1023LL) < 0 )
          goto LABEL_88;
        if ( v58[0] )
          goto LABEL_124;
      }
LABEL_108:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v58[0] != v62 )
      {
        v62 = v58[0];
        v7 = &v62;
        v84 = &v62;
        v18 = v69;
        v73 = v69;
        goto LABEL_150;
      }
      v25 = (__int64 *)v72;
    }
  }
  return result;
}
