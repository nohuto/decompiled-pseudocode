/*
 * XREFs of ?ReleaseAllReferences@CClipGroupMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01488B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CClipGroupMarshaler::ReleaseAllReferences(
        DirectComposition::CClipGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 i; // rdi
  __int64 v5; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 18); i = (unsigned int)(i + 1) )
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 8) + 8 * i));
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)this + 8) = 0LL;
    *((_DWORD *)this + 18) = 0;
  }
}
