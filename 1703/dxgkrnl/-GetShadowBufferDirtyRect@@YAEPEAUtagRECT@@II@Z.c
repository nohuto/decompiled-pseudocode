/*
 * XREFs of ?GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z @ 0x1C0014650
 * Callers:
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011D764 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall GetShadowBufferDirtyRect(struct tagRECT *a1, unsigned int a2, unsigned int a3)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // r9
  __int64 v11; // rax
  char v12; // di
  __int64 v13; // rbp
  KIRQL v15; // al
  LONG v16; // edx
  LONG v17; // edx
  unsigned int right; // ecx
  unsigned int bottom; // eax

  Global = DXGGLOBAL::GetGlobal();
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)Global + 134) != CurrentThread )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, CurrentThread);
    *(_QWORD *)(v11 + 24) = 4337LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = 0;
  v13 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 132);
  if ( !v13 )
    return 0;
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 24));
  v16 = *(_DWORD *)(v13 + 12);
  a1->left = *(_DWORD *)(v13 + 4);
  a1->right = *(_DWORD *)(v13 + 8);
  a1->top = v16;
  v17 = *(_DWORD *)(v13 + 16);
  *(_DWORD *)(v13 + 4) = -1;
  *(_DWORD *)(v13 + 12) = -1;
  a1->bottom = v17;
  *(_DWORD *)(v13 + 8) = 0;
  *(_DWORD *)(v13 + 16) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 24), v15);
  right = a1->right;
  if ( a1->left < right )
  {
    bottom = a1->bottom;
    if ( a1->top < bottom && right <= a2 )
      return bottom <= a3;
  }
  return v12;
}
