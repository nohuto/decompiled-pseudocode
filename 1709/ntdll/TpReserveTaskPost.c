/*
 * XREFs of TpReserveTaskPost @ 0x180011898
 * Callers:
 *     RtlQueueWorkItem @ 0x1800113D0 (RtlQueueWorkItem.c)
 * Callees:
 *     TppPoolpReferenceGlobalPool @ 0x180035C94 (TppPoolpReferenceGlobalPool.c)
 *     TppGetCurrentThreadNumaNode @ 0x180036CF8 (TppGetCurrentThreadNumaNode.c)
 */

__int64 __fastcall TpReserveTaskPost(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  _RTL_SRWLOCK *v5; // rdx
  __int64 *v6; // rcx
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v3 = 0;
  if ( a1 )
  {
    _InterlockedIncrement(a1);
LABEL_6:
    TppGetCurrentThreadNumaNode(v8, a2 + 8, a2 + 12);
    return (unsigned int)v3;
  }
  if ( a3 && (*(_BYTE *)(a3 + 56) & 2) != 0 )
  {
    v5 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
    v6 = &TppPoolpSerializedPool;
  }
  else
  {
    v5 = &TppPoolpGlobalPoolLock;
    v6 = (__int64 *)&TppPoolpGlobalPool;
  }
  v3 = TppPoolpReferenceGlobalPool(v6, v5, &v8);
  if ( v3 >= 0 )
    goto LABEL_6;
  return (unsigned int)v3;
}
