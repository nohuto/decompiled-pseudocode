/*
 * XREFs of RmpClientWnfMessageQueueWorker @ 0x180004360
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800077B0 (__security_check_cookie.c)
 *     RmpClientCallbackGenerateLastMessage @ 0x180007D8C (RmpClientCallbackGenerateLastMessage.c)
 *     RmpClientSubscriptionDeliverPayload @ 0x180007E28 (RmpClientSubscriptionDeliverPayload.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpClientWnfMessageQueueWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 **v5; // rdi
  __int64 *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 (__fastcall *v10)(); // rax
  __int64 v11; // rsi
  __int64 v12; // rbx
  DWORD CurrentThreadId; // eax
  _QWORD *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r10
  unsigned __int8 *v19; // rax
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rbx
  unsigned int v23; // r12d
  __int64 v24; // r11
  __int64 v25; // r10
  __int64 v26; // rax
  void (__fastcall *v27)(char *); // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned int v34; // r9d
  _QWORD *v35; // rdx
  __int64 v36; // rax
  _QWORD *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rdx
  _QWORD *v41; // rcx
  __int64 v42; // [rsp+48h] [rbp-21h]
  _BYTE v43[56]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v44; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v45; // [rsp+90h] [rbp+27h]

  v3 = a2 + 32;
  RtlAcquireSRWLockExclusive(a2 + 32, a2, a3);
  v5 = (__int64 **)(a2 + 16);
  while ( *v5 != (__int64 *)v5 )
  {
    v6 = *v5;
    v7 = **v5;
    if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
      __fastfail(3u);
    *v5 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v5;
    RtlReleaseSRWLockExclusive(v3);
    v10 = *(__int64 (__fastcall **)())(a2 + 40);
    v11 = *(_QWORD *)(a2 + 8);
    if ( v10 == RmpClientSubscriptionWnfCallback )
    {
      v12 = v11 + 8;
      RtlAcquireSRWLockExclusive(v11 + 8, v8, v9);
      CurrentThreadId = GetCurrentThreadId();
      v14 = (_QWORD *)(v11 + 40);
      while ( 1 )
      {
        *(_DWORD *)(v11 + 16) = CurrentThreadId;
        if ( (_QWORD *)*v14 == v14 )
          break;
        v37 = (_QWORD *)*v14;
        *(_DWORD *)(v11 + 16) = 0;
        RtlReleaseSRWLockExclusive(v11 + 8);
        RmpClientCallbackGenerateLastMessage(v37 - 2, v43);
        RmpClientSubscriptionDeliverPayload(v11, v37 - 2, v43);
        v12 = v11 + 8;
        RtlAcquireSRWLockExclusive(v11 + 8, v38, v39);
        CurrentThreadId = GetCurrentThreadId();
      }
      *(_DWORD *)(v11 + 16) = 0;
      RtlReleaseSRWLockExclusive(v12);
      v5 = (__int64 **)(a2 + 16);
      if ( *((_DWORD *)v6 + 5) == 1 )
      {
        v17 = *(__int64 *)((char *)v6 + 36);
        v45 = 1LL;
      }
      else
      {
        v17 = *(__int64 *)((char *)v6 + 28);
        v45 = 0LL;
      }
      v44 = v17;
      RtlAcquireSRWLockExclusive(v12, v15, v16);
      *(_DWORD *)(v11 + 16) = GetCurrentThreadId();
      v18 = 314159LL;
      v19 = (unsigned __int8 *)&v44;
      v20 = 2LL;
      do
      {
        v21 = *v19;
        v19 += 8;
        v18 = *(v19 - 1)
            + 37
            * (*(v19 - 2)
             + 37
             * (*(v19 - 3)
              + 37 * (*(v19 - 4) + 37 * (*(v19 - 5) + 37 * (*(v19 - 6) + 37 * (*(v19 - 7) + 37 * (v21 + 37 * v18)))))));
        --v20;
      }
      while ( v20 );
      v22 = 0LL;
      v23 = *(_DWORD *)(v11 + 28);
      v24 = -1LL << (*(_BYTE *)(v11 + 28) & 0x1F);
      v25 = v24 & v18;
LABEL_13:
      if ( v22 )
        goto LABEL_16;
      if ( v23 >= 0x20 )
      {
        v22 = *(_QWORD *)(v11 + 32)
            + 8LL
            * ((37
              * (BYTE6(v25)
               + 37
               * (BYTE5(v25)
                + 37
                * (BYTE4(v25)
                 + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
              + HIBYTE(v25)) & ((v23 >> 5) - 1));
LABEL_16:
        while ( 1 )
        {
          v22 = *(_QWORD *)v22;
          if ( (v22 & 1) != 0 )
            break;
          if ( v25 == (v24 & *(_QWORD *)(v22 + 8)) )
          {
            v26 = v44 - *(_QWORD *)(v22 + 32);
            if ( v44 == *(_QWORD *)(v22 + 32) )
              v26 = v45 - *(_QWORD *)(v22 + 40);
            if ( v26 )
              goto LABEL_13;
            if ( !v22 )
              break;
            goto LABEL_22;
          }
        }
      }
      LODWORD(v26) = 0;
      v22 = 0LL;
LABEL_22:
      *(_DWORD *)(v11 + 16) = v26;
      RtlReleaseSRWLockExclusive(v11 + 8);
      if ( v22 )
      {
        v27 = *(void (__fastcall **)(char *))(v22 + 48);
        v28 = *(_QWORD *)(v22 + 56);
        if ( *((_DWORD *)v6 + 5) == 1 )
        {
          *(__int64 *)((char *)v6 + 44) = v28;
          v27((char *)v6 + 28);
          if ( *((_DWORD *)v6 + 13) )
            goto LABEL_25;
        }
        else
        {
          *(__int64 *)((char *)v6 + 36) = v28;
          v27((char *)v6 + 28);
          if ( *((_DWORD *)v6 + 11) )
            goto LABEL_25;
        }
        RtlAcquireSRWLockExclusive(v11 + 8, v29, v30);
        *(_DWORD *)(v11 + 16) = GetCurrentThreadId();
        if ( *(_QWORD *)(v22 + 32) != -1LL )
        {
          v34 = *(_DWORD *)(v11 + 28);
          v42 = *(_QWORD *)(v22 + 8) & (-1LL << (v34 & 0x1F));
          v35 = (_QWORD *)(*(_QWORD *)(v11 + 32)
                         + 8LL
                         * ((37
                           * (BYTE6(v42)
                            + 37
                            * (BYTE5(v42)
                             + 37
                             * (BYTE4(v42)
                              + 37
                              * (BYTE3(v42)
                               + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v42 + 11623883)))))))
                           + HIBYTE(v42)) & ((v34 >> 5) - 1)));
          if ( (*(_QWORD *)v22 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
            v35 = (_QWORD *)(*(_QWORD *)(v11 + 32)
                           + 8LL
                           * ((37
                             * (BYTE6(v42)
                              + 37
                              * (BYTE5(v42)
                               + 37
                               * (BYTE4(v42)
                                + 37
                                * (BYTE3(v42)
                                 + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v42 + 11623883)))))))
                             + HIBYTE(v42)) & ((v34 >> 5) - 1)));
          while ( (*v35 & 1) == 0 )
          {
            if ( *v35 == v22 )
            {
              *v35 = *(_QWORD *)v22;
              --*(_DWORD *)(v11 + 24);
              *(_QWORD *)v22 |= 0x8000000000000002uLL;
              break;
            }
            v35 = (_QWORD *)*v35;
          }
          v36 = v22 + 16;
          if ( *(_QWORD *)(v22 + 16) )
          {
            v40 = *(_QWORD *)v36;
            v41 = *(_QWORD **)(v22 + 24);
            if ( *(_QWORD *)(*(_QWORD *)v36 + 8LL) != v36 || *v41 != v36 )
              __fastfail(3u);
            *v41 = v40;
            *(_QWORD *)(v40 + 8) = v41;
          }
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v22);
        *(_DWORD *)(v11 + 16) = 0;
        RtlReleaseSRWLockExclusive(v11 + 8);
      }
    }
    else
    {
      ((void (__fastcall *)(_QWORD, char *, _QWORD))v10)(
        *(_QWORD *)(a2 + 8),
        (char *)v6 + 20,
        *((unsigned int *)v6 + 4));
    }
LABEL_25:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    v3 = a2 + 32;
    RtlAcquireSRWLockExclusive(a2 + 32, v31, v32);
  }
  *(_BYTE *)(a2 + 64) = 0;
  return RtlReleaseSRWLockExclusive(v3);
}
