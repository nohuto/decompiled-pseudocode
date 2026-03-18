/*
 * XREFs of IopUpdateWriteTransferCount @ 0x140022DF0
 * Callers:
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 * Callees:
 *     IopProcessUpdateTransferCount @ 0x140022E24 (IopProcessUpdateTransferCount.c)
 */

__int64 __fastcall IopUpdateWriteTransferCount(unsigned int a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = IopProcessUpdateTransferCount(a2, a1, 1480LL, 1240LL);
  __addgsqword(0x2EF0u, v3);
  return result;
}
