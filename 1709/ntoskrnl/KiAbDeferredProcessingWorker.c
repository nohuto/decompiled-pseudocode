/*
 * XREFs of KiAbDeferredProcessingWorker @ 0x1400A79A0
 * Callers:
 *     <none>
 * Callees:
 *     KiAbProcessThreadLocks @ 0x1400A7650 (KiAbProcessThreadLocks.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiAbPropagateBoosts @ 0x1400A86D0 (KiAbPropagateBoosts.c)
 */

void __fastcall KiAbDeferredProcessingWorker(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        _QWORD *SystemArgument1,
        PVOID SystemArgument2)
{
  char *v4; // rbp
  __int64 *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdi
  signed __int32 v9[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = (char *)(SystemArgument1 + 3215);
  v6 = SystemArgument1 + 3214;
  while ( 1 )
  {
    if ( !*v6 )
    {
      KiAbPropagateBoosts(v4, v6, &v10, SystemArgument2);
      if ( !*v6 )
        break;
    }
    v8 = *v6;
    if ( *v6 )
      *v6 = *(_QWORD *)v8;
    *(_QWORD *)v8 = 1LL;
    _InterlockedOr(v9, 0);
    if ( *(_BYTE *)(v8 + 39) )
      KiAbProcessThreadLocks(v8 - 1384, 0, 0, 1, (__int64)&v10, (__int64)v4, 0LL);
    _InterlockedDecrement16((volatile signed __int16 *)(v8 + 36));
  }
  SystemArgument1[3220] = 0LL;
  KiReadyDeferredReadyList(SystemArgument1, &v10, v7, SystemArgument2);
}
