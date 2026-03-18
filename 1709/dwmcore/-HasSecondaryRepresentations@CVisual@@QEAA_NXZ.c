/*
 * XREFs of ?HasSecondaryRepresentations@CVisual@@QEAA_NXZ @ 0x180177530
 * Callers:
 *     ?GetVisualListenersInfoImpl@@YAXP6APEAVIVisualListenerInfoProvider@@PEAVCResource@@@ZAEBV?$CPtrArray@VCResource@@@@PEA_N3@Z @ 0x180187BD4 (-GetVisualListenersInfoImpl@@YAXP6APEAVIVisualListenerInfoProvider@@PEAVCResource@@@ZAEBV-$CPtrA.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B2164 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::HasSecondaryRepresentations(CVisual *this)
{
  char v1; // bp
  CVisual *i; // rdi
  __int64 v3; // rbx
  unsigned int v4; // esi
  unsigned __int64 v5; // rax

  v1 = 0;
  for ( i = this; i; i = (CVisual *)*((_QWORD *)i + 10) )
  {
    v3 = *((_QWORD *)i + 3);
    if ( (v3 & 2) != 0 )
      v3 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v3) = v3 & 1;
    v4 = 0;
    if ( (_DWORD)v3 )
    {
      while ( 1 )
      {
        v5 = CPtrArrayBase::operator[]((__int64 *)i + 3, v4);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 15LL) )
          break;
        if ( ++v4 >= (unsigned int)v3 )
          goto LABEL_10;
      }
      v1 = 1;
    }
LABEL_10:
    ;
  }
  return v1;
}
