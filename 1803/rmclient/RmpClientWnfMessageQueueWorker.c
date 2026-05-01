/*
 * XREFs of RmpClientWnfMessageQueueWorker @ 0x1800056F0
 * Callers:
 *     <none>
 * Callees:
 *     HampIpcChannelObjectComparePayloadForTree @ 0x180005570 (HampIpcChannelObjectComparePayloadForTree.c)
 *     RmpClientSubscriptionDeliverPayload @ 0x1800055F0 (RmpClientSubscriptionDeliverPayload.c)
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpClientWnfMessageQueueWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int **v5; // r12
  unsigned int *v6; // rcx
  int v7; // eax
  int v8; // edx
  unsigned int *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 (__fastcall *v12)(__int64, __int64, __int64); // rax
  __int64 v13; // rdi
  DWORD v14; // eax
  _QWORD **v15; // r14
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  void (__fastcall *v19)(__int64, __int64, int *); // rax
  _QWORD *v20; // rbx
  void (__fastcall *v21)(_QWORD *); // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rsi
  DWORD CurrentThreadId; // eax
  _QWORD **v31; // rdi
  _QWORD *v32; // rbx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rbx
  int v41; // edi
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  _QWORD v47[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v48; // [rsp+30h] [rbp-58h]
  __int64 v49; // [rsp+38h] [rbp-50h]
  __int64 v50; // [rsp+40h] [rbp-48h]
  __int64 v51; // [rsp+48h] [rbp-40h]
  __int64 v52; // [rsp+50h] [rbp-38h]
  __int64 v53; // [rsp+58h] [rbp-30h]

  v3 = a2 + 32;
  RtlAcquireSRWLockExclusive(a2 + 32, a2, a3);
  v5 = (unsigned int **)(a2 + 16);
  while ( 1 )
  {
    v6 = *v5;
    v7 = *(_DWORD *)(a2 + 64);
    if ( *v5 != (unsigned int *)v5 || (v8 = 0, (v7 & 2) != 0) )
      v8 = 1;
    if ( !v8 )
      break;
    if ( (v7 & 2) != 0 )
    {
      v9 = 0LL;
      *(_DWORD *)(a2 + 64) = v7 & 0xFFFFFFFD;
    }
    else
    {
      if ( *((unsigned int ***)v6 + 1) != v5
        || (v24 = *(unsigned int **)v6, *(unsigned int **)(*(_QWORD *)v6 + 8LL) != v6) )
      {
        __fastfail(3u);
      }
      *v5 = v24;
      v9 = v6;
      *((_QWORD *)v24 + 1) = v5;
    }
    RtlReleaseSRWLockExclusive(v3);
    v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a2 + 40);
    if ( v9 )
    {
      v29 = *(_QWORD *)(a2 + 8);
      if ( (char *)v12 == (char *)HampConnectionDeliverStateChangePayload )
      {
        (*(void (__fastcall **)(unsigned int *, _QWORD))(v29 + 96))(v9 + 5, *(_QWORD *)(v29 + 104));
      }
      else if ( v12 == HampIpcChannelWnfCallback )
      {
        RtlAcquireSRWLockExclusive(v29 + 8, v10, v11);
        CurrentThreadId = GetCurrentThreadId();
        v31 = (_QWORD **)(v29 + 40);
        while ( 1 )
        {
          *(_DWORD *)(v29 + 16) = CurrentThreadId;
          v32 = *v31;
          if ( *v31 == v31 )
            break;
          v33 = *v32;
          if ( *(_QWORD **)(*v32 + 8LL) != v32 || (v34 = (_QWORD *)v32[1], (_QWORD *)*v34 != v32) )
            __fastfail(3u);
          *v34 = v33;
          *(_QWORD *)(v33 + 8) = v34;
          *v32 = 0LL;
          v32[1] = 0LL;
          *(_DWORD *)(v29 + 16) = 0;
          RtlReleaseSRWLockExclusive(v29 + 8);
          (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(v29 + 56))(v29, v32 - 3, 0LL);
          RtlAcquireSRWLockExclusive(v29 + 8, v35, v36);
          CurrentThreadId = GetCurrentThreadId();
        }
        *(_DWORD *)(v29 + 16) = 0;
        RtlReleaseSRWLockExclusive(v29 + 8);
        if ( v9 != (unsigned int *)-20LL )
        {
          RtlAcquireSRWLockExclusive(v29 + 8, v37, v38);
          *(_DWORD *)(v29 + 16) = GetCurrentThreadId();
          v39 = *(_QWORD *)(v29 + 32);
          v40 = *(_QWORD *)(v29 + 24);
          if ( (v39 & 1) != 0 && v40 )
            v40 ^= v29 + 24;
          v41 = v39 & 1;
          while ( v40 )
          {
            v42 = HampIpcChannelObjectComparePayloadForTree((__int64)(v9 + 5), v40);
            if ( v42 >= 0 )
            {
              if ( v42 <= 0 )
                break;
              v43 = *(_QWORD *)(v40 + 8);
            }
            else
            {
              v43 = *(_QWORD *)v40;
            }
            if ( v41 && v43 )
              v40 ^= v43;
            else
              v40 = v43;
          }
          *(_DWORD *)(v29 + 16) = 0;
          RtlReleaseSRWLockExclusive(v29 + 8);
          if ( v40 )
            (*(void (__fastcall **)(__int64, __int64, unsigned int *))(v29 + 56))(v29, v40, v9 + 5);
        }
        v3 = a2 + 32;
      }
      else
      {
        v12(*(_QWORD *)(a2 + 8), (__int64)(v9 + 5), v9[4]);
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      RtlAcquireSRWLockExclusive(v3, v44, v45);
    }
    else
    {
      v13 = *(_QWORD *)(a2 + 8);
      if ( v12 == HampIpcChannelWnfCallback )
      {
        RtlAcquireSRWLockExclusive(v13 + 8, v10, v11);
        v14 = GetCurrentThreadId();
        v15 = (_QWORD **)(v13 + 40);
        while ( 1 )
        {
          *(_DWORD *)(v13 + 16) = v14;
          v16 = *v15;
          if ( *v15 == v15 )
            break;
          v17 = *v16;
          if ( *(_QWORD **)(*v16 + 8LL) != v16 || (v18 = (_QWORD *)v16[1], (_QWORD *)*v18 != v16) )
            __fastfail(3u);
          *v18 = v17;
          *(_QWORD *)(v17 + 8) = v18;
          *v16 = 0LL;
          v16[1] = 0LL;
          *(_DWORD *)(v13 + 16) = 0;
          RtlReleaseSRWLockExclusive(v13 + 8);
          v19 = *(void (__fastcall **)(__int64, __int64, int *))(v13 + 56);
          v20 = v16 - 3;
          if ( (char *)v19 == (char *)&HampConnectionDeliverPayload )
          {
            v48 = 0LL;
            v49 = 0LL;
            v50 = 0LL;
            v51 = 0LL;
            v52 = 0LL;
            v53 = 0LL;
            v47[0] = v20[6];
            v47[1] = v20[7];
            v21 = *(void (__fastcall **)(_QWORD *))(v13 + 80);
            LODWORD(v48) = 3;
            v21(v47);
            v20[6] = -1LL;
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v20);
          }
          else if ( v19 == RmpClientSubscriptionDeliverPayload )
          {
            RmpClientSubscriptionDeliverPayload(v13, (__int64)v20, 0LL);
          }
          else
          {
            v19(v13, (__int64)v20, 0LL);
          }
          RtlAcquireSRWLockExclusive(v13 + 8, v22, v23);
          v14 = GetCurrentThreadId();
        }
        *(_DWORD *)(v13 + 16) = 0;
        RtlReleaseSRWLockExclusive(v13 + 8);
        v3 = a2 + 32;
        RtlAcquireSRWLockExclusive(a2 + 32, v25, v26);
      }
      else
      {
        v12(*(_QWORD *)(a2 + 8), 0LL, 0LL);
        RtlAcquireSRWLockExclusive(v3, v27, v28);
      }
    }
  }
  *(_DWORD *)(a2 + 64) = v7 & 0xFFFFFFFE;
  return RtlReleaseSRWLockExclusive(v3);
}
