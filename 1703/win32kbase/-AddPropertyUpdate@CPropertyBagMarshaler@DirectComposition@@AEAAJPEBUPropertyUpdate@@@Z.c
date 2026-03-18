/*
 * XREFs of ?AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@@Z @ 0x1C001ED38
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@_K@Z @ 0x1C001EC40 (-UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@_K@Z.c)
 *     ?SetBufferProperty@CPropertyBagMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C001F160 (-SetBufferProperty@CPropertyBagMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C001E460 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CPropertyBagMarshaler::AddPropertyUpdate(
        DirectComposition::CPropertyBagMarshaler *this,
        const struct PropertyUpdate *a2)
{
  int v2; // edi
  unsigned __int64 v4; // rcx
  unsigned int v5; // r8d
  __int64 v7; // r9
  __int64 v8; // rdx

  v2 = 0;
  v4 = *((_QWORD *)this + 14);
  v5 = 0;
  if ( v4 )
  {
    v7 = 0LL;
    while ( *(_DWORD *)(v7 * *((_QWORD *)this + 13) + *((_QWORD *)this + 9)) != *(_DWORD *)a2 )
    {
      v7 = ++v5;
      if ( v5 >= v4 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    if ( v4 != *((_QWORD *)this + 12)
      || (v2 = DirectComposition::CDCompDynamicArrayBase::Grow(
                 (DirectComposition::CPropertyBagMarshaler *)((char *)this + 64),
                 1LL,
                 0x62704344u),
          v2 >= 0) )
    {
      v8 = *((_QWORD *)this + 14);
      *((_QWORD *)this + 14) = v8 + 1;
      memmove((void *)(*((_QWORD *)this + 9) + v8 * *((_QWORD *)this + 13)), a2, *((_QWORD *)this + 13));
    }
  }
  return (unsigned int)v2;
}
