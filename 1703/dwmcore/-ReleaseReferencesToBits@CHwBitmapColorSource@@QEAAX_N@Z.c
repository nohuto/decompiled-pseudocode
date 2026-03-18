/*
 * XREFs of ?ReleaseReferencesToBits@CHwBitmapColorSource@@QEAAX_N@Z @ 0x18019F1F0
 * Callers:
 *     ?KeepOnlyFullValidRealizations@CacheEntryList@CHwBitmapCache@@QEAA_NXZ @ 0x18019C8EC (-KeepOnlyFullValidRealizations@CacheEntryList@CHwBitmapCache@@QEAA_NXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800B4714 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ??$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800C7650 (--$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z.c)
 */

void __fastcall CHwBitmapColorSource::ReleaseReferencesToBits(CMILRefCountBase **this, char a2)
{
  CMILRefCountBase *v4; // rcx
  __int64 v5; // r9
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rdx
  _QWORD *v9; // r8

  ReleaseInterface<CVisualTree>(this + 33);
  if ( a2 )
  {
    ReleaseInterface<CD3DVidMemOnlyTexture>(this + 20);
  }
  else
  {
    v4 = this[20];
    v5 = *((_QWORD *)v4 + 2);
    if ( *((_BYTE *)v4 + 68) )
    {
      v6 = (_QWORD *)((char *)v4 + 32);
      v7 = *((_QWORD *)v4 + 4);
      v8 = (_QWORD *)*((_QWORD *)v4 + 5);
      if ( *(CMILRefCountBase **)(v7 + 8) != (CMILRefCountBase *)((char *)v4 + 32) || (_QWORD *)*v8 != v6 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      v9 = *(_QWORD **)(v5 + 40);
      if ( *v9 != v5 + 32 )
        __fastfail(3u);
      *v6 = v5 + 32;
      *((_QWORD *)v4 + 5) = v9;
      *v9 = v6;
      *(_QWORD *)(v5 + 40) = v6;
      *((_BYTE *)v4 + 68) = 0;
    }
  }
}
