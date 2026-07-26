/*
 * XREFs of ?ndisCountSetBits64@@YAK_K@Z @ 0x1C0076BEC
 * Callers:
 *     ?ndisPDPcwQueueDepthCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C0076F40 (-ndisPDPcwQueueDepthCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 *     ?ndisPDPcwUtilizationCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C0077110 (-ndisPDPcwUtilizationCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCountSetBits64(__int64 a1)
{
  __int64 result; // rax

  for ( result = 0LL; a1; a1 &= a1 - 1 )
    result = (unsigned int)(result + 1);
  return result;
}
