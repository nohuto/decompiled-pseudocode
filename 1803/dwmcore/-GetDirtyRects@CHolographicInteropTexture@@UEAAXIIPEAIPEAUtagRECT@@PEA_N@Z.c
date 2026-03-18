/*
 * XREFs of ?GetDirtyRects@CHolographicInteropTexture@@UEAAXIIPEAIPEAUtagRECT@@PEA_N@Z @ 0x1801FB280
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F30C (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F370 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18007FE88 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CHolographicInteropTexture::GetDirtyRects(
        RTL_SRWLOCK *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        struct tagRECT *a5,
        bool *a6)
{
  RTL_SRWLOCK *v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v9; // r14
  __int64 v11; // rcx
  __int64 v12; // rbp
  unsigned int RectangleCount; // r10d
  unsigned __int64 v14; // r11
  __int64 v15; // r10
  struct tagRECT *v16; // rsi
  LONG *p_bottom; // r14
  LONG *v18; // rcx
  __int64 v19; // rdx
  int v20; // ecx
  FastRegion::Internal::CRgnData *v21; // rcx
  char v22; // cl
  _BYTE v23[8]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]
  LONG *v25; // [rsp+30h] [rbp-28h]
  __int64 v26; // [rsp+38h] [rbp-20h]
  int v27; // [rsp+40h] [rbp-18h]
  const void *retaddr; // [rsp+58h] [rbp+0h]

  v6 = this + 30;
  v7 = a3;
  v9 = a2;
  AcquireSRWLockShared(this + 30);
  if ( (unsigned int)v9 >= LODWORD(this[9].Ptr) || (unsigned int)v7 >= HIDWORD(this[9].Ptr) )
  {
    *a4 = 0;
    v22 = 1;
  }
  else
  {
    if ( v7 >= 2 )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v11 = (__int64)this[(unsigned int)v7 + 5].Ptr + 16;
    v12 = 96 * v9;
    RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)(96 * v9 + v11));
    if ( RectangleCount <= *a4 )
    {
      *a4 = RectangleCount;
      if ( v14 >= 2 )
        ModuleFailFastForHRESULT(-2147483637, retaddr);
      _mm_lfence();
      FastRegion::Internal::CRgnData::BeginIterator(
        *(FastRegion::Internal::CRgnData **)((char *)this[v14 + 5].Ptr + v12 + 16),
        (struct FastRegion::CRegion::Iterator *)v23);
      v16 = &a5[v15];
      if ( a5 < v16 )
      {
        p_bottom = &a5->bottom;
        do
        {
          v18 = v25;
          if ( (unsigned __int64)v25 >= v24 )
            break;
          v19 = v26;
          *(p_bottom - 2) = *v25;
          *p_bottom = v18[2];
          v20 = 2 * v27;
          *(p_bottom - 3) = *(_DWORD *)(v19 + 8LL * v27);
          v21 = (FastRegion::Internal::CRgnData *)(v20 + 1);
          *(p_bottom - 1) = *(_DWORD *)(v19 + 4LL * (_QWORD)v21);
          p_bottom += 4;
          FastRegion::Internal::CRgnData::StepIterator(v21, (struct FastRegion::CRegion::Iterator *)v23);
        }
        while ( p_bottom - 3 < (LONG *)v16 );
      }
    }
    if ( v14 >= 2 )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    _mm_lfence();
    v22 = *((_BYTE *)this[v14 + 5].Ptr + v12 + 88);
  }
  *a6 = v22;
  ReleaseSRWLockShared(v6);
}
