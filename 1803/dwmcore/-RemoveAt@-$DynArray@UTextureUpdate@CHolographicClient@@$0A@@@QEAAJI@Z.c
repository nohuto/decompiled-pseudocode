/*
 * XREFs of ?RemoveAt@?$DynArray@UTextureUpdate@CHolographicClient@@$0A@@@QEAAJI@Z @ 0x1802002B0
 * Callers:
 *     ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x1801FF00C (-DoTextureUpdates@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CHolographicClient::TextureUpdate,0>::RemoveAt(__int64 *a1)
{
  int v1; // edx
  unsigned int v2; // ebx
  __int64 v4; // r9
  unsigned int v5; // r10d
  __int64 v6; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm1

  v1 = *((_DWORD *)a1 + 6);
  v2 = 0;
  if ( v1 )
  {
    v4 = *a1;
    v5 = 0;
    if ( v1 != 1 )
    {
      do
      {
        v6 = 32LL * v5++;
        v7 = 32LL * v5;
        v8 = *(_OWORD *)(v7 + v4 + 16);
        *(_OWORD *)(v6 + v4) = *(_OWORD *)(v7 + v4);
        *(_OWORD *)(v6 + v4 + 16) = v8;
        v1 = *((_DWORD *)a1 + 6);
      }
      while ( v5 < v1 - 1 );
    }
    *((_DWORD *)a1 + 6) = v1 - 1;
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu);
  }
  return v2;
}
