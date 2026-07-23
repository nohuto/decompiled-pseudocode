/*
 * XREFs of RtlGenerate8dot3Name @ 0x1800F5810
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     GetNextWchar @ 0x1800F56B4 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x1800F5798 (RtlComputeLfnChecksum.c)
 */

NTSTATUS __cdecl RtlGenerate8dot3Name(
        PUNICODE_STRING Name,
        BOOLEAN AllowExtendedCharacters,
        PGENERATE_NAME_CONTEXT Context,
        PUNICODE_STRING Name8dot3)
{
  char v7; // r12
  unsigned int v8; // esi
  char v9; // r8
  __int16 NextWchar; // ax
  unsigned int NameLength; // edi
  __int64 v12; // r15
  bool v13; // zf
  WCHAR v14; // ax
  WCHAR v15; // cx
  int v16; // eax
  USHORT v17; // ax
  USHORT v18; // r11
  unsigned int i; // r8d
  __int16 v20; // dx
  __int64 v21; // rax
  WCHAR v22; // dx
  unsigned int v23; // edi
  WCHAR v24; // ax
  WCHAR v25; // cx
  __int64 ExtensionLength; // rdx
  int v27; // eax
  USHORT v28; // ax
  int v29; // r11d
  USHORT v30; // r9
  __int64 v31; // r8
  WCHAR *v32; // r10
  __int16 v33; // ax
  unsigned __int16 v34; // cx
  ULONG LastIndexValue; // r10d
  unsigned int v36; // edi
  char v37; // bp
  __int64 v38; // rax
  char v39; // cl
  __int16 v40; // r8
  unsigned __int16 *p_Length; // r15
  _WORD *v42; // r14
  ULONG v43; // eax
  unsigned int v44; // ecx
  unsigned int j; // edx
  int v46; // eax
  unsigned int v48; // [rsp+24h] [rbp-64h] BYREF
  unsigned int v49; // [rsp+28h] [rbp-60h] BYREF
  PUNICODE_STRING v50; // [rsp+30h] [rbp-58h]
  _WORD v51[8]; // [rsp+38h] [rbp-50h] BYREF

  v50 = Name8dot3;
  if ( !AllowExtendedCharacters || (v7 = 1, !NlsMbOemCodePageTag) )
    v7 = 0;
  if ( !Context->NameLength )
  {
    v8 = -1;
    v48 = 0;
    if ( !Name->Length || (v9 = 1, *Name->Buffer != 46) )
      v9 = 0;
    while ( 1 )
    {
      NextWchar = GetNextWchar(&Name->Length, &v48, v9, AllowExtendedCharacters);
      if ( !NextWchar )
        break;
      v9 = 0;
      if ( NextWchar == 46 )
        v8 = v48;
    }
    NameLength = 0;
    v12 = NlsUnicodeToMbOemData;
    v13 = v8 == Name->Length >> 1;
    v48 = 0;
    Context->NameLength = 0;
    if ( v13 )
      v8 = -1;
    v49 = v8;
    while ( 1 )
    {
      v14 = GetNextWchar(&Name->Length, &v48, 1, AllowExtendedCharacters);
      v15 = v14;
      if ( !v14 || v48 >= v8 || Context->NameLength >= 6u )
        break;
      if ( v7 )
      {
        if ( v14 <= 0x7Fu || (v13 = *(_BYTE *)(v12 + 2LL * v14 + 1) == 0, v16 = 2, v13) )
          v16 = 1;
        NameLength += v16;
        if ( NameLength > 6 )
          break;
      }
      Context->NameBuffer[Context->NameLength++] = v15;
    }
    if ( !v7 )
      NameLength = Context->NameLength;
    if ( NameLength <= 2 )
    {
      v17 = RtlComputeLfnChecksum(&Name->Length);
      Context->Checksum = v17;
      v18 = v17;
      for ( i = 0; i < 4; ++i )
      {
        v20 = 48;
        if ( (v18 & 0xFu) > 9 )
          v20 = 55;
        v21 = i + Context->NameLength;
        v22 = (v18 & 0xF) + v20;
        v18 >>= 4;
        Context->NameBuffer[v21] = v22;
      }
      Context->NameLength += 4;
      Context->CheckSumInserted = 1;
    }
    if ( v8 == -1 )
    {
      Context->ExtensionLength = 0;
    }
    else
    {
      Context->ExtensionBuffer[0] = 46;
      v23 = 1;
      for ( Context->ExtensionLength = 1; ; ++Context->ExtensionLength )
      {
        v24 = GetNextWchar(&Name->Length, &v49, 1, AllowExtendedCharacters);
        v25 = v24;
        if ( !v24 )
          break;
        ExtensionLength = Context->ExtensionLength;
        if ( (unsigned int)ExtensionLength >= 4 )
          goto LABEL_41;
        if ( v7 )
        {
          if ( v24 <= 0x7Fu || (v13 = *(_BYTE *)(NlsUnicodeToMbOemData + 2LL * v24 + 1) == 0, v27 = 2, v13) )
            v27 = 1;
          v23 += v27;
          if ( v23 > 4 )
          {
LABEL_41:
            Context->ExtensionBuffer[(unsigned int)(ExtensionLength - 1)] = 126;
            break;
          }
        }
        Context->ExtensionBuffer[ExtensionLength] = v25;
      }
    }
  }
  if ( ++Context->LastIndexValue > 4 && !Context->CheckSumInserted )
  {
    v28 = RtlComputeLfnChecksum(&Name->Length);
    Context->Checksum = v28;
    v30 = v28;
    if ( 2 - v29 < (unsigned int)(6 - v29) )
    {
      v31 = 4LL;
      v32 = &Context->NameBuffer[2 - v29];
      do
      {
        v33 = 48;
        v34 = v30 & 0xF;
        if ( v34 > 9u )
          v33 = 55;
        v30 >>= 4;
        *v32++ = v34 + v33;
        --v31;
      }
      while ( v31 );
    }
    Context->LastIndexValue = 1;
    Context->NameLength = 6 - v29;
    Context->CheckSumInserted = 1;
  }
  LastIndexValue = Context->LastIndexValue;
  v36 = 1;
  v37 = 1;
  do
  {
    if ( !LastIndexValue )
      break;
    v38 = 8 - v36++;
    v39 = 0;
    v40 = LastIndexValue % 0xA + 48;
    LastIndexValue /= 0xAu;
    v51[v38] = v40;
    if ( v40 == 57 )
      v39 = v37;
    v37 = v39;
  }
  while ( v36 <= 7 );
  p_Length = &v50->Length;
  v42 = &v51[8 - v36];
  *v42 = 126;
  if ( (unsigned __int8)(Context->NameLength - 1) > 0xBu )
  {
    *p_Length = 0;
  }
  else
  {
    memmove(*((void **)p_Length + 1), Context->NameBuffer, 2 * (unsigned int)Context->NameLength);
    *p_Length = 2 * Context->NameLength;
  }
  memmove((void *)(*((_QWORD *)p_Length + 1) + 2 * ((unsigned __int64)*p_Length >> 1)), v42, 2 * v36);
  *p_Length += 2 * v36;
  v43 = Context->ExtensionLength;
  if ( v43 )
  {
    memmove(
      (void *)(*((_QWORD *)p_Length + 1) + 2 * ((unsigned __int64)*p_Length >> 1)),
      Context->ExtensionBuffer,
      2 * v43);
    *p_Length += 2 * LOWORD(Context->ExtensionLength);
  }
  if ( !v37 )
    return 0;
  if ( v7 )
  {
    v44 = 0;
    for ( j = 0; v44 < Context->NameLength; ++v44 )
    {
      if ( Context->NameBuffer[v44] <= 0x7Fu
        || (v46 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * Context->NameBuffer[v44] + 1)) )
      {
        v46 = 1;
      }
      j += v46;
      if ( j > 7 - v36 )
        break;
    }
    Context->NameLength = v44;
  }
  else
  {
    --Context->NameLength;
  }
  if ( Context->NameLength )
    return 0;
  else
    return -1073740761;
}
