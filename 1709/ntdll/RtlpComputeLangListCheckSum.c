/*
 * XREFs of RtlpComputeLangListCheckSum @ 0x18005042C
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x18002C530 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x18002DA90 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 *     RtlUpcaseUnicodeChar @ 0x180050700 (RtlUpcaseUnicodeChar.c)
 *     RtlIntegerToUnicodeString @ 0x180050760 (RtlIntegerToUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x1800508F0 (RtlUpcaseUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x180051CE0 (RtlLCIDToCultureName.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpComputeLangListCheckSum(__int64 a1)
{
  __int64 v2; // rbx
  NTSTATUS inited; // edi
  __int64 v4; // r13
  unsigned int v5; // r12d
  __int64 v6; // r8
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  _QWORD *v10; // rcx
  __int16 v11; // ax
  unsigned int v12; // r14d
  WCHAR *Buffer; // rbx
  wchar_t *v14; // r15
  LCID v16; // ecx
  __int64 Length; // r8
  unsigned __int8 *v18; // r9
  int v19; // r8d
  int v20; // r8d
  int v21; // r8d
  int v22; // r8d
  unsigned __int64 v23; // r10
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // r8d
  _UNICODE_STRING String; // [rsp+28h] [rbp-E0h] BYREF
  WCHAR v29; // [rsp+38h] [rbp-D0h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v31[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v32; // [rsp+68h] [rbp-A0h]
  _BYTE v33[176]; // [rsp+78h] [rbp-90h] BYREF

  v2 = 0LL;
  memset(v33, 0, 0xAAuLL);
  inited = 0;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  if ( !a1 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
    return 3221225485LL;
  v5 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_18;
  while ( 1 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = *(unsigned __int16 *)(v6 + 6LL * v5);
    memset(v31, 0, sizeof(v31));
    v32 = 0;
    if ( v7 )
      break;
LABEL_16:
    if ( ++v5 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_17;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      v10 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 16LL) + 28LL * *(__int16 *)(v6 + 6LL * v5 + 4));
      goto LABEL_8;
    }
    if ( v9 != 1 )
      return (unsigned int)-1073741595;
    HIWORD(v31[0]) = *(_WORD *)(v6 + 6LL * v5 + 4);
  }
  else
  {
    WORD2(v31[0]) = *(_WORD *)(v6 + 6LL * v5 + 4);
  }
  v10 = v31;
LABEL_8:
  v11 = *((_WORD *)v10 + 3);
  if ( v11 > 0 )
  {
    inited = RtlInitUnicodeStringEx(
               &DestinationString,
               (PCWSTR)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 24LL)
                      + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 16LL) + 2LL * v11)));
    if ( inited < 0 )
      return (unsigned int)inited;
    *(_DWORD *)&String.Length = 11141120;
    String.Buffer = (wchar_t *)v33;
    RtlCopyUnicodeString(&String, &DestinationString);
LABEL_11:
    if ( !v2 )
    {
      v12 = 314159;
      Buffer = String.Buffer;
      v14 = &String.Buffer[(unsigned __int64)String.Length >> 1];
      while ( Buffer < v14 )
      {
        v29 = RtlUpcaseUnicodeChar(*Buffer++);
        v12 = HIBYTE(v29) + 37 * ((unsigned __int8)v29 + 37 * v12);
      }
      v2 = v12;
      goto LABEL_16;
    }
    RtlUpcaseUnicodeString(&String, &String, 0);
    Length = String.Length;
    v18 = (unsigned __int8 *)String.Buffer;
    if ( String.Length >= 8uLL )
    {
      v23 = (unsigned __int64)String.Length >> 3;
      Length = String.Length - 8 * v23;
      do
      {
        v24 = v18[6]
            + 37 * (v18[5] + 37 * (v18[4] + 37 * (v18[3] + 37 * (v18[2] + 37 * (v18[1] + 37 * (*v18 + 37 * v2))))));
        v25 = v18[7];
        v18 += 8;
        v2 = v25 + 37 * v24;
        --v23;
      }
      while ( v23 );
    }
    if ( (unsigned __int64)(Length - 1) > 6 )
      goto LABEL_34;
    v19 = Length - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v26 = v22 - 1;
            if ( v26 )
            {
              v27 = v26 - 1;
              if ( v27 )
              {
                if ( v27 != 1 )
                  goto LABEL_34;
                LODWORD(v2) = *v18++ + 37 * v2;
              }
              LODWORD(v2) = *v18++ + 37 * v2;
            }
            LODWORD(v2) = *v18++ + 37 * v2;
          }
          LODWORD(v2) = *v18++ + 37 * v2;
        }
        LODWORD(v2) = *v18++ + 37 * v2;
      }
      LODWORD(v2) = *v18++ + 37 * v2;
    }
    LODWORD(v2) = *v18 + 37 * v2;
LABEL_34:
    v2 = (unsigned int)v2;
    goto LABEL_16;
  }
  v16 = *((unsigned __int16 *)v10 + 2);
  String.Buffer = (wchar_t *)v33;
  *(_DWORD *)&String.Length = 11141120;
  if ( RtlLCIDToCultureName(v16, &String) )
    goto LABEL_11;
  inited = -1073741595;
LABEL_17:
  if ( inited < 0 )
    return (unsigned int)inited;
LABEL_18:
  *(_DWORD *)&String.Length = 1310720;
  String.Buffer = (wchar_t *)(a1 + 44);
  return (unsigned int)RtlIntegerToUnicodeString(v2, 0x10u, &String);
}
