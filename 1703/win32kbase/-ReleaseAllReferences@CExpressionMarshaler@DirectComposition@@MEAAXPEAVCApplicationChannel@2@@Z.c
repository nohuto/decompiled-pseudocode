/*
 * XREFs of ?ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0018070
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C00197D4 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C001F4D0 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CExpressionMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 i; // rsi
  struct DirectComposition::CResourceMarshaler *v5; // rcx
  struct DirectComposition::CResourceMarshaler *v6; // rdx
  struct DirectComposition::CResourceMarshaler *v7; // rdx

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
    (DirectComposition::CBaseExpressionMarshaler *)this,
    a2);
  if ( this[22] )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 46); i = (unsigned int)(i + 1) )
      DirectComposition::CApplicationChannel::ReleaseWeakReference(
        a2,
        *((struct DirectComposition::CWeakReferenceBase **)this[22] + i));
    Win32FreePool(this[22]);
    this[22] = 0LL;
  }
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  v5 = this[24];
  if ( v5 )
  {
    Win32FreePool(v5);
    this[24] = 0LL;
  }
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  v6 = this[13];
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
    this[13] = 0LL;
  }
  v7 = this[17];
  if ( v7 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v7);
    this[17] = 0LL;
  }
}
