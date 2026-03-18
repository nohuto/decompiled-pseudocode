/*
 * XREFs of DpiAgpFreePool @ 0x1C01CCB00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAgpFreePool(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  char v4; // bp
  __int64 v5; // rsi
  unsigned int *v6; // rdi
  unsigned int *v7; // rcx
  unsigned int *v8; // rax
  __int64 v9; // rax
  void *v11; // rcx
  unsigned int *v12; // rcx
  void **v13; // rax

  v2 = 0;
  v4 = 0;
  if ( !a1 || !a2 )
    goto LABEL_12;
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5
    || *(_DWORD *)(v5 + 16) != 1953656900
    || *(_DWORD *)(v5 + 20) != 2
    || !*(_QWORD *)(v5 + 720)
    || !*(_QWORD *)(v5 + 736) )
  {
    return (unsigned int)-1073741811;
  }
  KeWaitForSingleObject((PVOID)(v5 + 2464), Executive, 0, 0, 0LL);
  v6 = *(unsigned int **)(v5 + 2448);
  v7 = v6;
  v8 = *(unsigned int **)v6;
  if ( *(unsigned int **)v6 != v6 )
  {
    while ( *((_QWORD *)v6 + 9) != a2 )
    {
      v6 = v8;
      v8 = *(unsigned int **)v8;
      if ( v8 == v7 )
        goto LABEL_11;
    }
    v11 = (void *)*((_QWORD *)v6 + 9);
    v4 = 1;
    if ( *((_BYTE *)v6 + 60) == 1 )
      MmUnmapIoSpace(v11, v6[14]);
    else
      MmUnmapLockedPages(v11, *((PMDL *)v6 + 6));
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v5 + 736))(
      *(_QWORD *)(v5 + 680),
      *((_QWORD *)v6 + 3),
      (v6[14] >> 12) + ((v6[14] & 0xFFF) != 0),
      0LL);
    IoFreeMdl(*((PMDL *)v6 + 6));
    (*(void (__fastcall **)(_QWORD, _QWORD))(v5 + 720))(*(_QWORD *)(v5 + 680), *((_QWORD *)v6 + 3));
    v12 = *(unsigned int **)v6;
    v13 = (void **)*((_QWORD *)v6 + 1);
    if ( *(unsigned int **)(*(_QWORD *)v6 + 8LL) != v6 || *v13 != v6 )
      __fastfail(3u);
    *v13 = v12;
    *((_QWORD *)v12 + 1) = v13;
    ExFreePoolWithTag(v6, 0x74727044u);
  }
LABEL_11:
  KeReleaseMutex((PRKMUTEX)(v5 + 2464), 0);
  if ( !v4 )
  {
LABEL_12:
    v2 = -1073741811;
    v9 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
  }
  return v2;
}
