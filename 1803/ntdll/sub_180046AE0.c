/*
 * XREFs of sub_180046AE0 @ 0x180046AE0
 * Callers:
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 *     sub_180046E54 @ 0x180046E54 (sub_180046E54.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     RtlRbRemoveNode @ 0x180021260 (RtlRbRemoveNode.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18002D32C @ 0x18002D32C (sub_18002D32C.c)
 *     sub_18002D3B8 @ 0x18002D3B8 (sub_18002D3B8.c)
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 *     sub_180046EDC @ 0x180046EDC (sub_180046EDC.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180047210 (LdrUnloadAlternateResourceModuleEx.c)
 *     sub_1800473FC @ 0x1800473FC (sub_1800473FC.c)
 *     sub_180074114 @ 0x180074114 (sub_180074114.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     sub_1800D3CE8 @ 0x1800D3CE8 (sub_1800D3CE8.c)
 */

int __fastcall sub_180046AE0(__int64 a1)
{
  struct _PEB *v1; // rax
  void (__fastcall *v2)(_QWORD *); // rbp
  bool v3; // zf
  _QWORD *i; // rsi
  _QWORD *v6; // rbx
  _DWORD *v7; // rdx
  _QWORD **v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rsi
  char *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  char **v14; // rdx
  __int64 v15; // rcx
  char **v16; // rax
  __int64 v17; // rdx
  char **v18; // rcx
  _QWORD *v19; // rbx
  __int64 v20; // rsi
  _QWORD *v21; // rdx
  _QWORD **v22; // rcx
  _QWORD *v23; // r8
  _QWORD **v24; // rax
  int v26; // [rsp+50h] [rbp+8h] BYREF
  struct _PEB *v27; // [rsp+58h] [rbp+10h]

  v1 = NtCurrentPeb();
  v2 = 0LL;
  v3 = *(_DWORD *)(a1 + 56) == -4;
  v27 = v1;
  if ( v3 )
  {
LABEL_4:
    *(_DWORD *)(a1 + 56) = -1;
    sub_1800473FC();
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 56) != 7 )
  {
    if ( *(_DWORD *)(a1 + 56) != 9 )
      goto LABEL_18;
    goto LABEL_4;
  }
LABEL_5:
  if ( byte_18015CFB4 )
    v2 = (void (__fastcall *)(_QWORD *))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                qword_18016F250,
                                                                64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  RtlEnterCriticalSection(&stru_1801564C0);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v6 = i - 20;
    if ( (*(_BYTE *)(i - 7) & 8) != 0 )
    {
      sub_18002D32C((__int64)(i - 20), 2u);
      if ( v2 )
        v2(i - 20);
      sub_18002D3B8((__int64)(i - 20), v7, 1);
      if ( (v27->NtGlobalFlag & 0x100) != 0 )
        sub_1800D3CE8(i - 20);
    }
    if ( (dword_180156A70 & 5) != 0 )
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        3175,
        (unsigned int)"LdrpUnloadNode",
        2,
        "Unmapping DLL \"%wZ\"\n",
        v6 + 9);
    LdrUnloadAlternateResourceModuleEx((PVOID)v6[6], 0);
  }
  LODWORD(v1) = RtlLeaveCriticalSection(&stru_1801564C0);
LABEL_18:
  while ( 1 )
  {
    v8 = *(_QWORD ***)(a1 + 40);
    if ( !v8 )
      break;
    v19 = *v8;
    if ( *v8 == v8 )
    {
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    else
    {
      v1 = (struct _PEB *)*v19;
      *v8 = (_QWORD *)*v19;
    }
    if ( !v19 )
      break;
    RtlAcquireSRWLockExclusive(&stru_18015D070);
    v20 = v19[1];
    v21 = v19 + 2;
    v22 = *(_QWORD ***)(v20 + 48);
    v23 = *v22;
    if ( *v22 != v19 + 2 )
    {
      do
      {
        v22 = (_QWORD **)v23;
        v23 = (_QWORD *)*v23;
      }
      while ( v23 != v21 );
    }
    *v22 = (_QWORD *)*v21;
    if ( *(_QWORD **)(v20 + 48) == v21 )
    {
      v24 = 0LL;
      if ( v22 != v21 )
        v24 = v22;
      *(_QWORD *)(v20 + 48) = v24;
    }
    sub_180046EDC(v20, 0LL, &v26);
    RtlReleaseSRWLockExclusive(&stru_18015D070);
    if ( v26 )
      sub_180046AE0(v20);
    LODWORD(v1) = RtlFreeHeap(HeapHandle, 0, v19);
  }
  v9 = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 56) = -2;
  if ( v9 != (_QWORD *)a1 )
  {
    do
    {
      v10 = (_QWORD *)*v9;
      *((_DWORD *)v9 - 14) |= 2u;
      v11 = (char *)(v9 - 20);
      RtlAcquireSRWLockExclusive(&stru_18015D070);
      v12 = *((_DWORD *)v11 + 26);
      if ( (v12 & 0x40) != 0 )
      {
        v13 = *((_QWORD *)v11 + 14);
        if ( *(char **)(v13 + 8) != v11 + 112 || (v14 = (char **)*((_QWORD *)v11 + 15), *v14 != v11 + 112) )
          __fastfail(3u);
        *v14 = (char *)v13;
        *(_QWORD *)(v13 + 8) = v14;
        v15 = *(_QWORD *)v11;
        if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 || (v16 = (char **)*((_QWORD *)v11 + 1), *v16 != v11) )
          __fastfail(3u);
        *v16 = (char *)v15;
        *(_QWORD *)(v15 + 8) = v16;
        v17 = *((_QWORD *)v11 + 2);
        if ( *(char **)(v17 + 8) != v11 + 16 || (v18 = (char **)*((_QWORD *)v11 + 3), *v18 != v11 + 16) )
          __fastfail(3u);
        *v18 = (char *)v17;
        *(_QWORD *)(v17 + 8) = v18;
        *((_DWORD *)v11 + 26) &= ~0x40u;
        v12 = *((_DWORD *)v11 + 26);
      }
      if ( (v12 & 0x80u) != 0 )
      {
        RtlRbRemoveNode(&stru_18015D238, (PRTL_BALANCED_NODE)(v11 + 224));
        RtlRbRemoveNode(&stru_18015D228, (PRTL_BALANCED_NODE)(v11 + 200));
        *((_DWORD *)v11 + 16) = 0;
      }
      RtlReleaseSRWLockExclusive(&stru_18015D070);
      if ( byte_18015C298 )
        sub_180074114(v11);
      LODWORD(v1) = sub_18001F5FC(v11);
      v9 = v10;
    }
    while ( v10 != (_QWORD *)a1 );
  }
  return (int)v1;
}
