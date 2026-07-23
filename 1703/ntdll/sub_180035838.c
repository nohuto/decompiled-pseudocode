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

__int64 __fastcall sub_180035838(void *a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  unsigned int v5; // esi
  __int64 *v7; // r14
  PVOID v8; // r8
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned int v11; // r13d
  __int16 v12; // di
  unsigned __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rcx
  int v20; // r15d
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 *v24; // rcx
  PVOID Heap; // rax
  PVOID v26; // rdx
  unsigned int v27; // edi
  PVOID v28; // rdi
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  __int16 v34; // ax
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  PVOID v38; // r14
  int v39; // edi
  unsigned int v40; // ecx
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  _DWORD *v46; // rax
  __int64 v47; // r10
  __int16 v48; // r11
  unsigned int *v49; // r8
  unsigned __int64 v50; // rcx
  PVOID v51; // rdi
  int v52; // eax
  int v53; // eax
  PVOID v54; // rsi
  _WORD v55[2]; // [rsp+30h] [rbp-128h] BYREF
  bool v56; // [rsp+34h] [rbp-124h]
  NTSTATUS v57; // [rsp+38h] [rbp-120h]
  __int16 v58; // [rsp+3Ch] [rbp-11Ch]
  unsigned int v59; // [rsp+40h] [rbp-118h]
  __int64 v60; // [rsp+48h] [rbp-110h] BYREF
  unsigned int v61; // [rsp+50h] [rbp-108h]
  unsigned int v62; // [rsp+54h] [rbp-104h]
  PVOID BaseOfImage; // [rsp+58h] [rbp-100h]
  unsigned int v64; // [rsp+60h] [rbp-F8h]
  char v65[4]; // [rsp+64h] [rbp-F4h] BYREF
  DWORD v66; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v67; // [rsp+70h] [rbp-E8h]
  __int64 v68; // [rsp+78h] [rbp-E0h]
  __int64 v69; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v70; // [rsp+88h] [rbp-D0h]
  __int64 v71; // [rsp+90h] [rbp-C8h] BYREF
  DWORD DefaultLocaleId; // [rsp+98h] [rbp-C0h] BYREF
  DWORD Lcid; // [rsp+9Ch] [rbp-BCh] BYREF
  unsigned int v74; // [rsp+A0h] [rbp-B8h] BYREF
  unsigned int v75; // [rsp+A4h] [rbp-B4h] BYREF
  __int64 v76; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v77; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-A0h]
  DWORD v79; // [rsp+C0h] [rbp-98h] BYREF
  struct _TEB *v80; // [rsp+C8h] [rbp-90h]
  unsigned int *v81; // [rsp+D0h] [rbp-88h]
  __int64 *v82; // [rsp+D8h] [rbp-80h]
  _UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v84; // [rsp+F0h] [rbp-68h]
  __int64 v85; // [rsp+F8h] [rbp-60h]
  __int64 v86; // [rsp+100h] [rbp-58h]
  __int64 v87; // [rsp+108h] [rbp-50h]

  v5 = a4;
  v7 = (__int64 *)a2;
  v8 = a1;
  BaseOfImage = a1;
  v59 = a4;
  v68 = a5;
  v70 = a2;
  v9 = 0LL;
  v56 = 0;
  v77 = 0LL;
  v64 = 0;
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
  v62 = v11;
  if ( (~(_BYTE)a4 & 0x10) != 0 && v11 - 1 <= 2 )
  {
    if ( v11 == 3 )
      v12 = *(_WORD *)(a2 + 16);
    else
      v12 = 0;
    v58 = v12;
    v13 = *(_QWORD *)a2;
    if ( ((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v13 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v14 = wcsicmp((const wchar_t *)v13, L"MUI"), v8 = BaseOfImage, v14))
      || (~(_BYTE)v5 & 8) == 0
      || (v12 & 0xF3FF) != 0
      || v12 == 3072 )
    {
      v5 |= sub_180036588(v8, v7, v8, v5);
      v59 = v5;
      if ( (v5 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v57 = -1073741686;
        if ( (v5 & 0x20000) == 0 )
        {
          v84 = *v7;
          if ( v11 < 2 )
            v15 = 0LL;
          else
            v15 = v7[1];
          v85 = v15;
          if ( v11 == 3 )
            v9 = v7[2];
          v86 = v9;
          if ( a3 == 4 )
            v87 = v7[3];
          result = sub_18003697C(BaseOfImage, v68);
          v57 = result;
        }
        return result;
      }
    }
    else
    {
      v5 |= 0x10u;
      v59 = v5;
    }
  }
  v16 = sub_180032C0C((unsigned __int64)BaseOfImage, 1, 2u, &v79, (char **)&v76);
  v18 = v76;
  if ( v16 < 0 )
    v18 = 0LL;
  v76 = v18;
  v78 = v18;
  if ( !v18 )
    return 3221225609LL;
  LOBYTE(v17) = 1;
  result = LdrpResGetMappingSize(BaseOfImage, &v77, 256LL, v17);
  v57 = result;
  if ( (int)result >= 0 )
  {
    v71 = v18;
    v60 = 61166LL;
    v61 = 0;
    v19 = 0LL;
    v69 = 0LL;
    v67 = 0LL;
    v55[0] = 0;
    v58 = 0;
    v66 = 0;
    v20 = -1073741811;
    while ( 1 )
    {
      v21 = 3221225610LL;
      if ( !v18 )
        goto LABEL_50;
      v22 = v62;
      v21 = --v62;
      if ( !v22 )
        goto LABEL_49;
      if ( !(_DWORD)v21 )
      {
        v23 = v67;
        if ( v11 == 3 )
          v23 = v18;
        v67 = v23;
      }
      if ( v67 )
      {
        v24 = (__int64 *)v70;
        v58 = *(_WORD *)(v70 + 16);
        v56 = (v58 & 0x3FF) == 0;
        goto LABEL_70;
      }
LABEL_151:
      result = sub_18004C218(*(unsigned __int16 *)(v18 + 12), *(unsigned __int16 *)(v18 + 14), &v74);
      v57 = result;
      if ( (int)result < 0 )
        return result;
      result = sub_1800E1234(v74, 8LL, &v75);
      v57 = result;
      if ( (int)result < 0 )
        return result;
      v49 = (unsigned int *)(v18 + 16);
      v81 = (unsigned int *)(v18 + 16);
      v50 = v18 + 16 + v75;
      v51 = BaseOfImage;
      if ( v50 > v77 + ((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL) )
        return 3221225595LL;
      if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v49 += 2 * v47;
        v81 = v49;
        LOWORD(v47) = v48;
      }
      if ( !(_WORD)v47 )
      {
        switch ( v11 - v62 )
        {
          case 1u:
            v20 = -1073741686;
            break;
          case 2u:
            v20 = -1073741685;
            v57 = -1073741685;
            v51 = BaseOfImage;
            goto LABEL_165;
          case 3u:
            v20 = -1073741308;
            v57 = -1073741308;
            return (unsigned int)v20;
        }
        v57 = v20;
        if ( (unsigned int)(v20 + 1073741686) <= 1 )
        {
LABEL_165:
          v52 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v52 & 0x20000) != 0 && (v52 & 0x10) != 0 && v11 == 3 )
          {
            v84 = *(_QWORD *)v70;
            v85 = *(_QWORD *)(v70 + 8);
            v86 = *(_QWORD *)(v70 + 16);
            if ( a3 == 4 )
              v87 = *(_QWORD *)(v70 + 24);
            v20 = sub_18003697C(v51, v68);
            v57 = v20;
            if ( v20 >= 0 )
              sub_180081D84(v51);
          }
        }
        return (unsigned int)v20;
      }
      if ( v67 && (v5 & 0x20) != 0 )
        break;
      sub_18003635C((unsigned __int16)v47, v78, v49, *v7++, &v71, &v69);
      v82 = v7;
      v18 = v71;
      v19 = v69;
    }
    v18 = 0LL;
    v71 = 0LL;
    v60 = *v49;
    v19 = v78 + v49[1];
    v69 = v19;
LABEL_49:
    v21 = 3221225610LL;
LABEL_50:
    if ( v19 && (v5 & 2) == 0 )
    {
      *(_QWORD *)v68 = v19;
      if ( !NtCurrentTeb()->ResourceRetValue )
      {
        v80 = NtCurrentTeb();
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
        v80->ResourceRetValue = Heap;
      }
      if ( NtCurrentTeb()->ResourceRetValue )
      {
        v26 = BaseOfImage;
        *(_QWORD *)NtCurrentTeb()->ResourceRetValue = BaseOfImage;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v69;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v26;
      }
LABEL_56:
      v27 = 0;
      v57 = 0;
      return v27;
    }
    if ( v18 && (v5 & 2) != 0 )
    {
      *(_QWORD *)v68 = v18;
      goto LABEL_56;
    }
    if ( v11 - v62 == 1 )
    {
      v27 = -1073741686;
      v57 = -1073741686;
      goto LABEL_178;
    }
    if ( v11 - v62 == 2 )
    {
      v27 = -1073741685;
      v57 = -1073741685;
      goto LABEL_179;
    }
    if ( v11 - v62 != 3 )
    {
      v27 = -1073741811;
      v57 = -1073741811;
LABEL_178:
      if ( v27 + 1073741686 > 1 )
        return v27;
LABEL_179:
      v53 = ~v5;
      if ( (~v5 & 0x80000) != 0 && (v53 & 0x20000) != 0 && (v53 & 0x10) != 0 && v11 == 3 )
      {
        v84 = *(_QWORD *)v70;
        v85 = *(_QWORD *)(v70 + 8);
        v86 = *(_QWORD *)(v70 + 16);
        if ( a3 == 4 )
          v87 = *(_QWORD *)(v70 + 24);
        v54 = BaseOfImage;
        v27 = sub_18003697C(BaseOfImage, v68);
        v57 = v27;
        if ( (v27 & 0x80000000) == 0 )
          sub_180081D84(v54);
      }
      return v27;
    }
    v27 = -1073741308;
    v57 = -1073741308;
    if ( !v67 )
      goto LABEL_178;
    v69 = 0LL;
    v24 = (__int64 *)v70;
LABEL_70:
    v28 = BaseOfImage;
    while ( 1 )
    {
      v29 = v61++;
      if ( v29 > 6 )
      {
        v41 = v29 - 7;
        if ( !v41 )
        {
          if ( (~v5 & 0x80000) == 0 )
            goto LABEL_145;
          v46 = (_DWORD *)sub_18003660C(v28);
          if ( !v46 )
            goto LABEL_145;
          if ( *v46 != -20054323 )
            goto LABEL_145;
          if ( !v46[31] )
            goto LABEL_145;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v46 + (unsigned int)v46[31]));
          if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
            goto LABEL_145;
          v34 = Lcid;
          goto LABEL_146;
        }
        v42 = v41 - 1;
        if ( v42 )
        {
          v43 = v42 - 1;
          if ( v43 )
          {
            v44 = v43 - 1;
            if ( v44 )
            {
              v45 = v44 - 1;
              if ( !v45 )
              {
                v34 = 1033;
                goto LABEL_146;
              }
              if ( v45 != 1 )
                return 3221225988LL;
LABEL_135:
              v5 |= 0x20u;
              v59 = v5;
              goto LABEL_147;
            }
            v55[0] = v60;
            v57 = ZwQueryDefaultLocale(0, &DefaultLocaleId);
            if ( v57 >= 0 )
            {
              v34 = DefaultLocaleId;
              if ( DefaultLocaleId != v66 )
                goto LABEL_146;
            }
          }
          else
          {
            v55[0] = v60;
            v57 = ZwQueryDefaultLocale(1u, &v66);
            if ( v57 >= 0 )
            {
              v34 = v66;
              goto LABEL_146;
            }
          }
        }
        else
        {
          v55[0] = v60;
          if ( (~v5 & 0x80000) != 0 )
            goto LABEL_135;
          if ( NtCurrentTeb() )
            v55[0] = NtCurrentTeb()->CurrentLocale;
          v5 = v59;
        }
      }
      else if ( v29 == 6 )
      {
        v55[0] = v60;
        if ( (v5 & 0x20) == 0 )
        {
          v55[0] = 0;
          if ( (unsigned __int8)sub_180040BCC(v24, v21, 1023LL) )
          {
            v40 = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
            if ( v64 >= v40 )
              v55[0] = 0;
            else
              sub_180037618(v40, NtCurrentTeb()->MergedPrefLanguages, v64, (unsigned int)v55, (__int64)v65);
            v5 = v59;
          }
          else
          {
            v55[0] = 0;
          }
          if ( !v55[0] )
            goto LABEL_145;
          ++v64;
LABEL_120:
          --v61;
        }
      }
      else
      {
        if ( !v29 )
        {
          if ( v58 )
          {
            v34 = v60;
            if ( (v5 & 0x80000) != 0 )
              v34 = v58;
            goto LABEL_146;
          }
LABEL_89:
          v55[0] = 0;
          goto LABEL_147;
        }
        v30 = v29 - 1;
        if ( !v30 )
        {
          v35 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v35 & 0x20000) != 0 && (v35 & 0x10) != 0 )
          {
            v84 = *v24;
            if ( v11 < 2 )
              v36 = 0LL;
            else
              v36 = v24[1];
            v85 = v36;
            if ( v11 == 3 )
              v37 = v24[2];
            else
              v37 = 0LL;
            v86 = v37;
            if ( a3 == 4 )
              v87 = v24[3];
            v38 = BaseOfImage;
            v39 = sub_18003697C(BaseOfImage, v68);
            v57 = v39;
            if ( v39 >= 0 )
            {
              sub_180081D84(v38);
              return (unsigned int)v39;
            }
            v28 = v38;
          }
          goto LABEL_145;
        }
        v31 = v30 - 1;
        if ( !v31 )
        {
          v34 = v58;
          if ( v56 )
            v34 = v60;
          goto LABEL_146;
        }
        v32 = v31 - 1;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            if ( v33 != 1 )
              return 3221225988LL;
            if ( !v56 )
              return 3221225988LL;
LABEL_145:
            v34 = v60;
          }
          else
          {
            if ( v56 )
              goto LABEL_145;
            v34 = v58 & 0x3FF;
          }
LABEL_146:
          v55[0] = v34;
          goto LABEL_147;
        }
        if ( (v5 & 4) != 0 )
          return 3221225988LL;
        if ( v56 )
          goto LABEL_145;
        if ( (int)sub_180088CF8(v55[0], v55, 1023LL) < 0 )
          goto LABEL_89;
        if ( v55[0] )
          goto LABEL_120;
      }
LABEL_147:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v55[0] != v60 )
      {
        v60 = v55[0];
        v7 = &v60;
        v82 = &v60;
        v18 = v67;
        v71 = v67;
        goto LABEL_151;
      }
      v24 = (__int64 *)v70;
    }
  }
  return result;
}
