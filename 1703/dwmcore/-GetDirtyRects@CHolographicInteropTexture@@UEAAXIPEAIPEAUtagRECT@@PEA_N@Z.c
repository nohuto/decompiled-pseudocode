/*
 * XREFs of ?GetDirtyRects@CHolographicInteropTexture@@UEAAXIPEAIPEAUtagRECT@@PEA_N@Z @ 0x1801A3D90
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180075160 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800751C4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180075BF0 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 */

void __fastcall CHolographicInteropTexture::GetDirtyRects(
        RTL_SRWLOCK *this,
        unsigned int a2,
        unsigned int *a3,
        struct tagRECT *a4,
        bool *a5)
{
  RTL_SRWLOCK *v5; // rbx
  __int64 v6; // rsi
  __int64 v10; // rsi
  unsigned int RectangleCount; // eax
  __int64 v12; // r10
  LONG *p_bottom; // rbp
  LONG *v14; // rcx
  __int64 v15; // rdx
  int v16; // ecx
  FastRegion::Internal::CRgnData *v17; // rcx
  unsigned __int64 v18; // r11
  _BYTE v19[8]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]
  LONG *v21; // [rsp+30h] [rbp-28h]
  __int64 v22; // [rsp+38h] [rbp-20h]
  int v23; // [rsp+40h] [rbp-18h]

  v5 = this + 27;
  v6 = a2;
  AcquireSRWLockShared(this + 27);
  if ( (unsigned int)v6 >= LODWORD(this[7].Ptr) )
  {
    *a3 = 0;
    *a5 = 1;
  }
  else
  {
    v10 = 96 * v6;
    RectangleCount = FastRegion::CRegion::GetRectangleCount((FastRegion::CRegion *)((char *)this[4].Ptr + v10 + 16));
    if ( RectangleCount <= *a3 )
    {
      *a3 = RectangleCount;
      FastRegion::Internal::CRgnData::BeginIterator(
        *(FastRegion::Internal::CRgnData **)((char *)this[4].Ptr + v10 + 16),
        (struct FastRegion::CRegion::Iterator *)v19);
      if ( a4 < &a4[v12] )
      {
        p_bottom = &a4->bottom;
        do
        {
          v14 = v21;
          if ( (unsigned __int64)v21 >= v20 )
            break;
          v15 = v22;
          *(p_bottom - 2) = *v21;
          *p_bottom = v14[2];
          v16 = 2 * v23;
          *(p_bottom - 3) = *(_DWORD *)(v15 + 8LL * v23);
          v17 = (FastRegion::Internal::CRgnData *)(v16 + 1);
          *(p_bottom - 1) = *(_DWORD *)(v15 + 4LL * (_QWORD)v17);
          p_bottom += 4;
          FastRegion::Internal::CRgnData::StepIterator(v17, (struct FastRegion::CRegion::Iterator *)v19);
        }
        while ( (unsigned __int64)(p_bottom - 3) < v18 );
      }
    }
    *a5 = *((_BYTE *)this[4].Ptr + v10 + 88);
  }
  ReleaseSRWLockShared(v5);
}
