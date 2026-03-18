/*
 * XREFs of ?DxgkCddSubscribeWnfStateChange@@YAPEAU_CDD_WNF_CALLBACK_CONTEXT@@P6AJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@ZPEAU_EPROCESS@@1K3@Z @ 0x1C00F9380
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

struct _EX_RUNDOWN_REF *__fastcall DxgkCddSubscribeWnfStateChange(
        int (*a1)(struct _EX_WNF_SUBSCRIPTION *, const struct _WNF_STATE_NAME *, unsigned int, unsigned int, const struct _WNF_TYPE_ID *, void *),
        struct _EPROCESS *a2,
        const struct _WNF_STATE_NAME *a3,
        unsigned int a4,
        void *a5)
{
  struct _EX_RUNDOWN_REF *v9; // rax
  __int64 v10; // rcx
  struct _EX_RUNDOWN_REF *v11; // rbx
  __int64 v12; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rax

  v9 = (struct _EX_RUNDOWN_REF *)operator new(0x28uLL, 0x4B677844u, PagedPool);
  v11 = v9;
  if ( !v9 )
  {
    v12 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v12 + 24) = a5;
    WdLogEvent5_WdLowResource(v12);
    return 0LL;
  }
  v9[2].Count = (ULONG_PTR)a5;
  v9[3].Count = (ULONG_PTR)a2;
  v9[1].Count = (ULONG_PTR)a1;
  ExInitializeRundownProtection(v9 + 4);
  v14 = ExSubscribeWnfStateChange(v11, a3, a4, 0LL, DxgkWnfStateChangeCallback, v11);
  v18 = v14;
  if ( v14 < 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = v18;
    *(_QWORD *)(v19 + 32) = a5;
    WdLogEvent5_WdWarning(v19);
    ExFreePoolWithTag(v11, 0);
    return 0LL;
  }
  return v11;
}
