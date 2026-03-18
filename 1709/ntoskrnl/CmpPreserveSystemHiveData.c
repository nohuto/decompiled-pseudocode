/*
 * XREFs of CmpPreserveSystemHiveData @ 0x140699C54
 * Callers:
 *     CmReplaceKey @ 0x14068D9FC (CmReplaceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     _strnicmp @ 0x14015E6A0 (_strnicmp.c)
 *     _wcsnicmp @ 0x14015EC50 (_wcsnicmp.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpSetValueKeyExisting @ 0x1404737F8 (CmpSetValueKeyExisting.c)
 *     CmpFindNameInList @ 0x140479444 (CmpFindNameInList.c)
 *     CmpGetValueData @ 0x14047E060 (CmpGetValueData.c)
 *     CmpFindSubKeyByNumber @ 0x1404825F0 (CmpFindSubKeyByNumber.c)
 *     CmpCopySyncTree @ 0x1405A4F80 (CmpCopySyncTree.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1405BC634 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpWalkPath @ 0x1405BCBD4 (CmpWalkPath.c)
 *     CmpGetNextName @ 0x1405BCC78 (CmpGetNextName.c)
 */

__int64 __fastcall CmpPreserveSystemHiveData(__int64 a1, ULONG_PTR a2)
{
  unsigned int v2; // esi
  WCHAR *v3; // r12
  __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned int v8; // r13d
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // r15d
  const WCHAR **v12; // r12
  const WCHAR *v13; // rbx
  int v14; // eax
  unsigned int v15; // r13d
  unsigned int v16; // r15d
  __int64 v17; // rax
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  unsigned __int64 v22; // r12
  void (__fastcall *v23)(__int64, _DWORD *); // rax
  _WORD *v24; // r15
  unsigned int i; // ebx
  size_t v26; // rbx
  char v27; // r13
  __int64 *v28; // rbx
  unsigned int j; // r12d
  unsigned int v30; // eax
  unsigned __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 (__fastcall *v34)(__int64, __int64, _DWORD *); // rax
  __int64 v35; // rax
  _DWORD *v36; // rdx
  unsigned int v37; // r12d
  __int64 v38; // rax
  __int64 *v39; // r15
  void *v40; // rcx
  const char *v41; // rcx
  int v42; // eax
  bool v43; // bl
  unsigned int v44; // r13d
  int *v45; // r15
  unsigned int v46; // eax
  __int64 v47; // rbx
  unsigned int v48; // ebx
  __int64 v49; // rax
  size_t Size; // [rsp+30h] [rbp-D8h]
  _DWORD v52[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v53; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD *v54; // [rsp+58h] [rbp-B0h]
  UNICODE_STRING v55; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v56[2]; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v57[2]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v58[2]; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v59[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v60; // [rsp+90h] [rbp-78h]
  const wchar_t *v61; // [rsp+98h] [rbp-70h]
  __int64 v62; // [rsp+A0h] [rbp-68h] BYREF
  int v63; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v64; // [rsp+B0h] [rbp-58h]
  _DWORD v65[4]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v66; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v67[2]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-30h] BYREF
  int v69; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v70; // [rsp+E4h] [rbp-24h] BYREF
  _BYTE v71[4]; // [rsp+ECh] [rbp-1Ch] BYREF
  const wchar_t *v72; // [rsp+F0h] [rbp-18h]
  const wchar_t *v73; // [rsp+F8h] [rbp-10h]
  int v74; // [rsp+100h] [rbp-8h]
  __int64 v75; // [rsp+108h] [rbp+0h]
  int v76; // [rsp+110h] [rbp+8h]
  int v77; // [rsp+114h] [rbp+Ch]
  int v78; // [rsp+118h] [rbp+10h]
  __int64 v79; // [rsp+120h] [rbp+18h]
  int v80; // [rsp+128h] [rbp+20h]
  int v81; // [rsp+12Ch] [rbp+24h]
  __int64 v82; // [rsp+130h] [rbp+28h]
  int v83; // [rsp+138h] [rbp+30h]
  __int64 v84; // [rsp+13Ch] [rbp+34h]
  char v85; // [rsp+144h] [rbp+3Ch]
  unsigned __int16 v86[8]; // [rsp+148h] [rbp+40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+158h] [rbp+50h] BYREF
  unsigned int v88; // [rsp+1B8h] [rbp+B0h] BYREF
  int v89; // [rsp+1C0h] [rbp+B8h] BYREF
  WCHAR *PoolWithTag; // [rsp+1C8h] [rbp+C0h]
  int v91; // [rsp+1D0h] [rbp+C8h] BYREF
  int v92; // [rsp+1D4h] [rbp+CCh]

  v2 = 0;
  v3 = 0LL;
  v92 = 0;
  v59[1] = 0;
  v57[1] = 0;
  v56[1] = 0;
  v58[1] = 0;
  v52[1] = 0;
  *(_QWORD *)&v55.Length = L"WPA";
  v61 = L"Control\\FastCache";
  v65[1] = 0;
  v67[1] = 0;
  v70 = 0LL;
  v71[0] = 0;
  v72 = L"Control\\ProductOptions";
  v73 = L"ProductPolicy";
  v77 = 0;
  v81 = 0;
  v84 = 0LL;
  v85 = 0;
  v6 = *(_QWORD *)(a1 + 64);
  v91 = -1;
  v59[0] = -1;
  v57[0] = -1;
  v53 = 0xFFFFFFFFLL;
  v56[0] = -1;
  v58[0] = -1;
  v52[0] = -1;
  v62 = 0LL;
  v63 = -1;
  v64 = 0LL;
  v65[0] = -1;
  v65[2] = -1;
  v66 = 0LL;
  v67[0] = -1;
  v68 = 0LL;
  v69 = -1;
  v74 = -1;
  v75 = 0LL;
  v76 = -1;
  v78 = -1;
  v79 = 0LL;
  v80 = -1;
  v82 = 0LL;
  v83 = -1;
  v7 = *(_DWORD *)(v6 + 36);
  PoolWithTag = 0LL;
  v60 = 0LL;
  v54 = 0LL;
  v88 = v7;
  if ( v7 == -1 || (v8 = *(_DWORD *)(*(_QWORD *)(a2 + 64) + 36LL), v8 == -1) )
  {
    v18 = -1073741492;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v7, v58);
    v60 = v9;
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a2 + 8))(a2, v8, v59);
    v54 = (_DWORD *)v10;
    if ( v9 && v10 )
    {
      v11 = 0;
      v12 = (const WCHAR **)&v55;
      do
      {
        v13 = *v12;
        v89 = CmpWalkPath(a1, v88, *v12);
        v14 = CmpWalkPath(a2, v8, v13);
        if ( v89 == -1 || v14 == -1 || !CmpCopySyncTree(a1, v89, a2, v14, 2, 1) )
        {
          v18 = -1073741492;
          v3 = 0LL;
          goto LABEL_49;
        }
        ++v11;
        ++v12;
      }
      while ( !v11 );
      v15 = v88;
      *(_DWORD *)&v55.Length = -1;
      *(_DWORD *)(&v55.MaximumLength + 1) = 0;
      v16 = v88;
      RtlInitUnicodeString(&DestinationString, L"CurrentControlSet");
      while ( 1 )
      {
        CmpGetNextName((__int16 *)&DestinationString, (__int64)v86, (bool *)&v88);
        if ( !v86[0] )
          break;
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, UNICODE_STRING *))(a1 + 8))(a1, v16, &v55);
        if ( v17 )
        {
          CmpFindSubKeyByNameWithStatus(a1, v17, v86, &v89);
          v16 = v89;
          (*(void (__fastcall **)(__int64, UNICODE_STRING *))(a1 + 16))(a1, &v55);
          if ( v16 != -1 )
            continue;
        }
        goto LABEL_16;
      }
      if ( v16 == -1 )
      {
LABEL_16:
        v18 = 0;
        v3 = 0LL;
        goto LABEL_49;
      }
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v16, v56);
      if ( !v19 )
      {
        v18 = -1073741670;
        v3 = 0LL;
        goto LABEL_49;
      }
      CmpFindNameInList(a1, v19 + 36, (int)&CmSymbolicLinkValueName, 0, 0LL, (__int64)&v88);
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v56);
      if ( v88 != -1 )
      {
        v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v88, v52);
        v21 = v20;
        if ( v20 )
        {
          if ( *(_DWORD *)(v20 + 12) == 6 )
          {
            v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(a1, *(unsigned int *)(v20 + 8), &v53);
            v23 = *(void (__fastcall **)(__int64, _DWORD *))(a1 + 16);
            if ( !v22 )
            {
              v23(a1, v52);
              v18 = -1073741670;
              v3 = 0LL;
              goto LABEL_49;
            }
            v24 = (_WORD *)(v22 + *(unsigned int *)(v21 + 4) - 2LL);
            v23(a1, v52);
            for ( i = 0; *v24 != 92; ++i )
            {
              if ( (unsigned __int64)v24 < v22 )
                break;
              --v24;
            }
            PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 2LL * (i + 1), 0x68504D43u);
            v3 = PoolWithTag;
            if ( !PoolWithTag )
            {
              (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v53);
              v18 = -1073741801;
              goto LABEL_49;
            }
            v26 = i;
            memmove(PoolWithTag, v24 + 1, v26 * 2);
            v3[v26] = 0;
            v16 = CmpWalkPath(a1, v15, v3);
            (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v53);
            if ( v16 == -1 )
            {
              v18 = 0;
              goto LABEL_49;
            }
          }
          else
          {
            (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v52);
          }
        }
      }
      v27 = 0;
      v28 = &v62;
      LOBYTE(v88) = 0;
      for ( j = 0; j < 2; ++j )
      {
        v30 = CmpWalkPath(a1, v16, (const WCHAR *)*(v28 - 1));
        *((_DWORD *)v28 + 2) = v30;
        if ( v30 != -1 )
        {
          if ( *v28 )
          {
            v31 = 88LL * j;
            v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v30, &v65[v31 / 4]);
            v28[2] = v32;
            if ( !v32 )
              goto LABEL_57;
            RtlInitUnicodeString(&v55, (PCWSTR)*v28);
            CmpFindNameInList(a1, v28[2] + 36, (int)&v55, 0, 0LL, (__int64)&v89);
            v33 = (unsigned int)v89;
            *((_DWORD *)v28 + 8) = v89;
            if ( (_DWORD)v33 != -1 )
            {
              v34 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8);
              LOBYTE(v88) = 1;
              v35 = v34(a1, v33, &v67[v31 / 4]);
              v28[5] = v35;
              if ( !v35 )
                goto LABEL_57;
              if ( !CmpGetValueData(
                      a1,
                      *((unsigned int *)v28 + 8),
                      v35,
                      (unsigned int *)&v71[v31 - 4],
                      (__int64)&v68 + v31,
                      (__int64)&v71[v31],
                      (__int64)&v69 + v31) )
              {
                v18 = -1073741492;
                goto LABEL_48;
              }
            }
            v27 = v88;
          }
          else
          {
            v27 = 1;
            LOBYTE(v88) = 1;
          }
        }
        v28 += 11;
      }
      if ( v27 )
      {
        v36 = v54;
        v37 = 0;
        if ( v54[5] )
        {
          while ( 1 )
          {
            CmpFindSubKeyByNumber(a2, v36, v37, &v88);
            v38 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v88, &v91);
            if ( !v38 )
              break;
            if ( *(_WORD *)(v38 + 72) == 13 )
            {
              v41 = (const char *)(v38 + 76);
              if ( (*(_BYTE *)(v38 + 2) & 0x20) != 0 )
                v42 = strnicmp(v41, "ControlSet000", 0xAuLL);
              else
                v42 = wcsnicmp((const wchar_t *)v41, L"ControlSet000", 0xAuLL);
              v43 = v42 == 0;
              (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v91);
              if ( v43 )
              {
                v44 = 0;
                v45 = &v63;
                do
                {
                  if ( *v45 != -1 && (!*((_QWORD *)v45 - 1) || v45[6] != -1) )
                  {
                    v46 = CmpWalkPath(a2, v88, *((const WCHAR **)v45 - 2));
                    if ( v46 != -1 )
                    {
                      if ( *((_QWORD *)v45 - 1) )
                      {
                        v47 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v46, &v91);
                        if ( !v47 )
                          goto LABEL_57;
                        RtlInitUnicodeString(&v55, *((PCWSTR *)v45 - 1));
                        CmpFindNameInList(a2, v47 + 36, (int)&v55, 0, 0LL, (__int64)&v89);
                        (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v91);
                        v48 = v89;
                        if ( v89 != -1 )
                        {
                          v49 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a2 + 8))(
                                  a2,
                                  (unsigned int)v89,
                                  v57);
                          if ( !v49 )
                            goto LABEL_57;
                          LODWORD(Size) = v45[16];
                          v18 = CmpSetValueKeyExisting(
                                  a2,
                                  v48,
                                  v49,
                                  *(_DWORD *)(*((_QWORD *)v45 + 4) + 12LL),
                                  *((void **)v45 + 6),
                                  Size,
                                  v48 >> 31);
                          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a2 + 16))(a2, v57);
                          if ( v18 < 0 )
                            goto LABEL_48;
                        }
                      }
                      else
                      {
                        CmpCopySyncTree(a1, *v45, a2, v46, 2, 1);
                      }
                    }
                  }
                  ++v44;
                  v45 += 22;
                }
                while ( v44 < 2 );
              }
            }
            else
            {
              (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v91);
            }
            v36 = v54;
            if ( ++v37 >= v54[5] )
              goto LABEL_75;
          }
LABEL_57:
          v18 = -1073741670;
          goto LABEL_48;
        }
      }
LABEL_75:
      v18 = 0;
LABEL_48:
      v3 = PoolWithTag;
    }
    else
    {
      v18 = -1073741670;
    }
  }
LABEL_49:
  v39 = &v66;
  do
  {
    if ( *(v39 - 3) )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, &v65[22 * v2]);
    if ( *v39 )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, &v67[22 * v2]);
    v40 = (void *)v39[2];
    if ( v40 )
    {
      if ( *((_BYTE *)v39 + 36) )
        ExFreePoolWithTag(v40, 0);
      else
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v69 + 22 * v2);
    }
    ++v2;
    v39 += 11;
  }
  while ( v2 < 2 );
  if ( v60 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v58);
  if ( v54 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a2 + 16))(a2, v59);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v18;
}
