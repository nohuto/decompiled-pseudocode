/*
 * XREFs of RmpClientUnregisterActivityHostCallbacks @ 0x180004F20
 * Callers:
 *     RmUnregisterActivityHostCallbacks @ 0x180004F10 (RmUnregisterActivityHostCallbacks.c)
 * Callees:
 *     RmpClientCallbackCompareForHashTable @ 0x1800062F0 (RmpClientCallbackCompareForHashTable.c)
 *     __security_check_cookie @ 0x1800077B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180007FF4 (memset_0.c)
 */

__int64 __fastcall RmpClientUnregisterActivityHostCallbacks(__int64 a1, __int64 a2)
{
  int v3; // r12d
  __int64 *v4; // rsi
  CLIENT_CALL_RETURN v5; // rax
  CLIENT_CALL_RETURN v6; // rdx
  CLIENT_CALL_RETURN v7; // r8
  unsigned int Pointer; // ebx
  unsigned __int8 *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rdi
  unsigned int v13; // r13d
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // r14
  char *Heap; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 *v24; // rdi
  __int64 **v25; // rcx
  __int128 v26; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v27; // [rsp+50h] [rbp-98h]
  __int128 v28; // [rsp+60h] [rbp-88h]
  __int64 v29; // [rsp+70h] [rbp-78h]
  __int64 v30; // [rsp+80h] [rbp-68h]
  __int64 v31; // [rsp+88h] [rbp-60h]
  CLIENT_CALL_RETURN v32; // [rsp+90h] [rbp-58h]
  _QWORD v33[2]; // [rsp+A0h] [rbp-48h] BYREF

  v31 = a2;
  v3 = 0;
  v4 = (__int64 *)(a1 + 24);
  v30 = a1 + 24;
  v5.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18000F860, 3u, 0LL, *(_QWORD *)(a1 + 16), a2).Pointer;
  Pointer = (unsigned int)v5.Pointer;
  v32.Pointer = v5.Pointer;
  if ( SLODWORD(v5.Simple) >= 0 )
  {
    v3 = 1;
    v33[1] = 1LL;
    v33[0] = a2;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RtlAcquireSRWLockExclusive)(
      v4 + 1,
      (CLIENT_CALL_RETURN)v6.Simple,
      (CLIENT_CALL_RETURN)v7.Simple);
    *((_DWORD *)v4 + 4) = GetCurrentThreadId();
    v9 = (unsigned __int8 *)v33;
    v10 = 314159LL;
    v11 = 2LL;
    do
    {
      v10 = v9[7]
          + 37
          * (v9[6] + 37 * (v9[5] + 37 * (v9[4] + 37 * (v9[3] + 37 * (v9[2] + 37 * (v9[1] + 37 * (*v9 + 37 * v10)))))));
      v9 += 8;
      --v11;
    }
    while ( v11 );
    v12 = 0LL;
    v13 = *((_DWORD *)v4 + 7);
    v14 = -1LL << (*((_BYTE *)v4 + 28) & 0x1F);
    v15 = v14 & v10;
LABEL_5:
    if ( v12 )
      goto LABEL_8;
    if ( v13 >= 0x20 )
    {
      v32.Simple = v15;
      v12 = v4[4]
          + 8LL
          * ((37
            * (BYTE6(v15)
             + 37
             * (BYTE5(v15)
              + 37
              * (BYTE4(v15)
               + 37 * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v15 + 11623883)))))))
            + HIBYTE(v15)) & ((v13 >> 5) - 1));
LABEL_8:
      while ( 1 )
      {
        v12 = *(_QWORD *)v12;
        if ( (v12 & 1) != 0 )
          break;
        if ( v15 == (v14 & *(_QWORD *)(v12 + 8)) )
        {
          if ( !(unsigned int)RmpClientCallbackCompareForHashTable(v12, v33) )
            goto LABEL_5;
          if ( v12 )
          {
            memset_0(&v26, 0, 0x38uLL);
            LODWORD(v26) = *(_DWORD *)(v12 + 40);
            if ( (_DWORD)v26 == 1 )
            {
              memset_0((char *)&v26 + 8, 0, 0x30uLL);
              *((_QWORD *)&v26 + 1) = *(_QWORD *)(v12 + 64);
              *(_QWORD *)&v27 = *(_QWORD *)(v12 + 32);
              *((_QWORD *)&v27 + 1) = *(_QWORD *)(v12 + 56);
              LODWORD(v28) = 0;
            }
            else
            {
              *((_QWORD *)&v27 + 1) = 0LL;
              *((_QWORD *)&v26 + 1) = *(_QWORD *)(v12 + 32);
              *(_QWORD *)&v27 = *(_QWORD *)(v12 + 56);
            }
            v16 = *v4;
            Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x4CuLL);
            v20 = Heap;
            if ( Heap )
            {
              *((_DWORD *)Heap + 4) = 56;
              *(_OWORD *)(Heap + 20) = v26;
              *(_OWORD *)(Heap + 36) = v27;
              *(_OWORD *)(Heap + 52) = v28;
              *(_QWORD *)(Heap + 68) = v29;
              RtlAcquireSRWLockExclusive(v16 + 32, v18, v19);
              v21 = (_QWORD *)(v16 + 16);
              v22 = *(_QWORD *)(v16 + 16);
              if ( *(_QWORD *)(v22 + 8) != v16 + 16 )
                __fastfail(3u);
              *v20 = v22;
              v20[1] = v21;
              *(_QWORD *)(v22 + 8) = v20;
              *v21 = v20;
              if ( !*(_BYTE *)(v16 + 64) )
              {
                TpPostWork(*(_QWORD *)(v16 + 56));
                *(_BYTE *)(v16 + 64) = 1;
              }
              RtlReleaseSRWLockExclusive(v16 + 32);
            }
            else
            {
              v24 = (__int64 *)(v12 + 16);
              if ( !*v24 )
              {
                v25 = (__int64 **)v4[6];
                if ( *v25 != v4 + 5 )
                  __fastfail(3u);
                *v24 = (__int64)(v4 + 5);
                v24[1] = (__int64)v25;
                *v25 = v24;
                v4[6] = (__int64)v24;
              }
            }
          }
          break;
        }
      }
    }
    Pointer = 0;
  }
  if ( v3 )
  {
    *((_DWORD *)v4 + 4) = 0;
    RtlReleaseSRWLockExclusive(v4 + 1);
  }
  return Pointer;
}
