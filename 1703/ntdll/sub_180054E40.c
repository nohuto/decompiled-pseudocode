/*
 * XREFs of sub_180054E40 @ 0x180054E40
 * Callers:
 *     sub_180055830 @ 0x180055830 (sub_180055830.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18003BA40 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     RtlReleaseRelativeName @ 0x180055120 (RtlReleaseRelativeName.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenFile @ 0x1800A5960 (ZwOpenFile.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_180054E40(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        _QWORD *a7)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  _BYTE *v13; // rbx
  _WORD *v14; // r15
  const void **v15; // rcx
  unsigned __int16 v16; // r15
  __int64 v17; // rax
  int v18; // edi
  _QWORD *v19; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  void *v23; // rax
  char v24; // [rsp+60h] [rbp-A0h]
  _QWORD v25[3]; // [rsp+68h] [rbp-98h] BYREF
  const void **v26; // [rsp+80h] [rbp-80h]
  unsigned __int64 v27; // [rsp+88h] [rbp-78h]
  __int128 v28; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v29; // [rsp+A0h] [rbp-60h]
  __int128 v30; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-48h]
  int v32; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v33; // [rsp+D0h] [rbp-30h]
  __int128 *v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+E0h] [rbp-20h]
  __int128 v36; // [rsp+E8h] [rbp-18h]
  char v37[24]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE Src[528]; // [rsp+110h] [rbp+10h] BYREF

  v26 = (const void **)a3;
  v29 = a7;
  memset((char *)&v25[1] + 2, 0, 14);
  v24 = 0;
  v28 = 0uLL;
  v27 = 0LL;
  v25[0] = 0LL;
  if ( a6 )
    *(_QWORD *)a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( a2 && a3 && a4 && a5 && a6 && a7 )
  {
    v9 = *a2;
    if ( (_WORD)v9 )
    {
      v10 = *((_QWORD *)a2 + 1);
      v11 = (unsigned __int64)(unsigned int)v9 >> 1;
      if ( *(_WORD *)(v10 + 2 * v11 - 2) != 92 && *(_WORD *)(v10 + 2 * v11 - 2) != 47 )
      {
        v24 = 1;
        v9 += 2LL;
      }
    }
    v12 = v9 + *a3 + 4LL;
    if ( v12 > 0xFFFE )
    {
      DbgPrintEx(
        51LL,
        0LL,
        "SXS: Assembly storage resolution failing probe because combined path length does not fit in an UNICODE_STRING.\n");
      v18 = -1073741562;
      goto LABEL_27;
    }
    if ( v12 > 0x208 )
    {
      v25[2] = sub_180043FE0((unsigned __int16)v12);
      v13 = (_BYTE *)v25[2];
      if ( !v25[2] )
      {
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: Assembly storage resolution failing probe because attempt to allocate %u bytes failed.\n",
          (unsigned __int16)v12);
        v18 = -1073741801;
        goto LABEL_31;
      }
    }
    else
    {
      v13 = Src;
      v25[2] = Src;
    }
    memmove(v13, *((const void **)a2 + 1), *a2);
    v14 = &v13[*a2];
    if ( v24 )
      *v14++ = 92;
    memmove(v14, v26[1], *(unsigned __int16 *)v26);
    v15 = v26;
    *(_WORD *)((char *)v14 + *(unsigned __int16 *)v26) = 0;
    v16 = *(_WORD *)v15 + (v24 != 0 ? 2 : 0) + *a2;
    if ( !RtlDosPathNameToRelativeNtPathName_U((int)v13, (int)&v28, 0LL, (__int64)&v30) )
    {
      DbgPrintEx(
        51LL,
        0LL,
        "SXS: Attempt to translate DOS path name \"%S\" to NT format failed\n",
        (const wchar_t *)v13);
      v18 = -1073741766;
      goto LABEL_28;
    }
    v27 = *((_QWORD *)&v28 + 1);
    if ( (_WORD)v30 )
    {
      v17 = v31;
      v28 = v30;
    }
    else
    {
      v17 = 0LL;
      v31 = 0LL;
    }
    v33 = v17;
    v34 = &v28;
    v32 = 48;
    v35 = 64;
    v36 = 0LL;
    v18 = ZwOpenFile(v25, 1048608LL, &v32, v37, 3, 33);
    RtlReleaseRelativeName(&v30);
    if ( v18 < 0 )
    {
      v21 = (unsigned int)(v18 + 1073741809);
      if ( (unsigned int)v21 <= 0x2B && (v22 = 0x82000000001LL, _bittest64(&v22, v21)) )
        v18 = -1072365564;
      else
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: Unable to open assembly directory under storage root \"%S\"; Status = 0x%08lx\n",
          (const wchar_t *)v13,
          v18);
    }
    else
    {
      if ( v12 <= *(unsigned __int16 *)(a4 + 2) )
      {
        memmove(*(void **)(a4 + 8), v13, v16);
        *(_QWORD *)a6 = a4;
LABEL_24:
        v18 = 0;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a6 + 8LL) + v16) = 92;
        v19 = v29;
        **(_WORD **)a6 = v16 + 2;
        *v19 = v25[0];
        v25[0] = 0LL;
        goto LABEL_25;
      }
      if ( v13 != Src )
      {
        *(_QWORD *)(a5 + 8) = v13;
        v13 = 0LL;
        v25[2] = 0LL;
LABEL_50:
        *(_WORD *)(a5 + 2) = v12;
        *(_QWORD *)a6 = a5;
        goto LABEL_24;
      }
      v23 = (void *)sub_180043FE0(v12);
      *(_QWORD *)(a5 + 8) = v23;
      if ( v23 )
      {
        memmove(v23, v13, v16);
        goto LABEL_50;
      }
      v18 = -1073741801;
    }
  }
  else
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() bad parameters\n"
      "SXS:  Flags:               0x%lx\n"
      "SXS:  Root:                %p\n"
      "SXS:  AssemblyDirectory:   %p\n"
      "SXS:  PreAllocatedString:  %p\n"
      "SXS:  DynamicString:       %p\n"
      "SXS:  StringUsed:          %p\n"
      "SXS:  OpenDirectoryHandle: %p\n",
      "RtlpProbeAssemblyStorageRootForAssembly",
      0,
      a2,
      a3,
      (const void *)a4,
      (const void *)a5,
      a6,
      a7);
    v13 = (_BYTE *)v25[2];
    v18 = -1073741811;
  }
LABEL_25:
  if ( v27 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v27);
LABEL_27:
    v13 = (_BYTE *)v25[2];
  }
LABEL_28:
  if ( v13 && v13 != Src )
    RtlDeleteBoundaryDescriptor();
LABEL_31:
  if ( v25[0] )
    ZwClose(v25[0]);
  return (unsigned int)v18;
}
