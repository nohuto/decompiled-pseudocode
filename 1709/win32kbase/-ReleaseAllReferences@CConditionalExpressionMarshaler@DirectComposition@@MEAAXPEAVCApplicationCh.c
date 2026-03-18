/*
 * XREFs of ?ReleaseAllReferences@CConditionalExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0149B60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C002B3E0 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CConditionalExpressionMarshaler::ReleaseAllReferences(
        DirectComposition::CConditionalExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 i; // rdi

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(this, a2);
  if ( *((_QWORD *)this + 15) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 32); i = (unsigned int)(i + 1) )
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 15) + 8 * i));
    Win32FreePool(*((_QWORD *)this + 15));
    *((_QWORD *)this + 15) = 0LL;
    *((_DWORD *)this + 32) = 0;
    *((_DWORD *)this + 33) = 0;
  }
  DirectComposition::CApplicationChannel::ReleaseResource(
    a2,
    *((struct DirectComposition::CResourceMarshaler **)this + 17));
  *((_QWORD *)this + 17) = 0LL;
}
