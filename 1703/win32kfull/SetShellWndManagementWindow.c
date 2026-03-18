/*
 * XREFs of SetShellWndManagementWindow @ 0x1C00F67E0
 * Callers:
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C001544C (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00F66E0 (_RegisterWindowArrangementCallout.c)
 *     ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01B4FEC (-SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetShellWndManagementWindow(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  if ( a2 )
  {
    v6[1] = a2;
    v6[0] = a1 + 328;
    HMAssignmentLock(v6);
  }
  else
  {
    v5 = HMAssignmentUnlock(a1 + 328);
    *(_DWORD *)(a1 + 336) = 0;
    return v5;
  }
  return v2;
}
