/*
 * XREFs of sub_180035838 @ 0x180035838
 * Callers:
 *     sub_18003660C @ 0x18003660C (sub_18003660C.c)
 *     sub_18003697C @ 0x18003697C (sub_18003697C.c)
 *     RtlFindMessage @ 0x180037F80 (RtlFindMessage.c)
 *     sub_1800546DC @ 0x1800546DC (sub_1800546DC.c)
 *     RtlLoadString @ 0x1800753A0 (RtlLoadString.c)
 *     LdrFindResource_U @ 0x18007B9D0 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x180085410 (LdrFindResourceEx_U.c)
 *     LdrFindResourceDirectory_U @ 0x1800E1840 (LdrFindResourceDirectory_U.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     sub_18003635C @ 0x18003635C (sub_18003635C.c)
 *     sub_180036588 @ 0x180036588 (sub_180036588.c)
 *     sub_18003660C @ 0x18003660C (sub_18003660C.c)
 *     sub_18003697C @ 0x18003697C (sub_18003697C.c)
 *     sub_180037618 @ 0x180037618 (sub_180037618.c)
 *     sub_180040BCC @ 0x180040BCC (sub_180040BCC.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_18004C218 @ 0x18004C218 (sub_18004C218.c)
 *     LdrpResGetMappingSize @ 0x18005BF00 (LdrpResGetMappingSize.c)
 *     sub_180081D84 @ 0x180081D84 (sub_180081D84.c)
 *     sub_180088CF8 @ 0x180088CF8 (sub_180088CF8.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _wcsicmp @ 0x1800976A0 (_wcsicmp.c)
 *     ZwQueryDefaultLocale @ 0x1800A55A0 (ZwQueryDefaultLocale.c)
 *     sub_1800E1234 @ 0x1800E1234 (sub_1800E1234.c)
 */

__int64 __fastcall sub_180035838(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 *a5)
{
  unsigned int v5; // esi
  __int64 *v7; // r14
  unsigned __int64 v8; // r8
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned int v11; // r13d
  __int16 v12; // di
  unsigned __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // r9
  __int64 v20; // rcx
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
  __int16 v49; // r11
  unsigned int *v50; // r8
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rdi
  int v53; // eax
  int v54; // eax
  unsigned int v55; // r9d
  unsigned __int64 v56; // rsi
  _WORD v57[2]; // [rsp+30h] [rbp-128h] BYREF
  bool v58; // [rsp+34h] [rbp-124h]
  int v59; // [rsp+38h] [rbp-120h]
  __int16 v60; // [rsp+3Ch] [rbp-11Ch]
  unsigned int v61; // [rsp+40h] [rbp-118h]
  __int64 v62; // [rsp+48h] [rbp-110h] BYREF
  unsigned int v63; // [rsp+50h] [rbp-108h]
  unsigned int v64; // [rsp+54h] [rbp-104h]
  unsigned __int64 v65; // [rsp+58h] [rbp-100h]
  unsigned int v66; // [rsp+60h] [rbp-F8h]
  char v67[4]; // [rsp+64h] [rbp-F4h] BYREF
  int v68; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v69; // [rsp+70h] [rbp-E8h]
  __int64 *v70; // [rsp+78h] [rbp-E0h]
  __int64 v71; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v72; // [rsp+88h] [rbp-D0h]
  __int64 v73; // [rsp+90h] [rbp-C8h] BYREF
  int v74; // [rsp+98h] [rbp-C0h] BYREF
  int v75; // [rsp+9Ch] [rbp-BCh] BYREF
  unsigned int v76; // [rsp+A0h] [rbp-B8h] BYREF
  unsigned int v77; // [rsp+A4h] [rbp-B4h] BYREF
  __int64 v78; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v80; // [rsp+B8h] [rbp-A0h]
  int v81; // [rsp+C0h] [rbp-98h] BYREF
  struct _TEB *v82; // [rsp+C8h] [rbp-90h]
  unsigned int *v83; // [rsp+D0h] [rbp-88h]
  __int64 *v84; // [rsp+D8h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v86; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v87; // [rsp+F8h] [rbp-60h]
  __int64 v88; // [rsp+100h] [rbp-58h]
  __int64 v89; // [rsp+108h] [rbp-50h]

  v5 = a4;
  v7 = (__int64 *)a2;
  v8 = a1;
  v65 = a1;
  v61 = a4;
  v70 = a5;
  v72 = a2;
  v9 = 0LL;
  v58 = 0;
  v79 = 0LL;
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
    v60 = v12;
    v13 = *(_QWORD *)a2;
    if ( ((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v13 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v14 = wcsicmp((const wchar_t *)v13, L"MUI"), v8 = v65, v14))
      || (~(_BYTE)v5 & 8) == 0
      || (v12 & 0xF3FF) != 0
      || v12 == 3072 )
    {
      v5 |= sub_180036588(v8, v7, v8, v5);
      v61 = v5;
      if ( (v5 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v59 = -1073741686;
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
          result = sub_18003697C(v65, (unsigned int)&v86, a3, v5, (__int64)v70);
          v59 = result;
        }
        return result;
      }
    }
    else
    {
      v5 |= 0x10u;
      v61 = v5;
    }
  }
  v16 = sub_180032C0C(v65, 1, 2u, &v81, &v78);
  v18 = v78;
  if ( v16 < 0 )
    v18 = 0LL;
  v78 = v18;
  v80 = v18;
  if ( !v18 )
    return 3221225609LL;
  LOBYTE(v17) = 1;
  result = LdrpResGetMappingSize(v65, &v79, 256LL, v17);
  v59 = result;
  if ( (int)result >= 0 )
  {
    v73 = v18;
    v62 = 61166LL;
    v63 = 0;
    v20 = 0LL;
    v71 = 0LL;
    v69 = 0LL;
    v57[0] = 0;
    v60 = 0;
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
        v60 = *(_WORD *)(v72 + 16);
        v58 = (v60 & 0x3FF) == 0;
        goto LABEL_70;
      }
LABEL_151:
      result = sub_18004C218(*(unsigned __int16 *)(v18 + 12), *(unsigned __int16 *)(v18 + 14), &v76);
      v59 = result;
      if ( (int)result < 0 )
        return result;
      result = sub_1800E1234(v76, 8LL, &v77);
      v59 = result;
      if ( (int)result < 0 )
        return result;
      v50 = (unsigned int *)(v18 + 16);
      v83 = (unsigned int *)(v18 + 16);
      v51 = v18 + 16 + v77;
      v52 = v65;
      if ( v51 > v79 + (v65 & 0xFFFFFFFFFFFFFFFCuLL) )
        return 3221225595LL;
      if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v50 += 2 * v48;
        v83 = v50;
        LOWORD(v48) = v49;
      }
      if ( !(_WORD)v48 )
      {
        switch ( v11 - v64 )
        {
          case 1u:
            v21 = -1073741686;
            break;
          case 2u:
            v21 = -1073741685;
            v59 = -1073741685;
            v52 = v65;
            goto LABEL_165;
          case 3u:
            v21 = -1073741308;
            v59 = -1073741308;
            return (unsigned int)v21;
        }
        v59 = v21;
        if ( (unsigned int)(v21 + 1073741686) <= 1 )
        {
LABEL_165:
          v53 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v53 & 0x20000) != 0 && (v53 & 0x10) != 0 && v11 == 3 )
          {
            v86 = *(_QWORD *)v72;
            v87 = *(_QWORD *)(v72 + 8);
            v88 = *(_QWORD *)(v72 + 16);
            if ( a3 == 4 )
              v89 = *(_QWORD *)(v72 + 24);
            v21 = sub_18003697C(v52, (unsigned int)&v86, a3, v5, (__int64)v70);
            v59 = v21;
            if ( v21 >= 0 )
              sub_180081D84(v52, 0LL, &v86, a3);
          }
        }
        return (unsigned int)v21;
      }
      if ( v69 && (v5 & 0x20) != 0 )
        break;
      sub_18003635C((unsigned __int16)v48, v80, v50, *v7++, &v73, &v71);
      v84 = v7;
      v18 = v73;
      v20 = v71;
    }
    v18 = 0LL;
    v73 = 0LL;
    v62 = *v50;
    v20 = v80 + v50[1];
    v71 = v20;
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
      v59 = 0;
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
      v59 = -1073741686;
      goto LABEL_178;
    }
    if ( v11 - v64 == 2 )
    {
      v28 = -1073741685;
      v59 = -1073741685;
      goto LABEL_179;
    }
    if ( v11 - v64 != 3 )
    {
      v28 = -1073741811;
      v59 = -1073741811;
LABEL_178:
      if ( v28 + 1073741686 > 1 )
        return v28;
LABEL_179:
      v54 = ~v5;
      if ( (~v5 & 0x80000) != 0 && (v54 & 0x20000) != 0 && (v54 & 0x10) != 0 && v11 == 3 )
      {
        v86 = *(_QWORD *)v72;
        v87 = *(_QWORD *)(v72 + 8);
        v88 = *(_QWORD *)(v72 + 16);
        if ( a3 == 4 )
          v89 = *(_QWORD *)(v72 + 24);
        v55 = v5;
        v56 = v65;
        v28 = sub_18003697C(v65, (unsigned int)&v86, a3, v55, (__int64)v70);
        v59 = v28;
        if ( (v28 & 0x80000000) == 0 )
          sub_180081D84(v56, 0LL, &v86, a3);
      }
      return v28;
    }
    v28 = -1073741308;
    v59 = -1073741308;
    if ( !v69 )
      goto LABEL_178;
    v71 = 0LL;
    v25 = (__int64 *)v72;
LABEL_70:
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
            goto LABEL_145;
          LOBYTE(v19) = 1;
          v47 = (_DWORD *)sub_18003660C(v29, v22, 0LL, v19);
          if ( !v47 )
            goto LABEL_145;
          if ( *v47 != -20054323 )
            goto LABEL_145;
          if ( !v47[31] )
            goto LABEL_145;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v47 + (unsigned int)v47[31]));
          if ( !(unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v75) )
            goto LABEL_145;
          v35 = v75;
          goto LABEL_146;
        }
        v43 = v42 - 1;
        if ( v43 )
        {
          v44 = v43 - 1;
          if ( v44 )
          {
            v45 = v44 - 1;
            if ( v45 )
            {
              v46 = v45 - 1;
              if ( !v46 )
              {
                v35 = 1033;
                goto LABEL_146;
              }
              if ( v46 != 1 )
                return 3221225988LL;
LABEL_135:
              v5 |= 0x20u;
              v61 = v5;
              goto LABEL_147;
            }
            v57[0] = v62;
            v59 = ZwQueryDefaultLocale(0LL, &v74, 1023LL);
            if ( v59 >= 0 )
            {
              v35 = v74;
              if ( v74 != v68 )
                goto LABEL_146;
            }
          }
          else
          {
            v57[0] = v62;
            LOBYTE(v25) = 1;
            v59 = ZwQueryDefaultLocale(v25, &v68, 1023LL);
            if ( v59 >= 0 )
            {
              v35 = v68;
              goto LABEL_146;
            }
          }
        }
        else
        {
          v57[0] = v62;
          if ( (~v5 & 0x80000) != 0 )
            goto LABEL_135;
          if ( NtCurrentTeb() )
            v57[0] = NtCurrentTeb()->CurrentLocale;
          v5 = v61;
        }
      }
      else if ( v30 == 6 )
      {
        v57[0] = v62;
        if ( (v5 & 0x20) == 0 )
        {
          v57[0] = 0;
          if ( (unsigned __int8)sub_180040BCC(v25, v22, 1023LL) )
          {
            v41 = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
            if ( v66 >= v41 )
              v57[0] = 0;
            else
              sub_180037618(v41, NtCurrentTeb()->MergedPrefLanguages, v66, (unsigned int)v57, (__int64)v67);
            v5 = v61;
          }
          else
          {
            v57[0] = 0;
          }
          if ( !v57[0] )
            goto LABEL_145;
          ++v66;
LABEL_120:
          --v63;
        }
      }
      else
      {
        if ( !v30 )
        {
          if ( v60 )
          {
            v35 = v62;
            if ( (v5 & 0x80000) != 0 )
              v35 = v60;
            goto LABEL_146;
          }
LABEL_89:
          v57[0] = 0;
          goto LABEL_147;
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
            v40 = sub_18003697C(v65, (unsigned int)&v86, a3, v5, (__int64)v70);
            v59 = v40;
            if ( v40 >= 0 )
            {
              sub_180081D84(v39, 0LL, &v86, a3);
              return (unsigned int)v40;
            }
            v29 = v39;
          }
          goto LABEL_145;
        }
        v32 = v31 - 1;
        if ( !v32 )
        {
          v35 = v60;
          if ( v58 )
            v35 = v62;
          goto LABEL_146;
        }
        v33 = v32 - 1;
        if ( v33 )
        {
          v34 = v33 - 1;
          if ( v34 )
          {
            if ( v34 != 1 )
              return 3221225988LL;
            if ( !v58 )
              return 3221225988LL;
LABEL_145:
            v35 = v62;
          }
          else
          {
            if ( v58 )
              goto LABEL_145;
            v35 = v60 & 0x3FF;
          }
LABEL_146:
          v57[0] = v35;
          goto LABEL_147;
        }
        if ( (v5 & 4) != 0 )
          return 3221225988LL;
        if ( v58 )
          goto LABEL_145;
        if ( (int)sub_180088CF8(v57[0], v57, 1023LL) < 0 )
          goto LABEL_89;
        if ( v57[0] )
          goto LABEL_120;
      }
LABEL_147:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v57[0] != v62 )
      {
        v62 = v57[0];
        v7 = &v62;
        v84 = &v62;
        v18 = v69;
        v73 = v69;
        goto LABEL_151;
      }
      v25 = (__int64 *)v72;
    }
  }
  return result;
}
