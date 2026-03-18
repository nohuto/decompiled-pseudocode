/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C0020710
 * Callers:
 *     NtGdiCreateRectRgn @ 0x1C00430D0 (NtGdiCreateRectRgn.c)
 *     GreCreateRectRgn @ 0x1C00D9A90 (GreCreateRectRgn.c)
 * Callees:
 *     AllocateObject @ 0x1C0023D70 (AllocateObject.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this, __int64 a2, int a3)
{
  __int64 Object; // rax
  _QWORD *v5; // rax

  *((_DWORD *)this + 2) = 0;
  if ( a3 == 1 )
  {
    Object = AllocateObject(0xD8uLL);
    *(_QWORD *)this = Object;
    if ( Object )
    {
      *(_DWORD *)(Object + 24) = 216;
      *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
      v5 = (_QWORD *)(*(_QWORD *)this + 48LL);
      v5[1] = v5;
      *v5 = v5;
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
  return this;
}
