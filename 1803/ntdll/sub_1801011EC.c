/*
 * XREFs of sub_1801011EC @ 0x1801011EC
 * Callers:
 *     sub_1800135E0 @ 0x1800135E0 (sub_1800135E0.c)
 *     sub_180013F50 @ 0x180013F50 (sub_180013F50.c)
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
 *     sub_18005B944 @ 0x18005B944 (sub_18005B944.c)
 *     sub_18005BDB4 @ 0x18005BDB4 (sub_18005BDB4.c)
 *     sub_180072588 @ 0x180072588 (sub_180072588.c)
 *     sub_1800EF014 @ 0x1800EF014 (sub_1800EF014.c)
 *     sub_1800FF610 @ 0x1800FF610 (sub_1800FF610.c)
 *     sub_1800FFB1C @ 0x1800FFB1C (sub_1800FFB1C.c)
 *     sub_180100000 @ 0x180100000 (sub_180100000.c)
 *     sub_1801005E4 @ 0x1801005E4 (sub_1801005E4.c)
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 * Callees:
 *     <none>
 */

struct _PEB *sub_1801011EC()
{
  struct _PEB *result; // rax

  result = NtCurrentPeb();
  if ( result->BeingDebugged )
  {
    __debugbreak();
    byte_18015A7F0 = 0;
  }
  return result;
}
