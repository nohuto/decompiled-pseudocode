/*
 * XREFs of ?GetIndicesCore@CMeshGeometry2D@@MEAAJIPEAII@Z @ 0x18019B3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMeshGeometry2D::GetIndicesCore(CMeshGeometry2D *this, int a2, unsigned int *a3, unsigned int a4)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9

  v5 = *((_DWORD *)this + 40) >> 2;
  if ( a4 >= v5 )
  {
    v6 = 0;
    if ( v5 )
    {
      v7 = 0LL;
      v8 = v5;
      do
      {
        a3[v7] = a2 + *(_DWORD *)(*((_QWORD *)this + 21) + v7 * 4);
        ++v7;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xF9u);
  }
  return v6;
}
