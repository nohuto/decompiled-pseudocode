/*
 * XREFs of HmgAllocateDcAttr @ 0x1C002C1D4
 * Callers:
 *     GreSetupDCAttributes @ 0x1C002BFCC (GreSetupDCAttributes.c)
 *     GreSetDCOwnerEx @ 0x1C002DA50 (GreSetDCOwnerEx.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C0059AC4 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00EBB8C (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateDcAttr()
{
  __int64 v0; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v6; // rdi
  __int64 *v7; // rax
  __int64 v9; // rcx
  __int64 *v10; // rdx
  __int64 **v11; // rcx
  char *v12; // rdi
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  void *v18; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v0 = *ThreadWin32Thread;
  v2 = *(_QWORD *)(v0 + 24);
  v3 = 0LL;
  if ( v2 )
  {
    *(_QWORD *)(v0 + 24) = 0LL;
    return v2;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  GreAcquireHmgrSemaphore();
  if ( *(_QWORD *)(CurrentProcessWin32Process + 40) || (v12 = (char *)HmgAllocateSecureUserMemory(&v18)) == 0LL )
  {
LABEL_7:
    if ( *(_QWORD *)(CurrentProcessWin32Process + 40) )
    {
      v6 = CurrentProcessWin32Process + 192;
      v3 = *(_QWORD *)(CurrentProcessWin32Process + 40);
      v7 = *(__int64 **)(CurrentProcessWin32Process + 192);
      if ( (*((_DWORD *)v7 + 4))-- == 1 )
      {
        v10 = (__int64 *)*v7;
        v11 = (__int64 **)v7[1];
        if ( *(__int64 **)(*v7 + 8) != v7 || *v11 != v7 )
          __fastfail(3u);
        *v11 = v10;
        v10[1] = (__int64)v11;
        Win32FreePool(v7);
        if ( *(_QWORD *)v6 == v6 )
        {
          *(_QWORD *)(CurrentProcessWin32Process + 40) = 0LL;
          goto LABEL_11;
        }
        v9 = *(_QWORD *)(*(_QWORD *)v6 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v6 + 16LL) - 1) + 24);
      }
      else
      {
        v9 = v7[(unsigned int)(*((_DWORD *)v7 + 4) - 1) + 3];
      }
      *(_QWORD *)(CurrentProcessWin32Process + 40) = v9;
    }
LABEL_11:
    GreReleaseHmgrSemaphore();
    return v3;
  }
  v13 = PALLOCMEM2(0x60uLL);
  if ( v13 )
  {
    v14 = (__int64 *)(CurrentProcessWin32Process + 192);
    v15 = *(_QWORD *)(CurrentProcessWin32Process + 192);
    if ( *(_QWORD *)(v15 + 8) != CurrentProcessWin32Process + 192 )
      __fastfail(3u);
    *(_QWORD *)v13 = v15;
    *(_QWORD *)(v13 + 8) = v14;
    *(_QWORD *)(v15 + 8) = v13;
    v16 = 9LL;
    *v14 = v13;
    *(_DWORD *)(v13 + 16) = 9;
    v17 = (_QWORD *)(v13 + 24);
    *(_QWORD *)(CurrentProcessWin32Process + 40) = v12 + 3328;
    do
    {
      *v17 = v12;
      v12 += 416;
      ++v17;
      --v16;
    }
    while ( v16 );
    goto LABEL_7;
  }
  HmgFreeAllocateSecureUserMemory(v12, v18);
  GreReleaseHmgrSemaphore();
  return 0LL;
}
