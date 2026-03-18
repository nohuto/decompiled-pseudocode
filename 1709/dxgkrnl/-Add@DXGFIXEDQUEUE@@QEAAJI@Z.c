/*
 * XREFs of ?Add@DXGFIXEDQUEUE@@QEAAJI@Z @ 0x1C002C598
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C01D64C0 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGFIXEDQUEUE::Add(const void **this, int a2)
{
  __int64 v4; // rax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  char *v11; // rdi
  __int64 v12; // rax
  int v13; // ecx
  int v14; // eax

  if ( !this[2] )
  {
    v4 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v4 + 24) = 52LL;
    WdLogEvent5_WdError(v4);
    return 3221225495LL;
  }
  v6 = *((_DWORD *)this + 2);
  v7 = *((_DWORD *)this + 1);
  v8 = v6 + 1;
  if ( v8 == v7 )
    v8 = 0;
  if ( v8 == *((_DWORD *)this + 3) )
  {
    v9 = 4LL * (unsigned int)(v7 + *(_DWORD *)this);
    if ( !is_mul_ok((unsigned int)(v7 + *(_DWORD *)this), 4uLL) )
      v9 = -1LL;
    v11 = (char *)operator new[](v9, 0x4B677844u, PagedPool);
    if ( !v11 )
    {
      v12 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v12 + 24) = this;
      WdLogEvent5_WdError(v12);
      return 3221225507LL;
    }
    memmove(
      v11,
      (char *)this[2] + 4 * *((unsigned int *)this + 3),
      4LL * (unsigned int)(*((_DWORD *)this + 1) - *((_DWORD *)this + 3)));
    v13 = *((_DWORD *)this + 3);
    if ( v13 )
    {
      memmove(&v11[4 * (*((_DWORD *)this + 1) - v13)], this[2], 4LL * *((unsigned int *)this + 2));
      this[1] = (const void *)(unsigned int)(*((_DWORD *)this + 1) - 1);
    }
    *((_DWORD *)this + 1) += *(_DWORD *)this;
    operator delete((void *)this[2]);
    this[2] = v11;
  }
  *((_DWORD *)this[2] + *((unsigned int *)this + 2)) = a2;
  v14 = *((_DWORD *)this + 2) + 1;
  if ( v14 == *((_DWORD *)this + 1) )
    v14 = 0;
  *((_DWORD *)this + 2) = v14;
  return 0LL;
}
