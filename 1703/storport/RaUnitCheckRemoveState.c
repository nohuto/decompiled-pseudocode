/*
 * XREFs of RaUnitCheckRemoveState @ 0x1C00054B4
 * Callers:
 *     RaUnitAcquireRemoveLock @ 0x1C0005080 (RaUnitAcquireRemoveLock.c)
 *     RaUnitDeviceControlIrp @ 0x1C0005164 (RaUnitDeviceControlIrp.c)
 *     RaUnitStartResetIo @ 0x1C003B0F4 (RaUnitStartResetIo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitCheckRemoveState(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 *v3; // rcx
  int v4; // edx

  if ( *(_DWORD *)(a1 + 40) != 5 )
  {
    if ( *(_DWORD *)(a1 + 40) != 6 )
    {
      if ( *(_DWORD *)(a1 + 40) == 7 )
        return RaUnitCheckRemoveStateForDisabled();
      else
        return 0LL;
    }
    return 3221225558LL;
  }
  result = 0LL;
  if ( !a2 )
    return 3221225558LL;
  v3 = *(unsigned __int8 **)(a2 + 184);
  v4 = *v3;
  if ( v4 != 27 && (v4 != 14 || *((_DWORD *)v3 + 6) != 266276) )
    return 3221225558LL;
  return result;
}
