/*
 * XREFs of ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C001E50C
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001E250 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C001E430 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 * Callees:
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C0042544 (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     AllocateObject @ 0x1C0047B40 (AllocateObject.c)
 *     FreeObject @ 0x1C0054E50 (FreeObject.c)
 */

struct BRUSH *__fastcall BRUSHMEMOBJ::pbrAllocBrush(BRUSHMEMOBJ *this, int a2)
{
  __int64 Object; // rax
  __int64 v3; // rbx

  *((_DWORD *)this + 4) = 0;
  Object = AllocateObject(a2 != 0 ? 208 : 160);
  v3 = Object;
  if ( Object )
  {
    *(_QWORD *)(Object + 96) = 0LL;
    *(_DWORD *)(Object + 88) = 0;
    *(_DWORD *)(Object + 104) = 0;
    *(_DWORD *)(Object + 108) = -1;
    *(_QWORD *)(Object + 56) = Object + 80;
    *(_DWORD *)(Object + 52) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
    if ( !(unsigned __int8)AcquireReferenceCountedObjectHandle(2LL, Object, Object + 152) )
    {
      FreeObject(v3, 16LL);
      return 0LL;
    }
  }
  return (struct BRUSH *)v3;
}
