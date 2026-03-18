/*
 * XREFs of ?RemoveAt@?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z @ 0x1800C7E7C
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x1800B41FC (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x1800B48C4 (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x1800B4984 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x1800B49F0 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // r10d
  __int64 v6; // r11
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 >= v2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu);
  }
  else
  {
    v6 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v8 = v4++;
        v9 = 6 * v8;
        v10 = *(_OWORD *)(v6 + 48LL * v4 + 16);
        *(_OWORD *)(v6 + 8 * v9) = *(_OWORD *)(v6 + 48LL * v4);
        v11 = *(_OWORD *)(v6 + 48LL * v4 + 32);
        *(_OWORD *)(v6 + 8 * v9 + 16) = v10;
        *(_OWORD *)(v6 + 8 * v9 + 32) = v11;
        v2 = *((_DWORD *)a1 + 6);
      }
      while ( v4 < v2 - 1 );
    }
    *((_DWORD *)a1 + 6) = v2 - 1;
  }
  return v3;
}
