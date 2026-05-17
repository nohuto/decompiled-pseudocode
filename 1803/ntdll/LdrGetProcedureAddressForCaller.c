/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x18001F0D0
 * Callers:
 *     LdrGetProcedureAddressEx @ 0x1800560C0 (LdrGetProcedureAddressEx.c)
 *     CsrClientConnectToServer @ 0x1800597A0 (CsrClientConnectToServer.c)
 *     sub_18007BD78 @ 0x18007BD78 (sub_18007BD78.c)
 *     LdrGetProcedureAddress @ 0x180080AC0 (LdrGetProcedureAddress.c)
 *     sub_180081A8C @ 0x180081A8C (sub_180081A8C.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D1D00 (RtlWow64LogMessageInEventLogger.c)
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 *     sub_1800D4C00 @ 0x1800D4C00 (sub_1800D4C00.c)
 *     sub_1800D5A4C @ 0x1800D5A4C (sub_1800D5A4C.c)
 * Callees:
 *     sub_1800105FC @ 0x1800105FC (sub_1800105FC.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     sub_18001EE04 @ 0x18001EE04 (sub_18001EE04.c)
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18001F704 @ 0x18001F704 (sub_18001F704.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180042450 @ 0x180042450 (sub_180042450.c)
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 *     sub_180047B2C @ 0x180047B2C (sub_180047B2C.c)
 *     sub_18004FB50 @ 0x18004FB50 (sub_18004FB50.c)
 *     sub_180050068 @ 0x180050068 (sub_180050068.c)
 *     sub_180054D18 @ 0x180054D18 (sub_180054D18.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800C9DEC @ 0x1800C9DEC (sub_1800C9DEC.c)
 *     sub_1800D3C0C @ 0x1800D3C0C (sub_1800D3C0C.c)
 */

__int64 __fastcall LdrGetProcedureAddressForCaller(
        unsigned __int64 a1,
        const void **a2,
        int a3,
        _QWORD *a4,
        char a5,
        __int64 a6)
{
  bool v6; // zf
  int v9; // esi
  size_t v10; // r14
  unsigned int v11; // edi
  char *Heap; // r12
  __int64 *v14; // r13
  __int64 *v15; // rax
  __int64 *v16; // rdi
  int v17; // edi
  int v18; // ebx
  __int64 v19; // r14
  char v20; // al
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ecx
  unsigned int v26; // r15d
  __int64 v27; // rcx
  __int64 v28; // rbx
  char *v29; // rbx
  char *v30; // rax
  char *v31; // rbx
  __int64 v32; // [rsp+20h] [rbp-E0h]
  char v33; // [rsp+30h] [rbp-D0h]
  char v34[7]; // [rsp+31h] [rbp-CFh] BYREF
  char *v35; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+40h] [rbp-C0h]
  int v37; // [rsp+44h] [rbp-BCh]
  int v38; // [rsp+48h] [rbp-B8h]
  char v39[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B0h]
  char *v41; // [rsp+58h] [rbp-A8h] BYREF
  char v42[8]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v43; // [rsp+68h] [rbp-98h]
  char v44; // [rsp+70h] [rbp-90h] BYREF
  int v45; // [rsp+170h] [rbp+70h]

  v6 = (a5 & 1) == 0;
  v45 = a5 & 1;
  v40 = a6;
  v9 = 9;
  v43 = a4;
  v37 = a3;
  v35 = 0LL;
  v33 = 0;
  if ( v6 || (v38 = 6, (HANDLE)qword_1801564D0 != NtCurrentTeb()->ClientId.UniqueThread) )
    v38 = 9;
  if ( a2 )
  {
    v10 = *(unsigned __int16 *)a2;
    v11 = v10 + 1;
    if ( *((unsigned __int16 *)a2 + 1) < (unsigned int)(v10 + 1) || (Heap = (char *)a2[1], Heap[v10]) )
    {
      if ( v11 <= 0x80 )
      {
        Heap = &v44;
      }
      else
      {
        Heap = (char *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C294 + 1572864, v11);
        if ( !Heap )
          return 3221225626LL;
        v33 = 1;
      }
      memmove(Heap, a2[1], v10);
      Heap[(unsigned int)v10] = 0;
    }
  }
  else
  {
    Heap = 0LL;
  }
  v14 = 0LL;
  v15 = sub_18001EE04(a1, 1);
  v16 = v15;
  if ( v15 )
  {
    v18 = *((_DWORD *)v15 + 15);
    RtlLeaveCriticalSection((__int64)(v15 + 2));
    if ( v18 == 2 )
    {
      v14 = v16;
      v17 = 0;
    }
    else
    {
      sub_1800C9DEC(v16);
      v17 = -1073741515;
    }
  }
  else
  {
    v17 = -1073741515;
  }
  if ( v17 < 0 )
  {
    while ( 1 )
    {
      v19 = 0LL;
      if ( a1 )
      {
        if ( a1 == qword_18015C350 )
        {
          v19 = qword_18015C348;
          v36 = *(_DWORD *)(*(_QWORD *)(qword_18015C348 + 152) + 56LL);
        }
        else
        {
          RtlAcquireSRWLockExclusive(&qword_18015D070);
          v21 = qword_18015D228;
          if ( (qword_18015D230 & 1) != 0 )
          {
            if ( qword_18015D228 )
              v21 = (unsigned __int64)&qword_18015D228 ^ qword_18015D228;
            else
              v21 = 0LL;
          }
          while ( v21 )
          {
            v22 = *(_QWORD *)(v21 - 152);
            if ( a1 < v22 )
            {
              v23 = *(_QWORD *)v21;
            }
            else
            {
              if ( a1 <= v22 )
              {
                v24 = *(_QWORD *)(v21 - 48);
                v19 = v21 - 200;
                if ( *(_DWORD *)(v24 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v24 - 56LL) & 0x20) == 0 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v19 + 276));
                  v24 = *(_QWORD *)(v19 + 152);
                }
                v36 = *(_DWORD *)(v24 + 56);
                break;
              }
              v23 = *(_QWORD *)(v21 + 8);
            }
            if ( (qword_18015D230 & 1) != 0 && v23 )
              v21 ^= v23;
            else
              v21 = v23;
          }
          RtlReleaseSRWLockExclusive(&qword_18015D070);
        }
      }
      v25 = -1073741515;
      if ( v19 )
        v25 = 0;
      v17 = v25;
      if ( !v19 )
        break;
      v9 = v36;
      if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 || v36 >= v38 )
      {
        v20 = 1;
        goto LABEL_51;
      }
      sub_18001F5FC(v19);
      sub_1800435B4(0LL);
      sub_180047B2C();
    }
    v26 = v37;
    goto LABEL_75;
  }
  v19 = v14[13];
  v20 = 3;
LABEL_51:
  v26 = v37;
  if ( !v19 )
  {
LABEL_75:
    if ( v14 && v17 >= 0 )
      v35 += *(_QWORD *)(v19 + 184) - *(_QWORD *)(v19 + 48);
    goto LABEL_78;
  }
  v17 = sub_1800105FC(v19, Heap, v37, v20, &v35);
  if ( v17 >= 0 )
  {
    if ( v9 == 7
      && !v45
      && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0
      && (HANDLE)qword_1801564D0 != NtCurrentTeb()->ClientId.UniqueThread )
    {
      v27 = *(_QWORD *)(v19 + 152);
      v34[0] = 0;
      v17 = sub_180054D18(v27, 0LL, v34);
    }
    if ( v17 >= 0 )
    {
      if ( !v14 )
      {
        v28 = v40;
        if ( byte_18016F299 )
          sub_1800D3C0C(v40, *(_QWORD *)(v19 + 48), (_DWORD)v35, 0, (__int64)&v35);
        if ( byte_18015CFB4 )
        {
          v41 = 0LL;
          v32 = v28;
          v29 = v35;
          ((void (__fastcall *)(char **, __int64, char *, _QWORD, __int64))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                                                   qword_18016F1F0,
                                                                                                   64
                                                                                                 - (MEMORY[0x7FFE0330] & 0x3Fu))))(
            &v41,
            v19,
            v35,
            0LL,
            v32);
          if ( v41 )
            v29 = v41;
          v35 = v29;
        }
      }
    }
    else
    {
      v35 = 0LL;
    }
  }
  if ( v17 == -1073741515 || v17 == -1073741502 )
    v17 = -1073741702;
  if ( v14 )
  {
    sub_1800C9DEC(v14);
    goto LABEL_75;
  }
  sub_18001F5FC(v19);
LABEL_78:
  if ( v17 == -1073741702 )
  {
    v30 = (char *)v26;
    v17 = (Heap != 0LL) - 1073741512;
    if ( Heap )
      v30 = Heap;
    Heap = v30;
    sub_180042450(0LL, v30, (unsigned int)v17);
  }
  if ( v33 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  if ( !dword_18015C290 && v17 >= 0 )
  {
    if ( (unsigned int)sub_18001F704() )
    {
      v31 = v35;
      if ( (unsigned int)sub_180050068(v35, v39) != 1 && (v39[0] & 0x10) != 0 )
      {
        v17 = sub_18004FB50(v31, 4LL, v42);
        if ( v17 < 0 )
          __fastfail(0x2Eu);
      }
    }
  }
  *v43 = v35;
  return (unsigned int)v17;
}
