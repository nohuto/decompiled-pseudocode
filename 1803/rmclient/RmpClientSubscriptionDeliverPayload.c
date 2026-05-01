/*
 * XREFs of RmpClientSubscriptionDeliverPayload @ 0x1800055F0
 * Callers:
 *     HampIpcChannelWnfCallback @ 0x180005340 (HampIpcChannelWnfCallback.c)
 *     RmpClientWnfMessageQueueWorker @ 0x1800056F0 (RmpClientWnfMessageQueueWorker.c)
 * Callees:
 *     memset_0 @ 0x180007B70 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpClientSubscriptionDeliverPayload(__int64 a1, __int64 a2, int *a3)
{
  int *v5; // rdx
  void (__fastcall *v6)(int *); // rax
  int v7; // ecx
  void (__fastcall *v8)(int *); // rax
  int v9; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+38h] [rbp-30h]
  int v13; // [rsp+40h] [rbp-28h]

  if ( a3 )
  {
    v5 = a3;
  }
  else
  {
    memset_0(&v9, 0, 0x38uLL);
    v7 = *(_DWORD *)(a2 + 56);
    v9 = v7;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        memset_0(&v10, 0, 0x30uLL);
        v10 = *(_QWORD *)(a2 + 64);
        v11 = *(_QWORD *)(a2 + 48);
        v12 = *(_QWORD *)(a2 + 80);
        v13 = 0;
      }
    }
    else
    {
      v12 = 0LL;
      v10 = *(_QWORD *)(a2 + 48);
      v11 = *(_QWORD *)(a2 + 80);
    }
    v5 = &v9;
  }
  if ( *v5 )
  {
    if ( *v5 == 1 )
    {
      v6 = *(void (__fastcall **)(int *))(a2 + 72);
      *((_QWORD *)v5 + 3) = *(_QWORD *)(a2 + 80);
      v6(v5 + 2);
    }
  }
  else
  {
    v8 = *(void (__fastcall **)(int *))(a2 + 72);
    *((_QWORD *)v5 + 2) = *(_QWORD *)(a2 + 80);
    v8(v5 + 2);
  }
  if ( !a3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a2);
}
