/*
 * XREFs of RtlCreateTagHeap @ 0x18007D190
 * Callers:
 *     CsrClientConnectToServer @ 0x1800597A0 (CsrClientConnectToServer.c)
 *     sub_18007D0E0 @ 0x18007D0E0 (sub_18007D0E0.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800FFE08 @ 0x1800FFE08 (sub_1800FFE08.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_1800377C0 @ 0x1800377C0 (sub_1800377C0.c)
 *     sub_1800EBE38 @ 0x1800EBE38 (sub_1800EBE38.c)
 *     sub_1800FFE08 @ 0x1800FFE08 (sub_1800FFE08.c)
 */

__int64 __fastcall RtlCreateTagHeap(void *Src, int a2, __int64 a3, __int16 *a4)
{
  int v6; // edx
  unsigned int v7; // esi
  int v8; // esi
  int v9; // edx
  __int16 v10; // ax
  __int16 *v11; // rdi
  __int64 v12; // r15
  __int16 *v13; // rax
  __int16 v14; // cx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r13
  unsigned __int64 v18; // r15
  _WORD *v19; // r12
  char v21; // [rsp+20h] [rbp-78h]
  __int64 v22; // [rsp+A0h] [rbp+8h]

  v21 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0LL;
  if ( !qword_18015D750 )
  {
    qword_18015D750 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 672LL);
    if ( !qword_18015D750 )
      return 0LL;
  }
  if ( Src && (*((_DWORD *)Src + 4) == -571548178 || (*((_DWORD *)Src + 29) & 0x1000000) != 0) )
    return 0LL;
  if ( !Src )
  {
LABEL_13:
    v8 = 0;
    v9 = 0;
    v10 = 33;
    v11 = a4;
    if ( *a4 == 33 )
    {
      v12 = (__int64)(a4 + 1);
      while ( 1 )
      {
        ++v11;
        if ( !v10 )
          break;
        v10 = *v11;
      }
    }
    else
    {
      v12 = 0LL;
    }
    v13 = v11;
    while ( 1 )
    {
      v14 = *v13;
      if ( !*v13 )
        break;
      while ( 1 )
      {
        ++v13;
        if ( !v14 )
          break;
        v14 = *v13;
      }
      ++v9;
    }
    if ( !v9 || (v15 = sub_1800EBE38(Src), (v16 = v15) == 0) )
    {
LABEL_45:
      v7 = v8 << 18;
      goto LABEL_46;
    }
    v22 = 23LL;
    v8 = *(unsigned __int16 *)(v15 + 16);
    if ( *(_WORD *)(v15 + 16) )
    {
      if ( v8 != 2048 )
        goto LABEL_32;
      sub_1800377C0((_WORD *)(v15 + 20), 0x2EuLL, (__int64)L"GlobalTags");
      v16 += 72LL;
    }
    else
    {
      if ( v12 )
        sub_1800377C0((_WORD *)(v15 + 20), 0x2EuLL, v12);
      v16 += 72LL;
    }
    v8 = *(unsigned __int16 *)(v16 + 16);
LABEL_32:
    v17 = a3;
    if ( !a3 )
      goto LABEL_38;
    v18 = -1LL;
    do
      ++v18;
    while ( *(_WORD *)(a3 + 2 * v18) );
    if ( v18 && v18 < 0x13 )
    {
      v22 = 23 - v18;
    }
    else
    {
LABEL_38:
      v18 = 0LL;
      v17 = 0LL;
    }
    while ( *v11 )
    {
      v19 = (_WORD *)(v16 + 20);
      if ( v17 )
      {
        sub_1800377C0((_WORD *)(v16 + 20), 2 * v22, v17);
        v19 += v18;
      }
      sub_1800377C0(v19, 2 * (v22 - v18), (__int64)v11);
      while ( *v11++ )
        ;
      v16 += 72LL;
    }
    goto LABEL_45;
  }
  v6 = *((_DWORD *)Src + 29) | a2;
  if ( (v6 & 0x61000000) == 0 || (v6 & 0x10000000) != 0 )
  {
    if ( (v6 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v21 = 1;
    }
    goto LABEL_13;
  }
  v7 = sub_1800FFE08(Src);
LABEL_46:
  if ( v21 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return v7;
}
