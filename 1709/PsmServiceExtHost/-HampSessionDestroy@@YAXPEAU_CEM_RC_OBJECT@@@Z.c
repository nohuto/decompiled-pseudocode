/*
 * XREFs of ?HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180048FB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     CemRcObjectCleanup @ 0x1800492B8 (CemRcObjectCleanup.c)
 */

void __fastcall HampSessionDestroy(struct _CEM_RC_OBJECT *a1)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)a1 + 6);
  if ( v2 )
  {
    if ( *((_QWORD *)a1 + 7) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 160LL))(v2, *((unsigned int *)a1 + 16));
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 7) + 16LL))(*((_QWORD *)a1 + 7));
      *((_QWORD *)a1 + 7) = 0LL;
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 6) + 16LL))(*((_QWORD *)a1 + 6));
    *((_QWORD *)a1 + 6) = 0LL;
  }
  CemRcObjectCleanup(a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
