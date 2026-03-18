/*
 * XREFs of ?ReleaseAllReferences@CPropertyBagMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C001F2D0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CPropertyBagMarshaler::ReleaseAllReferences(
        DirectComposition::CPropertyBagMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    Win32FreePool(v3);
    *((_QWORD *)this + 6) = 0LL;
  }
}
