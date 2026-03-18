/*
 * XREFs of ?ReleaseAllReferences@CEffectBrushMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0080DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CEffectBrushMarshaler::ReleaseAllReferences(
        DirectComposition::CEffectBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  __int64 i; // rdi

  DirectComposition::CApplicationChannel::ReleaseResource(
    a2,
    *((struct DirectComposition::CResourceMarshaler **)this + 5));
  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 5) = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  *((_QWORD *)this + 6) = 0LL;
  if ( *((_QWORD *)this + 7) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 7) + 8 * i));
    Win32FreePool(*((_QWORD *)this + 7));
    *((_QWORD *)this + 7) = 0LL;
    *((_DWORD *)this + 16) = 0;
    *((_DWORD *)this + 17) = 0;
  }
}
