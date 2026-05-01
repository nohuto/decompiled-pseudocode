/*
 * XREFs of CemRcTableFindOrInsertEx @ 0x18004947C
 * Callers:
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180046840 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 *     ?HampPkgFindOrInsertApplication@@YAXPEAU_HAM_PACKAGE@@PEAU_HAM_APPLICATION@@PEAPEAU2@@Z @ 0x1800468FC (-HampPkgFindOrInsertApplication@@YAXPEAU_HAM_PACKAGE@@PEAU_HAM_APPLICATION@@PEAPEAU2@@Z.c)
 *     ?HampActInsert@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800477F8 (-HampActInsert@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180049030 (-HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CemRcTableFindOrInsertEx(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, unsigned __int64),
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 *a6)
{
  __int64 v6; // r15
  char v8; // bl
  __int64 v12; // r8
  unsigned __int64 v13; // rdi
  int v14; // ebp
  int v15; // eax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi
  int v18; // ebp
  unsigned __int64 v19; // rax

  v6 = a1 + 16;
  v8 = 0;
  RtlAcquireSRWLockExclusive(a1 + 16);
  while ( 1 )
  {
    if ( *(_QWORD *)(a4 + 16) != -1LL )
      __int2c();
    if ( !*(_QWORD *)(a4 + 24) )
      __int2c();
    v13 = *(_QWORD *)a1;
    v14 = *(_BYTE *)(a1 + 8) & 1;
    while ( v13 )
    {
      v15 = a3(a2, v13);
      if ( v15 >= 0 )
      {
        if ( v15 <= 0 )
          break;
        v16 = *(_QWORD *)(v13 + 8);
      }
      else
      {
        v16 = *(_QWORD *)v13;
      }
      if ( v14 && v16 )
        v13 ^= v16;
      else
        v13 = v16;
    }
    if ( !v13 )
      break;
    if ( *(_QWORD *)(v13 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24)) <= 1 )
        __fastfail(0xEu);
      *a6 = v13;
      RtlReleaseSRWLockExclusive(v6);
      return 0LL;
    }
    RtlSleepConditionVariableSRW(a1 + 32, v6, 0LL, 0LL);
  }
  v17 = *(_QWORD *)a1;
  v18 = *(_BYTE *)(a1 + 8) & 1;
  if ( !*(_QWORD *)a1 )
    goto LABEL_29;
  while ( 1 )
  {
    if ( (int)a3(a2, v17) < 0 )
    {
      v19 = *(_QWORD *)v17;
      if ( v18 )
      {
        if ( !v19 )
          goto LABEL_29;
        v19 ^= v17;
      }
      if ( !v19 )
        goto LABEL_29;
      goto LABEL_35;
    }
    v19 = *(_QWORD *)(v17 + 8);
    if ( v18 )
    {
      if ( !v19 )
        break;
      v19 ^= v17;
    }
    if ( !v19 )
      break;
LABEL_35:
    v17 = v19;
  }
  v8 = 1;
LABEL_29:
  LOBYTE(v12) = v8;
  RtlRbInsertNodeEx(a1, v17, v12, a4);
  ++*(_DWORD *)(a1 + 40);
  RtlReleaseSRWLockExclusive(v6);
  RtlWakeAllConditionVariable(a1 + 32);
  *a6 = a4;
  return 0LL;
}
