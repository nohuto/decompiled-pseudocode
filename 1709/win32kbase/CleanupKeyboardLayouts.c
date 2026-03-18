/*
 * XREFs of CleanupKeyboardLayouts @ 0x1C0075AC8
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C0075460 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1C0017630 (HMAssignmentUnlock.c)
 *     DestroyKL @ 0x1C0070FC4 (DestroyKL.c)
 *     HMMarkObjectDestroy @ 0x1C00727D0 (HMMarkObjectDestroy.c)
 */

void CleanupKeyboardLayouts()
{
  _QWORD *v0; // rdi
  _QWORD *v1; // rbx

  if ( gspklBaseLayout )
  {
    if ( gspklGlobalActive )
      HMAssignmentUnlock(&gspklGlobalActive);
    v0 = *(_QWORD **)(gspklBaseLayout + 16);
    if ( (_QWORD *)v0[2] != v0 )
    {
      do
      {
        v1 = (_QWORD *)v0[2];
        DestroyKL(v0);
        v0 = v1;
      }
      while ( (_QWORD *)v1[2] != v1 );
    }
    if ( (*((_BYTE *)qword_1C018E9B8 + dword_1C018E9C0 * (unsigned int)(unsigned __int16)*(_DWORD *)gspklBaseLayout + 25) & 1) == 0 )
      HMMarkObjectDestroy((_DWORD *)gspklBaseLayout);
    gdwHydraHint |= 0x8000u;
    if ( HMAssignmentUnlock(&gspklBaseLayout) )
      DestroyKL(v0);
  }
}
