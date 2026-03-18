/*
 * XREFs of ?_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C00356A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C0064BB8 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C0064C1C (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptEnableThunk(_DWORD *SyncContext)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  __int16 v4; // ax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  int v7; // esi
  unsigned __int8 result; // al
  __int64 v9; // rdx
  __int16 v10; // ax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx

  v1 = *(_QWORD *)SyncContext;
  if ( *(_BYTE *)(*(_QWORD *)SyncContext + 258LL) )
  {
    FxInterrupt::AcquireLock((FxInterrupt *)v1);
    v9 = *(_QWORD *)(v1 + 96);
    v10 = *(_WORD *)(v9 + 10);
    v11 = v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v10 )
      v11 = 0LL;
    v12 = v1 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v1 + 10) )
      v12 = 0LL;
    v7 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(v1 + 312))(v12, v11);
    FxInterrupt::ReleaseLock((FxInterrupt *)v1);
  }
  else
  {
    v3 = *(_QWORD *)(v1 + 96);
    v4 = *(_WORD *)(v3 + 10);
    v5 = v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v4 )
      v5 = 0LL;
    v6 = v1 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v1 + 10) )
      v6 = 0LL;
    v7 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(v1 + 312))(v6, v5);
  }
  result = 1;
  SyncContext[2] = v7;
  return result;
}
