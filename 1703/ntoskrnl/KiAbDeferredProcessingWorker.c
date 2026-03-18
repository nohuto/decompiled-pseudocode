/*
 * XREFs of KiAbDeferredProcessingWorker @ 0x14011EA00
 * Callers:
 *     <none>
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiAbPropagateBoosts @ 0x14011EACC (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x14011EB5C (KiAbProcessThreadLocks.c)
 */

void __fastcall KiAbDeferredProcessingWorker(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        _QWORD *SystemArgument1,
        __int64 SystemArgument2)
{
  char *v4; // rbp
  __int64 *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdi
  signed __int32 v9[8]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = (char *)(SystemArgument1 + 3255);
  v6 = SystemArgument1 + 3254;
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
  SystemArgument1[3260] = 0LL;
  KiReadyDeferredReadyList((__int64)SystemArgument1, &v10, v7, SystemArgument2);
}
