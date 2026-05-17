/*
 * XREFs of sub_18004E9D0 @ 0x18004E9D0
 * Callers:
 *     sub_18004E290 @ 0x18004E290 (sub_18004E290.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x18002E200 (RtlReleaseRelativeName.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18003FAA0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenFile @ 0x18009B120 (ZwOpenFile.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_18004E9D0(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        _QWORD *a7)
{
  _BYTE *v7; // rbx
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  _WORD *v16; // r14
  const void **v17; // rcx
  unsigned __int16 v18; // r14
  __int64 v19; // rax
  int v20; // edi
  _QWORD *v21; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  void *v25; // rax
  __int64 v26; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  const void **v29; // [rsp+70h] [rbp-90h]
  unsigned __int64 v30; // [rsp+78h] [rbp-88h]
  __int128 v31; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v32; // [rsp+98h] [rbp-68h]
  _QWORD *v33; // [rsp+A0h] [rbp-60h]
  __int128 v34; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-48h]
  int v36; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-30h]
  __int128 *v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+E0h] [rbp-20h]
  __int128 v40; // [rsp+E8h] [rbp-18h]
  char v41[24]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE Src[528]; // [rsp+110h] [rbp+10h] BYREF

  v7 = 0LL;
  v29 = (const void **)a3;
  v33 = a7;
  v32 = 0LL;
  v27 = 0;
  v31 = 0uLL;
  v30 = 0LL;
  v28 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( !a2 || !a3 || !a4 || !a5 || !a6 || !a7 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() bad parameters\n"
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
      a4,
      a5,
      a6,
      a7);
    v20 = -1073741811;
    goto LABEL_25;
  }
  v11 = *a2;
  v12 = v11;
  if ( (_WORD)v11 )
  {
    v13 = *((_QWORD *)a2 + 1);
    v14 = (unsigned __int64)v11 >> 1;
    if ( *(_WORD *)(v13 + 2 * v14 - 2) != 92 && *(_WORD *)(v13 + 2 * v14 - 2) != 47 )
    {
      v27 = 1;
      v12 = v11 + 2LL;
    }
  }
  v15 = v12 + *a3 + 4LL;
  if ( v15 > 0xFFFE )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: Assembly storage resolution failing probe because combined path length does not fit in an UNICODE_STRING.\n");
    v20 = -1073741562;
  }
  else
  {
    if ( v15 > 0x208 )
    {
      v32 = (_BYTE *)sub_18003B5E0((unsigned __int16)v15);
      v7 = v32;
      if ( !v32 )
      {
        DbgPrintEx(
          51,
          0,
          (int)"SXS: Assembly storage resolution failing probe because attempt to allocate %u bytes failed.\n",
          (unsigned __int16)v15);
        v20 = -1073741801;
        goto LABEL_30;
      }
      LOWORD(v11) = *a2;
    }
    else
    {
      v7 = Src;
      v32 = Src;
    }
    memmove(v7, *((const void **)a2 + 1), (unsigned __int16)v11);
    v16 = &v7[*a2];
    if ( v27 )
      *v16++ = 92;
    memmove(v16, v29[1], *(unsigned __int16 *)v29);
    v17 = v29;
    *(_WORD *)((char *)v16 + *(unsigned __int16 *)v29) = 0;
    v18 = *a2 + *(_WORD *)v17 + 2 * v27;
    if ( RtlDosPathNameToRelativeNtPathName_U((__int64)v7, (int)&v31, 0LL, (__int64)&v34) )
    {
      v30 = *((_QWORD *)&v31 + 1);
      if ( (_WORD)v34 )
      {
        v19 = v35;
        v31 = v34;
      }
      else
      {
        v19 = 0LL;
        v35 = 0LL;
      }
      v37 = v19;
      v38 = &v31;
      v36 = 48;
      v39 = 64;
      v40 = 0LL;
      v20 = ZwOpenFile(&v28, 1048608LL, &v36, v41, 3, 33);
      RtlReleaseRelativeName((__int64)&v34);
      if ( v20 < 0 )
      {
        v23 = (unsigned int)(v20 + 1073741809);
        if ( (unsigned int)v23 <= 0x2B && (v24 = 0x82000000001LL, _bittest64(&v24, v23)) )
        {
          v20 = -1072365564;
        }
        else
        {
          LODWORD(v26) = v20;
          DbgPrintEx(
            51,
            0,
            (int)"SXS: Unable to open assembly directory under storage root \"%S\"; Status = 0x%08lx\n",
            v7,
            v26);
        }
      }
      else
      {
        if ( v15 <= *(unsigned __int16 *)(a4 + 2) )
        {
          memmove(*(void **)(a4 + 8), v7, v18);
LABEL_24:
          v21 = v33;
          v20 = 0;
          *a6 = a4;
          *(_DWORD *)(*(_QWORD *)(a4 + 8) + v18) = 92;
          *(_WORD *)*a6 = v18 + 2;
          *v21 = v28;
          v28 = 0LL;
          goto LABEL_25;
        }
        if ( v7 != Src )
        {
          *(_QWORD *)(a5 + 8) = v7;
          v7 = 0LL;
          v32 = 0LL;
LABEL_50:
          *(_WORD *)(a5 + 2) = v15;
          a4 = a5;
          goto LABEL_24;
        }
        v25 = (void *)sub_18003B5E0(v15);
        *(_QWORD *)(a5 + 8) = v25;
        if ( v25 )
        {
          memmove(v25, v7, v18);
          goto LABEL_50;
        }
        v20 = -1073741801;
      }
LABEL_25:
      if ( v30 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v30);
        v7 = v32;
      }
      goto LABEL_27;
    }
    DbgPrintEx(51, 0, (int)"SXS: Attempt to translate DOS path name \"%S\" to NT format failed\n", v7);
    v20 = -1073741766;
  }
LABEL_27:
  if ( v7 && v7 != Src )
    RtlDeleteBoundaryDescriptor((__int64)v7);
LABEL_30:
  if ( v28 )
    ZwClose(v28);
  return (unsigned int)v20;
}
