/*
 * XREFs of xxxSetCsrssThreadDesktop @ 0x1C0017ED0
 * Callers:
 *     xxxQueryInformationThread @ 0x1C001694C (xxxQueryInformationThread.c)
 *     xxxSetInformationThread @ 0x1C00C74B0 (xxxSetInformationThread.c)
 *     xxxHardErrorControl @ 0x1C020BE9C (xxxHardErrorControl.c)
 * Callees:
 *     xxxSetThreadDesktop @ 0x1C001A398 (xxxSetThreadDesktop.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00C736C (CloseProtectedHandle.c)
 *     xxxInternalGetMessage @ 0x1C00C879C (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1C00CC438 (xxxDispatchMessage.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

NTSTATUS __fastcall xxxSetCsrssThreadDesktop(_DWORD *Object, PVOID *a2)
{
  void *v4; // rcx
  int v5; // eax
  int v6; // ebx
  _DWORD *v7; // rax
  NTSTATUS result; // eax
  ULONG v9; // eax
  _BYTE v10[48]; // [rsp+40h] [rbp-38h] BYREF

  if ( (Object[12] & 8) != 0 )
    return -1073741823;
  v4 = *(void **)(gptiCurrent + 408LL);
  *a2 = v4;
  if ( !v4 || (result = ObReferenceObjectByPointer(v4, 0x2000000u, (POBJECT_TYPE)ExDesktopObjectType, 0), result >= 0) )
  {
    v5 = ObOpenObjectByPointer(Object, 0, 0LL, 0x1F0003u, 0LL, 0, a2 + 1);
    v6 = v5;
    if ( v5 < 0 )
    {
      v9 = RtlNtStatusToDosError(v5);
      UserSetLastError(v9);
      if ( *a2 )
        ObfDereferenceObject(*a2);
    }
    else
    {
      v7 = *(_DWORD **)(gptiCurrent + 408LL);
      if ( Object != v7 )
      {
        if ( v7 )
        {
          memset(v10, 0, sizeof(v10));
          while ( (unsigned int)xxxInternalGetMessage((unsigned int)v10, 0, 0, 0, 3, 0) )
            xxxDispatchMessage(v10);
        }
        v6 = xxxSetThreadDesktop(0LL, Object);
        if ( v6 < 0 )
        {
          if ( *a2 )
            ObfDereferenceObject(*a2);
          CloseProtectedHandle(a2[1]);
        }
      }
    }
    return v6;
  }
  return result;
}
