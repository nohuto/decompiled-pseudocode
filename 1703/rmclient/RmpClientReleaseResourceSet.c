/*
 * XREFs of RmpClientReleaseResourceSet @ 0x1800052A0
 * Callers:
 *     RmReleaseResourceSetEx @ 0x180005290 (RmReleaseResourceSetEx.c)
 * Callees:
 *     RmpClientCallbackCompareForHashTable @ 0x1800062F0 (RmpClientCallbackCompareForHashTable.c)
 *     __security_check_cookie @ 0x1800077B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180007FF4 (memset_0.c)
 */

__int64 __fastcall RmpClientReleaseResourceSet(__int64 a1, __int64 a2, int a3)
{
  int v4; // r12d
  __int64 *v5; // rsi
  CLIENT_CALL_RETURN v6; // rax
  CLIENT_CALL_RETURN v7; // rdx
  CLIENT_CALL_RETURN v8; // r8
  unsigned int Pointer; // ebx
  unsigned __int8 *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rdi
  unsigned int v14; // r13d
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // r14
  char *Heap; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  _QWORD *v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 *v25; // rdi
  __int64 **v26; // rcx
  __int128 v27; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v28; // [rsp+50h] [rbp-A8h]
  __int128 v29; // [rsp+60h] [rbp-98h]
  __int64 v30; // [rsp+70h] [rbp-88h]
  __int64 v31; // [rsp+80h] [rbp-78h]
  __int64 v32; // [rsp+88h] [rbp-70h]
  CLIENT_CALL_RETURN v33; // [rsp+90h] [rbp-68h]
  _QWORD v34[2]; // [rsp+A0h] [rbp-58h] BYREF

  v32 = a2;
  v4 = 0;
  v5 = (__int64 *)(a1 + 24);
  v31 = a1 + 24;
  v6.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18000F860, 6u, 0LL, *(_QWORD *)(a1 + 16), a2, a3).Pointer;
  Pointer = (unsigned int)v6.Pointer;
  v33.Pointer = v6.Pointer;
  if ( SLODWORD(v6.Simple) >= 0 )
  {
    v34[1] = 0LL;
    v34[0] = a2;
    v4 = 1;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RtlAcquireSRWLockExclusive)(
      v5 + 1,
      (CLIENT_CALL_RETURN)v7.Simple,
      (CLIENT_CALL_RETURN)v8.Simple);
    *((_DWORD *)v5 + 4) = GetCurrentThreadId();
    v10 = (unsigned __int8 *)v34;
    v11 = 314159LL;
    v12 = 2LL;
    do
    {
      v11 = v10[7]
          + 37
          * (v10[6]
           + 37 * (v10[5] + 37 * (v10[4] + 37 * (v10[3] + 37 * (v10[2] + 37 * (v10[1] + 37 * (*v10 + 37 * v11)))))));
      v10 += 8;
      --v12;
    }
    while ( v12 );
    v13 = 0LL;
    v14 = *((_DWORD *)v5 + 7);
    v15 = -1LL << (*((_BYTE *)v5 + 28) & 0x1F);
    v16 = v15 & v11;
LABEL_5:
    if ( v13 )
      goto LABEL_8;
    if ( v14 >= 0x20 )
    {
      v33.Simple = v16;
      v13 = v5[4]
          + 8LL
          * ((37
            * (BYTE6(v16)
             + 37
             * (BYTE5(v16)
              + 37
              * (BYTE4(v16)
               + 37 * (BYTE3(v16) + 37 * (BYTE2(v16) + 37 * (BYTE1(v16) + 37 * ((unsigned __int8)v16 + 11623883)))))))
            + HIBYTE(v16)) & ((v14 >> 5) - 1));
LABEL_8:
      while ( 1 )
      {
        v13 = *(_QWORD *)v13;
        if ( (v13 & 1) != 0 )
          break;
        if ( v16 == (v15 & *(_QWORD *)(v13 + 8)) )
        {
          if ( !(unsigned int)RmpClientCallbackCompareForHashTable(v13, v34) )
            goto LABEL_5;
          if ( v13 )
          {
            memset_0(&v27, 0, 0x38uLL);
            LODWORD(v27) = *(_DWORD *)(v13 + 40);
            if ( (_DWORD)v27 == 1 )
            {
              memset_0((char *)&v27 + 8, 0, 0x30uLL);
              *((_QWORD *)&v27 + 1) = *(_QWORD *)(v13 + 64);
              *(_QWORD *)&v28 = *(_QWORD *)(v13 + 32);
              *((_QWORD *)&v28 + 1) = *(_QWORD *)(v13 + 56);
              LODWORD(v29) = 0;
            }
            else
            {
              *((_QWORD *)&v28 + 1) = 0LL;
              *((_QWORD *)&v27 + 1) = *(_QWORD *)(v13 + 32);
              *(_QWORD *)&v28 = *(_QWORD *)(v13 + 56);
            }
            v17 = *v5;
            Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x4CuLL);
            v21 = Heap;
            if ( Heap )
            {
              *((_DWORD *)Heap + 4) = 56;
              *(_OWORD *)(Heap + 20) = v27;
              *(_OWORD *)(Heap + 36) = v28;
              *(_OWORD *)(Heap + 52) = v29;
              *(_QWORD *)(Heap + 68) = v30;
              RtlAcquireSRWLockExclusive(v17 + 32, v19, v20);
              v22 = (_QWORD *)(v17 + 16);
              v23 = *(_QWORD *)(v17 + 16);
              if ( *(_QWORD *)(v23 + 8) != v17 + 16 )
                __fastfail(3u);
              *v21 = v23;
              v21[1] = v22;
              *(_QWORD *)(v23 + 8) = v21;
              *v22 = v21;
              if ( !*(_BYTE *)(v17 + 64) )
              {
                TpPostWork(*(_QWORD *)(v17 + 56));
                *(_BYTE *)(v17 + 64) = 1;
              }
              RtlReleaseSRWLockExclusive(v17 + 32);
            }
            else
            {
              v25 = (__int64 *)(v13 + 16);
              if ( !*v25 )
              {
                v26 = (__int64 **)v5[6];
                if ( *v26 != v5 + 5 )
                  __fastfail(3u);
                *v25 = (__int64)(v5 + 5);
                v25[1] = (__int64)v26;
                *v26 = v25;
                v5[6] = (__int64)v25;
              }
            }
          }
          break;
        }
      }
    }
    Pointer = 0;
  }
  if ( v4 )
  {
    *((_DWORD *)v5 + 4) = 0;
    RtlReleaseSRWLockExclusive(v5 + 1);
  }
  return Pointer;
}
