/*
 * XREFs of NtUserGetResizeDCompositionSynchronizationObject @ 0x1C00FF0C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C00053F0 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C00FF164 (-GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 */

__int64 __fastcall NtUserGetResizeDCompositionSynchronizationObject(HWND a1, HANDLE *a2)
{
  __int64 v4; // rsi
  NTSTATUS v5; // edi
  CompositionObject *v7; // rbx
  HANDLE Handle; // [rsp+78h] [rbp+10h] BYREF
  struct CompositionObject *v9; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0LL;
  Handle = 0LL;
  KeEnterCriticalRegion();
  v5 = a2 == 0LL ? 0x57 : 0;
  if ( (unsigned int)GetResizeDCompositionSynchronizationObject(a1, &v9) )
  {
    v7 = v9;
    if ( v9 )
    {
      v5 = CompositionObject::CreateHandle(v9, 1u, 0, 0, &Handle);
      CompositionObject::Release(v7);
    }
  }
  if ( v5 < 0 )
  {
    if ( Handle )
      ObCloseHandle(Handle, 1);
    UserSetLastStatus(v5, 0);
  }
  else
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (HANDLE *)W32UserProbeAddress;
    *a2 = Handle;
  }
  KeLeaveCriticalRegion();
  LOBYTE(v4) = v5 >= 0;
  return v4;
}
