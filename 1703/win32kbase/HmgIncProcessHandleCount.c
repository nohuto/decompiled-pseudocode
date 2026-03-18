/*
 * XREFs of HmgIncProcessHandleCount @ 0x1C0076CF8
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C002DA50 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C002E550 (GreSetBrushOwner.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C003F540 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgSetOwner @ 0x1C00433A0 (HmgSetOwner.c)
 *     HmgAlloc @ 0x1C0095E80 (HmgAlloc.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgIncProcessHandleCount(__int64 a1, int a2, int a3)
{
  void *v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 ProcessWin32Process; // rax
  int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  PEPROCESS Process; // [rsp+40h] [rbp+18h] BYREF

  v3 = (void *)(int)a1;
  v4 = 1;
  if ( (_DWORD)a1 && (_DWORD)a1 != -2147483630 )
  {
    GreAcquireHmgrSemaphore(a1, a2, a3);
    if ( (_DWORD)v3 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5, v7);
      v10 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        v9 = *(unsigned int *)(CurrentProcessWin32Process + 60);
        if ( (int)v9 >= gProcessHandleQuota )
        {
          v4 = 0;
        }
        else
        {
          v9 = (unsigned int)(v9 + 1);
          *(_DWORD *)(CurrentProcessWin32Process + 60) = v9;
          v11 = *(_DWORD *)(CurrentProcessWin32Process + 64);
          if ( (unsigned int)v9 > v11 )
            v11 = v9;
          *(_DWORD *)(v10 + 64) = v11;
        }
      }
    }
    else if ( PsLookupProcessByProcessId(v3, &Process) >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Process);
      if ( ProcessWin32Process )
      {
        v14 = *(_DWORD *)(ProcessWin32Process + 60);
        if ( v14 >= gProcessHandleQuota )
        {
          v4 = 0;
        }
        else
        {
          v15 = *(_DWORD *)(ProcessWin32Process + 64);
          v16 = v14 + 1;
          *(_DWORD *)(ProcessWin32Process + 60) = v16;
          if ( v16 > v15 )
            v15 = v16;
          *(_DWORD *)(ProcessWin32Process + 64) = v15;
        }
      }
      ObfDereferenceObject(Process);
    }
    GreReleaseHmgrSemaphore(v9);
  }
  return v4;
}
