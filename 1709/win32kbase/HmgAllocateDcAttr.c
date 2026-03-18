/*
 * XREFs of HmgAllocateDcAttr @ 0x1C001DBCC
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0047C80 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C0055870 (GreCreateDisplayDC.c)
 * Callees:
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C001E810 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00EFA0C (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 __fastcall HmgAllocateDcAttr(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 *v11; // rax
  __int64 v13; // rcx
  char *v14; // rdi
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // rcx
  __int64 **v22; // rdx
  void *v23; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  v5 = 0LL;
  v6 = *(_QWORD *)(ThreadWin32Thread + 24);
  if ( v6 )
  {
    *(_QWORD *)(ThreadWin32Thread + 24) = 0LL;
    return v6;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  GreAcquireHmgrSemaphore();
  if ( *(_QWORD *)(CurrentProcessWin32Process + 40) || (v14 = (char *)HmgAllocateSecureUserMemory(&v23)) == 0LL )
  {
LABEL_5:
    if ( *(_QWORD *)(CurrentProcessWin32Process + 40) )
    {
      v10 = CurrentProcessWin32Process + 192;
      v5 = *(_QWORD *)(CurrentProcessWin32Process + 40);
      v11 = *(__int64 **)(CurrentProcessWin32Process + 192);
      if ( (*((_DWORD *)v11 + 4))-- == 1 )
      {
        v21 = (__int64 *)*v11;
        if ( *(__int64 **)(*v11 + 8) != v11 || (v22 = (__int64 **)v11[1], *v22 != v11) )
          __fastfail(3u);
        *v22 = v21;
        v21[1] = (__int64)v22;
        Win32FreePool(v11, v22, v9);
        if ( *(_QWORD *)v10 == v10 )
        {
          *(_QWORD *)(CurrentProcessWin32Process + 40) = 0LL;
          goto LABEL_9;
        }
        v13 = *(_QWORD *)(*(_QWORD *)v10 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v10 + 16LL) - 1) + 24);
      }
      else
      {
        v13 = v11[(unsigned int)(*((_DWORD *)v11 + 4) - 1) + 3];
      }
      *(_QWORD *)(CurrentProcessWin32Process + 40) = v13;
    }
LABEL_9:
    GreReleaseHmgrSemaphore();
    return v5;
  }
  v17 = PALLOCMEM2(0x60uLL);
  v18 = v17;
  if ( v17 )
  {
    v19 = (__int64 *)(CurrentProcessWin32Process + 192);
    v20 = *(_QWORD *)(CurrentProcessWin32Process + 192);
    if ( *(_QWORD *)(v20 + 8) != CurrentProcessWin32Process + 192 )
      __fastfail(3u);
    *(_QWORD *)v18 = v20;
    *(_QWORD *)(v18 + 8) = v19;
    *(_QWORD *)(v20 + 8) = v18;
    v16 = 9LL;
    *v19 = v18;
    *(_DWORD *)(v18 + 16) = 9;
    v15 = (_QWORD *)(v18 + 24);
    *(_QWORD *)(CurrentProcessWin32Process + 40) = v14 + 3328;
    do
    {
      *v15 = v14;
      v14 += 416;
      ++v15;
      --v16;
    }
    while ( v16 );
    goto LABEL_5;
  }
  HmgFreeAllocateSecureUserMemory(v14, v23);
  GreReleaseHmgrSemaphore();
  return 0LL;
}
