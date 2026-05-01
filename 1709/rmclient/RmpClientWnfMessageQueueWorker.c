/*
 * XREFs of RmpClientWnfMessageQueueWorker @ 0x180004810
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180008068 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpClientWnfMessageQueueWorker(__int64 a1, __int64 a2)
{
  char **v3; // r13
  int v4; // eax
  int v6; // eax
  char *v7; // r15
  char *v8; // rax
  __int64 (__fastcall *v9)(); // rax
  __int64 v10; // rsi
  _DWORD *v11; // r14
  DWORD v12; // eax
  _QWORD **v13; // rbx
  _QWORD *v14; // rax
  unsigned __int64 v15; // rbx
  int v16; // r8d
  __int64 (__fastcall *v17)(__int64, __int64); // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  int v20; // eax
  unsigned __int64 v21; // rax
  void (__fastcall *v22)(__int64, unsigned __int64, char *); // rax
  void (__fastcall *v23)(char *); // rax
  __int64 v24; // rbx
  DWORD CurrentThreadId; // eax
  _QWORD **v26; // r14
  _QWORD *v27; // rax
  _QWORD *v28; // rsi
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  void *v31; // rax
  int v32; // ecx
  _QWORD *v33; // r15
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  void (__fastcall *v36)(_QWORD, _QWORD, _QWORD); // rax
  int v37; // ecx
  void (__fastcall *v38)(char *); // rax
  _QWORD *v39; // rdx
  int v40; // [rsp+20h] [rbp-39h] BYREF
  __int64 v41; // [rsp+28h] [rbp-31h] BYREF
  __int64 v42; // [rsp+30h] [rbp-29h]
  __int64 v43; // [rsp+38h] [rbp-21h]
  int v44; // [rsp+40h] [rbp-19h]
  int v45; // [rsp+58h] [rbp-1h] BYREF
  __int64 v46; // [rsp+60h] [rbp+7h] BYREF
  __int64 v47; // [rsp+68h] [rbp+Fh]
  __int64 v48; // [rsp+70h] [rbp+17h]
  int v49; // [rsp+78h] [rbp+1Fh]
  __int64 v50; // [rsp+C8h] [rbp+6Fh]
  int v51; // [rsp+C8h] [rbp+6Fh]

  RtlAcquireSRWLockExclusive(a2 + 32);
  v3 = (char **)(a2 + 16);
  while ( 1 )
  {
    if ( *v3 == (char *)v3 )
    {
      v4 = *(_DWORD *)(a2 + 64);
      if ( (v4 & 2) == 0 )
        break;
    }
    v6 = *(_DWORD *)(a2 + 64);
    if ( (v6 & 2) != 0 )
    {
      *(_DWORD *)(a2 + 64) = v6 & 0xFFFFFFFD;
      v7 = 0LL;
    }
    else
    {
      v7 = *v3;
      if ( *((char ***)*v3 + 1) != v3 || (v8 = *(char **)v7, *(char **)(*(_QWORD *)v7 + 8LL) != v7) )
        __fastfail(3u);
      *v3 = v8;
      *((_QWORD *)v8 + 1) = v3;
    }
    RtlReleaseSRWLockExclusive(a2 + 32);
    v9 = *(__int64 (__fastcall **)())(a2 + 40);
    if ( !v7 )
    {
      v24 = *(_QWORD *)(a2 + 8);
      if ( v9 != HampIpcChannelWnfCallback )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v9)(*(_QWORD *)(a2 + 8), 0LL, 0LL);
        goto LABEL_33;
      }
      RtlAcquireSRWLockExclusive(v24 + 8);
      CurrentThreadId = GetCurrentThreadId();
      v26 = (_QWORD **)(v24 + 40);
LABEL_37:
      *(_DWORD *)(v24 + 16) = CurrentThreadId;
      v27 = *v26;
      if ( *v26 == v26 )
      {
        *(_DWORD *)(v24 + 16) = 0;
        RtlReleaseSRWLockExclusive(v24 + 8);
        RtlAcquireSRWLockExclusive(a2 + 32);
        continue;
      }
      v33 = v27 - 3;
      v34 = *v27;
      if ( *(_QWORD **)(*v27 + 8LL) != v27 || (v35 = (_QWORD *)v27[1], (_QWORD *)*v35 != v27) )
        __fastfail(3u);
      *v35 = v34;
      *(_QWORD *)(v34 + 8) = v35;
      *v27 = 0LL;
      v27[1] = 0LL;
      *(_DWORD *)(v24 + 16) = 0;
      RtlReleaseSRWLockExclusive(v24 + 8);
      v36 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v24 + 56);
      if ( (char *)v36 == (char *)&RmpClientSubscriptionDeliverPayload )
      {
        memset_0(&v40, 0, 0x38uLL);
        v37 = *((_DWORD *)v33 + 14);
        v40 = v37;
        if ( v37 )
        {
          if ( v37 == 1 )
          {
            memset_0(&v41, 0, 0x30uLL);
            v37 = v40;
            v41 = v33[8];
            v42 = v33[6];
            v43 = v33[10];
            v44 = 0;
          }
        }
        else
        {
          v43 = 0LL;
          v41 = v33[6];
          v42 = v33[10];
        }
        if ( v37 )
        {
          if ( v37 == 1 )
          {
            v43 = v33[10];
            goto LABEL_61;
          }
        }
        else
        {
          v42 = v33[10];
LABEL_61:
          ((void (__fastcall *)(__int64 *))v33[9])(&v41);
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v33);
      }
      else
      {
        v36(v24, v33, 0LL);
      }
      RtlAcquireSRWLockExclusive(v24 + 8);
      CurrentThreadId = GetCurrentThreadId();
      goto LABEL_37;
    }
    v10 = *(_QWORD *)(a2 + 8);
    v11 = v7 + 20;
    v50 = v10;
    if ( v9 != HampIpcChannelWnfCallback )
    {
      ((void (__fastcall *)(__int64, char *, _QWORD))v9)(v10, v7 + 20, *((unsigned int *)v7 + 4));
      goto LABEL_32;
    }
    RtlAcquireSRWLockExclusive(v10 + 8);
    v12 = GetCurrentThreadId();
    v13 = (_QWORD **)(v10 + 40);
    while ( 1 )
    {
      *(_DWORD *)(v10 + 16) = v12;
      v14 = *v13;
      if ( *v13 == v13 )
        break;
      v28 = v14 - 3;
      v29 = *v14;
      if ( *(_QWORD **)(*v14 + 8LL) != v14 || (v30 = (_QWORD *)v14[1], (_QWORD *)*v30 != v14) )
        __fastfail(3u);
      *v30 = v29;
      *(_QWORD *)(v29 + 8) = v30;
      *v14 = 0LL;
      v14[1] = 0LL;
      *(_DWORD *)(v50 + 16) = 0;
      RtlReleaseSRWLockExclusive(v50 + 8);
      v31 = *(void **)(v50 + 56);
      if ( v31 == &RmpClientSubscriptionDeliverPayload )
      {
        memset_0(&v45, 0, 0x38uLL);
        v32 = *((_DWORD *)v28 + 14);
        v45 = v32;
        if ( v32 )
        {
          if ( v32 == 1 )
          {
            memset_0(&v46, 0, 0x30uLL);
            v32 = v45;
            v46 = v28[8];
            v47 = v28[6];
            v48 = v28[10];
            v49 = 0;
          }
        }
        else
        {
          v48 = 0LL;
          v46 = v28[6];
          v47 = v28[10];
        }
        if ( v32 )
        {
          if ( v32 == 1 )
          {
            v48 = v28[10];
            goto LABEL_50;
          }
        }
        else
        {
          v47 = v28[10];
LABEL_50:
          ((void (__fastcall *)(__int64 *))v28[9])(&v46);
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v28);
        v10 = v50;
        goto LABEL_52;
      }
      v39 = v28;
      v10 = v50;
      ((void (__fastcall *)(__int64, _QWORD *, _QWORD))v31)(v50, v39, 0LL);
LABEL_52:
      RtlAcquireSRWLockExclusive(v10 + 8);
      v12 = GetCurrentThreadId();
    }
    *(_DWORD *)(v10 + 16) = 0;
    RtlReleaseSRWLockExclusive(v10 + 8);
    if ( v7 != (char *)-20LL )
    {
      RtlAcquireSRWLockExclusive(v10 + 8);
      *(_DWORD *)(v10 + 16) = GetCurrentThreadId();
      v15 = *(_QWORD *)(v10 + 24);
      v16 = *(_BYTE *)(v10 + 32) & 1;
      v51 = v16;
      while ( v15 )
      {
        v17 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v15 + 40) + 72LL);
        if ( v17 == RmpClientCallbackCompareToPayload )
        {
          if ( *v11 )
            v18 = *(_QWORD *)(v7 + 36);
          else
            v18 = *(_QWORD *)(v7 + 28);
          v19 = *(_QWORD *)(v15 + 48);
          if ( v18 < v19 )
            v20 = -1;
          else
            v20 = v18 > v19;
        }
        else
        {
          v20 = v17((__int64)(v7 + 20), v15);
          v16 = v51;
        }
        if ( v20 < 0 )
        {
          v21 = *(_QWORD *)v15;
          if ( v16 && v21 )
            goto LABEL_78;
        }
        else
        {
          if ( v20 <= 0 )
            goto LABEL_27;
          v21 = *(_QWORD *)(v15 + 8);
          if ( v16 && v21 )
          {
LABEL_78:
            v15 ^= v21;
            continue;
          }
        }
        v15 = v21;
      }
      v15 = 0LL;
LABEL_27:
      *(_DWORD *)(v10 + 16) = 0;
      RtlReleaseSRWLockExclusive(v10 + 8);
      if ( v15 )
      {
        v22 = *(void (__fastcall **)(__int64, unsigned __int64, char *))(v10 + 56);
        if ( (char *)v22 == (char *)&RmpClientSubscriptionDeliverPayload )
        {
          if ( *v11 )
          {
            if ( *v11 == 1 )
            {
              v23 = *(void (__fastcall **)(char *))(v15 + 72);
              *(_QWORD *)(v7 + 44) = *(_QWORD *)(v15 + 80);
              v23(v7 + 28);
            }
          }
          else
          {
            v38 = *(void (__fastcall **)(char *))(v15 + 72);
            *(_QWORD *)(v7 + 36) = *(_QWORD *)(v15 + 80);
            v38(v7 + 28);
          }
        }
        else
        {
          v22(v10, v15, v7 + 20);
        }
      }
    }
LABEL_32:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
LABEL_33:
    RtlAcquireSRWLockExclusive(a2 + 32);
  }
  *(_DWORD *)(a2 + 64) = v4 & 0xFFFFFFFE;
  return RtlReleaseSRWLockExclusive(a2 + 32);
}
