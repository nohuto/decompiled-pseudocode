/*
 * XREFs of CmpPreserveSystemHiveData @ 0x1406FE2C0
 * Callers:
 *     CmReplaceKey @ 0x1406F1CD8 (CmReplaceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     _strnicmp @ 0x1401883C0 (_strnicmp.c)
 *     _wcsnicmp @ 0x1401889A0 (_wcsnicmp.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpSetValueKeyExisting @ 0x1404A0DA0 (CmpSetValueKeyExisting.c)
 *     CmpFindNameInList @ 0x1404A389C (CmpFindNameInList.c)
 *     CmpGetValueData @ 0x1404A6CE0 (CmpGetValueData.c)
 *     CmpFindSubKeyByNumber @ 0x1404AD3B0 (CmpFindSubKeyByNumber.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1405DDE50 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpWalkPath @ 0x140635068 (CmpWalkPath.c)
 *     CmpGetNextName @ 0x14063510C (CmpGetNextName.c)
 *     CmpCopySyncTree @ 0x1406FD234 (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpPreserveSystemHiveData(__int64 a1, ULONG_PTR a2)
{
  int v4; // r14d
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned int v7; // r13d
  unsigned int v8; // r12d
  __int64 v9; // rbx
  __int64 v10; // rax
  const wchar_t **v11; // r15
  const WCHAR *v12; // rbx
  int v13; // r13d
  int v14; // eax
  unsigned int v15; // r12d
  unsigned int v16; // r14d
  __int64 v17; // rax
  int v18; // ebx
  WCHAR *v19; // r13
  __int64 v20; // rax
  __int64 *v21; // r14
  _DWORD *v22; // r15
  void *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rbx
  unsigned __int64 v26; // r15
  void (__fastcall *v27)(__int64, _DWORD *); // rax
  _WORD *v28; // r14
  unsigned int i; // ebx
  size_t v30; // rbx
  char v31; // r13
  __int64 *v32; // rbx
  unsigned int j; // r15d
  unsigned int v34; // eax
  unsigned __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned int v39; // r12d
  _DWORD *v40; // rcx
  unsigned int v41; // r15d
  unsigned int v42; // r13d
  __int64 v43; // rax
  const char *v44; // rcx
  int v45; // eax
  bool v46; // bl
  int *v47; // r14
  unsigned int v48; // eax
  __int64 v49; // rbx
  unsigned int v50; // ebx
  __int64 v51; // rax
  size_t Size; // [rsp+30h] [rbp-D8h]
  _DWORD v54[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD *v56; // [rsp+58h] [rbp-B0h]
  UNICODE_STRING v57; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v58[2]; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v59[2]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v60[2]; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v61[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v62; // [rsp+90h] [rbp-78h]
  const wchar_t *v63; // [rsp+98h] [rbp-70h]
  __int64 v64; // [rsp+A0h] [rbp-68h] BYREF
  int v65; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v66; // [rsp+B0h] [rbp-58h]
  _DWORD v67[4]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v68; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v69[2]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v70; // [rsp+D8h] [rbp-30h] BYREF
  int v71; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v72; // [rsp+E4h] [rbp-24h] BYREF
  _BYTE v73[4]; // [rsp+ECh] [rbp-1Ch] BYREF
  const wchar_t *v74; // [rsp+F0h] [rbp-18h]
  const wchar_t *v75; // [rsp+F8h] [rbp-10h]
  int v76; // [rsp+100h] [rbp-8h]
  __int64 v77; // [rsp+108h] [rbp+0h]
  int v78; // [rsp+110h] [rbp+8h]
  int v79; // [rsp+114h] [rbp+Ch]
  int v80; // [rsp+118h] [rbp+10h]
  __int64 v81; // [rsp+120h] [rbp+18h]
  int v82; // [rsp+128h] [rbp+20h]
  int v83; // [rsp+12Ch] [rbp+24h]
  __int64 v84; // [rsp+130h] [rbp+28h]
  int v85; // [rsp+138h] [rbp+30h]
  __int64 v86; // [rsp+13Ch] [rbp+34h]
  char v87; // [rsp+144h] [rbp+3Ch]
  unsigned __int16 v88[8]; // [rsp+148h] [rbp+40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+158h] [rbp+50h] BYREF
  unsigned int v90; // [rsp+1B8h] [rbp+B0h] BYREF
  const wchar_t *v91; // [rsp+1C0h] [rbp+B8h] BYREF
  WCHAR *PoolWithTag; // [rsp+1C8h] [rbp+C0h]
  int v93; // [rsp+1D0h] [rbp+C8h] BYREF
  int v94; // [rsp+1D4h] [rbp+CCh]

  v4 = 0;
  v94 = 0;
  v61[1] = 0;
  v59[1] = 0;
  v5 = 2LL;
  v58[1] = 0;
  v60[1] = 0;
  v54[1] = 0;
  v91 = L"WPA";
  v63 = L"Control\\FastCache";
  v67[1] = 0;
  v69[1] = 0;
  v72 = 0LL;
  v73[0] = 0;
  v74 = L"Control\\ProductOptions";
  v75 = L"ProductPolicy";
  v79 = 0;
  v83 = 0;
  v86 = 0LL;
  v87 = 0;
  v6 = *(_QWORD *)(a1 + 64);
  v93 = -1;
  v61[0] = -1;
  v59[0] = -1;
  v55 = 0xFFFFFFFFLL;
  v58[0] = -1;
  v60[0] = -1;
  v54[0] = -1;
  v64 = 0LL;
  v65 = -1;
  v66 = 0LL;
  v67[0] = -1;
  v67[2] = -1;
  v68 = 0LL;
  v69[0] = -1;
  v70 = 0LL;
  v71 = -1;
  v76 = -1;
  v77 = 0LL;
  v78 = -1;
  v80 = -1;
  v81 = 0LL;
  v82 = -1;
  v84 = 0LL;
  v85 = -1;
  v7 = *(_DWORD *)(v6 + 36);
  PoolWithTag = 0LL;
  v62 = 0LL;
  v56 = 0LL;
  v90 = v7;
  if ( v7 == -1 )
    goto LABEL_78;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 64) + 36LL);
  if ( v8 == -1 )
  {
    v5 = 2LL;
LABEL_78:
    v18 = -1073741492;
    v19 = 0LL;
    goto LABEL_21;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v7, v60);
  v62 = v9;
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a2 + 8))(a2, v8, v61);
  v56 = (_DWORD *)v10;
  if ( !v9 || !v10 )
  {
    v18 = -1073741670;
    v19 = 0LL;
    goto LABEL_20;
  }
  v11 = &v91;
  do
  {
    v12 = *v11;
    v13 = CmpWalkPath(a1, v7, *v11);
    v14 = CmpWalkPath(a2, v8, v12);
    if ( v13 == -1 || v14 == -1 || !CmpCopySyncTree(a1, v13, a2, v14, 2, 1) )
    {
LABEL_49:
      v18 = -1073741492;
      goto LABEL_19;
    }
    v7 = v90;
    ++v4;
    ++v11;
  }
  while ( !v4 );
  *(_DWORD *)&v57.Length = -1;
  *(_DWORD *)(&v57.MaximumLength + 1) = 0;
  v15 = v90;
  v16 = v90;
  RtlInitUnicodeString(&DestinationString, L"CurrentControlSet");
  while ( 1 )
  {
    CmpGetNextName((__int16 *)&DestinationString, (__int64)v88, (bool *)&v90);
    if ( !v88[0] )
      break;
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, UNICODE_STRING *))(a1 + 8))(a1, v16, &v57);
    if ( v17 )
    {
      CmpFindSubKeyByNameWithStatus(a1, v17, v88, &v91);
      v16 = (unsigned int)v91;
      (*(void (__fastcall **)(__int64, UNICODE_STRING *))(a1 + 16))(a1, &v57);
      if ( v16 != -1 )
        continue;
    }
    goto LABEL_16;
  }
  if ( v16 == -1 )
  {
LABEL_16:
    v18 = 0;
    v19 = 0LL;
    goto LABEL_20;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v16, v58);
  if ( !v20 )
  {
LABEL_18:
    v18 = -1073741670;
    goto LABEL_19;
  }
  v19 = 0LL;
  CmpFindNameInList(a1, v20 + 36, (int)&CmSymbolicLinkValueName, 0, 0LL, (__int64)&v90);
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v58);
  if ( v90 == -1 )
    goto LABEL_42;
  v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v90, v54);
  v25 = v24;
  if ( !v24 )
    goto LABEL_42;
  if ( *(_DWORD *)(v24 + 12) != 6 )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v54);
    goto LABEL_42;
  }
  v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(a1, *(unsigned int *)(v24 + 8), &v55);
  v27 = *(void (__fastcall **)(__int64, _DWORD *))(a1 + 16);
  if ( v26 )
  {
    v28 = (_WORD *)(v26 + *(unsigned int *)(v25 + 4) - 2LL);
    v27(a1, v54);
    for ( i = 0; *v28 != 92; ++i )
    {
      if ( (unsigned __int64)v28 < v26 )
        break;
      --v28;
    }
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 2LL * (i + 1), 0x68504D43u);
    v19 = PoolWithTag;
    if ( !PoolWithTag )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v55);
      v18 = -1073741801;
      goto LABEL_20;
    }
    v30 = i;
    memmove(PoolWithTag, v28 + 1, v30 * 2);
    v19[v30] = 0;
    v16 = CmpWalkPath(a1, v15, v19);
    (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v55);
    if ( v16 == -1 )
    {
      v18 = 0;
      goto LABEL_20;
    }
LABEL_42:
    v31 = 0;
    v32 = &v64;
    for ( j = 0; j < 2; ++j )
    {
      v34 = CmpWalkPath(a1, v16, (const WCHAR *)*(v32 - 1));
      *((_DWORD *)v32 + 2) = v34;
      if ( v34 != -1 )
      {
        if ( *v32 )
        {
          v35 = 88LL * j;
          v36 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v34, &v67[v35 / 4]);
          v32[2] = v36;
          if ( !v36 )
            goto LABEL_18;
          RtlInitUnicodeString(&v57, (PCWSTR)*v32);
          CmpFindNameInList(a1, v32[2] + 36, (int)&v57, 0, 0LL, (__int64)&v90);
          v37 = v90;
          *((_DWORD *)v32 + 8) = v90;
          if ( (_DWORD)v37 != -1 )
          {
            v31 = 1;
            v38 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, v37, &v69[v35 / 4]);
            v32[5] = v38;
            if ( !v38 )
              goto LABEL_18;
            if ( !CmpGetValueData(
                    a1,
                    *((unsigned int *)v32 + 8),
                    v38,
                    (unsigned int *)&v73[v35 - 4],
                    (__int64)&v70 + v35,
                    (__int64)&v73[v35],
                    (__int64)&v71 + v35) )
              goto LABEL_49;
          }
        }
        else
        {
          v31 = 1;
        }
      }
      v32 += 11;
    }
    v39 = 0;
    if ( v31 )
    {
      v40 = v56;
      v41 = 0;
      if ( v56[5] )
      {
        do
        {
          CmpFindSubKeyByNumber(a2, v40, v41, &v90);
          v42 = v90;
          v43 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v90, &v93);
          if ( !v43 )
            goto LABEL_18;
          if ( *(_WORD *)(v43 + 72) == 13 )
          {
            v44 = (const char *)(v43 + 76);
            if ( (*(_BYTE *)(v43 + 2) & 0x20) != 0 )
              v45 = strnicmp(v44, "ControlSet000", 0xAuLL);
            else
              v45 = wcsnicmp((const wchar_t *)v44, L"ControlSet000", 0xAuLL);
            v46 = v45 == 0;
            (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v93);
            if ( v46 )
            {
              v47 = &v65;
              do
              {
                if ( *v47 != -1 && (!*((_QWORD *)v47 - 1) || v47[6] != -1) )
                {
                  v48 = CmpWalkPath(a2, v42, *((const WCHAR **)v47 - 2));
                  if ( v48 != -1 )
                  {
                    if ( *((_QWORD *)v47 - 1) )
                    {
                      v49 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v48, &v93);
                      if ( !v49 )
                        goto LABEL_18;
                      RtlInitUnicodeString(&v57, *((PCWSTR *)v47 - 1));
                      CmpFindNameInList(a2, v49 + 36, (int)&v57, 0, 0LL, (__int64)&v91);
                      (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v93);
                      v50 = (unsigned int)v91;
                      if ( (_DWORD)v91 != -1 )
                      {
                        v51 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a2 + 8))(
                                a2,
                                (unsigned int)v91,
                                v59);
                        if ( !v51 )
                          goto LABEL_18;
                        LODWORD(Size) = v47[16];
                        v18 = CmpSetValueKeyExisting(
                                a2,
                                v50,
                                v51,
                                *(_DWORD *)(*((_QWORD *)v47 + 4) + 12LL),
                                *((void **)v47 + 6),
                                Size,
                                v50 >> 31);
                        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a2 + 16))(a2, v59);
                        if ( v18 < 0 )
                          goto LABEL_19;
                      }
                    }
                    else
                    {
                      CmpCopySyncTree(a1, *v47, a2, v48, 2, 1);
                    }
                  }
                }
                ++v39;
                v47 += 22;
              }
              while ( v39 < 2 );
              v39 = 0;
            }
          }
          else
          {
            (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v93);
          }
          v40 = v56;
        }
        while ( ++v41 < v56[5] );
      }
    }
    v18 = 0;
LABEL_19:
    v19 = PoolWithTag;
    goto LABEL_20;
  }
  v27(a1, v54);
  v18 = -1073741670;
LABEL_20:
  v5 = 2LL;
LABEL_21:
  v21 = &v68;
  v22 = v69;
  do
  {
    if ( *(v21 - 3) )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v22 - 6);
    if ( *v21 )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v22);
    v23 = (void *)v21[2];
    if ( v23 )
    {
      if ( *((_BYTE *)v21 + 36) )
        ExFreePoolWithTag(v23, 0);
      else
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v22 + 4);
    }
    v22 += 22;
    v21 += 11;
    --v5;
  }
  while ( v5 );
  if ( v62 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v60);
  if ( v56 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a2 + 16))(a2, v61);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  return (unsigned int)v18;
}
