/*
 * XREFs of ExCheckSingleFilter @ 0x1401A70B0
 * Callers:
 *     EtwTracePool @ 0x1401A6EE0 (EtwTracePool.c)
 *     EtwTraceObjectOperation @ 0x1402AED98 (EtwTraceObjectOperation.c)
 *     ExpUseSpecialPool @ 0x1402B91EC (ExpUseSpecialPool.c)
 *     EtwTraceDuplicateHandle @ 0x1407A75F0 (EtwTraceDuplicateHandle.c)
 *     EtwTraceObject @ 0x1407A7F9C (EtwTraceObject.c)
 *     EtwpTraceHandle @ 0x1407A8E90 (EtwpTraceHandle.c)
 *     EtwpObjectHandleEnumCallback @ 0x1407AEEA0 (EtwpObjectHandleEnumCallback.c)
 *     ViFaultsIsTagPresentInList @ 0x140825650 (ViFaultsIsTagPresentInList.c)
 *     ViFaultsIsTagTarget @ 0x140825698 (ViFaultsIsTagTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExCheckSingleFilter(int a1, int a2)
{
  unsigned int v2; // ecx
  __int64 v3; // rax
  char v4; // dl
  int v6; // [rsp+8h] [rbp+8h]
  int v7; // [rsp+10h] [rbp+10h]

  v6 = a1;
  v2 = 0;
  v3 = 0LL;
  v7 = a2;
  while ( 1 )
  {
    v4 = *((_BYTE *)&v7 + v3);
    if ( v4 == 42 )
      return 1LL;
    if ( v4 != 63 && *((_BYTE *)&v6 + v3) != v4 )
      break;
    ++v2;
    ++v3;
    if ( v2 >= 4 )
      return 1LL;
  }
  return 0LL;
}
