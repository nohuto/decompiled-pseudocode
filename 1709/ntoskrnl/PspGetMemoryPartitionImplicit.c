/*
 * XREFs of PspGetMemoryPartitionImplicit @ 0x14050D130
 * Callers:
 *     PspGetMemoryPartitionContext @ 0x14053AF58 (PspGetMemoryPartitionContext.c)
 * Callees:
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     PsGetEffectiveServerSilo @ 0x1400D4220 (PsGetEffectiveServerSilo.c)
 *     PspUnlockJobChain @ 0x14050DEA8 (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x14050DF38 (PspLockJobChain.c)
 */

__int64 __fastcall PspGetMemoryPartitionImplicit(__int64 a1, __int16 a2, _QWORD *a3)
{
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // r15
  __int64 EffectiveServerSilo; // rbx
  void *v9; // rcx

  v5 = 0;
  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PspLockJobChain(a1, CurrentThread, 0LL);
  if ( (a2 & 0x400) != 0 )
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(a1);
  }
  else
  {
    for ( EffectiveServerSilo = a1; EffectiveServerSilo; EffectiveServerSilo = *(_QWORD *)(EffectiveServerSilo + 1072) )
    {
      if ( (*(_DWORD *)(EffectiveServerSilo + 256) & 0x1000) == 0
        && ((*(_DWORD *)(EffectiveServerSilo + 256) & 0x800) == 0 || (a2 & 1) == 0) )
      {
        break;
      }
    }
    if ( (a2 & 1) != 0 && EffectiveServerSilo == a1 && (*(_DWORD *)(EffectiveServerSilo + 1304) & 0x40000000) == 0 )
    {
      v5 = -1073741790;
      goto LABEL_11;
    }
  }
  if ( EffectiveServerSilo )
  {
    v9 = *(void **)(EffectiveServerSilo + 1544);
    if ( v9 == (void *)-1LL )
    {
      v5 = -1073740682;
    }
    else
    {
      if ( v9 )
        ObfReferenceObject(v9);
      *a3 = *(_QWORD *)(EffectiveServerSilo + 1544);
    }
  }
LABEL_11:
  PspUnlockJobChain(a1, CurrentThread, 0LL);
  return v5;
}
