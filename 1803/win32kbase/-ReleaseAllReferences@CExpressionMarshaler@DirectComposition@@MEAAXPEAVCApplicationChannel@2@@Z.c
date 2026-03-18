/*
 * XREFs of ?ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0009530
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveObject@?$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0HEHHEDEE@$00@DirectComposition@@QEAAPEAVCWeakReferenceBase@2@PEAVCResourceMarshaler@2@@Z @ 0x1C00079D4 (-RemoveObject@-$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0.c)
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000A2E0 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CExpressionMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rsi
  struct DirectComposition::CResourceMarshaler *v9; // rdi
  struct DirectComposition::CResourceMarshaler *v10; // rcx
  struct DirectComposition::CResourceMarshaler *v11; // rdx
  struct DirectComposition::CResourceMarshaler *v12; // rdx

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
    (DirectComposition::CBaseExpressionMarshaler *)this,
    a2);
  v4 = this[24];
  if ( v4 )
  {
    v5 = 0LL;
    if ( *((_DWORD *)this + 50) )
    {
      do
      {
        v6 = *((_QWORD *)this[24] + v5);
        v7 = (*(_DWORD *)(v6 + 8))-- == 1;
        v8 = *(_QWORD *)(v6 + 16);
        if ( v7 )
        {
          Win32FreePool(v6);
          if ( v8 )
          {
            DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::RemoveObject(
              (PRTL_GENERIC_TABLE)((char *)a2 + 264),
              v8);
            *(_DWORD *)(v8 + 16) &= ~4u;
          }
        }
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *((_DWORD *)this + 50) );
      v4 = this[24];
    }
    if ( (int)IsWin32FreePoolImplSupported() >= 0 )
      Win32FreePoolImpl(v4);
    this[24] = 0LL;
  }
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  v9 = this[26];
  if ( v9 )
  {
    if ( (int)IsWin32FreePoolImplSupported() >= 0 )
      Win32FreePoolImpl(v9);
    this[26] = 0LL;
  }
  v10 = this[28];
  if ( v10 )
  {
    Win32FreePool(v10);
    this[28] = 0LL;
  }
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 0;
  v11 = this[15];
  if ( v11 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
    this[15] = 0LL;
  }
  v12 = this[19];
  if ( v12 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
    this[19] = 0LL;
  }
}
