/*
 * XREFs of ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0023830
 * Callers:
 *     GreExtCreateRegion @ 0x1C00229E0 (GreExtCreateRegion.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0022F80 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00965F8 (GreCreatePolyPolygonRgnInternal.c)
 *     ?vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z @ 0x1C00E9360 (-vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00EC6E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C00238D0 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     FreeObject @ 0x1C0037CE0 (FreeObject.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C009FF50 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

void __fastcall EPATHOBJ::vUnlock(EPATHOBJ *this)
{
  __int64 v2; // rcx
  struct HOBJ__ *v3; // rbx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 88) & 1) != 0 )
    {
      EPATHOBJ::vFreeBlocks(this);
    }
    else
    {
      *(_DWORD *)(v2 + 96) = *((_DWORD *)this + 1);
      *(_DWORD *)(*((_QWORD *)this + 1) + 92LL) = *(_DWORD *)this;
      v3 = (struct HOBJ__ *)**((_QWORD **)this + 1);
      HmgDecrementShareReferenceCount();
      if ( HmgRemoveObjectImpl(v3, 0, 0, 1u, 7, 0LL) )
      {
        EPATHOBJ::vFreeBlocks(this);
        FreeObject(*((_QWORD *)this + 1), 7LL);
      }
    }
    *((_QWORD *)this + 1) = 0LL;
  }
}
