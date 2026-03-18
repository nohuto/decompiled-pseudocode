/*
 * XREFs of HvResetDirtyData @ 0x14049926C
 * Callers:
 *     HvStoreModifiedData @ 0x140499C58 (HvStoreModifiedData.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 * Callees:
 *     RtlClearAllBits @ 0x140007490 (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x140513C80 (HvpResetPageProtection.c)
 */

__int64 __fastcall HvResetDirtyData(ULONG_PTR a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 96) )
  {
    HvpResetPageProtection(a1);
    RtlClearAllBits((PRTL_BITMAP)(a1 + 88));
    result = (unsigned int)_InterlockedExchangeAdd(&CmpDirtySectorCount, -*(_DWORD *)(a1 + 104));
    *(_DWORD *)(a1 + 104) = 0;
  }
  return result;
}
