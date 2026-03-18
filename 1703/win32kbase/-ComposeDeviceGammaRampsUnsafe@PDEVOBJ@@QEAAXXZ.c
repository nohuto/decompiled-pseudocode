/*
 * XREFs of ?ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ @ 0x1C00FA948
 * Callers:
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C0002190 (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PDEVOBJ::ComposeDeviceGammaRampsUnsafe(PDEVOBJ *this)
{
  __int64 v1; // rbx
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r10
  _WORD *v7; // rdx
  __int64 v8; // r8

  v1 = 256LL;
  v2 = *(_QWORD *)(*(_QWORD *)this + 1704LL);
  v3 = *(_QWORD *)(*(_QWORD *)this + 1720LL);
  v4 = *(_QWORD *)(*(_QWORD *)this + 1712LL);
  v5 = v2 + 512;
  v6 = v2 - (v3 + 512);
  v7 = (_WORD *)(v3 + 1024);
  v8 = v5 - (v3 + 512);
  do
  {
    *(v7 - 512) = *(_WORD *)(v4 + 2LL * *((unsigned __int8 *)v7 + v6 - 511));
    *(v7 - 256) = *(_WORD *)(v4 + 2LL * *((unsigned __int8 *)v7 + v8 - 511) + 512);
    *v7 = *(_WORD *)(v4 + 2LL * *((unsigned __int8 *)v7 + v8 + 1) + 1024);
    ++v7;
    --v1;
  }
  while ( v1 );
}
