/*
 * XREFs of ?CitpDPGetAppIndex@@YAIPEAU_CIT_PROCESS@@@Z @ 0x1C0053894
 * Callers:
 *     ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C00534C8 (-CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?CitpFileNameFromPath@@YAPEBGPEBG_K@Z @ 0x1C00539AC (-CitpFileNameFromPath@@YAPEBGPEBG_K@Z.c)
 */

__int64 __fastcall CitpDPGetAppIndex(struct _CIT_PROCESS *a1)
{
  unsigned int v1; // esi
  bool v2; // zf
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // edi
  PCUNICODE_STRING *v7; // rbx
  UNICODE_STRING String2; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+50h] [rbp+10h] BYREF

  pImageFileName = 0LL;
  v1 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v2 = *((_DWORD *)a1 + 12) == 1;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  if ( v2 )
  {
    if ( SeLocateProcessImageName(**(PEPROCESS **)a1, &pImageFileName) < 0 )
      goto LABEL_8;
    DestinationString = *pImageFileName;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, *((PCWSTR *)a1 + 2));
  }
  String2.Buffer = (PWSTR)CitpFileNameFromPath(
                            DestinationString.Buffer,
                            (unsigned __int64)DestinationString.Length >> 1);
  String2.Length = 2 * ((signed __int64)(v4 + 2 * v3 - (unsigned __int64)String2.Buffer) >> 1);
  String2.MaximumLength = String2.Length;
  if ( v5 )
    RtlUpcaseUnicodeString(&String2, &String2, 0);
  v6 = 0;
  v7 = (PCUNICODE_STRING *)&unk_1C015AE00;
  while ( !RtlEqualUnicodeString(v7[1], &String2, 0) )
  {
    ++v6;
    v7 += 2;
    if ( v6 >= 0xB )
      goto LABEL_8;
  }
  v1 = *(_DWORD *)v7;
LABEL_8:
  if ( pImageFileName )
    ExFreePoolWithTag(pImageFileName, 0);
  return v1;
}
