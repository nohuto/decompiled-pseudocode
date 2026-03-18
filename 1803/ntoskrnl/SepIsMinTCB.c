/*
 * XREFs of SepIsMinTCB @ 0x1404F4270
 * Callers:
 *     SeQuerySigningPolicy @ 0x1404F40E0 (SeQuerySigningPolicy.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     SeCompareSigningLevels @ 0x1404F1880 (SeCompareSigningLevels.c)
 *     RtlPrefixUnicodeString @ 0x1405059D0 (RtlPrefixUnicodeString.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x14056CE78 (RtlpOpenImageFileOptionsKeyEx.c)
 *     SepIsImageInMinTcbList @ 0x14056EA44 (SepIsImageInMinTcbList.c)
 *     RtlQueryImageFileKeyOption @ 0x140574600 (RtlQueryImageFileKeyOption.c)
 *     SepSetSystemPaths @ 0x14064C744 (SepSetSystemPaths.c)
 */

__int64 __fastcall SepIsMinTCB(
        PCUNICODE_STRING String2,
        unsigned int a2,
        unsigned __int8 a3,
        char a4,
        char *a5,
        char *a6,
        unsigned __int8 *a7)
{
  __int64 CurrentServerSilo; // rax
  volatile signed __int64 *ServerSiloGlobals; // rsi
  const UNICODE_STRING *v13; // rsi
  unsigned __int16 Length; // r14
  unsigned int v15; // eax
  unsigned int v16; // ebp
  wchar_t *Buffer; // r15
  int v18; // ecx
  int *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned __int8 v23; // di
  char *v24; // rsi
  unsigned __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int8 v29; // di
  HANDLE v30; // rdi
  int ImageFileKeyOption; // eax
  int v32; // edx
  char v33; // [rsp+50h] [rbp-48h]
  HANDLE Handle; // [rsp+58h] [rbp-40h] BYREF
  UNICODE_STRING String1; // [rsp+60h] [rbp-38h] BYREF

  CurrentServerSilo = PsGetCurrentServerSilo();
  ServerSiloGlobals = (volatile signed __int64 *)PsGetServerSiloGlobals(CurrentServerSilo);
  if ( !_InterlockedCompareExchange64(ServerSiloGlobals + 96, 0LL, 0LL) )
  {
    v18 = SepSetSystemPaths(ServerSiloGlobals + 92);
    if ( v18 < 0 )
      return (unsigned int)v18;
  }
  if ( !String2 )
    return (unsigned int)-1073741275;
  v13 = (const UNICODE_STRING *)*((_QWORD *)ServerSiloGlobals + 96);
  Length = v13->Length;
  v15 = v13->Length < 0x2Au ? Length : 42;
  v16 = String2->Length;
  if ( v16 <= v15 )
    return (unsigned int)-1073741275;
  Buffer = String2->Buffer;
  if ( Buffer[1] == 63 )
  {
    if ( !RtlPrefixUnicodeString(v13, String2, 1u) && !RtlPrefixUnicodeString(v13 + 1, String2, 1u) )
      return (unsigned int)-1073741275;
  }
  else
  {
    if ( !RtlPrefixUnicodeString(&stru_1402ED0B8, String2, 1u) && !RtlPrefixUnicodeString(&stru_1402F3BB0, String2, 1u) )
      return (unsigned int)-1073741275;
    Length = 42;
  }
  v20 = &dword_1407FDDF4;
  String1.Length = v16 - Length;
  String1.MaximumLength = v16 - Length;
  v21 = 0LL;
  String1.Buffer = &Buffer[(unsigned __int64)(int)(v16 - (unsigned __int16)(v16 - Length)) >> 1];
  do
  {
    if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)&SeMsMinTCBList[3 * v21], 1u)
      && (!*v20 || *v20 == dword_1403A1C50) )
    {
      v22 = 24 * v21;
      v23 = byte_1407FDDF0[24 * v21 + 2];
      if ( v23 )
        goto LABEL_21;
      if ( a3 )
        v23 = a3;
      if ( v23 )
      {
LABEL_21:
        v24 = a5;
        v25 = 2 * ((unsigned __int64)v23 >> 4);
        *a5 = *((_BYTE *)&SeProtectedMapping + v25);
        v26 = *((_BYTE *)&SeProtectedMapping + v25 + 1);
      }
      else
      {
        v24 = a5;
        *a5 = byte_1407FDDF0[v22];
        v26 = byte_1407FDDF0[v22 + 1];
      }
      *a6 = v26;
      if ( !(unsigned int)SeCompareSigningLevels() )
        *v24 = a4;
      if ( !(unsigned int)SeCompareSigningLevels() )
        *a6 = a4;
      if ( (v23 & 7) != 1 && ((a2 & 1) != 0 || (v23 & 7) == 2) )
      {
        if ( (*a6 & 0xFu) < 4 )
          *a6 = *v24;
        v29 = (v23 ^ *a7) & 0xF ^ v23;
        *a7 = v29;
        v23 = v29 & 0xF8 | 2;
      }
      *a7 = v23;
      if ( !v23 && !*a6 && (int)RtlpOpenImageFileOptionsKeyEx(&String1, v27, v28, &Handle) >= 0 )
      {
        v30 = Handle;
        ImageFileKeyOption = RtlQueryImageFileKeyOption(Handle, 4, 0LL);
        if ( ImageFileKeyOption >= 0 )
        {
          v32 = v33 & 0xF;
          if ( (unsigned int)(v32 - 2) <= 0xD )
          {
            *a6 = v32;
            *a7 = 8;
          }
        }
        ZwClose(v30);
      }
      return 0;
    }
    v21 = (unsigned int)(v21 + 1);
    v20 += 6;
  }
  while ( (unsigned int)v21 < 0xE );
  v18 = -1073741275;
  if ( (SeCiDebugOptions & 1) == 0 && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    return (unsigned int)SepIsImageInMinTcbList(L" \"", 9LL, &String1, a2, a3, a4, a5, a6, a7);
  return (unsigned int)v18;
}
