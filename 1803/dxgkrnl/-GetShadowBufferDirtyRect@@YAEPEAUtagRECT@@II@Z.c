/*
 * XREFs of ?GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z @ 0x1C002C5E8
 * Callers:
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z @ 0x1C016FA54 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall GetShadowBufferDirtyRect(struct tagRECT *a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  char v8; // di
  __int64 v9; // rbp
  KIRQL v11; // al
  LONG v12; // edx
  LONG v13; // edx
  unsigned int right; // ecx
  unsigned int bottom; // eax

  if ( *((struct _KTHREAD **)DXGGLOBAL::GetGlobal((__int64)a1) + 144) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 4592LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = 0;
  v9 = *((_QWORD *)DXGGLOBAL::GetGlobal(v6) + 142);
  if ( !v9 )
    return 0;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 24));
  v12 = *(_DWORD *)(v9 + 12);
  a1->left = *(_DWORD *)(v9 + 4);
  a1->right = *(_DWORD *)(v9 + 8);
  a1->top = v12;
  v13 = *(_DWORD *)(v9 + 16);
  *(_DWORD *)(v9 + 4) = -1;
  *(_DWORD *)(v9 + 12) = -1;
  a1->bottom = v13;
  *(_DWORD *)(v9 + 8) = 0;
  *(_DWORD *)(v9 + 16) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 24), v11);
  right = a1->right;
  if ( a1->left < right )
  {
    bottom = a1->bottom;
    if ( a1->top < bottom && right <= a2 )
      return bottom <= a3;
  }
  return v8;
}
