/*
 * XREFs of RmpClientSubscriptionWnfCallback @ 0x180005F40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800077B0 (__security_check_cookie.c)
 *     RmpClientCallbackGenerateLastMessage @ 0x180007D8C (RmpClientCallbackGenerateLastMessage.c)
 *     RmpClientSubscriptionDeliverPayload @ 0x180007E28 (RmpClientSubscriptionDeliverPayload.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpClientSubscriptionWnfCallback(__int64 a1, __int64 a2, __int64 a3)
{
  DWORD CurrentThreadId; // eax
  __int64 *v6; // r14
  __int64 v7; // rcx
  bool v8; // zf
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r10
  unsigned __int8 *v13; // rax
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // r14d
  __int64 v17; // rbx
  __int64 v18; // r11
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 result; // rax
  void (__fastcall *v22)(__int64); // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  _QWORD *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  __int64 v33; // [rsp+20h] [rbp-98h]
  _BYTE v34[56]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v35; // [rsp+78h] [rbp-40h] BYREF
  __int64 v36; // [rsp+80h] [rbp-38h]

  RtlAcquireSRWLockExclusive(a1 + 8, a2, a3);
  CurrentThreadId = GetCurrentThreadId();
  v6 = (__int64 *)(a1 + 40);
  while ( 1 )
  {
    *(_DWORD *)(a1 + 16) = CurrentThreadId;
    v7 = a1 + 8;
    v8 = *v6 == (_QWORD)v6;
    *(_DWORD *)(a1 + 16) = 0;
    if ( v8 )
      break;
    v28 = *v6;
    RtlReleaseSRWLockExclusive(v7);
    RmpClientCallbackGenerateLastMessage(v28 - 16, v34);
    RmpClientSubscriptionDeliverPayload(a1, v28 - 16, v34);
    RtlAcquireSRWLockExclusive(a1 + 8, v29, v30);
    CurrentThreadId = GetCurrentThreadId();
  }
  RtlReleaseSRWLockExclusive(v7);
  v8 = *(_DWORD *)a2 == 1;
  v36 = 0LL;
  if ( v8 )
  {
    v11 = *(_QWORD *)(a2 + 16);
    LODWORD(v36) = 1;
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 8);
    LODWORD(v36) = 0;
  }
  v35 = v11;
  RtlAcquireSRWLockExclusive(a1 + 8, v9, v10);
  *(_DWORD *)(a1 + 16) = GetCurrentThreadId();
  v12 = 314159LL;
  v13 = (unsigned __int8 *)&v35;
  v14 = 2LL;
  do
  {
    v15 = *v13;
    v13 += 8;
    v12 = *(v13 - 1)
        + 37
        * (*(v13 - 2)
         + 37
         * (*(v13 - 3)
          + 37 * (*(v13 - 4) + 37 * (*(v13 - 5) + 37 * (*(v13 - 6) + 37 * (*(v13 - 7) + 37 * (v15 + 37 * v12)))))));
    --v14;
  }
  while ( v14 );
  v16 = *(_DWORD *)(a1 + 28);
  v17 = 0LL;
  v18 = -1LL << (*(_BYTE *)(a1 + 28) & 0x1F);
  v19 = v18 & v12;
LABEL_8:
  if ( v17 )
    goto LABEL_11;
  if ( v16 >= 0x20 )
  {
    v17 = *(_QWORD *)(a1 + 32)
        + 8LL
        * ((37
          * (BYTE6(v19)
           + 37
           * (BYTE5(v19)
            + 37
            * (BYTE4(v19)
             + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))
          + HIBYTE(v19)) & ((v16 >> 5) - 1));
LABEL_11:
    while ( 1 )
    {
      v17 = *(_QWORD *)v17;
      if ( (v17 & 1) != 0 )
        break;
      if ( v19 == (v18 & *(_QWORD *)(v17 + 8)) )
      {
        v20 = v35 - *(_QWORD *)(v17 + 32);
        if ( v35 == *(_QWORD *)(v17 + 32) )
          v20 = v36 - *(_QWORD *)(v17 + 40);
        if ( v20 )
          goto LABEL_8;
        if ( !v17 )
          break;
        goto LABEL_17;
      }
    }
  }
  v17 = 0LL;
LABEL_17:
  *(_DWORD *)(a1 + 16) = 0;
  result = RtlReleaseSRWLockExclusive(a1 + 8);
  if ( v17 )
  {
    v22 = *(void (__fastcall **)(__int64))(v17 + 48);
    v23 = *(_QWORD *)(v17 + 56);
    if ( *(_DWORD *)a2 == 1 )
    {
      *(_QWORD *)(a2 + 24) = v23;
      v22(a2 + 8);
      result = *(_DWORD *)(a2 + 32) == 0;
      if ( *(_DWORD *)(a2 + 32) )
        return result;
    }
    else
    {
      *(_QWORD *)(a2 + 16) = v23;
      result = ((__int64 (__fastcall *)(__int64))v22)(a2 + 8);
      if ( *(_DWORD *)(a2 + 24) )
        return result;
    }
    RtlAcquireSRWLockExclusive(a1 + 8, v24, v25);
    *(_DWORD *)(a1 + 16) = GetCurrentThreadId();
    if ( *(_QWORD *)(v17 + 32) != -1LL )
    {
      v33 = *(_QWORD *)(v17 + 8) & (-1LL << (*(_DWORD *)(a1 + 28) & 0x1F));
      v26 = (_QWORD *)(*(_QWORD *)(a1 + 32)
                     + 8LL
                     * ((37
                       * (BYTE6(v33)
                        + 37
                        * (BYTE5(v33)
                         + 37
                         * (BYTE4(v33)
                          + 37
                          * (BYTE3(v33) + 37 * (BYTE2(v33) + 37 * (BYTE1(v33) + 37 * ((unsigned __int8)v33 + 11623883)))))))
                       + HIBYTE(v33)) & (unsigned int)((*(_DWORD *)(a1 + 28) >> 5) - 1)));
      if ( (*(_QWORD *)v17 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v26 = (_QWORD *)(*(_QWORD *)(a1 + 32)
                       + 8LL
                       * ((37
                         * (BYTE6(v33)
                          + 37
                          * (BYTE5(v33)
                           + 37
                           * (BYTE4(v33)
                            + 37
                            * (BYTE3(v33)
                             + 37 * (BYTE2(v33) + 37 * (BYTE1(v33) + 37 * ((unsigned __int8)v33 + 11623883)))))))
                         + HIBYTE(v33)) & (unsigned int)((*(_DWORD *)(a1 + 28) >> 5) - 1)));
      while ( (*v26 & 1) == 0 )
      {
        if ( *v26 == v17 )
        {
          *v26 = *(_QWORD *)v17;
          --*(_DWORD *)(a1 + 24);
          *(_QWORD *)v17 |= 0x8000000000000002uLL;
          break;
        }
        v26 = (_QWORD *)*v26;
      }
      v27 = v17 + 16;
      if ( *(_QWORD *)(v17 + 16) )
      {
        v31 = *(_QWORD *)v27;
        v32 = *(_QWORD **)(v17 + 24);
        if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 || *v32 != v27 )
          __fastfail(3u);
        *v32 = v31;
        *(_QWORD *)(v31 + 8) = v32;
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v17);
    *(_DWORD *)(a1 + 16) = 0;
    return RtlReleaseSRWLockExclusive(a1 + 8);
  }
  return result;
}
