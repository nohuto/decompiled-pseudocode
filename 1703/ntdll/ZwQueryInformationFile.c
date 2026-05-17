/*
 * XREFs of ZwQueryInformationFile @ 0x1800A5520
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D0E0 (LdrVerifyImageMatchesChecksumEx.c)
 *     sub_1800E2828 @ 0x1800E2828 (sub_1800E2828.c)
 *     sub_1800E34E4 @ 0x1800E34E4 (sub_1800E34E4.c)
 *     sub_1800F5294 @ 0x1800F5294 (sub_1800F5294.c)
 *     RtlIsPlaceholderFileHandle @ 0x1800F83E0 (RtlIsPlaceholderFileHandle.c)
 *     sub_18010D3AC @ 0x18010D3AC (sub_18010D3AC.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryInformationFile()
{
  __int64 result; // rax

  result = 17LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
