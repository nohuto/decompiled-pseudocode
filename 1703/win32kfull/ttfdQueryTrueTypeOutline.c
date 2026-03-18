/*
 * XREFs of ttfdQueryTrueTypeOutline @ 0x1C022C2E4
 * Callers:
 *     ttfdSemQueryTrueTypeOutline @ 0x1C02258D0 (ttfdSemQueryTrueTypeOutline.c)
 * Callees:
 *     bGeneratePath @ 0x1C022B58C (bGeneratePath.c)
 *     ttfdQueryQuadTrueTypeOutline @ 0x1C022C1F0 (ttfdQueryQuadTrueTypeOutline.c)
 */

__int64 __fastcall ttfdQueryTrueTypeOutline(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6)
{
  unsigned int v6; // ebx
  char v10; // di
  ULONG QuadTrueTypeOutline; // eax
  unsigned int v12; // ebp
  POINTFIX *v13; // rax
  POINTFIX *v14; // rsi
  int v15; // eax
  unsigned int v17; // [rsp+70h] [rbp+18h] BYREF

  v6 = -1;
  if ( (a3 & 2) != 0 )
  {
    v10 = a3 & 4;
    QuadTrueTypeOutline = ttfdQueryQuadTrueTypeOutline(a1, a2, a3 & 4, a4, 0, 0LL);
    v12 = QuadTrueTypeOutline;
    if ( QuadTrueTypeOutline )
    {
      if ( QuadTrueTypeOutline != -1 )
      {
        v13 = (POINTFIX *)EngAllocMem(0, QuadTrueTypeOutline, 0x64667454u);
        v14 = v13;
        if ( v13 )
        {
          v15 = ttfdQueryQuadTrueTypeOutline(a1, a2, v10, a4, v12, v13);
          if ( v15 && v15 != -1 && (unsigned int)bGeneratePath(0LL, v14, v12, &v17, (__int64)a6, a5) )
            v6 = v17;
          EngFreeMem(v14);
        }
      }
    }
  }
  else
  {
    return (unsigned int)ttfdQueryQuadTrueTypeOutline(a1, a2, a3, a4, a5, a6);
  }
  return v6;
}
