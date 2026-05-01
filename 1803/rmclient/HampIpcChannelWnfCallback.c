/*
 * XREFs of HampIpcChannelWnfCallback @ 0x180005340
 * Callers:
 *     <none>
 * Callees:
 *     HampIpcChannelObjectComparePayloadForTree @ 0x180005570 (HampIpcChannelObjectComparePayloadForTree.c)
 *     RmpClientSubscriptionDeliverPayload @ 0x1800055F0 (RmpClientSubscriptionDeliverPayload.c)
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampIpcChannelWnfCallback(__int64 a1, __int64 a2, __int64 a3)
{
  DWORD CurrentThreadId; // eax
  _QWORD **v6; // rsi
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  void (__fastcall *v10)(_QWORD, _QWORD, _QWORD); // rax
  _QWORD *v11; // rbx
  void (__fastcall *v12)(_QWORD *); // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  int v20; // esi
  int v21; // eax
  unsigned __int64 v22; // rax
  __int64 (__fastcall *v23)(__int64, unsigned __int64, __int64); // rax
  _QWORD v24[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+38h] [rbp-50h]
  __int64 v27; // [rsp+40h] [rbp-48h]
  __int64 v28; // [rsp+48h] [rbp-40h]
  __int64 v29; // [rsp+50h] [rbp-38h]
  __int64 v30; // [rsp+58h] [rbp-30h]

  RtlAcquireSRWLockExclusive(a1 + 8, a2, a3);
  CurrentThreadId = GetCurrentThreadId();
  v6 = (_QWORD **)(a1 + 40);
  while ( 1 )
  {
    *(_DWORD *)(a1 + 16) = CurrentThreadId;
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    v8 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    *v7 = 0LL;
    v7[1] = 0LL;
    *(_DWORD *)(a1 + 16) = 0;
    RtlReleaseSRWLockExclusive(a1 + 8);
    v10 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 56);
    v11 = v7 - 3;
    if ( (char *)v10 == (char *)&HampConnectionDeliverPayload )
    {
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v24[0] = v11[6];
      v24[1] = v11[7];
      v12 = *(void (__fastcall **)(_QWORD *))(a1 + 80);
      LODWORD(v25) = 3;
      v12(v24);
      v11[6] = -1LL;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
    }
    else if ( (char *)v10 == (char *)RmpClientSubscriptionDeliverPayload )
    {
      RmpClientSubscriptionDeliverPayload(a1, v11, 0LL);
    }
    else
    {
      v10(a1, v11, 0LL);
    }
    RtlAcquireSRWLockExclusive(a1 + 8, v13, v14);
    CurrentThreadId = GetCurrentThreadId();
  }
  *(_DWORD *)(a1 + 16) = 0;
  result = RtlReleaseSRWLockExclusive(a1 + 8);
  if ( a2 )
  {
    RtlAcquireSRWLockExclusive(a1 + 8, v16, v17);
    *(_DWORD *)(a1 + 16) = GetCurrentThreadId();
    v18 = *(_QWORD *)(a1 + 32);
    v19 = *(_QWORD *)(a1 + 24);
    if ( (v18 & 1) != 0 )
    {
      if ( v19 )
        v19 ^= a1 + 24;
      else
        v19 = 0LL;
    }
    v20 = v18 & 1;
    while ( v19 )
    {
      v21 = HampIpcChannelObjectComparePayloadForTree(a2, v19);
      if ( v21 >= 0 )
      {
        if ( v21 <= 0 )
          break;
        v22 = *(_QWORD *)(v19 + 8);
      }
      else
      {
        v22 = *(_QWORD *)v19;
      }
      if ( v20 && v22 )
        v19 ^= v22;
      else
        v19 = v22;
    }
    *(_DWORD *)(a1 + 16) = 0;
    result = RtlReleaseSRWLockExclusive(a1 + 8);
    if ( v19 )
    {
      v23 = *(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(a1 + 56);
      if ( (char *)v23 == (char *)&HampConnectionDeliverPayload )
      {
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(v19 + 56);
        return (*(__int64 (__fastcall **)(__int64))(a1 + 80))(a2);
      }
      else if ( v23 == RmpClientSubscriptionDeliverPayload )
      {
        return RmpClientSubscriptionDeliverPayload(a1, v19, a2);
      }
      else
      {
        return v23(a1, v19, a2);
      }
    }
  }
  return result;
}
