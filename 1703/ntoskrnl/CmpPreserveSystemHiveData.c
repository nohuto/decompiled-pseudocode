/*
 * XREFs of CmpPreserveSystemHiveData @ 0x14066F58C
 * Callers:
 *     CmReplaceKey @ 0x14066430C (CmReplaceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     _strnicmp @ 0x140169D30 (_strnicmp.c)
 *     _wcsnicmp @ 0x14016A210 (_wcsnicmp.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpFindSubKeyByNumber @ 0x14043B918 (CmpFindSubKeyByNumber.c)
 *     CmpFindNameInList @ 0x140490580 (CmpFindNameInList.c)
 *     CmpSetValueKeyExisting @ 0x1404D19D0 (CmpSetValueKeyExisting.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404D2CDC (CmpFindSubKeyByNameWithStatus.c)
 *     CmpGetValueData @ 0x1405031D0 (CmpGetValueData.c)
 *     CmpCopySyncTree @ 0x14058D7BC (CmpCopySyncTree.c)
 *     CmpWalkPath @ 0x1405B6CBC (CmpWalkPath.c)
 *     CmpGetNextName @ 0x1405B6D60 (CmpGetNextName.c)
 */

__int64 __fastcall CmpPreserveSystemHiveData(__int64 a1, ULONG_PTR a2)
{
  unsigned int v2; // esi
  WCHAR *v3; // r12
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rax
  unsigned int v9; // r13d
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // r14d
  const WCHAR **v13; // r12
  int v14; // eax
  const WCHAR *v15; // r8
  int v16; // eax
  unsigned int v17; // r13d
  unsigned int v18; // r14d
  __int64 v19; // rax
  int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  unsigned __int64 v24; // r12
  void (__fastcall *v25)(__int64, _DWORD *); // rax
  _WORD *v26; // r14
  unsigned int i; // ebx
  size_t v28; // rbx
  char v29; // r13
  __int64 *v30; // rbx
  unsigned int j; // r12d
  unsigned int v32; // eax
  unsigned __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 (__fastcall *v36)(__int64, __int64, _DWORD *); // rax
  __int64 v37; // rax
  _DWORD *v38; // rdx
  unsigned int v39; // r12d
  __int64 v40; // rax
  __int64 *v41; // r14
  void *v42; // rcx
  const char *v43; // rcx
  int v44; // eax
  bool v45; // bl
  unsigned int v46; // r13d
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
  _WORD v88[8]; // [rsp+148h] [rbp+40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+158h] [rbp+50h] BYREF
  unsigned int v90; // [rsp+1B8h] [rbp+B0h] BYREF
  int v91; // [rsp+1C0h] [rbp+B8h] BYREF
  WCHAR *PoolWithTag; // [rsp+1C8h] [rbp+C0h]
  int v93; // [rsp+1D0h] [rbp+C8h] BYREF
  int v94; // [rsp+1D4h] [rbp+CCh]

  v2 = 0;
  v3 = 0LL;
  v93 = -1;
  v94 = 0;
  v61[1] = 0;
  v59[1] = 0;
  v58[1] = 0;
  v60[1] = 0;
  v54[1] = 0;
  *(_QWORD *)&v57.Length = L"WPA";
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
  v8 = *(_QWORD *)(a2 + 64);
  PoolWithTag = 0LL;
  v62 = 0LL;
  v56 = 0LL;
  v9 = *(_DWORD *)(v8 + 36);
  v90 = v7;
  if ( v7 == -1 || v9 == -1 )
  {
    v20 = -1073741492;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v7, v60);
    v62 = v10;
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a2 + 8))(a2, v9, v61);
    v56 = (_DWORD *)v11;
    if ( v10 && v11 )
    {
      v12 = 0;
      v13 = (const WCHAR **)&v57;
      do
      {
        v14 = CmpWalkPath(a1, v90, *v13);
        v15 = *v13;
        v91 = v14;
        v16 = CmpWalkPath(a2, v9, v15);
        if ( v91 == -1 || v16 == -1 || !CmpCopySyncTree(a1, v91, a2, v16, 2, 1) )
        {
          v20 = -1073741492;
          v3 = 0LL;
          goto LABEL_49;
        }
        ++v12;
        ++v13;
      }
      while ( !v12 );
      v17 = v90;
      *(_DWORD *)&v57.Length = -1;
      *(_DWORD *)(&v57.MaximumLength + 1) = 0;
      v18 = v90;
      RtlInitUnicodeString(&DestinationString, L"CurrentControlSet");
      while ( 1 )
      {
        CmpGetNextName((__int16 *)&DestinationString, (__int64)v88, (bool *)&v90);
        if ( !v88[0] )
          break;
        v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, UNICODE_STRING *))(a1 + 8))(a1, v18, &v57);
        if ( v19 )
        {
          CmpFindSubKeyByNameWithStatus(a1, v19, (__int64)v88, (unsigned int *)&v91);
          v18 = v91;
          (*(void (__fastcall **)(__int64, UNICODE_STRING *))(a1 + 16))(a1, &v57);
          if ( v18 != -1 )
            continue;
        }
        goto LABEL_16;
      }
      if ( v18 == -1 )
      {
LABEL_16:
        v20 = 0;
        v3 = 0LL;
        goto LABEL_49;
      }
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v18, v58);
      if ( !v21 )
      {
        v20 = -1073741670;
        v3 = 0LL;
        goto LABEL_49;
      }
      CmpFindNameInList(a1, v21 + 36, (int)&CmSymbolicLinkValueName, 0, 0LL, (__int64)&v90);
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v58);
      if ( v90 != -1 )
      {
        v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v90, v54);
        v23 = v22;
        if ( v22 )
        {
          if ( *(_DWORD *)(v22 + 12) == 6 )
          {
            v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(a1, *(unsigned int *)(v22 + 8), &v55);
            v25 = *(void (__fastcall **)(__int64, _DWORD *))(a1 + 16);
            if ( !v24 )
            {
              v25(a1, v54);
              v20 = -1073741670;
              v3 = 0LL;
              goto LABEL_49;
            }
            v26 = (_WORD *)(v24 + *(unsigned int *)(v23 + 4) - 2LL);
            v25(a1, v54);
            for ( i = 0; *v26 != 92; ++i )
            {
              if ( (unsigned __int64)v26 < v24 )
                break;
              --v26;
            }
            PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 2LL * (i + 1), 0x68504D43u);
            v3 = PoolWithTag;
            if ( !PoolWithTag )
            {
              (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v55);
              v20 = -1073741801;
              goto LABEL_49;
            }
            v28 = i;
            memmove(PoolWithTag, v26 + 1, v28 * 2);
            v3[v28] = 0;
            v18 = CmpWalkPath(a1, v17, v3);
            (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v55);
            if ( v18 == -1 )
            {
              v20 = 0;
              goto LABEL_49;
            }
          }
          else
          {
            (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v54);
          }
        }
      }
      v29 = 0;
      v30 = &v64;
      LOBYTE(v90) = 0;
      for ( j = 0; j < 2; ++j )
      {
        v32 = CmpWalkPath(a1, v18, (const WCHAR *)*(v30 - 1));
        *((_DWORD *)v30 + 2) = v32;
        if ( v32 != -1 )
        {
          if ( *v30 )
          {
            v33 = 88LL * j;
            v34 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v32, &v67[v33 / 4]);
            v30[2] = v34;
            if ( !v34 )
              goto LABEL_57;
            RtlInitUnicodeString(&v57, (PCWSTR)*v30);
            CmpFindNameInList(a1, v30[2] + 36, (int)&v57, 0, 0LL, (__int64)&v91);
            v35 = (unsigned int)v91;
            *((_DWORD *)v30 + 8) = v91;
            if ( (_DWORD)v35 != -1 )
            {
              v36 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8);
              LOBYTE(v90) = 1;
              v37 = v36(a1, v35, &v69[v33 / 4]);
              v30[5] = v37;
              if ( !v37 )
                goto LABEL_57;
              if ( !CmpGetValueData(
                      a1,
                      *((unsigned int *)v30 + 8),
                      v37,
                      (unsigned int *)&v73[v33 - 4],
                      (__int64)&v70 + v33,
                      (__int64)&v73[v33],
                      (__int64)&v71 + v33) )
              {
                v20 = -1073741492;
                goto LABEL_48;
              }
            }
            v29 = v90;
          }
          else
          {
            v29 = 1;
            LOBYTE(v90) = 1;
          }
        }
        v30 += 11;
      }
      if ( v29 )
      {
        v38 = v56;
        v39 = 0;
        if ( v56[5] )
        {
          while ( 1 )
          {
            CmpFindSubKeyByNumber(a2, v38, v39, &v90);
            v40 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v90, &v93);
            if ( !v40 )
              break;
            if ( *(_WORD *)(v40 + 72) == 13 )
            {
              v43 = (const char *)(v40 + 76);
              if ( (*(_BYTE *)(v40 + 2) & 0x20) != 0 )
                v44 = strnicmp(v43, "ControlSet000", 0xAuLL);
              else
                v44 = wcsnicmp((const wchar_t *)v43, L"ControlSet000", 0xAuLL);
              v45 = v44 == 0;
              (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v93);
              if ( v45 )
              {
                v46 = 0;
                v47 = &v65;
                do
                {
                  if ( *v47 != -1 && (!*((_QWORD *)v47 - 1) || v47[6] != -1) )
                  {
                    v48 = CmpWalkPath(a2, v90, *((const WCHAR **)v47 - 2));
                    if ( v48 != -1 )
                    {
                      if ( *((_QWORD *)v47 - 1) )
                      {
                        v49 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v48, &v93);
                        if ( !v49 )
                          goto LABEL_57;
                        RtlInitUnicodeString(&v57, *((PCWSTR *)v47 - 1));
                        CmpFindNameInList(a2, v49 + 36, (int)&v57, 0, 0LL, (__int64)&v91);
                        (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v93);
                        v50 = v91;
                        if ( v91 != -1 )
                        {
                          v51 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a2 + 8))(
                                  a2,
                                  (unsigned int)v91,
                                  v59);
                          if ( !v51 )
                            goto LABEL_57;
                          LODWORD(Size) = v47[16];
                          v20 = CmpSetValueKeyExisting(
                                  a2,
                                  v50,
                                  v51,
                                  *(_DWORD *)(*((_QWORD *)v47 + 4) + 12LL),
                                  *((void **)v47 + 6),
                                  Size,
                                  v50 >> 31);
                          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a2 + 16))(a2, v59);
                          if ( v20 < 0 )
                            goto LABEL_48;
                        }
                      }
                      else
                      {
                        CmpCopySyncTree(a1, *v47, a2, v48, 2, 1);
                      }
                    }
                  }
                  ++v46;
                  v47 += 22;
                }
                while ( v46 < 2 );
              }
            }
            else
            {
              (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v93);
            }
            v38 = v56;
            if ( ++v39 >= v56[5] )
              goto LABEL_75;
          }
LABEL_57:
          v20 = -1073741670;
          goto LABEL_48;
        }
      }
LABEL_75:
      v20 = 0;
LABEL_48:
      v3 = PoolWithTag;
    }
    else
    {
      v20 = -1073741670;
    }
  }
LABEL_49:
  v41 = &v68;
  do
  {
    if ( *(v41 - 3) )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, &v67[22 * v2]);
    if ( *v41 )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, &v69[22 * v2]);
    v42 = (void *)v41[2];
    if ( v42 )
    {
      if ( *((_BYTE *)v41 + 36) )
        ExFreePoolWithTag(v42, 0);
      else
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v71 + 22 * v2);
    }
    ++v2;
    v41 += 11;
  }
  while ( v2 < 2 );
  if ( v62 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v60);
  if ( v56 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a2 + 16))(a2, v61);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v20;
}
