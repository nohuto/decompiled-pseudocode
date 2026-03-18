/*
 * XREFs of ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C012C420
 * Callers:
 *     xxxActivateKeyboardLayout @ 0x1C00710E0 (xxxActivateKeyboardLayout.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0071C80 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C0017670 (HMAssignmentLock.c)
 */

void __fastcall ReorderKeyboardLayouts(struct tagWINDOWSTATION *a1, struct tagKL *a2)
{
  struct tagKL **v2; // r9
  struct tagKL *v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  __int128 v6; // xmm0
  __int64 v7; // rcx
  __int64 v8; // rax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = (struct tagKL **)((char *)a1 + 40);
  if ( (*((_DWORD *)a1 + 8) & 4) == 0 )
  {
    v3 = *v2;
    if ( a2 != *v2 )
    {
      v4 = *((_QWORD *)a2 + 3);
      v5 = *((_QWORD *)a2 + 2);
      *(_QWORD *)&v9 = v2;
      *((_QWORD *)&v9 + 1) = a2;
      v6 = v9;
      *(_QWORD *)(v4 + 16) = v5;
      v7 = *((_QWORD *)a2 + 2);
      v8 = *((_QWORD *)a2 + 3);
      v9 = v6;
      *(_QWORD *)(v7 + 24) = v8;
      *((_QWORD *)a2 + 2) = v3;
      *((_QWORD *)a2 + 3) = *((_QWORD *)v3 + 3);
      *(_QWORD *)(*((_QWORD *)v3 + 3) + 16LL) = a2;
      *((_QWORD *)v3 + 3) = a2;
      HMAssignmentLock((__int64 **)&v9);
    }
  }
}
