/*
 * XREFs of SepIsMinTCB @ 0x1405454E0
 * Callers:
 *     SeQuerySigningPolicy @ 0x140545370 (SeQuerySigningPolicy.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     RtlPrefixUnicodeString @ 0x140484490 (RtlPrefixUnicodeString.c)
 *     SepIsImageInMinTcbList @ 0x1404F70A4 (SepIsImageInMinTcbList.c)
 *     SepSetSystemPaths @ 0x1405CE854 (SepSetSystemPaths.c)
 */

__int64 __fastcall SepIsMinTCB(
        PCUNICODE_STRING String2,
        char a2,
        unsigned __int8 a3,
        _BYTE *a4,
        _BYTE *a5,
        unsigned __int8 *a6)
{
  __int64 CurrentServerSilo; // rax
  volatile signed __int64 *ServerSiloGlobals; // rax
  char *v12; // rsi
  const UNICODE_STRING *v13; // r14
  unsigned int v14; // eax
  unsigned __int16 Length; // si
  unsigned int v16; // ebp
  wchar_t *Buffer; // r15
  int IsImageInMinTcbList; // ecx
  UNICODE_STRING v20; // [rsp+40h] [rbp-38h] BYREF

  CurrentServerSilo = PsGetCurrentServerSilo();
  ServerSiloGlobals = (volatile signed __int64 *)PsGetServerSiloGlobals(CurrentServerSilo);
  v12 = (char *)(ServerSiloGlobals + 92);
  if ( !_InterlockedCompareExchange64(ServerSiloGlobals + 96, 0LL, 0LL) )
  {
    IsImageInMinTcbList = SepSetSystemPaths(v12);
    if ( IsImageInMinTcbList < 0 )
      return (unsigned int)IsImageInMinTcbList;
  }
  if ( !String2 )
    return (unsigned int)-1073741275;
  v13 = (const UNICODE_STRING *)*((_QWORD *)v12 + 4);
  v14 = 42;
  Length = v13->Length;
  if ( v13->Length < 0x2Au )
    v14 = Length;
  v16 = String2->Length;
  if ( v16 <= v14 )
    return (unsigned int)-1073741275;
  Buffer = String2->Buffer;
  if ( Buffer[1] == 63 )
  {
    if ( !RtlPrefixUnicodeString(v13, String2, 1u) && !RtlPrefixUnicodeString(v13 + 1, String2, 1u) )
      return (unsigned int)-1073741275;
  }
  else
  {
    if ( !RtlPrefixUnicodeString(&stru_140288550, String2, 1u) && !RtlPrefixUnicodeString(&stru_14028E5D0, String2, 1u) )
      return (unsigned int)-1073741275;
    Length = 42;
  }
  v20.Length = v16 - Length;
  v20.MaximumLength = v16 - Length;
  v20.Buffer = &Buffer[(unsigned __int64)(int)(v16 - (unsigned __int16)(v16 - Length)) >> 1];
  IsImageInMinTcbList = SepIsImageInMinTcbList((__int64)&SeMsMinTCBList, 0xCu, &v20, a2, a3, a4, a5, a6);
  if ( IsImageInMinTcbList < 0
    && (SeCiDebugOptions & 1) == 0
    && (_BYTE)KdDebuggerEnabled
    && !(_BYTE)KdDebuggerNotPresent )
  {
    return (unsigned int)SepIsImageInMinTcbList((__int64)L" \"", 9u, &v20, a2, a3, a4, a5, a6);
  }
  return (unsigned int)IsImageInMinTcbList;
}
