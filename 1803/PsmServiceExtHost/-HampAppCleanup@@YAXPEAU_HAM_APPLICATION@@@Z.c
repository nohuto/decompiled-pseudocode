/*
 * XREFs of ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180006F1C
 * Callers:
 *     ?HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180006EF0 (-HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     ?HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800070EC (-HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@1@Z @ 0x18000A1E8 (-HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@.c)
 *     CemRcObjectCleanup @ 0x180024C80 (CemRcObjectCleanup.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampAppCleanup(struct _HAM_APPLICATION *a1)
{
  int v1; // eax
  unsigned __int64 v3; // rbx
  signed __int64 v4; // rax
  signed __int64 i; // rcx
  signed __int64 v6; // rtt
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rbx
  signed __int64 v10; // rax
  signed __int64 j; // rcx
  signed __int64 v12; // rtt
  unsigned __int64 v13; // rdi
  __int64 v14; // rax

  v1 = *((_DWORD *)a1 + 152);
  if ( (v1 & 7) != 4 )
  {
    HampPkgUpdateApplicationStateCounters(*((_QWORD *)a1 + 11));
    v1 = *((_DWORD *)a1 + 152);
  }
  if ( (v1 & 0x7FFF8) != 0xC800 )
    HampAppSaveTerminateReason(a1);
  if ( *((_QWORD *)a1 + 70) )
    TpReleaseWork();
  v3 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  CemRcObjectCleanup(a1);
  _m_prefetchw((const void *)(v3 - 16));
  v4 = *(_QWORD *)(v3 - 16);
  for ( i = v4 - 1; i > 0; i = v4 - 1 )
  {
    v6 = v4;
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 - 16), i, v4);
    if ( v6 == v4 )
      goto LABEL_20;
  }
  if ( i )
    __fastfail(0xEu);
  v7 = *(_QWORD *)(v3 - 8) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( *(_QWORD *)(v3 - 24) == -1LL )
  {
    if ( _InterlockedDecrement64((volatile signed __int64 *)(v3 - 16)) <= -1 )
      __fastfail(0xEu);
  }
  else
  {
    RtlAcquireSRWLockExclusive(v7 + 16);
    v8 = _InterlockedDecrement64((volatile signed __int64 *)(v3 - 16));
    if ( v8 > 0 )
    {
      RtlReleaseSRWLockExclusive(v7 + 16);
      goto LABEL_20;
    }
    if ( v8 )
      __fastfail(0xEu);
    RtlReleaseSRWLockExclusive(v7 + 16);
  }
  (*(void (__fastcall **)(unsigned __int64))(v7 + 24))(v3 - 40);
LABEL_20:
  v9 = (_QWORD *)*((_QWORD *)a1 + 11);
  if ( v9 )
  {
    _m_prefetchw(v9 + 3);
    v10 = v9[3];
    for ( j = v10 - 1; j > 0; j = v10 - 1 )
    {
      v12 = v10;
      v10 = _InterlockedCompareExchange64(v9 + 3, j, v10);
      if ( v12 == v10 )
        return;
    }
    if ( j )
      __fastfail(0xEu);
    v13 = v9[4] & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v9[2] == -1LL )
    {
      if ( _InterlockedDecrement64(v9 + 3) <= -1 )
        __fastfail(0xEu);
LABEL_38:
      (*(void (__fastcall **)(_QWORD *))(v13 + 24))(v9);
      return;
    }
    RtlAcquireSRWLockExclusive(v13 + 16);
    v14 = _InterlockedDecrement64(v9 + 3);
    if ( v14 <= 0 )
    {
      if ( v14 )
        __fastfail(0xEu);
      RtlReleaseSRWLockExclusive(v13 + 16);
      goto LABEL_38;
    }
    RtlReleaseSRWLockExclusive(v13 + 16);
  }
}
