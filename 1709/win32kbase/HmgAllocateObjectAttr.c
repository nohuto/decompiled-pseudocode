/*
 * XREFs of HmgAllocateObjectAttr @ 0x1C001E6B8
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001E250 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C001E590 (NtGdiCreateRectRgn.c)
 *     GreSetBrushOwner @ 0x1C00484E0 (GreSetBrushOwner.c)
 * Callees:
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C001E810 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00EFA0C (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 __fastcall HmgAllocateObjectAttr(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 v12; // rcx
  char *v14; // rdi
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 *v20; // rcx
  __int64 **v21; // rdx
  void *v22; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  v5 = 0LL;
  v6 = *(_QWORD *)(ThreadWin32Thread + 32);
  if ( v6 )
  {
    *(_QWORD *)(ThreadWin32Thread + 32) = 0LL;
    return v6;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  GreAcquireHmgrSemaphore();
  if ( *(_QWORD *)(CurrentProcessWin32Process + 48) || (v14 = (char *)HmgAllocateSecureUserMemory(&v22)) == 0LL )
  {
LABEL_3:
    if ( *(_QWORD *)(CurrentProcessWin32Process + 48) )
    {
      v9 = CurrentProcessWin32Process + 208;
      v5 = *(_QWORD *)(CurrentProcessWin32Process + 48);
      v10 = *(__int64 **)(CurrentProcessWin32Process + 208);
      if ( (*((_DWORD *)v10 + 4))-- == 1 )
      {
        v20 = (__int64 *)*v10;
        if ( *(__int64 **)(*v10 + 8) != v10 || (v21 = (__int64 **)v10[1], *v21 != v10) )
          __fastfail(3u);
        *v21 = v20;
        v20[1] = (__int64)v21;
        Win32FreePool(v10, v21, v8);
        if ( *(_QWORD *)v9 == v9 )
        {
          *(_QWORD *)(CurrentProcessWin32Process + 48) = 0LL;
          goto LABEL_7;
        }
        v12 = *(_QWORD *)(*(_QWORD *)v9 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v9 + 16LL) - 1) + 24);
      }
      else
      {
        v12 = v10[(unsigned int)(*((_DWORD *)v10 + 4) - 1) + 3];
      }
      *(_QWORD *)(CurrentProcessWin32Process + 48) = v12;
    }
LABEL_7:
    GreReleaseHmgrSemaphore();
    return v5;
  }
  v15 = PALLOCMEM2(0x568uLL);
  if ( v15 )
  {
    v16 = (__int64 *)(CurrentProcessWin32Process + 208);
    v17 = *(_QWORD *)(CurrentProcessWin32Process + 208);
    if ( *(_QWORD *)(v17 + 8) != CurrentProcessWin32Process + 208 )
      __fastfail(3u);
    *(_QWORD *)v15 = v17;
    *(_QWORD *)(v15 + 8) = v16;
    *(_QWORD *)(v17 + 8) = v15;
    v18 = 170LL;
    *v16 = v15;
    *(_DWORD *)(v15 + 16) = 170;
    v19 = (_QWORD *)(v15 + 24);
    *(_QWORD *)(CurrentProcessWin32Process + 48) = v14 + 4056;
    do
    {
      *v19 = v14;
      v14 += 24;
      ++v19;
      --v18;
    }
    while ( v18 );
    goto LABEL_3;
  }
  HmgFreeAllocateSecureUserMemory(v14, v22);
  GreReleaseHmgrSemaphore();
  return 0LL;
}
