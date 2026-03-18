/*
 * XREFs of ?GetIndicesCore@CMeshGeometry2D@@MEAAJIPEAII@Z @ 0x1801652B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMeshGeometry2D::GetIndicesCore(CMeshGeometry2D *this, int a2, unsigned int *a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // r10d
  __int64 v7; // rax
  __int64 v8; // r8

  v4 = 0;
  v5 = *((_DWORD *)this + 40) >> 2;
  if ( a4 >= v5 )
  {
    if ( v5 )
    {
      v7 = 0LL;
      v8 = v5;
      do
      {
        a3[v7] = a2 + *(_DWORD *)(v7 * 4 + *((_QWORD *)this + 21));
        ++v7;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xF9u);
  }
  return v4;
}
