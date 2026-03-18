/*
 * XREFs of ExCheckSingleFilter @ 0x14017DA94
 * Callers:
 *     EtwTracePool @ 0x14017D8C0 (EtwTracePool.c)
 *     EtwTraceObjectOperation @ 0x1402537B4 (EtwTraceObjectOperation.c)
 *     ExpUseSpecialPool @ 0x14025B194 (ExpUseSpecialPool.c)
 *     EtwTraceDuplicateHandle @ 0x14070A7F8 (EtwTraceDuplicateHandle.c)
 *     EtwTraceObject @ 0x14070B18C (EtwTraceObject.c)
 *     EtwpTraceHandle @ 0x14070C11C (EtwpTraceHandle.c)
 *     EtwpObjectHandleEnumCallback @ 0x140710550 (EtwpObjectHandleEnumCallback.c)
 *     ViFaultsIsTagPresentInList @ 0x1407765F4 (ViFaultsIsTagPresentInList.c)
 *     ViFaultsIsTagTarget @ 0x14077663C (ViFaultsIsTagTarget.c)
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
