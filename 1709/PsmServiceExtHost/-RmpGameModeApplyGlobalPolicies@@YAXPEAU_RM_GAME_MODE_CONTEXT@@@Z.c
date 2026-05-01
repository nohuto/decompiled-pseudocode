/*
 * XREFs of ?RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x1800384D4
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E050 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpGameModeApplyGlobalPolicies(struct _RM_GAME_MODE_CONTEXT *a1)
{
  __int64 v1; // rsi
  unsigned int v3; // ebp
  __int64 (__fastcall **v4)(struct _RM_GAME_MODE_CONTEXT *, struct _RM_GAME_MODE_RECIPIENT_PROCESS *); // rdi
  int v5; // r14d
  int v6; // eax

  v1 = *((_QWORD *)a1 + 11);
  if ( !*(_DWORD *)(v1 + 16) )
  {
    *((_DWORD *)a1 + 20) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 72);
    v3 = 0;
    v4 = off_180051330;
    do
    {
      if ( *((_BYTE *)v4 + 33) )
      {
        v5 = 1 << v3;
        if ( !*v4 || (v5 & *((_DWORD *)a1 + 32)) != 0 )
        {
          v6 = v4[1](a1, (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v1 - 72));
          if ( v6 >= 0 && v6 != 255 )
            *((_DWORD *)a1 + 33) |= v5;
        }
      }
      ++v3;
      v4 += 5;
    }
    while ( v3 < 4 );
    RtlAcquireSRWLockExclusive((char *)a1 + 72);
    *((_DWORD *)a1 + 20) = GetCurrentThreadId();
  }
}
