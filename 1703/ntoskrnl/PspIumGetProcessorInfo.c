/*
 * XREFs of PspIumGetProcessorInfo @ 0x1406E44E0
 * Callers:
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspIumGetProcessorInfo(__int64 a1)
{
  __int64 result; // rax

  result = KiProcessorBlock[*(unsigned int *)(a1 + 8)];
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(result + 25576);
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
