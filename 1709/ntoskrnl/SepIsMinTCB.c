/*
 * XREFs of SepIsMinTCB @ 0x14053AAD0
 * Callers:
 *     SeQuerySigningPolicy @ 0x14053A940 (SeQuerySigningPolicy.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     SeCompareSigningLevels @ 0x1405040A0 (SeCompareSigningLevels.c)
 *     RtlPrefixUnicodeString @ 0x1405223F0 (RtlPrefixUnicodeString.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x14057E328 (RtlpOpenImageFileOptionsKeyEx.c)
 *     SepIsImageInMinTcbList @ 0x140580228 (SepIsImageInMinTcbList.c)
 *     RtlQueryImageFileKeyOption @ 0x140584CF0 (RtlQueryImageFileKeyOption.c)
 *     SepSetSystemPaths @ 0x1405E63C4 (SepSetSystemPaths.c)
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
  volatile signed __int64 *ServerSiloGlobals; // r14
  const UNICODE_STRING *v13; // r14
  unsigned __int16 Length; // bp
  unsigned int v15; // eax
  unsigned int v16; // esi
  wchar_t *Buffer; // r15
  int v18; // ecx
  unsigned __int64 v20; // rax
  int *v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // r14
  unsigned __int8 v24; // bl
  char *v25; // rdi
  unsigned __int64 v26; // rcx
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int8 *v30; // rdi
  HANDLE v31; // rbx
  int ImageFileKeyOption; // eax
  int v33; // edx
  char v34; // [rsp+50h] [rbp-48h]
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
    if ( !RtlPrefixUnicodeString(&stru_1402B51C8, String2, 1u) && !RtlPrefixUnicodeString(&stru_1402BB8E0, String2, 1u) )
      return (unsigned int)-1073741275;
    Length = 42;
  }
  String1.Length = v16 - Length;
  String1.MaximumLength = v16 - Length;
  v20 = (int)(v16 - (unsigned __int16)(v16 - Length));
  v21 = &dword_140791404;
  v22 = 0LL;
  String1.Buffer = &Buffer[v20 >> 1];
  do
  {
    v23 = (unsigned int)v22;
    if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)&SeMsMinTCBList[3 * v22], 1u)
      && (!*v21 || *v21 == dword_14035E690) )
    {
      v24 = byte_140791402[24 * v22];
      if ( !v24 )
      {
        if ( !a3 )
        {
          v25 = a5;
          *a5 = byte_140791400[24 * v23];
          v27 = byte_140791400[24 * v23 + 1];
          goto LABEL_22;
        }
        v24 = a3;
      }
      v25 = a5;
      v26 = 2 * ((unsigned __int64)v24 >> 4);
      *a5 = *((_BYTE *)SeProtectedMapping + v26);
      v27 = *((_BYTE *)SeProtectedMapping + v26 + 1);
LABEL_22:
      *a6 = v27;
      if ( !(unsigned int)SeCompareSigningLevels() )
        *v25 = a4;
      if ( !(unsigned int)SeCompareSigningLevels() )
        *a6 = a4;
      if ( (v24 & 7) == 1 )
      {
        v30 = a7;
        *a7 = v24;
      }
      else if ( (a2 & 1) != 0 || (v24 & 7) == 2 )
      {
        if ( (*a6 & 0xFu) < 4 )
          *a6 = *v25;
        v30 = a7;
        *a7 = v24 & 0xF2 | *a7 & 8 | 2;
      }
      else
      {
        v30 = a7;
        *a7 = v24;
      }
      if ( !*v30 && !*a6 && (int)RtlpOpenImageFileOptionsKeyEx(&String1, v28, v29, &Handle) >= 0 )
      {
        v31 = Handle;
        ImageFileKeyOption = RtlQueryImageFileKeyOption(Handle, 4, 0LL);
        if ( ImageFileKeyOption >= 0 )
        {
          v33 = v34 & 0xF;
          if ( (unsigned int)(v33 - 2) <= 0xD )
          {
            *a6 = v33;
            *v30 = 8;
          }
        }
        ZwClose(v31);
      }
      return 0;
    }
    v22 = (unsigned int)(v22 + 1);
    v21 += 6;
  }
  while ( (unsigned int)v22 < 0xD );
  v18 = -1073741275;
  if ( (SeCiDebugOptions & 1) == 0 && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    return (unsigned int)SepIsImageInMinTcbList(L" \"", 9LL, &String1, a2, a3, a4, a5, a6, a7);
  return (unsigned int)v18;
}
