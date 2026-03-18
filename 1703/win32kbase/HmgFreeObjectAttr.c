/*
 * XREFs of HmgFreeObjectAttr @ 0x1C0058B38
 * Callers:
 *     GreSetBrushOwner @ 0x1C002E550 (GreSetBrushOwner.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C003E550 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     bDeleteBrush @ 0x1C0058800 (bDeleteBrush.c)
 *     NtGdiCreateRectRgn @ 0x1C00593E0 (NtGdiCreateRectRgn.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0059670 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 */

__int64 __fastcall HmgFreeObjectAttr(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rdx
  __int64 v13; // rax

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
      v11 = v9 + 208;
      v12 = *(_QWORD **)(v9 + 208);
      if ( v12 == (_QWORD *)(v9 + 208) || *((_DWORD *)v12 + 4) == 170 )
      {
        v12 = PALLOCMEM2(0x568uLL, 1717658183LL, 0);
        if ( !v12 )
          return GreReleaseHmgrSemaphore(v10);
        v13 = *(_QWORD *)v11;
        if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
          __fastfail(3u);
        *v12 = v13;
        v12[1] = v11;
        *(_QWORD *)(v13 + 8) = v12;
        *(_QWORD *)v11 = v12;
        *((_DWORD *)v12 + 4) = 0;
      }
      v12[(unsigned int)(*((_DWORD *)v12 + 4))++ + 3] = a1;
      *(_QWORD *)(v9 + 48) = a1;
      return GreReleaseHmgrSemaphore(v10);
    }
  }
  return result;
}
