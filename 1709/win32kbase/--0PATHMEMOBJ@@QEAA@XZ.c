/*
 * XREFs of ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C001C9A0
 * Callers:
 *     GreExtCreateRegion @ 0x1C0056650 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C009ED10 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00F0640 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C001D5F0 (PushThreadGuardedObject.c)
 *     AllocateObject @ 0x1C0047B40 (AllocateObject.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0051BC0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     FreeObject @ 0x1C0054E50 (FreeObject.c)
 */

PATHMEMOBJ *__fastcall PATHMEMOBJ::PATHMEMOBJ(PATHMEMOBJ *this)
{
  struct _BASEOBJECT *Object; // rax
  struct _BASEOBJECT *v3; // rsi
  struct _BASEOBJECT *v4; // rbx

  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 30) )
  {
    PushThreadGuardedObject((char *)this + 88, this, THREAD_GUARDED_EPATHOBJ::vThreadCleanup);
    *((_DWORD *)this + 30) = 1;
  }
  Object = (struct _BASEOBJECT *)AllocateObject(0x148uLL);
  v3 = Object;
  if ( Object )
  {
    v4 = 0LL;
    if ( HmgInsertObjectInternal(Object, 3u, 7u) )
    {
      *((_QWORD *)this + 1) = v3;
      v4 = v3;
      *((_DWORD *)v3 + 18) = 3;
      *(_QWORD *)this = 0LL;
    }
    else
    {
      FreeObject(v3, 7LL);
    }
    if ( v4 )
      _InterlockedDecrement((volatile signed __int32 *)v4 + 3);
  }
  return this;
}
