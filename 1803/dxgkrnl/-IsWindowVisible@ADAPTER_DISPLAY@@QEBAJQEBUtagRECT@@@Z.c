/*
 * XREFs of ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C010D25C
 * Callers:
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C010C348 (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014394 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@I@Z @ 0x1C00BA694 (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::IsWindowVisible(DXGADAPTER **this, const struct tagRECT *const a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v7; // eax
  unsigned int v8; // esi
  __int64 v10; // rax
  unsigned int v11; // ebp
  DXGADAPTER *v12; // r9
  LONG right; // ecx
  LONG left; // r8d
  __int64 v15; // rsi
  LONG bottom; // ecx
  LONG top; // r8d
  DXGADAPTER *v18; // rcx

  DXGADAPTER::IsCoreResourceSharedOwner(this[2]);
  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v10 + 24) = 2276LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a2->left == a2->right )
    return 0LL;
  if ( a2->top == a2->bottom )
    return 0LL;
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 13) + 224LL))(0LL) )
    return 0LL;
  v7 = *((_DWORD *)this + 20);
  v8 = 0;
  if ( v7 )
  {
    while ( *((_DWORD *)this[14] + 940 * v8 + 174) != 1
         || !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v8) )
    {
      v7 = *((_DWORD *)this + 20);
      if ( ++v8 >= v7 )
        goto LABEL_11;
    }
    return 0LL;
  }
LABEL_11:
  v11 = 0;
  if ( !v7 )
    return 261LL;
  while ( 1 )
  {
    if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v11)
      || !(unsigned int)DmmGetTargetUsage(this[2], *((_DWORD *)this[14] + 940 * v11 + 267)) )
    {
      v12 = this[14];
      right = a2->right;
      left = a2->left;
      v15 = 3760LL * v11;
      if ( right >= *(_DWORD *)((char *)v12 + v15 + 636) )
        right = *(_DWORD *)((char *)v12 + v15 + 636);
      if ( left <= *(_DWORD *)((char *)v12 + v15 + 628) )
        left = *(_DWORD *)((char *)v12 + v15 + 628);
      if ( left < right )
      {
        bottom = a2->bottom;
        top = a2->top;
        if ( bottom >= *(_DWORD *)((char *)v12 + v15 + 640) )
          bottom = *(_DWORD *)((char *)v12 + v15 + 640);
        if ( top <= *(_DWORD *)((char *)v12 + v15 + 632) )
          top = *(_DWORD *)((char *)v12 + v15 + 632);
        if ( top < bottom )
        {
          if ( !*(_DWORD *)((char *)v12 + v15 + 696)
            && ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v11) )
          {
            return 0LL;
          }
          v18 = this[14];
          if ( a2->left >= *(_DWORD *)((char *)v18 + v15 + 628)
            && a2->right <= *(_DWORD *)((char *)v18 + v15 + 636)
            && a2->top >= *(_DWORD *)((char *)v18 + v15 + 632)
            && a2->bottom <= *(_DWORD *)((char *)v18 + v15 + 640) )
          {
            break;
          }
        }
      }
    }
    if ( ++v11 >= *((_DWORD *)this + 20) )
      return 261LL;
  }
  return 3221225473LL;
}
