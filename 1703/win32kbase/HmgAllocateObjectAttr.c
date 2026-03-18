/*
 * XREFs of HmgAllocateObjectAttr @ 0x1C005997C
 * Callers:
 *     GreSetBrushOwner @ 0x1C002E550 (GreSetBrushOwner.c)
 *     NtGdiCreateRectRgn @ 0x1C00593E0 (NtGdiCreateRectRgn.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0059670 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C0059AC4 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00EBB8C (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateObjectAttr()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rbx
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r8d
  char *v9; // rdi
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 *v16; // rdi
  __int64 v17; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  void *v23; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v3 = 0LL;
  v4 = *(_QWORD *)(ThreadWin32Thread + 32);
  if ( v4 )
  {
    *(_QWORD *)(ThreadWin32Thread + 32) = 0LL;
    return v4;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL, v1, v2);
  GreAcquireHmgrSemaphore(v7, v6, v8);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 48) || (v9 = (char *)HmgAllocateSecureUserMemory(&v23)) == 0LL )
  {
LABEL_8:
    v15 = *(_QWORD *)(CurrentProcessWin32Process + 48);
    if ( v15 )
    {
      v16 = (__int64 *)(CurrentProcessWin32Process + 208);
      v3 = *(_QWORD *)(CurrentProcessWin32Process + 48);
      v17 = *(_QWORD *)(CurrentProcessWin32Process + 208);
      if ( (*(_DWORD *)(v17 + 16))-- == 1 )
      {
        v20 = *(_QWORD *)v17;
        v21 = *(_QWORD **)(v17 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 || *v21 != v17 )
          __fastfail(3u);
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        Win32FreePool(v17);
        v15 = *v16;
        if ( (__int64 *)*v16 == v16 )
        {
          *(_QWORD *)(CurrentProcessWin32Process + 48) = 0LL;
          goto LABEL_12;
        }
        v15 = *(_QWORD *)(v15 + 8LL * (unsigned int)(*(_DWORD *)(v15 + 16) - 1) + 24);
      }
      else
      {
        v15 = *(_QWORD *)(v17 + 8LL * (unsigned int)(*(_DWORD *)(v17 + 16) - 1) + 24);
      }
      *(_QWORD *)(CurrentProcessWin32Process + 48) = v15;
    }
LABEL_12:
    GreReleaseHmgrSemaphore(v15);
    return v3;
  }
  v10 = PALLOCMEM2(0x568uLL, 1717658183LL, 0);
  if ( v10 )
  {
    v11 = (_QWORD *)(CurrentProcessWin32Process + 208);
    v12 = *(_QWORD *)(CurrentProcessWin32Process + 208);
    if ( *(_QWORD *)(v12 + 8) != CurrentProcessWin32Process + 208 )
      __fastfail(3u);
    *v10 = v12;
    v10[1] = v11;
    *(_QWORD *)(v12 + 8) = v10;
    v13 = 170LL;
    *v11 = v10;
    *((_DWORD *)v10 + 4) = 170;
    v14 = v10 + 3;
    *(_QWORD *)(CurrentProcessWin32Process + 48) = v9 + 4056;
    do
    {
      *v14 = v9;
      v9 += 24;
      ++v14;
      --v13;
    }
    while ( v13 );
    goto LABEL_8;
  }
  HmgFreeAllocateSecureUserMemory(v9, v23);
  GreReleaseHmgrSemaphore(v22);
  return 0LL;
}
