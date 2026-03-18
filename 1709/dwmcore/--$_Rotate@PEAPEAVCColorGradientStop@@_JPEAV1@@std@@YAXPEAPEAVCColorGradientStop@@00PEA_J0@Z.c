/*
 * XREFs of ??$_Rotate@PEAPEAVCColorGradientStop@@_JPEAV1@@std@@YAXPEAPEAVCColorGradientStop@@00PEA_J0@Z @ 0x180167320
 * Callers:
 *     ??$rotate@PEAPEAVCColorGradientStop@@@std@@YAPEAPEAVCColorGradientStop@@PEAPEAV1@00@Z @ 0x1801673D8 (--$rotate@PEAPEAVCColorGradientStop@@@std@@YAPEAPEAVCColorGradientStop@@PEAPEAV1@00@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Rotate<CColorGradientStop * *,__int64,CColorGradientStop *>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // r10
  __int64 v5; // r9
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rt2
  __int64 *v12; // r9
  __int64 v13; // rbx
  __int64 *v14; // rdx
  __int64 *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx

  v3 = (a2 - (__int64)a1) >> 3;
  v5 = a3 - a1;
  v7 = v5;
  v8 = v3;
  if ( v3 )
  {
    do
    {
      v9 = v7;
      v7 = v8;
      v11 = v9 % v8;
      result = v9 / v8;
      v8 = v11;
    }
    while ( v11 );
    if ( v7 < v5 && v7 > 0 )
    {
      v12 = &a1[v7];
      v13 = v3;
      do
      {
        v14 = &v12[v13];
        v15 = v12;
        if ( &v12[v13] == a3 )
          v14 = a1;
        do
        {
          v16 = *v15;
          result = *v14;
          *v15 = *v14;
          v15 = v14;
          *v14 = v16;
          v17 = a3 - v14;
          if ( v3 >= v17 )
          {
            result = v3 - v17;
            v14 = &a1[v3 - v17];
          }
          else
          {
            v14 = (__int64 *)((char *)v14 + v13 * 8);
          }
        }
        while ( v14 != v12 );
        --v7;
        --v12;
      }
      while ( v7 > 0 );
    }
  }
  return result;
}
