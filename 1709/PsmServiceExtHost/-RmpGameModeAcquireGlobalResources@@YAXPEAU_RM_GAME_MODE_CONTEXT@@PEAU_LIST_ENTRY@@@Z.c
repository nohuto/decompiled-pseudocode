/*
 * XREFs of ?RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x1800382CC
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E050 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpGameModeAcquireGlobalResources(struct _RM_GAME_MODE_CONTEXT *a1, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rbp
  unsigned int v4; // esi
  _BYTE *v5; // rdi
  __int64 (__fastcall *v6)(struct _RM_GAME_MODE_CONTEXT *, struct _LIST_ENTRY **); // rax
  int v7; // eax

  Flink = a2->Flink;
  if ( !LODWORD(a2->Flink[1].Flink) )
  {
    *((_DWORD *)a1 + 20) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 72);
    v4 = 0;
    v5 = &unk_180051350;
    do
    {
      v6 = (__int64 (__fastcall *)(struct _RM_GAME_MODE_CONTEXT *, struct _LIST_ENTRY **))*((_QWORD *)v5 - 4);
      if ( v6 )
      {
        if ( *v5 )
        {
          v7 = v6(a1, &Flink[-5].Blink);
          if ( v7 >= 0 && v7 != 255 )
            *((_DWORD *)a1 + 32) |= 1 << v4;
        }
      }
      ++v4;
      v5 += 40;
    }
    while ( v4 < 4 );
    RtlAcquireSRWLockExclusive((char *)a1 + 72);
    *((_DWORD *)a1 + 20) = GetCurrentThreadId();
  }
}
