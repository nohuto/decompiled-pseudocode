/*
 * XREFs of ?Remove@CHwBrushPoolManager@@AEAAXPEAVCHwCacheablePoolBrush@@@Z @ 0x1801F6C54
 * Callers:
 *     ?AllocateHwBrush@CHwBrushPoolManager@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x1801F6B30 (-AllocateHwBrush@CHwBrushPoolManager@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@.c)
 *     ?UnusableNotification@CHwBrushPoolManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x1801F6CB0 (-UnusableNotification@CHwBrushPoolManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwBrushPoolManager::Remove(CHwBrushPoolManager *this, struct CHwCacheablePoolBrush *a2)
{
  _QWORD *v2; // r8
  struct CHwCacheablePoolBrush *v3; // r9
  struct CHwCacheablePoolBrush *v4; // rax
  __int64 v5; // rax

  v2 = (_QWORD *)((char *)this + 56);
  if ( *((_QWORD *)this + 7) )
  {
    v3 = (struct CHwCacheablePoolBrush *)*((_QWORD *)this + 7);
    do
    {
      v4 = v3;
      if ( v3 == a2 )
        break;
      v2 = (_QWORD *)((char *)v3 + 48);
      v4 = (struct CHwCacheablePoolBrush *)*((_QWORD *)v3 + 6);
      v3 = v4;
    }
    while ( v4 );
    if ( v4 )
    {
      --*((_DWORD *)this + 12);
      v5 = *((_QWORD *)a2 + 6);
      *v2 = v5;
      if ( !v5 )
      {
        if ( *((_DWORD *)this + 12) )
          *((_QWORD *)this + 8) = v2 - 6;
        else
          *((_QWORD *)this + 8) = 0LL;
      }
    }
  }
}
