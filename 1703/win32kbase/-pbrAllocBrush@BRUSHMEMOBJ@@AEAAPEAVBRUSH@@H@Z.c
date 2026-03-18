/*
 * XREFs of ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C0059578
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0059670 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C00598A0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 * Callees:
 *     FreeObject @ 0x1C0037CE0 (FreeObject.c)
 *     AllocateObject @ 0x1C003C340 (AllocateObject.c)
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C003F39C (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 */

struct BRUSH *__fastcall BRUSHMEMOBJ::pbrAllocBrush(BRUSHMEMOBJ *this, int a2)
{
  __int64 Object; // rax
  __int64 v3; // rbx

  *((_DWORD *)this + 4) = 0;
  Object = AllocateObject(a2 != 0 ? 208LL : 160LL, 0x10u, 1);
  v3 = Object;
  if ( Object )
  {
    *(_QWORD *)(Object + 96) = 0LL;
    *(_DWORD *)(Object + 88) = 0;
    *(_DWORD *)(Object + 104) = 0;
    *(_DWORD *)(Object + 108) = -1;
    *(_QWORD *)(Object + 56) = Object + 80;
    *(_DWORD *)(Object + 52) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
    if ( !AcquireReferenceCountedObjectHandle(2u, (void *)Object, (_QWORD *)(Object + 152)) )
    {
      FreeObject(v3, 16);
      return 0LL;
    }
  }
  return (struct BRUSH *)v3;
}
