/*
 * XREFs of ?SetFloatProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C014AC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CMatrixTransformMarshaler::SetFloatProperty(
        DirectComposition::CMatrixTransformMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v5; // r10d
  char v6; // al
  unsigned __int64 v7; // r8
  bool v8; // dl
  __int64 v9; // r9

  v5 = a2 >= 6 ? 0xC000000D : 0;
  if ( a2 < 6 )
  {
    v6 = a2;
    v7 = (unsigned __int64)a2 >> 1;
    v8 = 1;
    v9 = (v6 & 1) + 2 * v7;
    if ( *((float *)this + v9 + 14) == a3 )
      v8 = 0;
    else
      *((float *)this + v9 + 14) = a3;
    *a4 = v8;
  }
  return v5;
}
