/*
 * XREFs of HmgFreeObjectAttr @ 0x1C00630B8
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001E250 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C001E590 (NtGdiCreateRectRgn.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0043550 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     GreSetBrushOwner @ 0x1C00484E0 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C0062D60 (bDeleteBrush.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HmgFreeObjectAttr(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rsi
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // rbx
  _QWORD *v13; // rdx
  __int64 v14; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a1 && result )
  {
    if ( !*(_QWORD *)(result + 32) )
    {
      *(_QWORD *)(result + 32) = a1;
      return result;
    }
    result = PsGetCurrentProcessWin32Process(v4, v3, v5);
    v9 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore(v7, v6, v8);
      v12 = v9 + 208;
      v13 = *(_QWORD **)(v9 + 208);
      if ( v13 == (_QWORD *)(v9 + 208) || *((_DWORD *)v13 + 4) == 170 )
      {
        v13 = PALLOCMEM2(0x568uLL, 1717658183LL, 0);
        if ( !v13 )
          return GreReleaseHmgrSemaphore(v10, (__int64)v13, v11);
        v14 = *(_QWORD *)v12;
        if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
          __fastfail(3u);
        *v13 = v14;
        v13[1] = v12;
        *(_QWORD *)(v14 + 8) = v13;
        *(_QWORD *)v12 = v13;
        *((_DWORD *)v13 + 4) = 0;
      }
      v13[(unsigned int)(*((_DWORD *)v13 + 4))++ + 3] = a1;
      *(_QWORD *)(v9 + 48) = a1;
      return GreReleaseHmgrSemaphore(v10, (__int64)v13, v11);
    }
  }
  return result;
}
