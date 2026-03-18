/*
 * XREFs of ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0079674
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0079840 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxUnloadKeyboardLayout @ 0x1C012D390 (xxxUnloadKeyboardLayout.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C0026B00 (ThreadUnlock1.c)
 *     HMAssignmentUnlock @ 0x1C0049000 (HMAssignmentUnlock.c)
 *     HMAssignmentLock @ 0x1C0049070 (HMAssignmentLock.c)
 *     HKLtoPKL @ 0x1C0079610 (HKLtoPKL.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0079C48 (ApiSetEditionNotifyShellLanguageHook.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C007A180 (xxxInternalActivateKeyboardLayout.c)
 *     HMMarkObjectDestroy @ 0x1C007A370 (HMMarkObjectDestroy.c)
 */

__int64 __fastcall xxxInternalUnloadKeyboardLayout(struct tagKL **a1, struct tagKL *a2, int a3)
{
  struct tagTHREADINFO *v4; // rdi
  struct tagKL *v7; // rax
  __int64 v9; // rcx
  char *v10; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+38h] [rbp-40h]
  _QWORD v12[4]; // [rsp+50h] [rbp-28h] BYREF

  v4 = gptiCurrent;
  if ( a2 == (struct tagKL *)gspklBaseLayout && a3 >= 0 )
    return 0LL;
  v12[0] = *((_QWORD *)gptiCurrent + 46);
  *((_QWORD *)gptiCurrent + 46) = v12;
  ++*((_DWORD *)a2 + 2);
  v12[1] = a2;
  if ( a2 == (struct tagKL *)gspklGlobalActive )
    HMAssignmentUnlock(&gspklGlobalActive);
  HMMarkObjectDestroy(a2);
  *((_DWORD *)a2 + 8) |= 0x20000000u;
  if ( a3 >= 0 && *((struct tagKL **)v4 + 49) == a2 )
  {
    v9 = HKLtoPKL((__int64)v4, 1LL);
    if ( v9 )
    {
      v10 = (char *)*((_QWORD *)v4 + 46);
      v11 = v9;
      *((_QWORD *)v4 + 46) = &v10;
      ++*(_DWORD *)(v9 + 8);
      xxxInternalActivateKeyboardLayout((struct tagKL *)v9);
      ThreadUnlock1();
    }
  }
  if ( a1[5] == a2 )
  {
    v7 = (struct tagKL *)*((_QWORD *)a2 + 2);
    if ( a2 != v7 )
    {
      v10 = (char *)(a1 + 5);
      v11 = (__int64)v7;
      HMAssignmentLock((__int64)&v10);
    }
  }
  ThreadUnlock1();
  xxxWindowEvent(0x80000000LL, 0LL, 0LL);
  ApiSetEditionNotifyShellLanguageHook(v4, 0LL, 0LL);
  return 1LL;
}
