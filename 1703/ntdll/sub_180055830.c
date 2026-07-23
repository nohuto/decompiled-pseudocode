/*
 * XREFs of sub_180055830 @ 0x180055830
 * Callers:
 *     sub_180055158 @ 0x180055158 (sub_180055158.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18003BA40 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     sub_180054E40 @ 0x180054E40 (sub_180054E40.c)
 *     RtlReleaseRelativeName @ 0x180055120 (RtlReleaseRelativeName.c)
 *     sub_180055C50 @ 0x180055C50 (sub_180055C50.c)
 *     sub_180055E4C @ 0x180055E4C (sub_180055E4C.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     wcsrchr @ 0x18009BC50 (wcsrchr.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenFile @ 0x1800A5960 (ZwOpenFile.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_180055830(__int64 a1, unsigned int *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  NTSTATUS v8; // ebx
  PWCH Buffer; // r13
  __int64 v11; // rdx
  char *v12; // r9
  char *v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned int *v19; // rax
  HANDLE v20; // rcx
  int v21; // eax
  int v22; // eax
  const wchar_t *v23; // rsi
  wchar_t *v24; // rax
  unsigned __int16 v25; // di
  void **v26; // rcx
  HANDLE ContainingDirectory; // rax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  ULONG ShareAccess[2]; // [rsp+20h] [rbp-E0h]
  ULONG OpenOptions[2]; // [rsp+28h] [rbp-D8h]
  char v33; // [rsp+40h] [rbp-C0h]
  int *v34; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+58h] [rbp-A8h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [rsp+60h] [rbp-A0h]
  unsigned int *v38; // [rsp+68h] [rbp-98h]
  unsigned int *v39; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h]
  unsigned int *v41; // [rsp+80h] [rbp-80h]
  int v42; // [rsp+88h] [rbp-78h] BYREF
  _BYTE *v43; // [rsp+90h] [rbp-70h]
  char v44; // [rsp+98h] [rbp-68h]
  unsigned __int64 v45; // [rsp+A0h] [rbp-60h]
  char v46; // [rsp+A8h] [rbp-58h]
  unsigned __int16 v47[4]; // [rsp+B0h] [rbp-50h] BYREF
  char *v48; // [rsp+B8h] [rbp-48h]
  _UNICODE_STRING NtFileName; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v50; // [rsp+D0h] [rbp-30h]
  int v51; // [rsp+D8h] [rbp-28h] BYREF
  char *v52; // [rsp+E0h] [rbp-20h]
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+E8h] [rbp-18h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+108h] [rbp+8h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v56[544]; // [rsp+150h] [rbp+50h] BYREF
  char v57; // [rsp+370h] [rbp+270h] BYREF

  v5 = a3;
  v50 = a5;
  v33 = 0;
  FileHandle = 0LL;
  v8 = 0;
  v51 = 34078720;
  Buffer = 0LL;
  v52 = &v57;
  v36 = 0;
  BoundaryDescriptor = 0LL;
  *(_DWORD *)&NtFileName.Length = 0;
  NtFileName.Buffer = 0LL;
  v38 = 0LL;
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
      0x33u,
      0,
      "SXS: %s() bad parameters\n"
      "SXS:   Map                : %p\n"
      "SXS:   Data               : %p\n"
      "SXS:   AssemblyRosterIndex: 0x%lx\n"
      "SXS:   Map->AssemblyCount : 0x%lx\n",
      "RtlpResolveAssemblyStorageMapEntry",
      (const void *)a1,
      a2,
      v5,
      v30);
    v8 = -1073741811;
    goto LABEL_22;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5) )
    return (unsigned int)v8;
  _mm_lfence();
  v11 = a2[6];
  v12 = (char *)a2 + *(unsigned int *)((char *)&a2[6 * v5 + 4] + *(unsigned int *)((char *)a2 + v11 + 12));
  v13 = (char *)a2 + *(unsigned int *)((char *)a2 + v11 + 16);
  v14 = *((_DWORD *)v12 + 20);
  if ( v14 > 0xFFFE )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: Assembly directory name stored in assembly information too long (%lu bytes) - ACTIVATION_CONTEXT_DATA at %p\n",
      v14,
      a2);
    v8 = -1073741562;
    goto LABEL_24;
  }
  if ( (v12[4] & 0x10) == 0 )
  {
    v34 = 0LL;
    v47[0] = *((_WORD *)v12 + 40);
    v47[1] = v47[0];
    v15 = *((unsigned int *)v12 + 21);
    v39 = a2;
    v48 = &v13[v15];
    LODWORD(v40) = v5;
    v43 = v56;
    v41 = 0LL;
    v42 = 34996224;
    v44 = 0;
    v46 = 0;
    v45 = 0LL;
    sub_180055C50(1LL, &v39, a5);
    if ( v46 )
    {
      v8 = -1073741536;
    }
    else
    {
      if ( !v44 )
      {
        v17 = v45;
        v18 = 0LL;
        v19 = v41;
        v38 = v41;
        v33 = 1;
        if ( v45 )
        {
          while ( 1 )
          {
            v39 = v19;
            v40 = v18;
            v43 = v56;
            v42 = 34996224;
            LOWORD(v41) = 0;
            sub_180055C50(2LL, &v39, v50);
            if ( (_BYTE)v41 )
              break;
            if ( BYTE1(v41) )
            {
              if ( !(_WORD)v42 )
                goto LABEL_59;
              v17 = v18 + 1;
            }
            if ( (_WORD)v42 )
            {
              v20 = FileHandle;
              if ( FileHandle )
              {
                ZwClose(FileHandle);
                FileHandle = 0LL;
              }
              v21 = sub_180054E40(
                      (__int64)v20,
                      (unsigned __int16 *)&v42,
                      v47,
                      (__int64)&v51,
                      (__int64)&v36,
                      &v34,
                      &FileHandle);
              v8 = v21;
              if ( v21 >= 0 )
                goto LABEL_18;
              if ( v21 != -1072365564 )
              {
                OpenOptions[0] = v21;
                DbgPrintEx(
                  0x33u,
                  0,
                  "SXS: Attempt to probe assembly storage root %wZ for assembly directory %wZ failed with status = 0x%08lx\n",
                  &v42,
                  v47,
                  *(_QWORD *)OpenOptions);
                goto LABEL_23;
              }
            }
            if ( ++v18 >= v17 )
              goto LABEL_18;
            v19 = v38;
          }
          v8 = -1073741536;
          goto LABEL_23;
        }
LABEL_18:
        if ( v18 == v17 )
        {
LABEL_59:
          DbgPrintEx(
            0x33u,
            0,
            "SXS: Unable to resolve storage root for assembly directory %wZ in %Iu tries\n",
            v47,
            v18);
          v8 = -1072365564;
LABEL_23:
          v39 = v38;
          sub_180055C50(4LL, &v39, v50);
          goto LABEL_24;
        }
        goto LABEL_19;
      }
      v28 = sub_180054E40(v16, (unsigned __int16 *)&v42, v47, (__int64)&v51, (__int64)&v36, &v34, &FileHandle);
      v8 = v28;
      if ( v28 >= 0 )
      {
        v29 = sub_180055E4C(a1, (unsigned int)v5, &v42, &FileHandle);
        v8 = v29;
        if ( v29 >= 0 )
          v8 = 0;
        else
          DbgPrintEx(
            0x33u,
            0,
            "SXS: Attempt to insert well known storage root into assembly storage map assembly roster index %lu failed; S"
            "tatus = 0x%08lx\n",
            v5,
            v29);
      }
      else
      {
        ShareAccess[0] = v28;
        DbgPrintEx(
          0x33u,
          0,
          "SXS: Attempt to probe known root of assembly storage (\"%wZ\") failed; Status = 0x%08lx\n",
          &v42,
          *(_QWORD *)ShareAccess);
      }
    }
LABEL_24:
    if ( BoundaryDescriptor )
      RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
    goto LABEL_26;
  }
  v34 = &v51;
  v23 = (const wchar_t *)&v13[*((unsigned int *)v12 + 6)];
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
    v26 = (void **)v34;
LABEL_36:
    memmove(v26[1], v23, v25 - 2LL);
    *(_WORD *)(*((_QWORD *)v34 + 1) + 2 * ((unsigned __int64)v25 >> 1) - 2) = 0;
    *(_WORD *)v34 = v25 - 2;
LABEL_19:
    if ( !FileHandle )
    {
      if ( !RtlDosPathNameToRelativeNtPathName_U(*((PCWSTR *)v34 + 1), &NtFileName, 0LL, &RelativeName) )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: Attempt to translate DOS path name \"%S\" to NT format failed\n",
          *((const wchar_t **)v34 + 1));
        v8 = -1073741766;
        goto LABEL_22;
      }
      Buffer = NtFileName.Buffer;
      if ( RelativeName.RelativeName.Length )
      {
        ContainingDirectory = RelativeName.ContainingDirectory;
        NtFileName = RelativeName.RelativeName;
      }
      else
      {
        ContainingDirectory = 0LL;
        RelativeName.ContainingDirectory = 0LL;
      }
      ObjectAttributes.RootDirectory = ContainingDirectory;
      ObjectAttributes.ObjectName = &NtFileName;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v8 = ZwOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
      RtlReleaseRelativeName(&RelativeName);
      if ( v8 < 0 )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: Unable to open assembly directory under storage root \"%S\"; Status = 0x%08lx\n",
          *((const wchar_t **)v34 + 1),
          v8);
        goto LABEL_22;
      }
    }
    v22 = sub_180055E4C(a1, (unsigned int)v5, v34, &FileHandle);
    v8 = v22;
    if ( v22 < 0 )
      DbgPrintEx(0x33u, 0, "SXS: Storage resolution failed to insert entry to storage map; Status = 0x%08lx\n", v22);
    else
      v8 = 0;
LABEL_22:
    if ( !v33 )
      goto LABEL_24;
    goto LABEL_23;
  }
  HIWORD(v36) = 2 * (v24 - v23 + 2);
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)sub_180043FE0(v25);
  if ( BoundaryDescriptor )
  {
    v26 = (void **)&v36;
    v34 = &v36;
    goto LABEL_36;
  }
  v8 = -1073741801;
LABEL_26:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( Buffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
  return (unsigned int)v8;
}
