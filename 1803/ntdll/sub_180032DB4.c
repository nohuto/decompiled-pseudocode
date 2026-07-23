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

__int64 __fastcall sub_180032DB4(void *a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  unsigned int v5; // esi
  __int64 *v7; // rdi
  PVOID v8; // r8
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned int v11; // r13d
  __int16 v12; // r14
  unsigned __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // r9
  __int64 v18; // r14
  unsigned __int64 v19; // rcx
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
  unsigned __int16 v48; // r11
  unsigned int *v49; // rdx
  PVOID v50; // r14
  unsigned __int64 v51; // r8
  __int64 v52; // r9
  int v54; // eax
  int v55; // eax
  PVOID v56; // rsi
  _WORD v57[2]; // [rsp+40h] [rbp-118h] BYREF
  bool v58; // [rsp+44h] [rbp-114h]
  NTSTATUS v59; // [rsp+48h] [rbp-110h]
  __int16 v60; // [rsp+4Ch] [rbp-10Ch]
  __int64 v61; // [rsp+50h] [rbp-108h] BYREF
  unsigned int v62; // [rsp+58h] [rbp-100h]
  unsigned int v63; // [rsp+5Ch] [rbp-FCh]
  PVOID BaseOfImage; // [rsp+60h] [rbp-F8h]
  unsigned int v65; // [rsp+68h] [rbp-F0h]
  char v66[4]; // [rsp+6Ch] [rbp-ECh] BYREF
  DWORD v67; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v68; // [rsp+78h] [rbp-E0h]
  __int64 v69; // [rsp+80h] [rbp-D8h]
  __int64 v70; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v71; // [rsp+90h] [rbp-C8h]
  __int64 v72; // [rsp+98h] [rbp-C0h] BYREF
  DWORD DefaultLocaleId; // [rsp+A0h] [rbp-B8h] BYREF
  DWORD Lcid; // [rsp+A4h] [rbp-B4h] BYREF
  unsigned int v75; // [rsp+A8h] [rbp-B0h] BYREF
  unsigned int v76; // [rsp+ACh] [rbp-ACh] BYREF
  __int64 v77; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-A0h] BYREF
  __int64 v79; // [rsp+C0h] [rbp-98h]
  DWORD v80; // [rsp+C8h] [rbp-90h] BYREF
  struct _TEB *v81; // [rsp+D0h] [rbp-88h]
  unsigned int *v82; // [rsp+D8h] [rbp-80h]
  __int64 *v83; // [rsp+E0h] [rbp-78h]
  _UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v85; // [rsp+F8h] [rbp-60h]
  __int64 v86; // [rsp+100h] [rbp-58h]
  __int64 v87; // [rsp+108h] [rbp-50h]
  __int64 v88; // [rsp+110h] [rbp-48h]
  unsigned int v89; // [rsp+178h] [rbp+20h]

  v89 = a4;
  v5 = a4;
  v7 = (__int64 *)a2;
  v8 = a1;
  BaseOfImage = a1;
  v69 = a5;
  v71 = a2;
  v9 = 0LL;
  v58 = 0;
  v77 = 0LL;
  v65 = 0;
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
  v63 = v11;
  if ( (~(_BYTE)a4 & 0x10) != 0 && v11 - 1 <= 2 )
  {
    if ( v11 == 3 )
      v12 = *(_WORD *)(a2 + 16);
    else
      v12 = 0;
    v60 = v12;
    v13 = *(_QWORD *)a2;
    if ( ((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v13 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v14 = wcsicmp((const wchar_t *)v13, L"MUI"), v8 = BaseOfImage, v14))
      || (~(_BYTE)v5 & 8) == 0
      || (v12 & 0xF3FF) != 0
      || v12 == 3072 )
    {
      v5 |= sub_180033ADC(v8, v7, v8, v5);
      v89 = v5;
      if ( (v5 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v59 = -1073741686;
        if ( (v5 & 0x20000) == 0 )
        {
          v85 = *v7;
          if ( v11 < 2 )
            v15 = 0LL;
          else
            v15 = v7[1];
          v86 = v15;
          if ( v11 == 3 )
            v9 = v7[2];
          v87 = v9;
          if ( a3 == 4 )
            v88 = v7[3];
          result = sub_180033EB8(BaseOfImage, v69);
          v59 = result;
        }
        return result;
      }
    }
    else
    {
      v5 |= 0x10u;
      v89 = v5;
    }
  }
  v16 = sub_18001014C((unsigned __int64)BaseOfImage, 1, 2u, &v80, (char **)&v78);
  v18 = v78;
  if ( v16 < 0 )
    v18 = 0LL;
  v78 = v18;
  v79 = v18;
  if ( !v18 )
    return 3221225609LL;
  LOBYTE(v17) = 1;
  result = LdrpResGetMappingSize(BaseOfImage, &v77, 256LL, v17);
  v59 = result;
  if ( (int)result >= 0 )
  {
    v72 = v18;
    v61 = 61166LL;
    v62 = 0;
    v19 = 0LL;
    v70 = 0LL;
    v68 = 0LL;
    v57[0] = 0;
    v60 = 0;
    v67 = 0;
    v20 = -1073741811;
    while ( 1 )
    {
      v21 = 3221225610LL;
      if ( !v18 )
        goto LABEL_50;
      v22 = v63;
      v21 = --v63;
      if ( !v22 )
        goto LABEL_49;
      if ( !(_DWORD)v21 )
      {
        v23 = v68;
        if ( v11 == 3 )
          v23 = v18;
        v68 = v23;
      }
      if ( v68 )
      {
        v24 = (__int64 *)v71;
        v60 = *(_WORD *)(v71 + 16);
        v58 = (v60 & 0x3FF) == 0;
        goto LABEL_69;
      }
LABEL_150:
      result = sub_18007D2F4(*(unsigned __int16 *)(v18 + 12), *(unsigned __int16 *)(v18 + 14), &v75);
      v59 = result;
      if ( (int)result < 0 )
        return result;
      result = sub_1800DAAB4(v75, 8LL, &v76);
      v59 = result;
      if ( (int)result < 0 )
        return result;
      v49 = (unsigned int *)(v18 + 16);
      v82 = v49;
      v50 = BaseOfImage;
      v51 = v77 + ((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (unsigned __int64)v49 + v76 > v51 )
        return 3221225595LL;
      v52 = *v7;
      if ( *v7 & 0xFFFFFFFFFFFF0000uLL )
      {
        v48 = v47;
      }
      else
      {
        v49 += 2 * v47;
        v82 = v49;
      }
      if ( !v48 )
      {
        switch ( v11 - v63 )
        {
          case 1u:
            v20 = -1073741686;
            break;
          case 2u:
            v20 = -1073741685;
            v59 = -1073741685;
            goto LABEL_165;
          case 3u:
            v20 = -1073741308;
            v59 = -1073741308;
            return (unsigned int)v20;
        }
        v59 = v20;
        if ( (unsigned int)(v20 + 1073741686) <= 1 )
        {
LABEL_165:
          v54 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v54 & 0x20000) != 0 && (v54 & 0x10) != 0 && v11 == 3 )
          {
            v85 = *(_QWORD *)v71;
            v86 = *(_QWORD *)(v71 + 8);
            v87 = *(_QWORD *)(v71 + 16);
            if ( a3 == 4 )
              v88 = *(_QWORD *)(v71 + 24);
            v20 = sub_180033EB8(BaseOfImage, v69);
            v59 = v20;
            if ( v20 >= 0 )
              sub_18007A164(v50);
          }
        }
        return (unsigned int)v20;
      }
      if ( v68 && (v5 & 0x20) != 0 )
        break;
      if ( !(unsigned __int8)sub_18003394C(
                               (_DWORD)BaseOfImage,
                               v77,
                               v48,
                               v79,
                               (__int64)v49,
                               v52,
                               (__int64)&v72,
                               (__int64)&v70) )
        return 3221225595LL;
      v83 = ++v7;
      v18 = v72;
      v19 = v70;
    }
    v18 = 0LL;
    v72 = 0LL;
    v61 = *v49;
    v19 = v79 + v49[1];
    if ( v19 > v51 )
      return 3221225595LL;
    v70 = v79 + v49[1];
LABEL_49:
    v21 = 3221225610LL;
LABEL_50:
    if ( v19 && (v5 & 2) == 0 )
    {
      *(_QWORD *)v69 = v19;
      if ( !NtCurrentTeb()->ResourceRetValue )
      {
        v81 = NtCurrentTeb();
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
        v81->ResourceRetValue = Heap;
      }
      if ( NtCurrentTeb()->ResourceRetValue )
      {
        v26 = BaseOfImage;
        *(_QWORD *)NtCurrentTeb()->ResourceRetValue = BaseOfImage;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v70;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v26;
      }
LABEL_56:
      v27 = 0;
      v59 = 0;
      return v27;
    }
    if ( v18 && (v5 & 2) != 0 )
    {
      *(_QWORD *)v69 = v18;
      goto LABEL_56;
    }
    if ( v11 - v63 == 1 )
    {
      v27 = -1073741686;
      v59 = -1073741686;
      goto LABEL_182;
    }
    if ( v11 - v63 == 2 )
    {
      v27 = -1073741685;
      v59 = -1073741685;
      goto LABEL_183;
    }
    if ( v11 - v63 != 3 )
    {
      v27 = -1073741811;
      v59 = -1073741811;
LABEL_182:
      if ( v27 + 1073741686 > 1 )
        return v27;
LABEL_183:
      v55 = ~v5;
      if ( (~v5 & 0x80000) != 0 && (v55 & 0x20000) != 0 && (v55 & 0x10) != 0 && v11 == 3 )
      {
        v85 = *(_QWORD *)v71;
        v86 = *(_QWORD *)(v71 + 8);
        v87 = *(_QWORD *)(v71 + 16);
        if ( a3 == 4 )
          v88 = *(_QWORD *)(v71 + 24);
        v56 = BaseOfImage;
        v27 = sub_180033EB8(BaseOfImage, v69);
        v59 = v27;
        if ( (v27 & 0x80000000) == 0 )
          sub_18007A164(v56);
      }
      return v27;
    }
    v27 = -1073741308;
    v59 = -1073741308;
    if ( !v68 )
      goto LABEL_182;
    v70 = 0LL;
    v24 = (__int64 *)v71;
LABEL_69:
    v28 = BaseOfImage;
    while ( 1 )
    {
      v29 = v62++;
      if ( v29 > 6 )
      {
        v41 = v29 - 7;
        if ( !v41 )
        {
          if ( (~v5 & 0x80000) == 0 )
            goto LABEL_106;
          v46 = (_DWORD *)sub_180033B60(v28);
          if ( !v46 )
            goto LABEL_106;
          if ( *v46 != -20054323 )
            goto LABEL_106;
          if ( !v46[31] )
            goto LABEL_106;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v46 + (unsigned int)v46[31]));
          if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
            goto LABEL_106;
          v34 = Lcid;
          goto LABEL_107;
        }
        v42 = v41 - 1;
        if ( v42 )
        {
          v43 = v42 - 1;
          if ( !v43 )
          {
            v57[0] = v61;
            v59 = ZwQueryDefaultLocale(1u, &v67);
            if ( v59 < 0 )
              goto LABEL_108;
            v34 = v67;
            goto LABEL_107;
          }
          v44 = v43 - 1;
          if ( v44 )
          {
            v45 = v44 - 1;
            if ( v45 )
            {
              if ( v45 != 1 )
                return 3221225988LL;
LABEL_139:
              v5 |= 0x20u;
              v89 = v5;
              goto LABEL_108;
            }
            v34 = 1033;
            goto LABEL_107;
          }
          v57[0] = v61;
          v59 = ZwQueryDefaultLocale(0, &DefaultLocaleId);
          if ( v59 >= 0 )
          {
            v34 = DefaultLocaleId;
            if ( DefaultLocaleId != v67 )
              goto LABEL_107;
          }
        }
        else
        {
          v57[0] = v61;
          if ( (~v5 & 0x80000) != 0 )
            goto LABEL_139;
          if ( NtCurrentTeb() )
            v57[0] = NtCurrentTeb()->CurrentLocale;
          v5 = v89;
        }
      }
      else
      {
        if ( v29 == 6 )
        {
          v57[0] = v61;
          if ( (v5 & 0x20) != 0 )
            goto LABEL_108;
          v57[0] = 0;
          if ( (unsigned __int8)sub_180034B2C(v24, v21, 1023LL) )
          {
            v40 = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
            if ( v65 >= v40 )
              v57[0] = 0;
            else
              sub_180034D90(v40, NtCurrentTeb()->MergedPrefLanguages, v65, (unsigned int)v57, (__int64)v66);
            v5 = v89;
          }
          else
          {
            v57[0] = 0;
          }
          if ( v57[0] )
          {
            ++v65;
LABEL_124:
            --v62;
            goto LABEL_108;
          }
LABEL_106:
          v34 = v61;
          goto LABEL_107;
        }
        if ( !v29 )
        {
          if ( v60 )
          {
            v34 = v61;
            if ( (v5 & 0x80000) != 0 )
              v34 = v60;
            goto LABEL_107;
          }
LABEL_88:
          v57[0] = 0;
          goto LABEL_108;
        }
        v30 = v29 - 1;
        if ( !v30 )
        {
          v35 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v35 & 0x20000) != 0 && (v35 & 0x10) != 0 )
          {
            v85 = *v24;
            if ( v11 < 2 )
              v36 = 0LL;
            else
              v36 = v24[1];
            v86 = v36;
            if ( v11 == 3 )
              v37 = v24[2];
            else
              v37 = 0LL;
            v87 = v37;
            if ( a3 == 4 )
              v88 = v24[3];
            v38 = BaseOfImage;
            v39 = sub_180033EB8(BaseOfImage, v69);
            v59 = v39;
            if ( v39 >= 0 )
            {
              sub_18007A164(v38);
              return (unsigned int)v39;
            }
            v28 = v38;
          }
          goto LABEL_106;
        }
        v31 = v30 - 1;
        if ( !v31 )
        {
          v34 = v60;
          if ( v58 )
            v34 = v61;
          goto LABEL_107;
        }
        v32 = v31 - 1;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            if ( v33 != 1 )
              return 3221225988LL;
            if ( !v58 )
              return 3221225988LL;
            goto LABEL_106;
          }
          if ( v58 )
            goto LABEL_106;
          v34 = v60 & 0x3FF;
LABEL_107:
          v57[0] = v34;
          goto LABEL_108;
        }
        if ( (v5 & 4) != 0 )
          return 3221225988LL;
        if ( v58 )
          goto LABEL_106;
        if ( (int)sub_18007EC88(v57[0], v57, 1023LL) < 0 )
          goto LABEL_88;
        if ( v57[0] )
          goto LABEL_124;
      }
LABEL_108:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v57[0] != v61 )
      {
        v61 = v57[0];
        v7 = &v61;
        v83 = &v61;
        v18 = v68;
        v72 = v68;
        goto LABEL_150;
      }
      v24 = (__int64 *)v71;
    }
  }
  return result;
}
