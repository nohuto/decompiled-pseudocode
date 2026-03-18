/*
 * XREFs of ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0071AA8
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0071C80 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxUnloadKeyboardLayout @ 0x1C012C940 (xxxUnloadKeyboardLayout.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1C0017630 (HMAssignmentUnlock.c)
 *     HMAssignmentLock @ 0x1C0017670 (HMAssignmentLock.c)
 *     ThreadUnlock1 @ 0x1C0047950 (ThreadUnlock1.c)
 *     HKLtoPKL @ 0x1C00719E0 (HKLtoPKL.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0072088 (ApiSetEditionNotifyShellLanguageHook.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C00725C0 (xxxInternalActivateKeyboardLayout.c)
 *     HMMarkObjectDestroy @ 0x1C00727D0 (HMMarkObjectDestroy.c)
 */

__int64 __fastcall xxxInternalUnloadKeyboardLayout(struct tagKL **a1, struct tagKL *a2, int a3)
{
  struct tagTHREADINFO *v4; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 v17; // [rsp+30h] [rbp-58h]
  __int128 v18; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v19[3]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v20[3]; // [rsp+68h] [rbp-20h] BYREF

  v4 = gptiCurrent;
  if ( a2 == (struct tagKL *)gspklBaseLayout && a3 >= 0 )
    return 0LL;
  v19[0] = *((_QWORD *)gptiCurrent + 49);
  *((_QWORD *)gptiCurrent + 49) = v19;
  v19[1] = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  if ( a2 == (struct tagKL *)gspklGlobalActive )
    HMAssignmentUnlock(&gspklGlobalActive);
  HMMarkObjectDestroy(a2);
  *((_DWORD *)a2 + 8) |= 0x20000000u;
  if ( a3 >= 0 && *((struct tagKL **)v4 + 52) == a2 )
  {
    v12 = HKLtoPKL((__int64)v4, 1LL);
    if ( v12 )
    {
      v20[0] = *((_QWORD *)v4 + 49);
      *((_QWORD *)v4 + 49) = v20;
      v20[1] = v12;
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      xxxInternalActivateKeyboardLayout(v12, (unsigned int)a3, 0LL);
      ThreadUnlock1(v14, v13, v15, v16);
    }
  }
  v10 = (char *)(a1 + 5);
  if ( a1[5] == a2 && a2 != *((struct tagKL **)a2 + 2) )
  {
    *(_QWORD *)&v17 = a1 + 5;
    *((_QWORD *)&v17 + 1) = *((_QWORD *)a2 + 2);
    v18 = v17;
    HMAssignmentLock((__int64 **)&v18);
  }
  ThreadUnlock1((__int64)v10, v7, v8, v9);
  xxxWindowEvent(0x80000000LL, 0LL, 0LL, 0LL, 0);
  ApiSetEditionNotifyShellLanguageHook(v4, 0LL, 0LL);
  return 1LL;
}
