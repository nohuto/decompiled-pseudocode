/*
 * XREFs of DestroyClass @ 0x1C00F2194
 * Callers:
 *     DereferenceClass @ 0x1C0060640 (DereferenceClass.c)
 *     _UnregisterClass @ 0x1C0073050 (_UnregisterClass.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0073710 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     FinalUserInit @ 0x1C00DC870 (FinalUserInit.c)
 *     DestroyProcessesClasses @ 0x1C00F2140 (DestroyProcessesClasses.c)
 *     DestroyClass @ 0x1C00F2194 (DestroyClass.c)
 *     _WOWCleanup @ 0x1C01F9D20 (_WOWCleanup.c)
 *     _WOWModuleUnload @ 0x1C01F9E40 (_WOWModuleUnload.c)
 * Callees:
 *     DestroyClass @ 0x1C00F2194 (DestroyClass.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z @ 0x1C00F22F0 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z.c)
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x1C00F2324 (-IsClassAtomPinned@@YA_NG@Z.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C00F2348 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     DestroyClassSmIcon @ 0x1C00F238C (DestroyClassSmIcon.c)
 *     ?DestroyClassBrush@@YAXPEAUtagCLS@@@Z @ 0x1C00F23D8 (-DestroyClassBrush@@YAXPEAUtagCLS@@@Z.c)
 *     ?UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z @ 0x1C00F2470 (-UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z.c)
 */

__int64 __fastcall DestroyClass(struct tagPROCESSINFO *a1, _QWORD **a2)
{
  _QWORD *v2; // rbx
  unsigned __int16 v4; // dx
  unsigned __int16 v5; // dx
  __int64 v6; // rdx
  __int64 v7; // r8
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
    if ( (!IsClassAtomPinned(*((_WORD *)v2 + 5)) || (unsigned __int16)v6 >= 0xC000u) && !IsClassAtomRegistered(a1, v6) )
      UserDeleteAtom((unsigned __int16)v6);
    v8 = v2[19];
    if ( (v8 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Win32FreePool(v8, v6, v7);
    v9 = v2[3];
    if ( v9 )
      DestroyCacheDC(0LL, *(_QWORD *)(v9 + 8));
    DestroyClassBrush((struct tagCLS *)v2);
  }
  DestroyClassSmIcon(v2);
  HMAssignmentUnlock(v2 + 16);
  HMAssignmentUnlock(v2 + 21);
  HMAssignmentUnlock(v2 + 17);
  if ( v2[7] )
    UnlockAndFreeCPDs((struct _CALLPROCDATA **)v2 + 7);
  v11 = (struct tagDESKTOP *)v2[2];
  v2[2] = 0LL;
  ClassFree(v11, (void *)v2[20]);
  ClassFree(v11, v2);
  return UnlockObjectAssignment(&v11);
}
