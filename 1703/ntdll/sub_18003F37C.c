/*
 * XREFs of sub_18003F37C @ 0x18003F37C
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003DA60 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlReleaseActivationContext @ 0x1800188A0 (RtlReleaseActivationContext.c)
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     RtlFindActivationContextSectionString @ 0x18003F770 (RtlFindActivationContextSectionString.c)
 *     RtlFindCharInUnicodeString @ 0x1800401C0 (RtlFindCharInUnicodeString.c)
 *     sub_180055158 @ 0x180055158 (sub_180055158.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     RtlpEnsureBufferSize @ 0x180077DA0 (RtlpEnsureBufferSize.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800E0020 @ 0x1800E0020 (sub_1800E0020.c)
 *     RtlAssert @ 0x1800EAE80 (RtlAssert.c)
 */

__int64 __fastcall sub_18003F37C(_UNICODE_STRING *a1, char a2, _QWORD *a3, __int64 a4, unsigned __int16 *a5)
{
  _UNICODE_STRING v8; // xmm0
  _ACTIVATION_CONTEXT *hActCtx; // r12
  NTSTATUS ActivationContextSectionString; // eax
  int v11; // ebx
  WCHAR *v12; // rcx
  _BYTE *lpData; // r15
  ULONG ulSectionTotalLength; // esi
  unsigned __int64 v16; // rdx
  unsigned int v17; // r8d
  unsigned __int64 v18; // rcx
  bool v19; // zf
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // r8d
  char *v24; // rbx
  __int64 v25; // r12
  const void **v26; // rdx
  unsigned __int64 v27; // r8
  _QWORD *v28; // rsi
  unsigned __int64 v29; // r8
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  _WORD *v32; // rcx
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  PWCH Buffer; // r13
  USHORT Length; // bx
  unsigned __int64 v37; // r8
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  unsigned __int16 v40; // bx
  unsigned int v41; // edx
  int v42; // r9d
  __int64 v43; // rax
  __int64 v44; // r13
  unsigned __int64 v45; // r8
  char *v46; // r12
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  unsigned __int16 v49; // ax
  unsigned int v50; // edx
  unsigned __int64 v51; // rcx
  __int64 v52; // rax
  NTSTATUS CharInUnicodeString; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rcx
  PACTCTX_SECTION_KEYED_DATA ReturnedData; // [rsp+20h] [rbp-E0h]
  _ACTIVATION_CONTEXT *v59; // [rsp+30h] [rbp-D0h]
  USHORT NonInclusivePrefixLength[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v61; // [rsp+3Ch] [rbp-C4h] BYREF
  _WORD *v62; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING StringToFind; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+58h] [rbp-A8h]
  _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  tagACTCTX_SECTION_KEYED_DATA v66; // [rsp+70h] [rbp-90h] BYREF
  int v67; // [rsp+E0h] [rbp-20h] BYREF
  void *Src; // [rsp+E8h] [rbp-18h]
  WCHAR *v69; // [rsp+F0h] [rbp-10h]
  WCHAR *v70; // [rsp+F8h] [rbp-8h]
  __int64 v71; // [rsp+100h] [rbp+0h]
  __int64 v72; // [rsp+108h] [rbp+8h]
  __int16 v73; // [rsp+110h] [rbp+10h] BYREF

  *(_QWORD *)&UnicodeString.Length = a4;
  v66.cbSize = 112;
  memset(&v66.ulDataFormatVersion, 0, 0x6CuLL);
  v8 = *a1;
  v67 = 0x20000;
  v62 = 0LL;
  v69 = (WCHAR *)&v73;
  v73 = 0;
  v70 = (WCHAR *)&v73;
  v71 = 2LL;
  v72 = 2LL;
  Src = &v73;
  hActCtx = 0LL;
  StringToFind = v8;
  ActivationContextSectionString = RtlFindActivationContextSectionString(3u, 0LL, 2u, &StringToFind, &v66);
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
  hActCtx = (_ACTIVATION_CONTEXT *)v66.hActCtx;
  v59 = (_ACTIVATION_CONTEXT *)v66.hActCtx;
  if ( v66.ulLength < 0x14
    || v66.ulDataFormatVersion != 1
    || (lpData = v66.lpData,
        ulSectionTotalLength = v66.ulSectionTotalLength,
        v16 = *((unsigned int *)v66.lpData + 4),
        (unsigned int)v16 > v66.ulSectionTotalLength)
    || (v17 = *((_DWORD *)v66.lpData + 3), v17 > 0x1FFFFFFF)
    || (v18 = 0xFFFFFFFF - 8LL * v17, v16 > v18)
    || (unsigned int)v16 + 8 * v17 > v66.ulSectionTotalLength )
  {
LABEL_58:
    v11 = -1072365565;
    goto LABEL_4;
  }
  if ( (*((_BYTE *)v66.lpData + 4) & 2) == 0 )
    goto LABEL_28;
  v19 = (*((_BYTE *)v66.lpData + 4) & 4) == 0;
  v20 = 0;
  v61 = 0;
  if ( !v19 )
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
  if ( (v66.ulFlags & 1) != 0 )
  {
    if ( (v66.ulFlags & 2) != 0 )
      RtlAssert(
        "Internal error check failed",
        "minkernel\\ntdll\\sxsisol.cpp",
        0x41Bu,
        (PSTR)"!(askd.Flags & ACTIVATION_CONTEXT_SECTION_KEYED_DATA_FLAG_FOUND_IN_SYSTEM_DEFAULT)");
    v20 = 1;
  }
  v21 = v20 | 2;
  if ( (v66.ulFlags & 2) == 0 )
    v21 = v20;
  v22 = sub_180055158(
          v21,
          v66.hActCtx,
          v66.ulAssemblyRosterIndex,
          (unsigned int)&v62,
          (__int64)ReturnedData,
          (__int64)&v61);
  v11 = v22;
  if ( v22 >= 0 )
  {
LABEL_28:
    v23 = 0;
    v24 = (char *)v66.lpSectionBase + *((unsigned int *)lpData + 4);
    *a3 = 0LL;
    v25 = *((unsigned int *)lpData + 3);
    v64 = v25;
    if ( v25 )
    {
      v18 = 0LL;
      while ( 1 )
      {
        v41 = *(_DWORD *)&v24[8 * v18 + 4];
        if ( v41 > ulSectionTotalLength )
          break;
        v42 = *(_DWORD *)&v24[8 * v18];
        if ( v41 > ~v42 || v42 + v41 > ulSectionTotalLength )
          break;
        ++v23;
        *a3 += (unsigned __int16)v42;
        v18 = v23;
        if ( v23 == v25 )
          goto LABEL_29;
      }
      v11 = -1072365565;
      goto LABEL_55;
    }
LABEL_29:
    v26 = (const void **)v62;
    if ( v62 )
      *a3 += (unsigned __int16)*v62;
    v27 = *(unsigned __int16 *)a3 + 2LL;
    if ( v27 > 0xFFFE )
      goto LABEL_70;
    v28 = a5 + 8;
    if ( a5 == (unsigned __int16 *)-16LL || v27 > *((_QWORD *)a5 + 4) )
    {
      if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
        goto LABEL_71;
      v26 = (const void **)v62;
    }
    *((_QWORD *)a5 + 1) = *v28;
    a5[1] = a5[16];
    if ( !v26 )
      goto LABEL_41;
    *a5 = 0;
    v29 = *(unsigned __int16 *)v26 + 2LL;
    if ( v29 > 0xFFFE )
      goto LABEL_70;
    if ( a5 != (unsigned __int16 *)-16LL && v29 <= *((_QWORD *)a5 + 4) )
    {
LABEL_40:
      v30 = *v28;
      v31 = *a5;
      *((_QWORD *)a5 + 1) = *v28;
      memmove((void *)(v30 + 2 * (v31 >> 1)), v26[1], *(unsigned __int16 *)v26);
      v32 = v62;
      a5[1] = *a5 + *v62 + 2;
      v33 = (unsigned __int16)(*a5 + *v32);
      v34 = *((_QWORD *)a5 + 1);
      *a5 = v33;
      v18 = v33 >> 1;
      *(_WORD *)(v34 + 2 * v18) = 0;
LABEL_41:
      v61 = 0;
      if ( v25 )
      {
        v43 = 0LL;
        while ( 1 )
        {
          v44 = *(unsigned __int16 *)&v24[8 * v43];
          v45 = v44 + *a5 + 2LL;
          v46 = (char *)v66.lpSectionBase + *(unsigned int *)&v24[8 * v43 + 4];
          if ( v45 > 0xFFFE )
            break;
          if ( (a5 == (unsigned __int16 *)-16LL || v45 > *((_QWORD *)a5 + 4))
            && (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
          {
            goto LABEL_81;
          }
          v47 = *v28;
          v48 = (unsigned __int64)*a5 >> 1;
          *((_QWORD *)a5 + 1) = *v28;
          memmove((void *)(v47 + 2 * v48), v46, (unsigned __int16)v44);
          v49 = *a5 + v44 + 2;
          v50 = v61 + 1;
          *a5 += v44;
          v51 = *a5;
          a5[1] = v49;
          v52 = *((_QWORD *)a5 + 1);
          v18 = v51 >> 1;
          v61 = v50;
          *(_WORD *)(v52 + 2 * v18) = 0;
          v43 = v50;
          if ( v50 == v64 )
            goto LABEL_42;
        }
      }
      else
      {
LABEL_42:
        if ( (lpData[4] & 1) != 0 )
        {
LABEL_51:
          if ( (lpData[4] & 4) == 0 )
          {
LABEL_52:
            if ( *(_QWORD *)&UnicodeString.Length )
              **(_DWORD **)&UnicodeString.Length |= 2u;
            v11 = 0;
            goto LABEL_55;
          }
          v11 = sub_1800E0020(v18, a5, &v67);
          if ( v11 < 0 )
          {
LABEL_55:
            hActCtx = v59;
            goto LABEL_4;
          }
          v54 = (unsigned __int16)v67;
          *a5 = 0;
          if ( (unsigned __int64)(v54 + 2) <= 0xFFFE )
          {
            if ( a5 != (unsigned __int16 *)-16LL && (unsigned __int64)(v54 + 2) <= *((_QWORD *)a5 + 4) )
              goto LABEL_94;
            if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) >= 0 )
            {
              LOWORD(v54) = v67;
LABEL_94:
              v55 = *v28;
              v56 = (unsigned __int64)*a5 >> 1;
              *((_QWORD *)a5 + 1) = *v28;
              memmove((void *)(v55 + 2 * v56), Src, (unsigned __int16)v54);
              v57 = (unsigned __int16)(*a5 + v67);
              *a5 = v57;
              a5[1] = v57 + 2;
              *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * (v57 >> 1)) = 0;
              goto LABEL_52;
            }
            goto LABEL_71;
          }
LABEL_70:
          v11 = -1073741562;
          goto LABEL_55;
        }
        if ( (lpData[4] & 8) != 0 )
        {
          CharInUnicodeString = RtlFindCharInUnicodeString(
                                  1u,
                                  &StringToFind,
                                  (PUNICODE_STRING)&stru_180110160,
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
        if ( *a3 < 0xFFFFuLL )
        {
          v37 = Length + *a5 + 2LL;
          if ( v37 <= 0xFFFE )
          {
            if ( (a5 == (unsigned __int16 *)-16LL || v37 > *((_QWORD *)a5 + 4))
              && (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
            {
LABEL_81:
              v11 = -1073741801;
              goto LABEL_55;
            }
            v38 = *v28;
            v39 = (unsigned __int64)*a5 >> 1;
            *((_QWORD *)a5 + 1) = *v28;
            memmove((void *)(v38 + 2 * v39), Buffer, Length);
            v40 = *a5 + Length;
            *a5 = v40;
            v18 = (unsigned __int64)v40 >> 1;
            a5[1] = v40 + 2;
            *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * v18) = 0;
            goto LABEL_51;
          }
        }
      }
      v11 = -1073741562;
      goto LABEL_55;
    }
    if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) >= 0 )
    {
      v26 = (const void **)v62;
      goto LABEL_40;
    }
LABEL_71:
    v11 = -1073741801;
    goto LABEL_55;
  }
  if ( v22 == -1073741536 && v61 < 0 )
    v11 = v61;
LABEL_4:
  v12 = v70;
  if ( v69 )
  {
    if ( v69 != v70 )
    {
      UnicodeString.Buffer = v69;
      RtlFreeUnicodeString(&UnicodeString);
      v12 = v70;
    }
    v71 = v72;
    v69 = v12;
  }
  Src = v12;
  if ( v12 )
    *v12 = 0;
  HIWORD(v67) = v72;
  LOWORD(v67) = 0;
  if ( hActCtx )
    RtlReleaseActivationContext(hActCtx);
  return (unsigned int)v11;
}
