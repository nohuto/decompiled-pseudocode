/*
 * XREFs of HmgDecProcessHandleCount @ 0x1C0051618
 * Callers:
 *     HmgSetOwner @ 0x1C0042A50 (HmgSetOwner.c)
 *     GreSetDCOwnerEx @ 0x1C0047C80 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00484E0 (GreSetBrushOwner.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C004DDA8 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0051BC0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgAlloc @ 0x1C0054040 (HmgAlloc.c)
 *     GreCreateRectRgnIndirect @ 0x1C0054BB0 (GreCreateRectRgnIndirect.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 */

void __fastcall HmgDecProcessHandleCount(int a1, int a2, int a3)
{
  void *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r8d
  __int64 ProcessWin32Process; // rax
  PEPROCESS Process; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    v3 = (void *)a1;
    if ( a1 != -2147483630 )
    {
      GreAcquireHmgrSemaphore(a1, a2, a3);
      if ( (_DWORD)v3 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4, v6);
        if ( CurrentProcessWin32Process )
          --*(_DWORD *)(CurrentProcessWin32Process + 60);
      }
      else if ( PsLookupProcessByProcessId(v3, &Process) >= 0 )
      {
        ProcessWin32Process = PsGetProcessWin32Process(Process);
        if ( ProcessWin32Process )
          --*(_DWORD *)(ProcessWin32Process + 60);
        ObfDereferenceObject(Process);
      }
      GreReleaseHmgrSemaphore(v9, v8, v10);
    }
  }
}
