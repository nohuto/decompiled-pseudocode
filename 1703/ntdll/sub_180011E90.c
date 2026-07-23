/*
 * XREFs of sub_180011E90 @ 0x180011E90
 * Callers:
 *     sub_180011D94 @ 0x180011D94 (sub_180011D94.c)
 * Callees:
 *     sub_180010590 @ 0x180010590 (sub_180010590.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180010CF0 (LdrUnloadAlternateResourceModuleEx.c)
 *     sub_180011D94 @ 0x180011D94 (sub_180011D94.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlRbRemoveNode @ 0x180028010 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180038FC4 @ 0x180038FC4 (sub_180038FC4.c)
 *     sub_1800397BC @ 0x1800397BC (sub_1800397BC.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     sub_1800DA5D0 @ 0x1800DA5D0 (sub_1800DA5D0.c)
 */

void __fastcall sub_180011E90(__int64 a1)
{
  struct _PEB *v1; // r14
  void (__fastcall *v3)(_QWORD *); // rbp
  _QWORD *i; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  _QWORD **v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rsi
  char *v10; // rbx
  char **v11; // rdx
  void **v12; // rcx
  _QWORD *v13; // rcx
  void **v14; // rax
  char **v15; // rdx
  void **v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // r8
  _QWORD *v19; // rdx
  _QWORD *j; // rcx
  _QWORD *v21; // rax

  v1 = NtCurrentPeb();
  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 56) == -4 )
  {
LABEL_4:
    *(_DWORD *)(a1 + 56) = -1;
    sub_180010590((_QWORD **)a1);
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 56) != 7 )
  {
    if ( *(_DWORD *)(a1 + 56) != 9 )
      goto LABEL_18;
    goto LABEL_4;
  }
LABEL_5:
  if ( byte_18015BF54 )
    v3 = (void (__fastcall *)(_QWORD *))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                qword_18016B240,
                                                                64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  RtlEnterCriticalSection(&CriticalSection);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v5 = i - 20;
    if ( (*(_BYTE *)(i - 7) & 8) != 0 )
    {
      sub_1800397BC(i - 20, 2LL);
      if ( v3 )
        v3(i - 20);
      sub_180038FC4(i - 20, v6, 1LL);
      if ( (v1->NtGlobalFlag & 0x100) != 0 )
        sub_1800DA5D0(i - 20);
    }
    if ( (dword_180155A10 & 5) != 0 )
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        3038,
        (unsigned int)"LdrpUnloadNode",
        2,
        "Unmapping DLL \"%wZ\"\n",
        v5 + 9);
    LdrUnloadAlternateResourceModuleEx((PVOID)v5[6], 0);
  }
  RtlLeaveCriticalSection(&CriticalSection);
LABEL_18:
  while ( 1 )
  {
    v7 = *(_QWORD ***)(a1 + 40);
    if ( !v7 )
      break;
    v17 = *v7;
    if ( *v7 == v7 )
      *(_QWORD *)(a1 + 40) = 0LL;
    else
      *v7 = (_QWORD *)*v17;
    if ( !v17 )
      break;
    v18 = (_QWORD *)v17[1];
    v19 = v17 + 2;
    for ( j = (_QWORD *)v18[6]; (_QWORD *)*j != v19; j = (_QWORD *)*j )
      ;
    *j = *v19;
    if ( (_QWORD *)v18[6] == v19 )
    {
      v21 = 0LL;
      if ( j != v19 )
        v21 = j;
      v18[6] = v21;
    }
    sub_180011D94(*v18 - 160LL, 0);
    RtlFreeHeap(HeapHandle, 0, v17);
  }
  v8 = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 56) = -2;
  if ( v8 != (_QWORD *)a1 )
  {
    do
    {
      v9 = (_QWORD *)*v8;
      *((_DWORD *)v8 - 14) |= 2u;
      v10 = (char *)(v8 - 20);
      RtlAcquireSRWLockExclusive(&stru_18015C040);
      if ( (v10[104] & 0x40) != 0 )
      {
        v11 = (char **)*((_QWORD *)v10 + 14);
        v12 = (void **)*((_QWORD *)v10 + 15);
        if ( v11[1] != v10 + 112 || *v12 != v10 + 112 )
          __fastfail(3u);
        *v12 = v11;
        v11[1] = (char *)v12;
        v13 = *(_QWORD **)v10;
        v14 = (void **)*((_QWORD *)v10 + 1);
        if ( *(char **)(*(_QWORD *)v10 + 8LL) != v10 || *v14 != v10 )
          __fastfail(3u);
        *v14 = v13;
        v13[1] = v14;
        v15 = (char **)*((_QWORD *)v10 + 2);
        v16 = (void **)*((_QWORD *)v10 + 3);
        if ( v15[1] != v10 + 16 || *v16 != v10 + 16 )
          __fastfail(3u);
        *v16 = v15;
        v15[1] = (char *)v16;
        *((_DWORD *)v10 + 26) &= ~0x40u;
      }
      if ( v10[104] < 0 )
      {
        RtlRbRemoveNode(&Tree, (PRTL_BALANCED_NODE)(v10 + 224));
        RtlRbRemoveNode(&stru_18015C208, (PRTL_BALANCED_NODE)(v10 + 200));
        *((_DWORD *)v10 + 16) = 0;
      }
      RtlReleaseSRWLockExclusive(&stru_18015C040);
      sub_18003015C(v10);
      v8 = v9;
    }
    while ( v9 != (_QWORD *)a1 );
  }
}
