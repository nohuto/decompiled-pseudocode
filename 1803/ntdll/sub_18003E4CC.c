/*
 * XREFs of sub_18003E4CC @ 0x18003E4CC
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003CB40 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlReleaseActivationContext @ 0x180024580 (RtlReleaseActivationContext.c)
 *     RtlFindActivationContextSectionString @ 0x18003E8E0 (RtlFindActivationContextSectionString.c)
 *     RtlFindCharInUnicodeString @ 0x18003F370 (RtlFindCharInUnicodeString.c)
 *     sub_18004DBBC @ 0x18004DBBC (sub_18004DBBC.c)
 *     RtlpEnsureBufferSize @ 0x180071DA0 (RtlpEnsureBufferSize.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800D989C @ 0x1800D989C (sub_1800D989C.c)
 *     RtlAssert @ 0x1800E6440 (RtlAssert.c)
 */

__int64 __fastcall sub_18003E4CC(_UNICODE_STRING *a1, char a2, unsigned __int64 *a3, __int64 a4, unsigned __int16 *a5)
{
  _UNICODE_STRING v8; // xmm0
  _ACTIVATION_CONTEXT *hActCtx; // r15
  NTSTATUS ActivationContextSectionString; // eax
  int v11; // ebx
  WCHAR *v12; // rcx
  _DWORD *lpData; // r14
  ULONG ulSectionTotalLength; // esi
  unsigned __int64 v16; // rdx
  unsigned int v17; // r8d
  bool v18; // zf
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  __int64 v22; // r9
  char *v23; // rbx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  __int64 v26; // r15
  const void **v27; // rdx
  unsigned __int64 v28; // r8
  _QWORD *v29; // rsi
  unsigned __int64 v30; // r8
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  const void **v33; // rcx
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  PWCH Buffer; // r12
  USHORT Length; // bx
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned __int16 v42; // bx
  __int64 v43; // rax
  unsigned int v44; // ecx
  int v45; // edx
  __int64 v46; // rax
  size_t v47; // r12
  char *v48; // r15
  unsigned __int64 v49; // r8
  __int64 v50; // rcx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // rax
  NTSTATUS CharInUnicodeString; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rcx
  PACTCTX_SECTION_KEYED_DATA ReturnedData; // [rsp+20h] [rbp-E0h]
  _ACTIVATION_CONTEXT *v60; // [rsp+30h] [rbp-D0h]
  USHORT NonInclusivePrefixLength[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v62; // [rsp+3Ch] [rbp-C4h] BYREF
  const void **v63; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING StringToFind; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+58h] [rbp-A8h]
  _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  tagACTCTX_SECTION_KEYED_DATA v67; // [rsp+70h] [rbp-90h] BYREF
  int v68; // [rsp+E0h] [rbp-20h] BYREF
  void *Src; // [rsp+E8h] [rbp-18h]
  WCHAR *v70; // [rsp+F0h] [rbp-10h]
  WCHAR *v71; // [rsp+F8h] [rbp-8h]
  __int64 v72; // [rsp+100h] [rbp+0h]
  __int64 v73; // [rsp+108h] [rbp+8h]
  __int16 v74; // [rsp+110h] [rbp+10h] BYREF

  *(_QWORD *)&UnicodeString.Length = a4;
  v67.cbSize = 112;
  memset(&v67.ulDataFormatVersion, 0, 0x6CuLL);
  v8 = *a1;
  v68 = 0x20000;
  v63 = 0LL;
  v70 = (WCHAR *)&v74;
  v74 = 0;
  v71 = (WCHAR *)&v74;
  v72 = 2LL;
  v73 = 2LL;
  Src = &v74;
  hActCtx = 0LL;
  StringToFind = v8;
  ActivationContextSectionString = RtlFindActivationContextSectionString(3u, 0LL, 2u, &StringToFind, &v67);
  v11 = ActivationContextSectionString;
  if ( ActivationContextSectionString < 0 )
  {
    if ( ActivationContextSectionString == -1072365567 )
      v11 = -1072365560;
    goto LABEL_4;
  }
  if ( a2 )
  {
    v11 = 0;
    goto LABEL_4;
  }
  hActCtx = (_ACTIVATION_CONTEXT *)v67.hActCtx;
  v60 = (_ACTIVATION_CONTEXT *)v67.hActCtx;
  if ( v67.ulLength < 0x14
    || v67.ulDataFormatVersion != 1
    || (lpData = v67.lpData,
        ulSectionTotalLength = v67.ulSectionTotalLength,
        v16 = *((unsigned int *)v67.lpData + 4),
        (unsigned int)v16 > v67.ulSectionTotalLength)
    || (v17 = *((_DWORD *)v67.lpData + 3), v17 > 0x1FFFFFFF)
    || v16 > 0xFFFFFFFF - 8 * (unsigned __int64)v17
    || (unsigned int)v16 + 8 * v17 > v67.ulSectionTotalLength )
  {
LABEL_58:
    v11 = -1072365565;
    goto LABEL_4;
  }
  if ( (*((_BYTE *)v67.lpData + 4) & 2) == 0 )
    goto LABEL_28;
  v18 = (*((_BYTE *)v67.lpData + 4) & 4) == 0;
  v19 = 0;
  v62 = 0;
  if ( !v18 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "[%x.%x] SXS: %s - Relative redirection plus env var expansion.\n",
      LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
      LODWORD(NtCurrentTeb()->ClientId.UniqueThread),
      "sxsisol_SearchActCtxForDllName");
    goto LABEL_58;
  }
  if ( (v67.ulFlags & 1) != 0 )
  {
    if ( (v67.ulFlags & 2) != 0 )
      RtlAssert(
        "Internal error check failed",
        "minkernel\\ntdll\\sxsisol.cpp",
        0x41Bu,
        (PSTR)"!(askd.Flags & ACTIVATION_CONTEXT_SECTION_KEYED_DATA_FLAG_FOUND_IN_SYSTEM_DEFAULT)");
    v19 = 1;
  }
  v20 = v19 | 2;
  if ( (v67.ulFlags & 2) == 0 )
    v20 = v19;
  v21 = sub_18004DBBC(
          v20,
          v67.hActCtx,
          v67.ulAssemblyRosterIndex,
          (unsigned int)&v63,
          (__int64)ReturnedData,
          (__int64)&v62);
  v11 = v21;
  if ( v21 >= 0 )
  {
LABEL_28:
    v22 = 0LL;
    v23 = (char *)v67.lpSectionBase + (unsigned int)lpData[4];
    v24 = 0LL;
    *a3 = 0LL;
    v25 = 0LL;
    v26 = (unsigned int)lpData[3];
    v65 = v26;
    if ( v26 )
    {
      v43 = 0LL;
      while ( 1 )
      {
        v44 = *(_DWORD *)&v23[8 * v43 + 4];
        if ( v44 > ulSectionTotalLength )
          break;
        v45 = *(_DWORD *)&v23[8 * v43];
        if ( v44 > ~v45 || v45 + v44 > ulSectionTotalLength )
          break;
        v22 = (unsigned int)(v22 + 1);
        v24 = (unsigned __int16)v45 + *a3;
        v43 = (unsigned int)v22;
        *a3 = v24;
        v25 = (unsigned __int16)v24;
        if ( (unsigned int)v22 == v26 )
          goto LABEL_29;
      }
      v11 = -1072365565;
      goto LABEL_55;
    }
LABEL_29:
    v27 = v63;
    if ( v63 )
    {
      v25 = v24 + *(unsigned __int16 *)v63;
      *a3 = v25;
    }
    v28 = (unsigned __int16)v25 + 2LL;
    if ( v28 > 0xFFFE )
      goto LABEL_70;
    v29 = a5 + 8;
    if ( a5 == (unsigned __int16 *)-16LL || v28 > *((_QWORD *)a5 + 4) )
    {
      if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
        goto LABEL_71;
      v27 = v63;
    }
    *((_QWORD *)a5 + 1) = *v29;
    a5[1] = a5[16];
    if ( !v27 )
      goto LABEL_41;
    *a5 = 0;
    v30 = *(unsigned __int16 *)v27 + 2LL;
    if ( v30 > 0xFFFE )
      goto LABEL_70;
    if ( a5 != (unsigned __int16 *)-16LL && v30 <= *((_QWORD *)a5 + 4) )
    {
LABEL_40:
      v31 = *v29;
      v32 = *a5;
      *((_QWORD *)a5 + 1) = *v29;
      memmove((void *)(v31 + 2 * (v32 >> 1)), v27[1], *(unsigned __int16 *)v27);
      v33 = v63;
      a5[1] = *a5 + *(_WORD *)v63 + 2;
      v34 = (unsigned __int16)(*a5 + *(_WORD *)v33);
      v35 = *((_QWORD *)a5 + 1);
      *a5 = v34;
      v25 = v34 >> 1;
      *(_WORD *)(v35 + 2 * v25) = 0;
LABEL_41:
      v62 = 0;
      if ( v26 )
      {
        v46 = 0LL;
        while ( 1 )
        {
          v47 = *(unsigned __int16 *)&v23[8 * v46];
          v48 = (char *)v67.lpSectionBase + *(unsigned int *)&v23[8 * v46 + 4];
          v49 = (unsigned int)v47 + *a5 + 2LL;
          if ( v49 > 0xFFFE )
            break;
          if ( (a5 == (unsigned __int16 *)-16LL || v49 > *((_QWORD *)a5 + 4))
            && (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
          {
            goto LABEL_81;
          }
          v50 = *v29;
          v51 = (unsigned __int64)*a5 >> 1;
          *((_QWORD *)a5 + 1) = *v29;
          memmove((void *)(v50 + 2 * v51), v48, v47);
          v25 = *a5;
          LOWORD(v25) = v47 + v25;
          v52 = (unsigned __int16)v25;
          LOWORD(v25) = v25 + 2;
          v53 = *((_QWORD *)a5 + 1);
          *a5 = v52;
          a5[1] = v25;
          *(_WORD *)(v53 + 2 * (v52 >> 1)) = 0;
          v46 = (unsigned int)++v62;
          if ( v62 == v65 )
            goto LABEL_42;
        }
      }
      else
      {
LABEL_42:
        v36 = lpData[1];
        if ( (v36 & 1) != 0 )
        {
LABEL_51:
          if ( (v36 & 4) == 0 )
          {
LABEL_52:
            if ( *(_QWORD *)&UnicodeString.Length )
              **(_DWORD **)&UnicodeString.Length |= 2u;
            v11 = 0;
            goto LABEL_55;
          }
          v11 = sub_1800D989C(v25, a5, &v68, v22);
          if ( v11 < 0 )
          {
LABEL_55:
            hActCtx = v60;
            goto LABEL_4;
          }
          v55 = (unsigned __int16)v68;
          *a5 = 0;
          if ( (unsigned __int64)(v55 + 2) <= 0xFFFE )
          {
            if ( a5 != (unsigned __int16 *)-16LL && (unsigned __int64)(v55 + 2) <= *((_QWORD *)a5 + 4) )
              goto LABEL_93;
            if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) >= 0 )
            {
              LOWORD(v55) = v68;
LABEL_93:
              v56 = *v29;
              v57 = (unsigned __int64)*a5 >> 1;
              *((_QWORD *)a5 + 1) = *v29;
              memmove((void *)(v56 + 2 * v57), Src, (unsigned __int16)v55);
              v58 = (unsigned __int16)(*a5 + v68);
              *a5 = v58;
              a5[1] = v58 + 2;
              *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * (v58 >> 1)) = 0;
              goto LABEL_52;
            }
            goto LABEL_71;
          }
LABEL_70:
          v11 = -1073741562;
          goto LABEL_55;
        }
        if ( (v36 & 8) != 0 )
        {
          CharInUnicodeString = RtlFindCharInUnicodeString(
                                  1u,
                                  &StringToFind,
                                  (PUNICODE_STRING)&stru_180110078,
                                  NonInclusivePrefixLength);
          v11 = CharInUnicodeString;
          if ( CharInUnicodeString < 0 )
          {
            if ( CharInUnicodeString == -1073741275 )
              RtlAssert(
                "Internal error check failed",
                "minkernel\\ntdll\\sxsisol.cpp",
                0x477u,
                (PSTR)"Status != STATUS_NOT_FOUND");
            goto LABEL_55;
          }
          Length = -2 - NonInclusivePrefixLength[0] + StringToFind.Length;
          Buffer = &StringToFind.Buffer[((unsigned __int64)NonInclusivePrefixLength[0] >> 1) + 1];
        }
        else
        {
          Buffer = StringToFind.Buffer;
          Length = StringToFind.Length;
        }
        *a3 += Length;
        if ( *a3 < 0xFFFF )
        {
          v39 = *a5 + (unsigned int)Length + 2LL;
          if ( v39 <= 0xFFFE )
          {
            if ( (a5 == (unsigned __int16 *)-16LL || v39 > *((_QWORD *)a5 + 4))
              && (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
            {
LABEL_81:
              v11 = -1073741801;
              goto LABEL_55;
            }
            v40 = *v29;
            v41 = (unsigned __int64)*a5 >> 1;
            *((_QWORD *)a5 + 1) = *v29;
            memmove((void *)(v40 + 2 * v41), Buffer, Length);
            v42 = *a5 + Length;
            *a5 = v42;
            v25 = (unsigned __int64)v42 >> 1;
            a5[1] = v42 + 2;
            *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * v25) = 0;
            v36 = lpData[1];
            goto LABEL_51;
          }
        }
      }
      v11 = -1073741562;
      goto LABEL_55;
    }
    if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) >= 0 )
    {
      v27 = v63;
      goto LABEL_40;
    }
LABEL_71:
    v11 = -1073741801;
    goto LABEL_55;
  }
  if ( v21 == -1073741536 && v62 < 0 )
    v11 = v62;
LABEL_4:
  v12 = v71;
  if ( v70 )
  {
    if ( v70 != v71 )
    {
      UnicodeString.Buffer = v70;
      RtlFreeUnicodeString(&UnicodeString);
      v12 = v71;
    }
    v72 = v73;
    v70 = v12;
  }
  Src = v12;
  if ( v12 )
    *v12 = 0;
  HIWORD(v68) = v73;
  LOWORD(v68) = 0;
  if ( hActCtx )
    RtlReleaseActivationContext(hActCtx);
  return (unsigned int)v11;
}
