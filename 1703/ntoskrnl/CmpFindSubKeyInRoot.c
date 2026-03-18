/*
 * XREFs of CmpFindSubKeyInRoot @ 0x1405016A0
 * Callers:
 *     CmpMarkIndexDirty @ 0x1404D114C (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x1404D1F10 (CmpRemoveSubKeyFromList.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404D2CDC (CmpFindSubKeyByNameWithStatus.c)
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 *     CmpSelectLeaf @ 0x140574238 (CmpSelectLeaf.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     RtlCompareUnicodeString @ 0x140427380 (RtlCompareUnicodeString.c)
 *     CmpDoCompareKeyName @ 0x1404D2F90 (CmpDoCompareKeyName.c)
 *     CmpCompareInIndex @ 0x140501AE0 (CmpCompareInIndex.c)
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpFindSubKeyInRoot(__int64 a1, __int64 a2, const UNICODE_STRING *a3, unsigned int *a4)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  unsigned int *v6; // r14
  const UNICODE_STRING *v7; // rbp
  __int64 v9; // r12
  unsigned int v10; // edi
  _WORD *v11; // rax
  _WORD *v12; // r13
  __int16 v13; // r8
  __int64 v14; // rdx
  _WORD *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int8 *v18; // rbx
  unsigned __int16 v19; // r12
  WCHAR *v20; // rdi
  unsigned __int16 v21; // r14
  WCHAR v22; // bp
  unsigned int v23; // esi
  LONG v24; // esi
  int v25; // eax
  int v26; // ebx
  void (__fastcall *v27)(__int64, _DWORD *); // rax
  unsigned int v28; // eax
  unsigned int v30; // edi
  __int64 v31; // rax
  __int64 v32; // rbx
  int v33; // eax
  int v34; // eax
  unsigned int v35; // ebx
  __int64 v36; // rax
  int v37; // eax
  unsigned int v38; // ebp
  _BYTE *v39; // rcx
  unsigned int v40; // eax
  __int64 v41; // rsi
  wchar_t *Buffer; // r14
  __int64 v43; // rbx
  int v44; // eax
  WCHAR v45; // cx
  unsigned int v46; // edi
  int v47; // ebx
  WCHAR v48; // ax
  unsigned int v49; // eax
  unsigned int v50; // [rsp+30h] [rbp-88h]
  unsigned int v51; // [rsp+34h] [rbp-84h]
  unsigned int v52; // [rsp+38h] [rbp-80h]
  _DWORD v53[2]; // [rsp+40h] [rbp-78h] BYREF
  _DWORD v54[2]; // [rsp+48h] [rbp-70h] BYREF
  _WORD *v55; // [rsp+50h] [rbp-68h]
  UNICODE_STRING String2; // [rsp+58h] [rbp-60h] BYREF
  unsigned int v57; // [rsp+C0h] [rbp+8h]
  __int64 v58; // [rsp+C8h] [rbp+10h]

  v58 = a2;
  v4 = *(unsigned __int16 *)(a2 + 2) - 1;
  v53[0] = -1;
  v5 = 0;
  v53[1] = 0;
  v57 = 0;
  v6 = a4;
  v7 = a3;
  v51 = v4;
  while ( 1 )
  {
    v9 = v5 + ((v4 - v5) >> 1);
    v52 = v5 + ((v4 - v5) >> 1);
    v10 = *(_DWORD *)(a2 + 4 * v9 + 4);
    v50 = v10;
    v11 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v10, v53);
    *v6 = -1;
    v12 = v11;
    if ( !v11 )
      return 0x80000000LL;
    v13 = *v11;
    v14 = (unsigned int)(unsigned __int16)v11[1] - 1;
    if ( ((*v11 - 26220) & 0xFDFF) != 0 )
    {
      v43 = 2 * v14;
      v44 = CmpDoCompareKeyName(a1, v7, *(unsigned int *)&v11[2 * v14 + 2]);
      if ( v44 == 2 )
        goto LABEL_81;
      if ( !v44 )
      {
        v28 = *(_DWORD *)&v12[v43 + 2];
        goto LABEL_28;
      }
      if ( v44 >= 0 )
        goto LABEL_24;
    }
    else
    {
      v15 = &v11[4 * v14];
      v55 = v15;
      if ( v13 == 26220 )
      {
        v38 = 4;
        v39 = v15 + 4;
        v40 = 0;
        while ( *v39 )
        {
          ++v40;
          ++v39;
          if ( v40 >= 4 )
            goto LABEL_53;
        }
        v38 = v40;
LABEL_53:
        if ( a3->Length >> 1 < v38 )
          v38 = a3->Length >> 1;
        v41 = 0LL;
        if ( v38 )
        {
          Buffer = a3->Buffer;
          while ( 1 )
          {
            v45 = Buffer[v41];
            v46 = *((unsigned __int8 *)v15 + v41 + 8);
            if ( v45 >= 0x61u )
            {
              if ( v45 <= 0x7Au )
              {
                v47 = v45 - 32;
              }
              else
              {
                v48 = RtlUpcaseUnicodeChar(v45);
                v15 = v55;
                v47 = v48;
              }
            }
            else
            {
              v47 = v45;
            }
            if ( v46 >= 0x61 )
            {
              if ( v46 <= 0x7A )
              {
                v49 = v46 - 32;
              }
              else
              {
                LOWORD(v49) = RtlUpcaseUnicodeChar(v46);
                v15 = v55;
                v49 = (unsigned __int16)v49;
              }
            }
            else
            {
              v49 = v46;
            }
            v26 = v47 - v49;
            if ( v26 )
              break;
            v41 = (unsigned int)(v41 + 1);
            if ( (unsigned int)v41 >= v38 )
            {
              v6 = a4;
              v10 = v50;
              goto LABEL_60;
            }
          }
          v7 = a3;
          if ( v26 > 0 )
            goto LABEL_23;
          v6 = a4;
          v10 = v50;
          goto LABEL_18;
        }
LABEL_60:
        v7 = a3;
      }
      v16 = *((unsigned int *)v15 + 1);
      v54[0] = -1;
      v54[1] = 0;
      v17 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, v16, v54);
      if ( !v17 )
        goto LABEL_81;
      if ( (*(_BYTE *)(v17 + 2) & 0x20) != 0 )
      {
        v18 = (unsigned __int8 *)(v17 + 76);
        v19 = v7->Length >> 1;
        v20 = v7->Buffer;
        v21 = *(_WORD *)(v17 + 72);
        if ( v19 )
        {
          while ( v21 )
          {
            v22 = *v20++;
            v23 = *v18++;
            if ( v22 != (_WORD)v23 )
            {
              if ( v22 >= 0x61u )
              {
                if ( v22 > 0x7Au )
                  v22 = RtlUpcaseUnicodeChar(v22);
                else
                  v22 -= 32;
              }
              if ( v23 >= 0x61 )
              {
                if ( v23 > 0x7A )
                  LOWORD(v23) = RtlUpcaseUnicodeChar(v23);
                else
                  LOWORD(v23) = v23 - 32;
              }
              v24 = v22 - (unsigned __int16)v23;
              if ( v24 )
                goto LABEL_15;
            }
            --v21;
            if ( !--v19 )
              break;
          }
        }
        v24 = v19 - v21;
LABEL_15:
        LODWORD(v9) = v52;
        v6 = a4;
        v10 = v50;
      }
      else
      {
        String2.Buffer = (wchar_t *)(v17 + 76);
        String2.Length = *(_WORD *)(v17 + 72);
        String2.MaximumLength = String2.Length;
        v24 = RtlCompareUnicodeString(v7, &String2, 1u);
      }
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v54);
      if ( !v24 )
      {
        v28 = *((_DWORD *)v55 + 1);
LABEL_28:
        *v6 = v28;
LABEL_29:
        *v6 = v10;
LABEL_30:
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v53);
        return (unsigned int)v9;
      }
      v7 = a3;
      if ( v24 >= 0 )
      {
LABEL_23:
        v4 = v51;
LABEL_24:
        v6 = a4;
        v5 = v9;
        v57 = v9;
        goto LABEL_25;
      }
    }
LABEL_18:
    v25 = CmpCompareInIndex(a1, v7, 0LL, v12, v6);
    if ( v25 == 2 )
      goto LABEL_81;
    if ( v25 >= 0 )
      goto LABEL_29;
    v5 = v57;
    v4 = v9;
    v51 = v9;
LABEL_25:
    v27 = *(void (__fastcall **)(__int64, _DWORD *))(a1 + 16);
    if ( v4 - v5 <= 1 )
      break;
    v27(a1, v53);
    a2 = v58;
  }
  v27(a1, v53);
  v30 = *(_DWORD *)(v58 + 4LL * v5 + 4);
  v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v30, v53);
  v32 = v31;
  if ( v31 )
  {
    v33 = CmpCompareInIndex(a1, v7, (unsigned int)*(unsigned __int16 *)(v31 + 2) - 1, v31, v6);
    if ( v33 == 2 )
      goto LABEL_81;
    if ( !v33 )
    {
      LODWORD(v9) = v57;
      *v6 = v30;
      goto LABEL_30;
    }
    if ( v33 < 0 )
    {
      v34 = CmpCompareInIndex(a1, v7, 0LL, v32, v6);
      if ( v34 != 2 )
      {
        LODWORD(v9) = v57;
        if ( v34 >= 0 )
        {
          *v6 = v30;
          goto LABEL_30;
        }
LABEL_46:
        *v6 = -1;
        goto LABEL_30;
      }
      goto LABEL_81;
    }
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v53);
    v35 = *(_DWORD *)(v58 + 4LL * v4 + 4);
    v36 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v35, v53);
    if ( v36 )
    {
      v37 = CmpCompareInIndex(a1, v7, (unsigned int)*(unsigned __int16 *)(v36 + 2) - 1, v36, v6);
      if ( v37 != 2 )
      {
        LODWORD(v9) = v4;
        if ( v37 <= 0 )
        {
          *v6 = v35;
          goto LABEL_30;
        }
        goto LABEL_46;
      }
LABEL_81:
      LODWORD(v9) = 0x80000000;
      goto LABEL_46;
    }
  }
  *v6 = -1;
  return 0x80000000LL;
}
