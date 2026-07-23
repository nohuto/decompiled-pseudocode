/*
 * XREFs of sub_180040650 @ 0x180040650
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x18001F9C0 (RtlCopyUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x1800361F0 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     RtlUpcaseUnicodeChar @ 0x180040920 (RtlUpcaseUnicodeChar.c)
 *     RtlIntegerToUnicodeString @ 0x180040980 (RtlIntegerToUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x180040B10 (RtlUpcaseUnicodeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_180040650(__int64 a1)
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
  WCHAR *v14; // r15
  WCHAR v15; // ax
  LCID v17; // ecx
  __int64 Length; // r8
  unsigned __int8 *v19; // r9
  int v20; // r8d
  int v21; // r8d
  int v22; // r8d
  int v23; // r8d
  unsigned __int64 v24; // r10
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // r8d
  int v28; // r8d
  _UNICODE_STRING String; // [rsp+28h] [rbp-E0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v31[3]; // [rsp+48h] [rbp-C0h] BYREF
  int v32; // [rsp+60h] [rbp-A8h]
  _BYTE v33[176]; // [rsp+68h] [rbp-A0h] BYREF

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
    String.Buffer = (PWCH)v33;
    RtlCopyUnicodeString(&String, &DestinationString);
LABEL_11:
    if ( !v2 )
    {
      v12 = 314159;
      Buffer = String.Buffer;
      v14 = &String.Buffer[(unsigned __int64)String.Length >> 1];
      while ( Buffer < v14 )
      {
        v15 = RtlUpcaseUnicodeChar(*Buffer++);
        v12 = 37 * ((unsigned __int8)v15 + 37 * v12) + HIBYTE(v15);
      }
      v2 = v12;
      goto LABEL_16;
    }
    RtlUpcaseUnicodeString(&String, &String, 0);
    Length = String.Length;
    v19 = (unsigned __int8 *)String.Buffer;
    if ( String.Length >= 8uLL )
    {
      v24 = (unsigned __int64)String.Length >> 3;
      Length = String.Length - 8 * v24;
      do
      {
        v25 = v19[6]
            + 37 * (v19[5] + 37 * (v19[4] + 37 * (v19[3] + 37 * (v19[2] + 37 * (v19[1] + 37 * (*v19 + 37 * v2))))));
        v26 = v19[7];
        v19 += 8;
        v2 = v26 + 37 * v25;
        --v24;
      }
      while ( v24 );
    }
    if ( (unsigned __int64)(Length - 1) > 6 )
      goto LABEL_34;
    v20 = Length - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            v27 = v23 - 1;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( v28 )
              {
                if ( v28 != 1 )
                  goto LABEL_34;
                LODWORD(v2) = *v19++ + 37 * v2;
              }
              LODWORD(v2) = *v19++ + 37 * v2;
            }
            LODWORD(v2) = *v19++ + 37 * v2;
          }
          LODWORD(v2) = *v19++ + 37 * v2;
        }
        LODWORD(v2) = *v19++ + 37 * v2;
      }
      LODWORD(v2) = *v19++ + 37 * v2;
    }
    LODWORD(v2) = *v19 + 37 * v2;
LABEL_34:
    v2 = (unsigned int)v2;
    goto LABEL_16;
  }
  v17 = *((unsigned __int16 *)v10 + 2);
  String.Buffer = (PWCH)v33;
  *(_DWORD *)&String.Length = 11141120;
  if ( RtlLCIDToCultureName(v17, &String) )
    goto LABEL_11;
  inited = -1073741595;
LABEL_17:
  if ( inited < 0 )
    return (unsigned int)inited;
LABEL_18:
  *(_DWORD *)&String.Length = 1310720;
  String.Buffer = (PWCH)(a1 + 44);
  return (unsigned int)RtlIntegerToUnicodeString(v2, 0x10u, &String);
}
