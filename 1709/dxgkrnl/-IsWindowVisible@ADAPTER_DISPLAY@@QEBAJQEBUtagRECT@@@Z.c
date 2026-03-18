/*
 * XREFs of ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C00AD5FC
 * Callers:
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C008C2D4 (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmIsTargetHMD@@YAEPEAVDXGADAPTER@@I@Z @ 0x1C00B5588 (-DmmIsTargetHMD@@YAEPEAVDXGADAPTER@@I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::IsWindowVisible(DXGADAPTER **this, const struct tagRECT *const a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v7; // esi
  __int64 v9; // rax
  unsigned int v10; // esi
  DXGADAPTER *v11; // r8
  __int64 v12; // rbp
  LONG left; // edx
  LONG right; // ecx
  LONG top; // edx
  LONG bottom; // ecx
  DXGADAPTER *v17; // rcx

  DXGADAPTER::IsCoreResourceSharedOwner(this[2]);
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v9 + 24) = 2263LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a2->left == a2->right )
    return 0LL;
  if ( a2->top == a2->bottom )
    return 0LL;
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 12) + 224LL))(0LL) )
    return 0LL;
  v7 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( *((_DWORD *)this[14] + 940 * v7 + 174) != 1
         || !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v7) )
    {
      if ( ++v7 >= *((_DWORD *)this + 20) )
        goto LABEL_11;
    }
    return 0LL;
  }
LABEL_11:
  v10 = 0;
  if ( !*((_DWORD *)this + 20) )
    return 261LL;
  while ( 1 )
  {
    if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v10)
      || !DmmIsTargetHMD(this[2], *((_DWORD *)this[14] + 940 * v10 + 267)) )
    {
      v11 = this[14];
      v12 = 3760LL * v10;
      left = *(_DWORD *)((char *)v11 + v12 + 628);
      right = *(_DWORD *)((char *)v11 + v12 + 636);
      if ( a2->left > left )
        left = a2->left;
      if ( a2->right < right )
        right = a2->right;
      if ( left < right )
      {
        top = *(_DWORD *)((char *)v11 + v12 + 632);
        bottom = *(_DWORD *)((char *)v11 + v12 + 640);
        if ( a2->top > top )
          top = a2->top;
        if ( a2->bottom < bottom )
          bottom = a2->bottom;
        if ( top < bottom )
        {
          if ( !*(_DWORD *)((char *)v11 + v12 + 696)
            && ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v10) )
          {
            return 0LL;
          }
          v17 = this[14];
          if ( a2->left >= *(_DWORD *)((char *)v17 + v12 + 628)
            && a2->right <= *(_DWORD *)((char *)v17 + v12 + 636)
            && a2->top >= *(_DWORD *)((char *)v17 + v12 + 632)
            && a2->bottom <= *(_DWORD *)((char *)v17 + v12 + 640) )
          {
            break;
          }
        }
      }
    }
    if ( ++v10 >= *((_DWORD *)this + 20) )
      return 261LL;
  }
  return 3221225473LL;
}
