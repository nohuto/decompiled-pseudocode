/*
 * XREFs of sub_18004E290 @ 0x18004E290
 * Callers:
 *     sub_18004DBBC @ 0x18004DBBC (sub_18004DBBC.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x18002E200 (RtlReleaseRelativeName.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18003FAA0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     sub_18004E6B0 @ 0x18004E6B0 (sub_18004E6B0.c)
 *     sub_18004E8B0 @ 0x18004E8B0 (sub_18004E8B0.c)
 *     sub_18004E9D0 @ 0x18004E9D0 (sub_18004E9D0.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     wcsrchr @ 0x180090EA0 (wcsrchr.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenFile @ 0x18009B120 (ZwOpenFile.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_18004E290(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  int v8; // ebx
  unsigned __int64 v9; // r13
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rax
  int v16; // ecx
  unsigned __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  const wchar_t *v23; // rsi
  wchar_t *v24; // rax
  unsigned __int16 v25; // bx
  void **v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 v31; // [rsp+20h] [rbp-E0h]
  __int64 v32; // [rsp+20h] [rbp-E0h]
  __int64 v33; // [rsp+28h] [rbp-D8h]
  char v34; // [rsp+40h] [rbp-C0h]
  int *v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  int v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+88h] [rbp-78h] BYREF
  _BYTE *v44; // [rsp+90h] [rbp-70h]
  char v45; // [rsp+98h] [rbp-68h]
  unsigned __int64 v46; // [rsp+A0h] [rbp-60h]
  char v47; // [rsp+A8h] [rbp-58h]
  _WORD v48[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-48h]
  __int128 v50; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v51; // [rsp+D0h] [rbp-30h]
  int v52; // [rsp+D8h] [rbp-28h] BYREF
  char *v53; // [rsp+E0h] [rbp-20h]
  __int128 v54; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v55; // [rsp+F8h] [rbp-8h]
  int v56; // [rsp+108h] [rbp+8h] BYREF
  __int64 v57; // [rsp+110h] [rbp+10h]
  __int128 *v58; // [rsp+118h] [rbp+18h]
  int v59; // [rsp+120h] [rbp+20h]
  __int128 v60; // [rsp+128h] [rbp+28h]
  _BYTE v61[24]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v62[544]; // [rsp+150h] [rbp+50h] BYREF
  char v63; // [rsp+370h] [rbp+270h] BYREF

  v5 = a3;
  v51 = a5;
  v34 = 0;
  v36 = 0LL;
  v8 = 0;
  v52 = 34078720;
  v9 = 0LL;
  v53 = &v63;
  v37 = 0;
  v38 = 0LL;
  LODWORD(v50) = 0;
  *((_QWORD *)&v50 + 1) = 0LL;
  v39 = 0LL;
  if ( !a1 )
  {
    v30 = 0;
    goto LABEL_65;
  }
  if ( !a2 || !(_DWORD)v5 || (unsigned int)v5 > *(_DWORD *)(a1 + 4) )
  {
    v30 = *(_DWORD *)(a1 + 4);
LABEL_65:
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() bad parameters\n"
           "SXS:   Map                : %p\n"
           "SXS:   Data               : %p\n"
           "SXS:   AssemblyRosterIndex: 0x%lx\n"
           "SXS:   Map->AssemblyCount : 0x%lx\n",
      "RtlpResolveAssemblyStorageMapEntry",
      a1,
      a2,
      v5,
      v30);
    v8 = -1073741811;
    goto LABEL_22;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5) )
    return (unsigned int)v8;
  _mm_lfence();
  v11 = *(unsigned int *)(a2 + 24);
  v12 = a2 + *(unsigned int *)(a2 + *(unsigned int *)(v11 + a2 + 12) + 24 * v5 + 16);
  v13 = a2 + *(unsigned int *)(v11 + a2 + 16);
  v14 = *(_DWORD *)(v12 + 80);
  if ( v14 > 0xFFFE )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: Assembly directory name stored in assembly information too long (%lu bytes) - ACTIVATION_CONTEXT_DATA at %p\n",
      v14,
      a2);
    v8 = -1073741562;
    goto LABEL_24;
  }
  if ( (*(_BYTE *)(v12 + 4) & 0x10) == 0 )
  {
    v35 = 0LL;
    v48[0] = *(_WORD *)(v12 + 80);
    v48[1] = v48[0];
    v15 = *(unsigned int *)(v12 + 84);
    v40 = a2;
    v49 = v13 + v15;
    LODWORD(v41) = v5;
    v44 = v62;
    v42 = 0LL;
    v43 = 34996224;
    v45 = 0;
    v47 = 0;
    v46 = 0LL;
    sub_18004E6B0(1LL, &v40, a5);
    if ( v47 )
    {
      v8 = -1073741536;
    }
    else
    {
      if ( !v45 )
      {
        v17 = v46;
        v18 = 0LL;
        v19 = v42;
        v39 = v42;
        v34 = 1;
        if ( v46 )
        {
          while ( 1 )
          {
            v40 = v19;
            v41 = v18;
            v44 = v62;
            v43 = 34996224;
            LOWORD(v42) = 0;
            sub_18004E6B0(2LL, &v40, v51);
            if ( (_BYTE)v42 )
              break;
            if ( BYTE1(v42) )
            {
              if ( !(_WORD)v43 )
                goto LABEL_59;
              v17 = v18 + 1;
            }
            if ( (_WORD)v43 )
            {
              v20 = v36;
              if ( v36 )
              {
                ZwClose(v36);
                v36 = 0LL;
              }
              v21 = sub_18004E9D0(
                      v20,
                      (unsigned int)&v43,
                      (unsigned int)v48,
                      (unsigned int)&v52,
                      (__int64)&v37,
                      (__int64)&v35,
                      (__int64)&v36);
              v8 = v21;
              if ( v21 >= 0 )
                goto LABEL_18;
              if ( v21 != -1072365564 )
              {
                LODWORD(v33) = v21;
                DbgPrintEx(
                  51,
                  0,
                  (int)"SXS: Attempt to probe assembly storage root %wZ for assembly directory %wZ failed with status = 0x%08lx\n",
                  &v43,
                  v48,
                  v33);
                goto LABEL_23;
              }
            }
            if ( ++v18 >= v17 )
              goto LABEL_18;
            v19 = v39;
          }
          v8 = -1073741536;
          goto LABEL_23;
        }
LABEL_18:
        if ( v18 == v17 )
        {
LABEL_59:
          DbgPrintEx(
            51,
            0,
            (int)"SXS: Unable to resolve storage root for assembly directory %wZ in %Iu tries\n",
            v48,
            v18);
          v8 = -1072365564;
LABEL_23:
          v40 = v39;
          sub_18004E6B0(4LL, &v40, v51);
          goto LABEL_24;
        }
        goto LABEL_19;
      }
      v28 = sub_18004E9D0(
              v16,
              (unsigned int)&v43,
              (unsigned int)v48,
              (unsigned int)&v52,
              (__int64)&v37,
              (__int64)&v35,
              (__int64)&v36);
      v8 = v28;
      if ( v28 >= 0 )
      {
        v29 = sub_18004E8B0(a1, (unsigned int)v5, &v43, &v36);
        v8 = v29;
        if ( v29 >= 0 )
        {
          v8 = 0;
        }
        else
        {
          LODWORD(v32) = v29;
          DbgPrintEx(
            51,
            0,
            (int)"SXS: Attempt to insert well known storage root into assembly storage map assembly roster index %lu fail"
                 "ed; Status = 0x%08lx\n",
            (unsigned int)v5,
            v32);
        }
      }
      else
      {
        LODWORD(v32) = v28;
        DbgPrintEx(
          51,
          0,
          (int)"SXS: Attempt to probe known root of assembly storage (\"%wZ\") failed; Status = 0x%08lx\n",
          &v43,
          v32);
      }
    }
LABEL_24:
    if ( v38 )
      RtlDeleteBoundaryDescriptor(v38);
    goto LABEL_26;
  }
  v35 = &v52;
  v23 = (const wchar_t *)(v13 + *(unsigned int *)(v12 + 24));
  if ( !v23 )
    return (unsigned int)-1073741595;
  v24 = wcsrchr(v23, 0x5Cu);
  if ( !v24 )
  {
    v8 = -1073741595;
    goto LABEL_24;
  }
  v25 = 2 * (v24 - v23 + 2);
  if ( v25 <= 0x208u )
  {
    v26 = (void **)v35;
LABEL_36:
    memmove(v26[1], v23, v25 - 2LL);
    *(_WORD *)(*((_QWORD *)v35 + 1) + 2 * ((unsigned __int64)v25 >> 1) - 2) = 0;
    *(_WORD *)v35 = v25 - 2;
LABEL_19:
    if ( !v36 )
    {
      if ( !RtlDosPathNameToRelativeNtPathName_U(*((_QWORD *)v35 + 1), (int)&v50, 0LL, (__int64)&v54) )
      {
        DbgPrintEx(
          51,
          0,
          (int)"SXS: Attempt to translate DOS path name \"%S\" to NT format failed\n",
          *((_QWORD *)v35 + 1));
        v8 = -1073741766;
        goto LABEL_22;
      }
      v9 = *((_QWORD *)&v50 + 1);
      if ( (_WORD)v54 )
      {
        v27 = v55;
        v50 = v54;
      }
      else
      {
        v27 = 0LL;
        v55 = 0LL;
      }
      v57 = v27;
      v58 = &v50;
      v56 = 48;
      v59 = 64;
      v60 = 0LL;
      v8 = ZwOpenFile(&v36, 1048608LL, &v56, v61, 3, 33);
      RtlReleaseRelativeName((__int64)&v54);
      if ( v8 < 0 )
      {
        LODWORD(v31) = v8;
        DbgPrintEx(
          51,
          0,
          (int)"SXS: Unable to open assembly directory under storage root \"%S\"; Status = 0x%08lx\n",
          *((_QWORD *)v35 + 1),
          v31);
        goto LABEL_22;
      }
    }
    v22 = sub_18004E8B0(a1, (unsigned int)v5, v35, &v36);
    v8 = v22;
    if ( v22 < 0 )
      DbgPrintEx(
        51,
        0,
        (int)"SXS: Storage resolution failed to insert entry to storage map; Status = 0x%08lx\n",
        (unsigned int)v22);
    else
      v8 = 0;
LABEL_22:
    if ( !v34 )
      goto LABEL_24;
    goto LABEL_23;
  }
  HIWORD(v37) = 2 * (v24 - v23 + 2);
  v38 = sub_18003B5E0(v25);
  if ( v38 )
  {
    v26 = (void **)&v37;
    v35 = &v37;
    goto LABEL_36;
  }
  v8 = -1073741801;
LABEL_26:
  if ( v36 )
    ZwClose(v36);
  if ( v9 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
  return (unsigned int)v8;
}
