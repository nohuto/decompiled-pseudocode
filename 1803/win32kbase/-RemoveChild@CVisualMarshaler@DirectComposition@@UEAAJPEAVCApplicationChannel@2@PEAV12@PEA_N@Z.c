/*
 * XREFs of ?RemoveChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@PEA_N@Z @ 0x1C000CD90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::RemoveChild(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        DirectComposition::CVisualMarshaler **a3,
        bool *a4)
{
  unsigned int v8; // esi
  _QWORD *i; // rcx
  DirectComposition::CVisualMarshaler *v10; // rax

  v8 = this != a3[22] ? 0xC000000D : 0;
  if ( a3[22] == this )
  {
    for ( i = (_QWORD *)((char *)this + 160); (DirectComposition::CVisualMarshaler **)*i != a3; i = (_QWORD *)(*i + 168LL) )
      ;
    *i = a3[21];
    v10 = *a3;
    a3[21] = 0LL;
    if ( (*((unsigned __int8 (__fastcall **)(DirectComposition::CVisualMarshaler **))v10 + 35))(a3) )
    {
      *((_DWORD *)a3 + 4) |= 8u;
      a3[24] = (DirectComposition::CVisualMarshaler *)*((_QWORD *)this + 23);
      *((_QWORD *)this + 23) = a3;
      *a4 = 1;
    }
    else
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, (struct DirectComposition::CResourceMarshaler *)a3);
    }
  }
  return v8;
}
