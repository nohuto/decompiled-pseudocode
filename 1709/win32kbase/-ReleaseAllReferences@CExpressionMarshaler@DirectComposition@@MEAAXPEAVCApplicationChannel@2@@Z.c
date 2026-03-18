/*
 * XREFs of ?ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C002D650
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C002B3E0 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C002ED4C (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CExpressionMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 i; // rsi
  struct DirectComposition::CResourceMarshaler *v7; // rcx
  struct DirectComposition::CResourceMarshaler *v8; // rcx
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  struct DirectComposition::CResourceMarshaler *v10; // rdx

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
    (DirectComposition::CBaseExpressionMarshaler *)this,
    a2);
  if ( this[24] )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 50); i = (unsigned int)(i + 1) )
      DirectComposition::CApplicationChannel::ReleaseWeakReference(
        a2,
        *((struct DirectComposition::CWeakReferenceBase **)this[24] + i));
    Win32FreePool(this[24], v4, v5);
    this[24] = 0LL;
  }
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  v7 = this[26];
  if ( v7 )
  {
    Win32FreePool(v7, v4, v5);
    this[26] = 0LL;
  }
  v8 = this[28];
  if ( v8 )
  {
    Win32FreePool(v8, v4, v5);
    this[28] = 0LL;
  }
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 0;
  v9 = this[15];
  if ( v9 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
    this[15] = 0LL;
  }
  v10 = this[19];
  if ( v10 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
    this[19] = 0LL;
  }
}
