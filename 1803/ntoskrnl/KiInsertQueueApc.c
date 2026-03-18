/*
 * XREFs of KiInsertQueueApc @ 0x140043A70
 * Callers:
 *     KiSchedulerApc @ 0x140041440 (KiSchedulerApc.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400439A8 (KiInsertDeferredPreemptionApc.c)
 *     KeRequestTerminationThread @ 0x140043C6C (KeRequestTerminationThread.c)
 *     KeInsertQueueApc @ 0x140044AB0 (KeInsertQueueApc.c)
 *     KiSuspendThread @ 0x140044BA8 (KiSuspendThread.c)
 *     KeTryToInsertQueueApc @ 0x140245940 (KeTryToInsertQueueApc.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiInsertQueueApc(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // r8
  char v4; // al
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *result; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rdx
  __int64 v11; // rdx
  _QWORD *v12; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(a1 + 80) && *(_BYTE *)(v1 + 586) )
  {
    v2 = 600LL;
  }
  else
  {
    *(_BYTE *)(a1 + 80) = *(_BYTE *)(v1 + 586);
    v2 = 152LL;
  }
  v3 = v2 + v1;
  v4 = *(_BYTE *)(a1 + 81);
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( v4 && *(void (__fastcall __noreturn **)())(a1 + 32) == KiSchedulerApcTerminate )
    {
      *(_BYTE *)(v1 + 194) = 1;
      v8 = (_QWORD *)(a1 + 16);
      v9 = v3 + 16LL * v4;
      result = *(_QWORD **)v9;
      if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
        __fastfail(3u);
      *v8 = result;
      v8[1] = v9;
      result[1] = v8;
      *(_QWORD *)v9 = v8;
    }
    else
    {
      v5 = (_QWORD *)(a1 + 16);
      v6 = v3 + 16LL * v4;
      result = *(_QWORD **)(v6 + 8);
      if ( *result != v6 )
        __fastfail(3u);
      *v5 = v6;
      v5[1] = result;
      *result = v5;
      *(_QWORD *)(v6 + 8) = v5;
    }
  }
  else
  {
    v10 = (_QWORD *)(v3 + 16LL * v4);
    for ( result = (_QWORD *)v10[1]; result != v10 && result[4]; result = (_QWORD *)result[1] )
      ;
    v11 = *result;
    v12 = (_QWORD *)(a1 + 16);
    if ( *(_QWORD **)(*result + 8LL) != result )
      __fastfail(3u);
    *v12 = v11;
    v12[1] = result;
    *(_QWORD *)(v11 + 8) = v12;
    *result = v12;
  }
  return result;
}
