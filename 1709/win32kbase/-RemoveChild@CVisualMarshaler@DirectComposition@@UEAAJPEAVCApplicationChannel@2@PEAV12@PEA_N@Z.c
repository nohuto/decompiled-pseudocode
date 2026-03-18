/*
 * XREFs of ?RemoveChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@PEA_N@Z @ 0x1C002BA70
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?FindAndDequeue@CApplicationChannel@DirectComposition@@KAXPEAVCResourceMarshaler@2@PEAPEAV32@@Z @ 0x1C00803A4 (-FindAndDequeue@CApplicationChannel@DirectComposition@@KAXPEAVCResourceMarshaler@2@PEAPEAV32@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::RemoveChild(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CResourceMarshaler **a2,
        DirectComposition::CVisualMarshaler **a3,
        bool *a4)
{
  unsigned int v8; // esi
  _QWORD *i; // rcx
  DirectComposition::CVisualMarshaler *v10; // rax

  v8 = this != a3[20] ? 0xC000000D : 0;
  if ( a3[20] == this )
  {
    for ( i = (_QWORD *)((char *)this + 144); (DirectComposition::CVisualMarshaler **)*i != a3; i = (_QWORD *)(*i + 152LL) )
      ;
    *i = a3[19];
    v10 = *a3;
    a3[19] = 0LL;
    if ( (*((unsigned __int8 (__fastcall **)(DirectComposition::CVisualMarshaler **))v10 + 34))(a3) )
    {
      if ( ((_DWORD)a3[2] & 2) != 0 )
        DirectComposition::CApplicationChannel::FindAndDequeue(
          (struct DirectComposition::CResourceMarshaler *)a3,
          a2 + 51);
      *((_DWORD *)a3 + 4) |= 8u;
      a3[1] = (DirectComposition::CVisualMarshaler *)*((_QWORD *)this + 21);
      *((_QWORD *)this + 21) = a3;
      *a4 = 1;
    }
    else
    {
      DirectComposition::CApplicationChannel::ReleaseResource(
        (DirectComposition::CApplicationChannel *)a2,
        (struct DirectComposition::CResourceMarshaler *)a3);
    }
  }
  return v8;
}
