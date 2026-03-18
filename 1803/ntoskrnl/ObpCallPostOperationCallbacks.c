/*
 * XREFs of ObpCallPostOperationCallbacks @ 0x140759E00
 * Callers:
 *     ObpCallPreOperationCallbacks @ 0x1404CE670 (ObpCallPreOperationCallbacks.c)
 *     ObpPostInterceptHandleCreate @ 0x140759EA4 (ObpPostInterceptHandleCreate.c)
 *     ObpPostInterceptHandleDuplicate @ 0x140759F64 (ObpPostInterceptHandleDuplicate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCallPostOperationCallbacks(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rax
  __int64 v6; // rbx

  while ( (_QWORD *)*a2 != a2 )
  {
    v4 = (_QWORD *)a2[1];
    if ( (_QWORD *)*v4 != a2 || (v5 = (_QWORD *)v4[1], (_QWORD *)*v5 != v4) )
      __fastfail(3u);
    a2[1] = v5;
    *v5 = a2;
    v6 = v4[2];
    *(_QWORD *)(a1 + 24) = v4[3];
    (*(void (__fastcall **)(_QWORD, __int64))(v6 + 48))(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 8LL), a1);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v6 + 56));
    ExFreePoolWithTag(v4, 0);
  }
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x6243624Fu);
  KeLeaveCriticalRegion();
  return 0LL;
}
