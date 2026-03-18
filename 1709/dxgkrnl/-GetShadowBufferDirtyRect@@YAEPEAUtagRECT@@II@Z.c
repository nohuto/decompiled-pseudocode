/*
 * XREFs of ?GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z @ 0x1C0012AF4
 * Callers:
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011DBF4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall GetShadowBufferDirtyRect(struct tagRECT *a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rcx
  char v7; // di
  __int64 v8; // rbp
  KIRQL v9; // al
  LONG v10; // edx
  LONG v11; // edx
  unsigned int right; // ecx
  unsigned int bottom; // eax
  __int64 v15; // rax

  if ( *((struct _KTHREAD **)DXGGLOBAL::GetGlobal((__int64)a1) + 134) != KeGetCurrentThread() )
  {
    v15 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v15 + 24) = 4510LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v7 = 0;
  v8 = *((_QWORD *)DXGGLOBAL::GetGlobal(v6) + 132);
  if ( !v8 )
    return 0;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 24));
  v10 = *(_DWORD *)(v8 + 12);
  a1->left = *(_DWORD *)(v8 + 4);
  a1->right = *(_DWORD *)(v8 + 8);
  a1->top = v10;
  v11 = *(_DWORD *)(v8 + 16);
  *(_DWORD *)(v8 + 4) = -1;
  *(_DWORD *)(v8 + 12) = -1;
  a1->bottom = v11;
  *(_DWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 16) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 24), v9);
  right = a1->right;
  if ( a1->left < right )
  {
    bottom = a1->bottom;
    if ( a1->top < bottom && right <= a2 )
      return bottom <= a3;
  }
  return v7;
}
