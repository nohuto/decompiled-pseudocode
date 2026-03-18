/*
 * XREFs of ViMakeVerifierSettings @ 0x1408358A0
 * Callers:
 *     VfTriageSystem @ 0x140812D24 (VfTriageSystem.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     VfInitSetVerifyDriverTargets @ 0x140835640 (VfInitSetVerifyDriverTargets.c)
 */

NTSTATUS __fastcall ViMakeVerifierSettings(unsigned int *a1, unsigned int *a2)
{
  const wchar_t *v2; // rsi
  void *v4; // rbx
  unsigned int v5; // edx
  int v6; // ebp

  VfVerifyMode = 1;
  v2 = L"*";
  MmVerifyDriverLevel = a1[1];
  v4 = 0LL;
  v5 = *a1;
  v6 = 0;
  if ( *a1 >= 0x80000 )
  {
    v4 = a1 + 2;
LABEL_5:
    VfInitSetVerifyDriverTargets(v4, v5 >> 19);
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: target drivers are `%ws'.\n", v4);
    goto LABEL_7;
  }
  if ( a2 )
  {
    v5 = *a2;
    v4 = a2 + 2;
    goto LABEL_5;
  }
  v6 = 1;
  VfInitSetVerifyDriverTargets((void *)L"*", 4uLL);
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: all drivers will be targetted.\n");
LABEL_7:
  VerifierTriageActionTaken = 1;
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: system will enable verification features %X.\n", a1[1]);
  if ( !v6 )
    v2 = (const wchar_t *)v4;
  return RtlStringCbCopyW(ViVerifyTargets, 0x200uLL, v2);
}
