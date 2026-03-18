/*
 * XREFs of ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C00598A0
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C00592C0 (GreCreatePatternBrushInternal.c)
 * Callees:
 *     FreeObject @ 0x1C0037CE0 (FreeObject.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C003F4EC (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C0059578 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 */

BRUSHMEMOBJ *__fastcall BRUSHMEMOBJ::BRUSHMEMOBJ(
        BRUSHMEMOBJ *this,
        HBITMAP a2,
        HBITMAP a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7)
{
  unsigned int v9; // ebx
  struct BRUSH *v12; // rax
  __int64 v13; // rdi
  _DWORD *v14; // rcx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  *((_DWORD *)this + 2) = 0;
  v9 = a6;
  if ( a5 == 1 )
  {
    v9 = a6 | 0x1000;
  }
  else if ( a5 == 2 )
  {
    v9 = a6 | 0x2000;
  }
  v12 = BRUSHMEMOBJ::pbrAllocBrush(this, a7);
  *(_QWORD *)this = v12;
  v13 = (__int64)v12;
  if ( v12 )
  {
    *((_DWORD *)v12 + 21) = 0;
    v14 = (_DWORD *)*((_QWORD *)v12 + 7);
    *((_DWORD *)v12 + 6) = 13;
    *((_QWORD *)v12 + 4) = a2;
    *((_QWORD *)v12 + 5) = a3;
    *v14 = 0;
    *((_DWORD *)v12 + 12) = v9;
    if ( a4 )
      *((_DWORD *)v12 + 12) = v9 | 0x20003;
    v16 = 0LL;
    if ( !HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v16, v12, 1, 0, 0x10u) )
    {
      FreeObject(v13, 16);
      *(_QWORD *)this = 0LL;
    }
    if ( v16 )
      _InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
  }
  return this;
}
