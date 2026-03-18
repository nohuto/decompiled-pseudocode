/*
 * XREFs of ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C00E7E9C
 * Callers:
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C00D7E98 (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AD00 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::IsWindowVisible(DXGADAPTER **this, const struct tagRECT *const a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // esi
  unsigned int v12; // ebp
  __int64 v13; // r8
  __int64 v14; // rsi
  LONG left; // edx
  LONG right; // ecx
  LONG top; // edx
  LONG bottom; // ecx
  DXGADAPTER *v19; // rcx
  __int64 v21; // rax

  DXGADAPTER::IsCoreResourceSharedOwner(this[2]);
  if ( !a2 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v21 + 24) = 1812LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( a2->left == a2->right )
    return 0LL;
  if ( a2->top == a2->bottom )
    return 0LL;
  Current = DXGPROCESS::GetCurrent(v5);
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 9) + 224LL))(0LL) )
    return 0LL;
  v11 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( *((_DWORD *)this[14] + 802 * v11 + 174) != 1
         || !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v11, v9, v10) )
    {
      if ( ++v11 >= *((_DWORD *)this + 20) )
        goto LABEL_9;
    }
    return 0LL;
  }
LABEL_9:
  v12 = 0;
  if ( !*((_DWORD *)this + 20) )
    return 261LL;
  while ( 1 )
  {
    v13 = (__int64)this[14];
    v14 = 3208LL * v12;
    left = *(_DWORD *)(v14 + v13 + 628);
    right = *(_DWORD *)(v14 + v13 + 636);
    if ( a2->left > left )
      left = a2->left;
    if ( a2->right < right )
      right = a2->right;
    if ( left < right )
    {
      top = *(_DWORD *)(v14 + v13 + 632);
      bottom = *(_DWORD *)(v14 + v13 + 640);
      if ( a2->top > top )
        top = a2->top;
      if ( a2->bottom < bottom )
        bottom = a2->bottom;
      if ( top < bottom )
      {
        if ( !*(_DWORD *)(v14 + v13 + 696)
          && ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v12, v13, v10) )
        {
          return 0LL;
        }
        v19 = this[14];
        if ( a2->left >= *(_DWORD *)((char *)v19 + v14 + 628)
          && a2->right <= *(_DWORD *)((char *)v19 + v14 + 636)
          && a2->top >= *(_DWORD *)((char *)v19 + v14 + 632)
          && a2->bottom <= *(_DWORD *)((char *)v19 + v14 + 640) )
        {
          break;
        }
      }
    }
    if ( ++v12 >= *((_DWORD *)this + 20) )
      return 261LL;
  }
  return 3221225473LL;
}
