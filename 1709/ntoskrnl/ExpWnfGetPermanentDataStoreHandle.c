/*
 * XREFs of ExpWnfGetPermanentDataStoreHandle @ 0x14059D7A8
 * Callers:
 *     ExpWnfCreateNameInstance @ 0x1405010B0 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeletePermanentStateData @ 0x140762A7C (ExpWnfDeletePermanentStateData.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1405EFCA0 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 */

__int64 __fastcall ExpWnfGetPermanentDataStoreHandle(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v7; // rax
  __int64 result; // rax
  HANDLE Handle; // [rsp+40h] [rbp-18h]

  v4 = 64LL;
  if ( (unsigned int)(a2 - 2) <= 1 )
    v4 = 72LL;
  v7 = *(_QWORD *)(v4 + a1);
  if ( v7 )
  {
    *a4 = v7;
    return 0LL;
  }
  result = ExpWnfGetPermanentDataStoreHandleByScopeId(*(unsigned int *)(a1 + 16), a2, *(_QWORD *)(a1 + 24));
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + a1), (signed __int64)Handle, 0LL) )
      ZwClose(Handle);
    *a4 = *(_QWORD *)(v4 + a1);
    return 0LL;
  }
  return result;
}
