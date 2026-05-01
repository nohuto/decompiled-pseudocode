/*
 * XREFs of RmpClientSubscriptionDeliverPayload @ 0x180004E30
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180008068 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

char __fastcall RmpClientSubscriptionDeliverPayload(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v5; // rdx
  int v6; // eax
  __int64 (__fastcall *v7)(__int64 *); // rax
  unsigned int v8; // ecx
  __int64 (__fastcall *v9)(__int64 *); // rax
  __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  __int64 v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+48h] [rbp-20h]
  __int64 v17; // [rsp+50h] [rbp-18h]

  if ( a3 )
  {
    v5 = a3;
    goto LABEL_3;
  }
  v8 = *(_DWORD *)(a2 + 56);
  v11 = v8;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( !v8 )
  {
    v14 = 0LL;
    v12 = *(_QWORD *)(a2 + 48);
    v13 = *(_QWORD *)(a2 + 80);
LABEL_10:
    v5 = &v11;
    goto LABEL_3;
  }
  if ( v8 != 1 )
    goto LABEL_10;
  memset_0(&v12, 0, 0x30uLL);
  v5 = &v11;
  v12 = *(_QWORD *)(a2 + 64);
  v13 = *(_QWORD *)(a2 + 48);
  v14 = *(_QWORD *)(a2 + 80);
  LODWORD(v15) = 0;
LABEL_3:
  v6 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 )
  {
    if ( v6 == 1 )
    {
      v7 = *(__int64 (__fastcall **)(__int64 *))(a2 + 72);
      v5[3] = *(_QWORD *)(a2 + 80);
      LOBYTE(v6) = v7(v5 + 1);
    }
  }
  else
  {
    v9 = *(__int64 (__fastcall **)(__int64 *))(a2 + 72);
    v5[2] = *(_QWORD *)(a2 + 80);
    LOBYTE(v6) = v9(v5 + 1);
  }
  if ( !a3 )
    LOBYTE(v6) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a2);
  return v6;
}
