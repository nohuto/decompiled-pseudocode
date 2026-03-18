/*
 * XREFs of IopProcessIrpStackProfiler @ 0x1401225C0
 * Callers:
 *     IopIrpStackProfilerDpcRoutine @ 0x140122390 (IopIrpStackProfilerDpcRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopProcessIrpStackProfiler(__int64 a1)
{
  unsigned __int64 v1; // r9
  unsigned int v2; // edx
  int v4; // r8d
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned int v7; // eax
  unsigned __int64 *v8; // rcx
  __int64 result; // rax
  unsigned int v10; // ecx
  _QWORD *v11; // r10
  __int64 v12; // r9

  v1 = 0LL;
  v2 = IopLargeIrpStackLocations;
  v4 = IopMediumIrpStackLocations;
  v5 = 0LL;
  v6 = 0LL;
  if ( (IopIrpStackProfilerFlags & 1) != 0 )
  {
    v7 = 10;
    v8 = (unsigned __int64 *)(a1 + 80);
    do
    {
      if ( *v8 > v1 )
      {
        v2 = v7;
        v1 = *v8;
      }
      ++v7;
      ++v8;
    }
    while ( v7 < 0x14 );
    if ( v1 < (unsigned int)IopIrpStackProfilerMinSizeThreshold )
      v2 = IopLargeIrpStackLocations;
  }
  result = (unsigned int)IopIrpStackProfilerFlags;
  v10 = 2;
  if ( (IopIrpStackProfilerFlags & 2) != 0 && v2 > 2 )
  {
    v11 = (_QWORD *)(a1 + 16);
    v12 = 2LL - v2;
    do
    {
      v6 += *v11;
      result = v6 * v12;
      ++v11;
      if ( v6 * v12 < v5 )
        v4 = v10;
      ++v10;
      ++v12;
      if ( result >= v5 )
        result = v5;
      v5 = result;
    }
    while ( v10 < v2 );
  }
  if ( IopLargeIrpStackLocations != v2 )
    IopLargeIrpStackLocations = v2;
  if ( IopMediumIrpStackLocations != v4 )
    IopMediumIrpStackLocations = v4;
  return result;
}
