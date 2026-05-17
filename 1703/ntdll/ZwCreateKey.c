/*
 * XREFs of ZwCreateKey @ 0x1800A56A0
 * Callers:
 *     sub_180004DBC @ 0x180004DBC (sub_180004DBC.c)
 *     sub_180056CCC @ 0x180056CCC (sub_180056CCC.c)
 *     RtlInitializeRXact @ 0x18008E7F0 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008EA60 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     sub_1800EDDC4 @ 0x1800EDDC4 (sub_1800EDDC4.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 *     RtlpNtCreateKey @ 0x1800FD940 (RtlpNtCreateKey.c)
 *     sub_18010B774 @ 0x18010B774 (sub_18010B774.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateKey()
{
  __int64 result; // rax

  result = 29LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
