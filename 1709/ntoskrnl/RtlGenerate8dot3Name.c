/*
 * XREFs of RtlGenerate8dot3Name @ 0x14056F480
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     GetNextWchar @ 0x14056F85C (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x14056F93C (RtlComputeLfnChecksum.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlGenerate8dot3Name(
        PCUNICODE_STRING Name,
        BOOLEAN AllowExtendedCharacters,
        PGENERATE_NAME_CONTEXT Context,
        PUNICODE_STRING Name8dot3)
{
  PGENERATE_NAME_CONTEXT v4; // rbx
  __int64 v5; // r9
  BOOLEAN v6; // bp
  char v8; // r12
  unsigned __int16 Length; // di
  unsigned int v10; // esi
  __int16 NextWchar; // ax
  unsigned int v12; // edi
  unsigned __int16 v13; // ax
  UCHAR NameLength; // r8
  __int64 v15; // r9
  unsigned int v16; // edi
  unsigned __int16 v17; // ax
  ULONG LastIndexValue; // r10d
  unsigned int v19; // edi
  char v20; // bp
  __int64 v21; // rax
  char v22; // cl
  __int16 v23; // r8
  UCHAR v24; // cl
  unsigned __int16 *p_Length; // r15
  _WORD *v26; // r14
  ULONG ExtensionLength; // eax
  USHORT v29; // ax
  int v30; // r11d
  __int64 v31; // r8
  USHORT v32; // r9
  WCHAR *v33; // r10
  __int64 v34; // r8
  __int16 v35; // ax
  unsigned __int16 v36; // cx
  USHORT v37; // ax
  USHORT v38; // r11
  __int64 v39; // rax
  int v40; // eax
  int v41; // eax
  WCHAR v42; // ax
  unsigned int v43; // edx
  unsigned int i; // r8d
  WCHAR v45; // cx
  int v46; // eax
  unsigned int v47; // [rsp+24h] [rbp-64h] BYREF
  unsigned int v48; // [rsp+28h] [rbp-60h] BYREF
  PUNICODE_STRING v49; // [rsp+30h] [rbp-58h]
  _QWORD v50[2]; // [rsp+38h] [rbp-50h] BYREF

  v49 = Name8dot3;
  v4 = Context;
  v5 = 0LL;
  v50[0] = Context;
  v6 = AllowExtendedCharacters;
  if ( !AllowExtendedCharacters || (v8 = 1, !(_BYTE)NlsMbOemCodePageTag) )
    v8 = 0;
  if ( !Context->NameLength )
  {
    Length = Name->Length;
    v10 = -1;
    v47 = 0;
    if ( !Length || (LOBYTE(Context) = 1, *Name->Buffer != 46) )
      LOBYTE(Context) = 0;
    while ( 1 )
    {
      LOBYTE(v5) = v6;
      NextWchar = GetNextWchar(Name, &v47, Context, v5);
      if ( !NextWchar )
        break;
      LOBYTE(Context) = 0;
      if ( NextWchar == 46 )
        v10 = v47;
    }
    v4 = (PGENERATE_NAME_CONTEXT)v50[0];
    if ( v10 == Length >> 1 )
      v10 = -1;
    v48 = v10;
    v12 = 0;
    v47 = 0;
    *(_BYTE *)(v50[0] + 3LL) = 0;
    while ( 1 )
    {
      LOBYTE(v5) = v6;
      LOBYTE(Context) = 1;
      v13 = GetNextWchar(Name, &v47, Context, v5);
      *(_QWORD *)&AllowExtendedCharacters = v13;
      if ( !v13 )
        break;
      if ( v47 >= v10 )
        break;
      NameLength = v4->NameLength;
      if ( NameLength >= 6u )
        break;
      if ( v8 )
      {
        if ( v13 <= 0x7Fu || (v40 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * AllowExtendedCharacters + 1)) )
          v40 = 1;
        v12 += v40;
        if ( v12 > 6 )
          break;
      }
      v4->NameBuffer[NameLength] = AllowExtendedCharacters;
      ++v4->NameLength;
    }
    if ( !v8 )
      v12 = v4->NameLength;
    if ( v12 <= 2 )
    {
      v37 = RtlComputeLfnChecksum(Name, AllowExtendedCharacters);
      v15 = 0LL;
      v4->Checksum = v37;
      v38 = v37;
      LODWORD(Context) = 0;
      do
      {
        *(_QWORD *)&AllowExtendedCharacters = 48LL;
        if ( (v38 & 0xFu) > 9 )
          *(_WORD *)&AllowExtendedCharacters = 55;
        v39 = (unsigned int)Context + v4->NameLength;
        *(_WORD *)&AllowExtendedCharacters = (v38 & 0xF) + AllowExtendedCharacters;
        v38 >>= 4;
        Context = (PGENERATE_NAME_CONTEXT)(unsigned int)((_DWORD)Context + 1);
        v4->NameBuffer[v39] = AllowExtendedCharacters;
      }
      while ( (unsigned int)Context < 4 );
      v4->NameLength += 4;
      v4->CheckSumInserted = 1;
    }
    else
    {
      v15 = 0LL;
    }
    if ( v10 == -1 )
    {
      v4->ExtensionLength = 0;
    }
    else
    {
      v4->ExtensionBuffer[0] = 46;
      v16 = 1;
      for ( v4->ExtensionLength = 1; ; ++v4->ExtensionLength )
      {
        LOBYTE(v15) = v6;
        LOBYTE(Context) = 1;
        v17 = GetNextWchar(Name, &v48, Context, v15);
        v15 = 0LL;
        *(_QWORD *)&AllowExtendedCharacters = v17;
        if ( !v17 )
          break;
        Context = (PGENERATE_NAME_CONTEXT)v4->ExtensionLength;
        if ( (unsigned int)Context >= 4 )
          goto LABEL_40;
        if ( v8 )
        {
          if ( v17 <= 0x7Fu || (v41 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * AllowExtendedCharacters + 1)) )
            v41 = 1;
          v16 += v41;
          if ( v16 > 4 )
          {
LABEL_40:
            if ( FsRtlSafeExtensions )
              v4->ExtensionBuffer[(_DWORD)Context - 1] = 126;
            break;
          }
        }
        v4->ExtensionBuffer[(_QWORD)Context] = AllowExtendedCharacters;
      }
    }
  }
  if ( ++v4->LastIndexValue > 4 && !v4->CheckSumInserted )
  {
    if ( v8 )
    {
      v42 = v4->NameBuffer[0];
      if ( v42 <= 0x7Fu
        || (*(_QWORD *)&AllowExtendedCharacters = 1LL, !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * v42 + 1)) )
      {
        *(_QWORD *)&AllowExtendedCharacters = 0LL;
      }
    }
    v29 = RtlComputeLfnChecksum(Name, AllowExtendedCharacters);
    v4->Checksum = v29;
    v31 = (unsigned int)(2 - v30);
    v32 = v29;
    if ( (unsigned int)v31 < 6 - v30 )
    {
      v33 = &v4->NameBuffer[v31];
      v34 = 4LL;
      do
      {
        v35 = 48;
        v36 = v32 & 0xF;
        if ( v36 > 9u )
          v35 = 55;
        v32 >>= 4;
        *v33++ = v36 + v35;
        --v34;
      }
      while ( v34 );
    }
    v4->LastIndexValue = 1;
    v4->NameLength = 6 - v30;
    v4->CheckSumInserted = 1;
  }
  LastIndexValue = v4->LastIndexValue;
  v19 = 1;
  v20 = 1;
  do
  {
    if ( !LastIndexValue )
      break;
    v21 = 8 - v19++;
    v22 = 0;
    v23 = LastIndexValue % 0xA + 48;
    LastIndexValue /= 0xAu;
    *((_WORD *)v50 + v21) = v23;
    if ( v23 == 57 )
      v22 = v20;
    v20 = v22;
  }
  while ( v19 <= 7 );
  v24 = v4->NameLength;
  p_Length = &v49->Length;
  v26 = (_WORD *)v50 + 8 - v19;
  *v26 = 126;
  if ( (unsigned __int8)(v24 - 1) > 0xBu )
  {
    *p_Length = 0;
  }
  else
  {
    memmove(*((void **)p_Length + 1), v4->NameBuffer, 2 * (unsigned int)v24);
    *p_Length = 2 * v4->NameLength;
  }
  memmove((void *)(*((_QWORD *)p_Length + 1) + 2 * ((unsigned __int64)*p_Length >> 1)), v26, 2 * v19);
  *p_Length += 2 * v19;
  ExtensionLength = v4->ExtensionLength;
  if ( ExtensionLength )
  {
    memmove(
      (void *)(*((_QWORD *)p_Length + 1) + 2 * ((unsigned __int64)*p_Length >> 1)),
      v4->ExtensionBuffer,
      2 * ExtensionLength);
    *p_Length += 2 * LOWORD(v4->ExtensionLength);
  }
  if ( !v20 )
    return 0;
  if ( v8 )
  {
    v43 = 0;
    for ( i = 0; v43 < v4->NameLength; ++v43 )
    {
      v45 = v4->NameBuffer[v43];
      if ( v45 <= 0x7Fu || (v46 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * v45 + 1)) )
        v46 = 1;
      i += v46;
      if ( i > 7 - v19 )
        break;
    }
    v4->NameLength = v43;
  }
  else
  {
    --v4->NameLength;
  }
  if ( v4->NameLength )
    return 0;
  else
    return -1073740761;
}
