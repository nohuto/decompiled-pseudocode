/*
 * XREFs of CmpCheckRegistry2 @ 0x140505E80
 * Callers:
 *     CmCheckRegistry @ 0x1404B6EBC (CmCheckRegistry.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     SetFailureLocation @ 0x1401DEAE4 (SetFailureLocation.c)
 *     RtlCompareUnicodeString @ 0x140427380 (RtlCompareUnicodeString.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x140448AD4 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpCompareCompressedName @ 0x1404D3030 (CmpCompareCompressedName.c)
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
 *     CmpCheckKey @ 0x140505100 (CmpCheckKey.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x140670B9C (CmpRemoveSubKeyCellNoCellRef.c)
 */

__int64 __fastcall CmpCheckRegistry2(
        ULONG_PTR a1,
        int a2,
        int a3,
        __int64 a4,
        char a5,
        PRTL_BITMAP BitMapHeader,
        __int64 a7,
        int *a8)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  int *v12; // rcx
  _DWORD *v13; // r12
  int v14; // edi
  __int64 v15; // r15
  unsigned int *v16; // r14
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 (__fastcall *v22)(ULONG_PTR, __int64, _DWORD *); // rax
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int16 v26; // di
  unsigned __int8 *v27; // rsi
  unsigned __int16 v28; // bx
  unsigned __int8 *v29; // r14
  unsigned int v30; // r12d
  unsigned int v31; // r15d
  int v32; // ecx
  __int64 v33; // rax
  unsigned int v34; // ebx
  __int64 v35; // rdx
  __int64 (__fastcall *v36)(ULONG_PTR, __int64, _DWORD *); // rax
  _WORD *v37; // rsi
  int v38; // edi
  _WORD *v39; // rax
  unsigned int v40; // ecx
  int v41; // ebx
  unsigned int v42; // eax
  __int64 v43; // rdi
  unsigned __int16 v45; // r8
  unsigned __int16 v46; // r8
  __int64 v47; // rsi
  bool v48; // al
  __int64 v49; // rax
  int v50; // [rsp+20h] [rbp-99h]
  int v51; // [rsp+20h] [rbp-99h]
  __int64 v52; // [rsp+40h] [rbp-79h]
  _DWORD v53[2]; // [rsp+48h] [rbp-71h] BYREF
  _DWORD *v54; // [rsp+50h] [rbp-69h]
  unsigned int *v55; // [rsp+58h] [rbp-61h]
  _DWORD v56[2]; // [rsp+60h] [rbp-59h] BYREF
  _DWORD v57[2]; // [rsp+68h] [rbp-51h] BYREF
  _DWORD v58[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v59; // [rsp+78h] [rbp-41h]
  char v60[8]; // [rsp+80h] [rbp-39h] BYREF
  UNICODE_STRING String2; // [rsp+88h] [rbp-31h] BYREF
  UNICODE_STRING String1; // [rsp+98h] [rbp-21h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-11h]
  __int64 v64; // [rsp+B0h] [rbp-9h]
  int v65; // [rsp+100h] [rbp+47h]
  char v67; // [rsp+118h] [rbp+5Fh]

  v67 = 0;
  HvpGetCellContextReinitialize((__int64)v60);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(10240LL, 0LL, 1935887683LL);
  v52 = v10;
  if ( !v10 )
  {
    SetFailureLocation(a7, 0, 13, -1073741670, 0);
    return 3221225626LL;
  }
  v11 = a7;
  if ( a7 )
    *(_QWORD *)(a7 + 232) = v10;
  v12 = a8;
  v13 = (_DWORD *)(v10 - 20);
  *(_DWORD *)v10 = a3;
  *(_QWORD *)(v10 + 4) = -1LL;
  v14 = 0;
  *(_DWORD *)(v10 + 12) = 0;
  v15 = 0LL;
  *a8 = 0;
  v16 = (unsigned int *)v10;
  *(_BYTE *)(v10 + 16) = 0;
  v65 = 0;
  v59 = 0LL;
  v55 = (unsigned int *)v10;
  v54 = (_DWORD *)(v10 - 20);
  while ( 1 )
  {
    if ( !*((_BYTE *)v16 + 16) )
    {
      v17 = *v12;
      *((_BYTE *)v16 + 16) = 1;
      if ( v17 != -1 )
        *v12 = v17 + 1;
      v18 = CmpCheckKey(a1, a2, *v16, v16[1], a5, BitMapHeader, v11);
      v19 = v18;
      if ( v18 == -2147483606 )
      {
        v67 = 1;
      }
      else if ( v18 < 0 )
      {
        if ( v18 != -1073741492 )
          goto LABEL_105;
        if ( (a2 & 0x20000) != 0 )
        {
          v48 = 0;
        }
        else if ( CmpSelfHeal )
        {
          v48 = 1;
        }
        else
        {
          v48 = (CmpBootType & 6) != 0;
        }
        v47 = a7;
        SetFailureLocation(a7, v48, 13, -1073741492, 16);
        goto LABEL_87;
      }
      if ( v15 > 0 )
        break;
    }
LABEL_33:
    v33 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(a1 + 8))(a1, *v16, v60);
    if ( !v33 )
    {
      v51 = 64;
      goto LABEL_103;
    }
    v34 = v16[3];
    if ( v34 < *(_DWORD *)(v33 + 20) )
    {
      v35 = *(unsigned int *)(v33 + 28);
      v36 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(a1 + 8);
      v58[1] = 0;
      v58[0] = -1;
      v37 = (_WORD *)v36(a1, v35, v58);
      if ( !v37 )
      {
        v50 = 80;
LABEL_98:
        v19 = -1073741670;
        SetFailureLocation(a7, 0, 13, -1073741670, v50);
LABEL_99:
        (*(void (__fastcall **)(ULONG_PTR, char *))(a1 + 16))(a1, v60);
LABEL_105:
        v43 = v52;
        goto LABEL_61;
      }
      v53[0] = -1;
      v53[1] = 0;
      if ( *v37 == 26994 && (v38 = 0, v37[1]) )
      {
        while ( 1 )
        {
          v39 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(
                           a1,
                           *(unsigned int *)&v37[2 * v38 + 2],
                           v53);
          if ( !v39 )
          {
            v41 = -1;
            goto LABEL_49;
          }
          v40 = (unsigned __int16)v39[1];
          if ( v34 < v40 )
            break;
          v34 -= v40;
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v53);
          if ( ++v38 >= (unsigned int)(unsigned __int16)v37[1] )
            goto LABEL_44;
        }
        if ( ((*v39 - 26220) & 0xFDFF) != 0 )
          v41 = *(_DWORD *)&v39[2 * v34 + 2];
        else
          v41 = *(_DWORD *)&v39[4 * v34 + 2];
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v53);
      }
      else
      {
LABEL_44:
        if ( ((*v37 - 26220) & 0xFDFF) != 0 )
          v41 = *(_DWORD *)&v37[2 * v34 + 2];
        else
          v41 = *(_DWORD *)&v37[4 * v34 + 2];
      }
LABEL_49:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v58);
      if ( v41 == -1 )
      {
        v50 = 88;
        goto LABEL_98;
      }
      ++v15;
      ++v16[3];
      v14 = v65 + 1;
      v13 += 5;
      ++v65;
      v16 += 5;
      v59 = v15;
      v54 = v13;
      v55 = v16;
      if ( v15 == 512 )
      {
        v19 = -1073741492;
        SetFailureLocation(a7, 0, 13, -1073741492, 96);
        goto LABEL_99;
      }
      v42 = *v13;
      v16[3] = 0;
      *((_BYTE *)v16 + 16) = 0;
      *v16 = v41;
      v16[1] = v42;
      v16[2] = -1;
    }
    else
    {
      --v14;
      --v15;
      v13 -= 5;
      v65 = v14;
      v16 -= 5;
      v59 = v15;
      v55 = v16;
      v54 = v13;
    }
    (*(void (__fastcall **)(ULONG_PTR, char *))(a1 + 16))(a1, v60);
    if ( v15 < 0 )
    {
      if ( (a2 & 0x20000) != 0 || CmpCheckAndFixSecurityCellsRefcount(a1) )
      {
        v43 = v52;
        if ( v67 )
          v19 = -2147483606;
        else
          v19 = 0;
        goto LABEL_61;
      }
      v51 = 112;
LABEL_103:
      v19 = -1073741492;
      SetFailureLocation(a7, 0, 13, -1073741492, v51);
      goto LABEL_105;
    }
    v12 = a8;
    v11 = a7;
  }
  v20 = v13[2];
  if ( v20 == -1 )
  {
LABEL_32:
    v13[2] = *v16;
    goto LABEL_33;
  }
  v21 = *v16;
  v56[0] = -1;
  v56[1] = 0;
  v57[1] = 0;
  v22 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(a1 + 8);
  v57[0] = -1;
  v23 = v22(a1, v21, v56);
  v64 = v23;
  v24 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v20, v57);
  v63 = v24;
  v25 = v24;
  if ( !v23 || !v24 )
  {
    v19 = -1073741670;
    goto LABEL_26;
  }
  if ( (*(_BYTE *)(v23 + 2) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(v24 + 2) & 0x20) != 0 )
    {
      v45 = *(_WORD *)(v24 + 72);
      String2.Buffer = (wchar_t *)(v23 + 76);
      String2.Length = *(_WORD *)(v23 + 72);
      String2.MaximumLength = String2.Length;
      if ( (int)CmpCompareCompressedName((__int64)&String2, (unsigned __int8 *)(v24 + 76), v45, 0) <= 0 )
      {
        v19 = -1073741492;
        goto LABEL_26;
      }
    }
    else
    {
      String1.Buffer = (wchar_t *)(v24 + 76);
      String1.Length = *(_WORD *)(v24 + 72);
      String1.MaximumLength = String1.Length;
      String2.Buffer = (wchar_t *)(v23 + 76);
      String2.Length = *(_WORD *)(v23 + 72);
      String2.MaximumLength = String2.Length;
      if ( RtlCompareUnicodeString(&String1, &String2, 1u) >= 0 )
      {
        v19 = -1073741492;
        goto LABEL_26;
      }
    }
LABEL_25:
    v19 = 0;
    goto LABEL_26;
  }
  if ( (*(_BYTE *)(v24 + 2) & 0x20) == 0 )
  {
    v46 = *(_WORD *)(v23 + 72);
    String1.Buffer = (wchar_t *)(v24 + 76);
    String1.Length = *(_WORD *)(v24 + 72);
    String1.MaximumLength = String1.Length;
    if ( (int)CmpCompareCompressedName((__int64)&String1, (unsigned __int8 *)(v23 + 76), v46, 0) >= 0 )
    {
      v19 = -1073741492;
      goto LABEL_26;
    }
    goto LABEL_25;
  }
  v26 = *(_WORD *)(v24 + 72);
  v27 = (unsigned __int8 *)(v24 + 76);
  v28 = *(_WORD *)(v23 + 72);
  v29 = (unsigned __int8 *)(v23 + 76);
  if ( v26 )
  {
    while ( v28 )
    {
      v30 = *v27++;
      v31 = *v29++;
      if ( (_WORD)v30 != (_WORD)v31 )
      {
        if ( v30 >= 0x61 )
        {
          if ( v30 > 0x7A )
            LOWORD(v30) = RtlUpcaseUnicodeChar(v30);
          else
            LOWORD(v30) = v30 - 32;
        }
        if ( v31 >= 0x61 )
        {
          if ( v31 > 0x7A )
            LOWORD(v31) = RtlUpcaseUnicodeChar(v31);
          else
            LOWORD(v31) = v31 - 32;
        }
        v32 = (unsigned __int16)v30 - (unsigned __int16)v31;
        if ( (unsigned __int16)v30 != (unsigned __int16)v31 )
          goto LABEL_24;
      }
      --v28;
      if ( !--v26 )
        break;
    }
  }
  v32 = v26 - v28;
LABEL_24:
  v16 = v55;
  v25 = v63;
  v23 = v64;
  v13 = v54;
  if ( v32 < 0 )
    goto LABEL_25;
  v19 = -1073741492;
LABEL_26:
  if ( v23 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v56);
  if ( v25 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v57);
  if ( v19 >= 0 )
  {
    v15 = v59;
    v14 = v65;
    goto LABEL_32;
  }
  if ( v19 != -1073741492 )
  {
    SetFailureLocation(a7, 0, 13, v19, 37);
    goto LABEL_105;
  }
  v47 = a7;
  SetFailureLocation(a7, 0, 13, -1073741492, 48);
  v14 = v65;
LABEL_87:
  if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 || !v14 )
  {
    v19 = -1073741492;
    SetFailureLocation(v47, 0, 13, -1073741492, 24);
    goto LABEL_105;
  }
  v49 = v14;
  v43 = v52;
  if ( (unsigned __int8)CmpRemoveSubKeyCellNoCellRef(a1, *(unsigned int *)(v52 + 20 * v49 + 4)) )
  {
    v19 = -1073741267;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
  }
  else
  {
    v19 = -1073741492;
    SetFailureLocation(v47, 0, 13, -1073741492, 32);
  }
LABEL_61:
  (*(void (__fastcall **)(__int64, __int64))(a1 + 32))(v43, 10240LL);
  return (unsigned int)v19;
}
