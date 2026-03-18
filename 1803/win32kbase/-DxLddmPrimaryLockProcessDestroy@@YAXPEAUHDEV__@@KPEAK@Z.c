/*
 * XREFs of ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1C004EA3C
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C004E708 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     DxLddmFindProcessEntry @ 0x1C004EA90 (DxLddmFindProcessEntry.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxLddmPrimaryLockProcessDestroy(_DWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 *ProcessEntry; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  int v9; // eax
  void (__fastcall *v10)(_QWORD, __int64); // rax
  unsigned int v11; // eax

  ProcessEntry = (__int64 *)DxLddmFindProcessEntry(a1 + 654);
  v6 = (__int64)ProcessEntry;
  if ( ProcessEntry )
  {
    v7 = *ProcessEntry;
    if ( *(_QWORD *)(v7 + 8) != v6 || (v8 = *(_QWORD **)(v6 + 8), *v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    v9 = *(_DWORD *)(v6 + 20);
    if ( v9 )
    {
      a1[658] -= v9;
      v10 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)a1 + 330);
      if ( v10 )
        v10(*((_QWORD *)a1 + 224), v6 + 28);
      if ( (int)IsvSpUnTearDownSpritesSupported() >= 0 )
        vSpUnTearDownSprites(a1, v6 + 28, 1LL);
    }
    if ( *a3 + *(_DWORD *)(v6 + 24) < *a3 )
      v11 = -1;
    else
      v11 = *a3 + *(_DWORD *)(v6 + 24);
    *a3 = v11;
    Win32FreePool(v6);
  }
}
