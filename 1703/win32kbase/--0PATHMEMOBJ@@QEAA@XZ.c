/*
 * XREFs of ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0022FB0
 * Callers:
 *     GreExtCreateRegion @ 0x1C00229E0 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00965F8 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00EC6E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     FreeObject @ 0x1C0037CE0 (FreeObject.c)
 *     AllocateObject @ 0x1C003C340 (AllocateObject.c)
 *     PushThreadGuardedObject @ 0x1C003DD40 (PushThreadGuardedObject.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C003F4EC (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

PATHMEMOBJ *__fastcall PATHMEMOBJ::PATHMEMOBJ(PATHMEMOBJ *this)
{
  struct OBJECT *Object; // rax
  struct OBJECT *v3; // rdi
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

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
  Object = (struct OBJECT *)AllocateObject(0x148uLL);
  v3 = Object;
  if ( Object )
  {
    v5 = 0LL;
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v5, Object, 1, 0, 7u) )
    {
      *((_QWORD *)this + 1) = v3;
      *((_DWORD *)v3 + 18) = 3;
      *(_QWORD *)this = 0LL;
    }
    else
    {
      FreeObject(v3, 7LL);
    }
    if ( v5 )
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
  }
  return this;
}
