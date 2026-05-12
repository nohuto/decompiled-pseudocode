/*
 * XREFs of StorEtwEnableAdapter @ 0x1C001A57C
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C00195D8 (RaidAdapterStartMiniport.c)
 *     McGenControlCallbackV2 @ 0x1C001B5D0 (McGenControlCallbackV2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorEtwEnableAdapter(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v4; // rax
  void (__fastcall *v5)(__int64, __int64); // rax

  v2 = a2;
  if ( !a1 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a1 + 528);
  if ( !v4 )
    return 3221225485LL;
  v5 = *(void (__fastcall **)(__int64, __int64))(v4 + 176);
  if ( !v5 )
    return 3221225659LL;
  if ( (*(_BYTE *)(a1 + 110) & 1) != (_BYTE)a2 )
  {
    v5(*(_QWORD *)(a1 + 536) + 16LL, a2);
    *(_BYTE *)(a1 + 110) ^= (v2 ^ *(_BYTE *)(a1 + 110)) & 1;
  }
  return 0LL;
}
