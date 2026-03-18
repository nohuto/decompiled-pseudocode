/*
 * XREFs of HvResetLogFileStatusAll @ 0x14045DEE8
 * Callers:
 *     HvInitializeHive @ 0x140439E6C (HvInitializeHive.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     HvSyncHive @ 0x14066CBA0 (HvSyncHive.c)
 * Callees:
 *     HvpLogTypeToLogArrayIndex @ 0x1404D3C0C (HvpLogTypeToLogArrayIndex.c)
 */

__int64 __fastcall HvResetLogFileStatusAll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // r8

  if ( *(_DWORD *)(a1 + 148) == 1 )
  {
    result = HvpLogTypeToLogArrayIndex(1LL, a2, a1, a4);
  }
  else
  {
    v4 = HvpLogTypeToLogArrayIndex(4LL, a2, a1, a4);
    *(_BYTE *)(v4 + v5 + 172) = 0;
    result = HvpLogTypeToLogArrayIndex(5LL, v6, v5, v7);
  }
  *(_BYTE *)((unsigned int)result + v9 + 172) = 0;
  return result;
}
