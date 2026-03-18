/*
 * XREFs of ?GetVisualListenersInfoImpl@@YAXP6APEAVIVisualListenerInfoProvider@@PEAVCResource@@@ZAEBV?$CPtrArray@VCResource@@@@PEA_N3@Z @ 0x1801BD124
 * Callers:
 *     ?GetVisualListenersInfo@CCompositionCubeMap@@UEAAXPEA_N0@Z @ 0x180183A00 (-GetVisualListenersInfo@CCompositionCubeMap@@UEAAXPEA_N0@Z.c)
 *     ?GetVisualListenersInfo@CCompositionSurfaceBitmap@@UEAAXPEA_N0@Z @ 0x180186EB0 (-GetVisualListenersInfo@CCompositionSurfaceBitmap@@UEAAXPEA_N0@Z.c)
 *     ?GetVisualListenersInfo@CSpriteVisualContent@@UEAAXPEA_N0@Z @ 0x1801B1810 (-GetVisualListenersInfo@CSpriteVisualContent@@UEAAXPEA_N0@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B963C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?HasSecondaryRepresentations@CVisual@@QEAA_NXZ @ 0x1801A7FB4 (-HasSecondaryRepresentations@CVisual@@QEAA_NXZ.c)
 */

char __fastcall GetVisualListenersInfoImpl(__int64 (__fastcall *a1)(CVisual *), __int64 *a2, char *a3, char *a4)
{
  __int64 v4; // rbx
  char v5; // r10
  unsigned int i; // edi
  CVisual *v11; // rsi
  void (__fastcall ***v12)(_QWORD, char *, char *); // rax
  char result; // al
  char v14; // [rsp+58h] [rbp+10h] BYREF
  char v15; // [rsp+60h] [rbp+18h] BYREF

  v4 = *a2;
  v5 = 0;
  v14 = *a3;
  v15 = 0;
  if ( (v4 & 2) != 0 )
    v4 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v4) = v4 & 1;
  for ( i = 0; i < (unsigned int)v4; ++i )
  {
    v11 = (CVisual *)CPtrArrayBase::operator[](a2, i);
    v12 = (void (__fastcall ***)(_QWORD, char *, char *))a1(v11);
    if ( v12 )
    {
      (**v12)(v12, &v14, &v15);
      v5 = v15;
      if ( v15 )
        break;
    }
    else
    {
      if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v11 + 48LL))(v11, 151LL) )
      {
        if ( v14 || (v14 = 1, CVisual::HasSecondaryRepresentations(v11)) )
        {
          v5 = 1;
          break;
        }
      }
      v5 = v15;
    }
  }
  result = v14;
  *a3 = v14;
  *a4 = v5;
  return result;
}
