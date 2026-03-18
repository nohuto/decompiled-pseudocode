/*
 * XREFs of HmgIncProcessHandleCount @ 0x1C0053EA4
 * Callers:
 *     HmgSetOwner @ 0x1C0042A50 (HmgSetOwner.c)
 *     GreSetDCOwnerEx @ 0x1C0047C80 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00484E0 (GreSetBrushOwner.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0051BC0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgAlloc @ 0x1C0054040 (HmgAlloc.c)
 *     GreCreateRectRgnIndirect @ 0x1C0054BB0 (GreCreateRectRgnIndirect.c)
 * Callees:
 *     McTemplateK0pqz @ 0x1C00FD6C8 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C00FD780 (McTemplateK0pz.c)
 */

__int64 __fastcall HmgIncProcessHandleCount(__int64 a1, int a2, int a3)
{
  void *v3; // rbx
  unsigned int v4; // edi
  struct _ERESOURCE *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcessWin32Process; // rax
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 ProcessWin32Process; // rax
  __int64 v16; // rdx
  int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  PEPROCESS Process; // [rsp+50h] [rbp+18h] BYREF

  v3 = (void *)(int)a1;
  v4 = 1;
  if ( (_DWORD)a1 && (_DWORD)a1 != -2147483630 )
  {
    v5 = ghsemHmgr;
    if ( ghsemHmgr )
    {
      PsEnterPriorityRegion(a1);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
    }
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz(a1, a2, a3, (_DWORD)ghsemHmgr, 16, (__int64)L"ghsemHmgr");
    if ( (_DWORD)v3 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6, v8);
      v12 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        v10 = *(_DWORD *)(CurrentProcessWin32Process + 60);
        if ( v10 >= gProcessHandleQuota )
        {
          v4 = 0;
        }
        else
        {
          *(_DWORD *)(CurrentProcessWin32Process + 60) = ++v10;
          v13 = *(_DWORD *)(CurrentProcessWin32Process + 64);
          if ( v10 > v13 )
            v13 = v10;
          *(_DWORD *)(v12 + 64) = v13;
        }
      }
    }
    else if ( PsLookupProcessByProcessId(v3, &Process) >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Process);
      v16 = ProcessWin32Process;
      if ( ProcessWin32Process )
      {
        v17 = *(_DWORD *)(ProcessWin32Process + 60);
        if ( v17 >= gProcessHandleQuota )
        {
          v4 = 0;
        }
        else
        {
          v18 = v17 + 1;
          *(_DWORD *)(ProcessWin32Process + 60) = v18;
          v19 = *(_DWORD *)(ProcessWin32Process + 64);
          if ( v18 > v19 )
            v19 = v18;
          *(_DWORD *)(v16 + 64) = v19;
        }
      }
      ObfDereferenceObject(Process);
    }
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz(v10, (unsigned int)&LockRelease, v11, (_DWORD)ghsemHmgr, (__int64)L"ghsemHmgr");
    if ( ghsemHmgr )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
      PsLeavePriorityRegion();
    }
  }
  return v4;
}
