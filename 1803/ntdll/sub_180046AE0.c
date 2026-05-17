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

struct _PEB *__fastcall sub_180046AE0(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  struct _PEB *result; // rax
  void (__fastcall *v5)(_QWORD *); // rbp
  bool v6; // zf
  _QWORD *i; // rsi
  _QWORD *v9; // rbx
  unsigned __int64 *v10; // rdx
  _QWORD **v11; // rcx
  _QWORD *v12; // rbx
  _QWORD *v13; // rsi
  unsigned __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // rsi
  _QWORD *v24; // rdx
  _QWORD **v25; // rcx
  _QWORD *v26; // r8
  _QWORD **v27; // rax
  int v28; // [rsp+50h] [rbp+8h] BYREF
  struct _PEB *v29; // [rsp+58h] [rbp+10h]

  result = NtCurrentPeb();
  v5 = 0LL;
  v6 = *(_DWORD *)(a1 + 56) == -4;
  v29 = result;
  if ( v6 )
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
    v5 = (void (__fastcall *)(_QWORD *))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                qword_18016F250,
                                                                64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  RtlEnterCriticalSection((__int64)&off_1801564C0);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v9 = i - 20;
    if ( (*(_BYTE *)(i - 7) & 8) != 0 )
    {
      sub_18002D32C((__int64)(i - 20), 2u);
      if ( v5 )
        v5(i - 20);
      sub_18002D3B8((__int64)(i - 20), v10, 1);
      if ( (v29->NtGlobalFlag & 0x100) != 0 )
        sub_1800D3CE8(i - 20);
    }
    if ( (dword_180156A70 & 5) != 0 )
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        3175,
        (unsigned int)"LdrpUnloadNode",
        2,
        "Unmapping DLL \"%wZ\"\n",
        v9 + 9);
    LdrUnloadAlternateResourceModuleEx(v9[6], 0LL);
  }
  result = (struct _PEB *)RtlLeaveCriticalSection((__int64)&off_1801564C0);
LABEL_18:
  while ( 1 )
  {
    v11 = *(_QWORD ***)(a1 + 40);
    if ( !v11 )
      break;
    v22 = *v11;
    if ( *v11 == v11 )
    {
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    else
    {
      result = (struct _PEB *)*v22;
      *v11 = (_QWORD *)*v22;
    }
    if ( !v22 )
      break;
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, a2, a3, a4);
    v23 = v22[1];
    v24 = v22 + 2;
    v25 = *(_QWORD ***)(v23 + 48);
    v26 = *v25;
    if ( *v25 != v22 + 2 )
    {
      do
      {
        v25 = (_QWORD **)v26;
        v26 = (_QWORD *)*v26;
      }
      while ( v26 != v24 );
    }
    *v25 = (_QWORD *)*v24;
    if ( *(_QWORD **)(v23 + 48) == v24 )
    {
      v27 = 0LL;
      if ( v25 != v24 )
        v27 = v25;
      *(_QWORD *)(v23 + 48) = v27;
    }
    sub_180046EDC(v23, 0LL, &v28);
    RtlReleaseSRWLockExclusive(&qword_18015D070);
    if ( v28 )
      sub_180046AE0(v23);
    result = (struct _PEB *)RtlFreeHeap(qword_18015C288, 0, (unsigned __int64)v22);
  }
  v12 = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 56) = -2;
  if ( v12 != (_QWORD *)a1 )
  {
    do
    {
      v13 = (_QWORD *)*v12;
      *((_DWORD *)v12 - 14) |= 2u;
      v14 = (unsigned __int64)(v12 - 20);
      RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, a2, a3, a4);
      v15 = *(_DWORD *)(v14 + 104);
      if ( (v15 & 0x40) != 0 )
      {
        v16 = *(_QWORD *)(v14 + 112);
        if ( *(_QWORD *)(v16 + 8) != v14 + 112 || (v17 = *(_QWORD **)(v14 + 120), *v17 != v14 + 112) )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        v18 = *(_QWORD *)v14;
        if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || (v19 = *(_QWORD **)(v14 + 8), *v19 != v14) )
          __fastfail(3u);
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        v20 = *(_QWORD *)(v14 + 16);
        if ( *(_QWORD *)(v20 + 8) != v14 + 16 || (v21 = *(_QWORD **)(v14 + 24), *v21 != v14 + 16) )
          __fastfail(3u);
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        *(_DWORD *)(v14 + 104) &= ~0x40u;
        v15 = *(_DWORD *)(v14 + 104);
      }
      if ( (v15 & 0x80u) != 0 )
      {
        RtlRbRemoveNode((__int64)&qword_18015D238, v14 + 224);
        RtlRbRemoveNode((__int64)&qword_18015D228, v14 + 200);
        *(_DWORD *)(v14 + 64) = 0;
      }
      RtlReleaseSRWLockExclusive(&qword_18015D070);
      if ( byte_18015C298 )
        sub_180074114(v14);
      result = (struct _PEB *)sub_18001F5FC(v14);
      v12 = v13;
    }
    while ( v13 != (_QWORD *)a1 );
  }
  return result;
}
