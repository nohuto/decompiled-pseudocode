/*
 * XREFs of ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x1C024B1A0
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C0299C00 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     <none>
 */

struct PFF *__fastcall PFTOBJ::HFFToPPFF(PFTOBJ *this, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  unsigned int v4; // ecx
  struct PFF *result; // rax

  v2 = *(_QWORD *)this;
  v3 = 0LL;
  v4 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  if ( v4 )
  {
    do
    {
      for ( result = *(struct PFF **)(v2 + 8 * v3 + 40); result; result = (struct PFF *)*((_QWORD *)result + 1) )
      {
        if ( a2 == *((_QWORD *)result + 10) )
          return result;
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < v4 );
  }
  return 0LL;
}
