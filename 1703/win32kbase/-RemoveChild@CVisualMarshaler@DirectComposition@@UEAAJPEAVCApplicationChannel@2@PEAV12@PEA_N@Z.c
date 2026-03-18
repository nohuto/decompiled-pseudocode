/*
 * XREFs of ?RemoveChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@PEA_N@Z @ 0x1C0017170
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlinkVisualChildInternal@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAV12@@Z @ 0x1C00173E8 (-UnlinkVisualChildInternal@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PE.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::RemoveChild(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        DirectComposition::CVisualMarshaler **a3,
        bool *a4)
{
  unsigned int v8; // esi
  _QWORD *i; // rdx
  DirectComposition::CVisualMarshaler *v10; // rax

  v8 = this != a3[20] ? 0xC000000D : 0;
  if ( a3[20] == this )
  {
    for ( i = (_QWORD *)((char *)this + 144); (DirectComposition::CVisualMarshaler **)*i != a3; i = (_QWORD *)(*i + 152LL) )
      ;
    *i = a3[19];
    v10 = *a3;
    a3[19] = 0LL;
    if ( (*((unsigned __int8 (__fastcall **)(DirectComposition::CVisualMarshaler **, struct DirectComposition::CApplicationChannel *))v10
          + 34))(
           a3,
           a2) )
    {
      DirectComposition::CVisualMarshaler::UnlinkVisualChildInternal(
        this,
        a2,
        (struct DirectComposition::CVisualMarshaler *)a3);
      *a4 = 1;
    }
    else
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, (struct DirectComposition::CResourceMarshaler *)a3);
    }
  }
  return v8;
}
