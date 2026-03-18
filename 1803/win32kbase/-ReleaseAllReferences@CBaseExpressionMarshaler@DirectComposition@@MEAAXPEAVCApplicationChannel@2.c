/*
 * XREFs of ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000A2E0
 * Callers:
 *     ?ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0009360 (-ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChanne.c)
 *     ?ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0009530 (-ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CInjectionAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C014F530 (-ReleaseAllReferences@CInjectionAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChann.c)
 *     ?ReleaseAllReferences@CNaturalAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C014FCC0 (-ReleaseAllReferences@CNaturalAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel.c)
 *     ?ReleaseAllReferences@CConditionalExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0155820 (-ReleaseAllReferences@CConditionalExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationCh.c)
 * Callees:
 *     ?RemoveObject@?$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0HEHHEDEE@$00@DirectComposition@@QEAAPEAVCWeakReferenceBase@2@PEAVCResourceMarshaler@2@@Z @ 0x1C00079D4 (-RemoveObject@-$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx
  bool v5; // zf
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdi

  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    v5 = (*(_DWORD *)(v4 + 8))-- == 1;
    v6 = *(_QWORD *)(v4 + 16);
    if ( v5 )
    {
      Win32FreePool(v4);
      if ( v6 )
      {
        DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::RemoveObject(
          (PRTL_GENERIC_TABLE)((char *)a2 + 264),
          v6);
        *(_DWORD *)(v6 + 16) &= ~4u;
      }
    }
    *((_QWORD *)this + 7) = 0LL;
  }
  v7 = *((_QWORD *)this + 11);
  if ( v7 )
  {
    v8 = 0LL;
    if ( *((_DWORD *)this + 25) )
    {
      do
      {
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 11) + 8 * v8));
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < *((_DWORD *)this + 25) );
      v7 = *((_QWORD *)this + 11);
    }
    Win32FreePool(v7);
    *((_QWORD *)this + 11) = 0LL;
    *((_DWORD *)this + 25) = 0;
    *((_DWORD *)this + 24) = 0;
  }
}
