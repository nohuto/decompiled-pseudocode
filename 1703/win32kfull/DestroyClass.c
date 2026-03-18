/*
 * XREFs of DestroyClass @ 0x1C00392B4
 * Callers:
 *     FinalUserInit @ 0x1C000EC20 (FinalUserInit.c)
 *     _UnregisterClass @ 0x1C0035C58 (_UnregisterClass.c)
 *     DestroyProcessesClasses @ 0x1C0039260 (DestroyProcessesClasses.c)
 *     DestroyClass @ 0x1C00392B4 (DestroyClass.c)
 *     DereferenceClass @ 0x1C005D600 (DereferenceClass.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00F9260 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     _WOWCleanup @ 0x1C01EF890 (_WOWCleanup.c)
 *     _WOWModuleUnload @ 0x1C01EF9B0 (_WOWModuleUnload.c)
 * Callees:
 *     DestroyClass @ 0x1C00392B4 (DestroyClass.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z @ 0x1C003940C (-ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z.c)
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x1C0039434 (-IsClassAtomPinned@@YA_NG@Z.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C0039458 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     DestroyClassSmIcon @ 0x1C003949C (DestroyClassSmIcon.c)
 *     ?DestroyClassBrush@@YAXPEAUtagCLS@@@Z @ 0x1C00394E8 (-DestroyClassBrush@@YAXPEAUtagCLS@@@Z.c)
 *     ?UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z @ 0x1C010F760 (-UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z.c)
 */

__int64 __fastcall DestroyClass(struct tagPROCESSINFO *a1, _QWORD **a2)
{
  _QWORD *v2; // rbx
  unsigned __int16 v4; // dx
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // dx
  __int64 v8; // rcx
  __int64 v9; // rdx
  struct tagDESKTOP *v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  *a2 = (_QWORD *)**a2;
  if ( v2 == (_QWORD *)v2[8] )
  {
    while ( v2[9] )
      DestroyClass(a1);
    if ( !IsClassAtomPinned(*((_WORD *)v2 + 4)) && v4 >= 0xC000u && !IsClassAtomRegistered(a1, v4) )
      UserDeleteAtom(v5);
    if ( (!IsClassAtomPinned(*((_WORD *)v2 + 5)) || v6 >= 0xC000u) && !IsClassAtomRegistered(a1, v6) )
      UserDeleteAtom(v7);
    v8 = v2[18];
    if ( (v8 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Win32FreePool(v8);
    v9 = v2[3];
    if ( v9 )
      DestroyCacheDC(0LL, *(_QWORD *)(v9 + 8));
    DestroyClassBrush((struct tagCLS *)v2);
  }
  DestroyClassSmIcon(v2);
  HMAssignmentUnlock(v2 + 15);
  HMAssignmentUnlock(v2 + 20);
  HMAssignmentUnlock(v2 + 16);
  if ( v2[7] )
    UnlockAndFreeCPDs((struct _CALLPROCDATA **)v2 + 7);
  v11 = (struct tagDESKTOP *)v2[2];
  v2[2] = 0LL;
  ClassFree(v11, (void *)v2[19]);
  ClassFree(v11, v2);
  return UnlockObjectAssignment(&v11);
}
