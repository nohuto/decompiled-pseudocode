/*
 * XREFs of ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x1C00C3664
 * Callers:
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C00C3550 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall HKRemoveHotkeyOrMakePlaceholder(struct tagHOTKEY **a1, __int64 a2, __int64 a3)
{
  _WORD *v3; // rbx
  __int16 v5; // cx
  struct tagHOTKEY *v6; // rdx
  PVOID *p_DeviceObject; // rax
  unsigned int v9; // ecx

  v3 = *a1;
  if ( (*((_WORD *)*a1 + 13) & 0x100) == 0 )
  {
    if ( *((_QWORD *)v3 + 2) == 1LL )
      *((_QWORD *)v3 + 2) = 0LL;
    else
      HMAssignmentUnlock(v3 + 8);
    if ( (__int16)v3[13] < 0 )
    {
      p_DeviceObject = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
      a3 = *((unsigned int *)v3 + 7);
      v9 = 0;
      while ( *p_DeviceObject != (PVOID)__PAIR64__(a3, (unsigned __int16)v3[12]) )
      {
        ++v9;
        ++p_DeviceObject;
        if ( v9 >= 2 )
          goto LABEL_5;
      }
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    }
LABEL_5:
    v5 = v3[13];
    if ( (v5 & 0x200) == 0 || *((_WORD **)v3 + 6) == v3 + 24 )
    {
      v6 = (struct tagHOTKEY *)*((_QWORD *)v3 + 5);
      *a1 = v6;
      Win32FreePool(v3, v6, a3);
      return 1;
    }
    *(_QWORD *)v3 = 0LL;
    v3[13] = v5 | 0x100;
    *((_DWORD *)v3 + 8) = 0;
  }
  return 0;
}
