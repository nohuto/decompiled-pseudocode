/*
 * XREFs of ?GetOrientationBias@EdgyProcessorTarget@@AEBA?AW4OrientationBias@@XZ @ 0x1800B4138
 * Callers:
 *     ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x1800B3F20 (-OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EdgyProcessorTarget::GetOrientationBias(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // r8d
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 i; // rcx
  int v7; // ecx

  v1 = 0;
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v2 = 0;
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 88LL);
    v4 = *(_QWORD *)(v3 + 72);
    v5 = *(_QWORD *)(v3 + 80);
    for ( i = v4; i != v5; i += 96LL )
    {
      if ( *(_DWORD *)(i + 52) && *(float *)(i + 56) != 0.0 )
        ++v2;
    }
    v7 = 0;
    if ( v4 == v5 )
      goto LABEL_15;
    do
    {
      if ( *(_DWORD *)(v4 + 52) && *(float *)(v4 + 60) != 0.0 )
        ++v7;
      v4 += 96LL;
    }
    while ( v4 != v5 );
    if ( !v7 )
    {
LABEL_15:
      if ( !v2 )
        return v1;
    }
    else if ( !v2 )
    {
      return 1;
    }
    if ( !v7 )
      return 2;
  }
  return v1;
}
