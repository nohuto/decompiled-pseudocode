/*
 * XREFs of AslpFileGetClrVersionAttribute @ 0x140773D4C
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x140773354 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     AslStringAnsiToUnicode @ 0x140771F1C (AslStringAnsiToUnicode.c)
 *     AslStringXmlSanitize @ 0x140772194 (AslStringXmlSanitize.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1407726B8 (AslFileMappingEnsure.c)
 *     AslpFileGetClrVersion @ 0x140773B74 (AslpFileGetClrVersion.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x1407741E4 (AslpFileGetFileKindDetailAttribute.c)
 */

__int64 __fastcall AslpFileGetClrVersionAttribute(__int64 a1, __int64 a2)
{
  int ClrVersion; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  wchar_t *v8; // [rsp+30h] [rbp-138h] BYREF
  CHAR v9[256]; // [rsp+40h] [rbp-128h] BYREF

  memset(v9, 0, sizeof(v9));
  v8 = 0LL;
  ClrVersion = AslFileMappingEnsure(a2);
  if ( ClrVersion < 0 )
    goto LABEL_2;
  if ( *(_DWORD *)(a2 + 64) != 6 )
    goto LABEL_4;
  if ( (*(_DWORD *)(a1 + 920) & 1) != 0 || (ClrVersion = AslpFileGetFileKindDetailAttribute(a1, a2), ClrVersion >= 0) )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 912) - 12) > 3 )
    {
LABEL_4:
      *(_DWORD *)(a1 + 888) |= 2u;
      return 0;
    }
    ClrVersion = AslpFileGetClrVersion(v9, a2);
    if ( ClrVersion >= 0 )
    {
      ClrVersion = AslStringAnsiToUnicode(&v8, v9);
      if ( ClrVersion >= 0 )
      {
        ClrVersion = AslStringXmlSanitize(v8);
        if ( ClrVersion >= 0 )
        {
          *(_DWORD *)(a1 + 864) = 4;
          v6 = -1LL;
          do
            ++v6;
          while ( *(_WORD *)(v5 + 2 * v6) );
          *(_DWORD *)(a1 + 888) |= 5u;
          *(_QWORD *)(a1 + 872) = v6;
          *(_QWORD *)(a1 + 880) = v5;
          return 0;
        }
      }
    }
  }
LABEL_2:
  AslLogCallPrintf(1LL);
  return (unsigned int)ClrVersion;
}
