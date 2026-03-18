/*
 * XREFs of ?ReleaseAllReferences@CPropertyBagMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C002AEE0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CPropertyBagMarshaler::ReleaseAllReferences(
        DirectComposition::CPropertyBagMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    Win32FreePool(v4, a2, a3);
    *((_QWORD *)this + 6) = 0LL;
  }
}
