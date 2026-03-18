/*
 * XREFs of ?SetReferenceArrayProperty@CCompositionLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0147100
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C00252EC (-ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChan.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01407EC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CCompositionLightMarshaler::SetReferenceArrayProperty(
        DirectComposition::CCompositionLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  DirectComposition::CCompositionLightMarshaler *v9; // rdi
  int v10; // esi
  unsigned int v11; // ebp
  struct DirectComposition::CResourceMarshaler **v12; // r8

  v6 = 0;
  v9 = this;
  v10 = 0;
  *a6 = 0;
  if ( a3 || a5 && !a4 )
    v10 = -1073741811;
  v11 = 0;
  if ( v10 >= 0 )
  {
    do
    {
      if ( v11 >= a5 )
        break;
      this = a4[v11];
      if ( !this
        || !(*(unsigned __int8 (__fastcall **)(DirectComposition::CCompositionLightMarshaler *, __int64))(*(_QWORD *)this + 120LL))(
              this,
              31LL) )
      {
        v10 = -1073741811;
      }
      ++v11;
    }
    while ( v10 >= 0 );
    if ( v10 >= 0 )
    {
      v12 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)v9 + 5);
      if ( v12 )
      {
        DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(this, a2, v12, (unsigned int *)v9 + 12);
        *((_DWORD *)v9 + 4) |= 0x20u;
      }
      *((_DWORD *)v9 + 12) = a5;
      *((_QWORD *)v9 + 5) = a4;
      *((_DWORD *)v9 + 13) = 0;
      *a6 = 1;
      if ( *((_DWORD *)v9 + 12) )
      {
        do
          DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)v9 + 5)
                                                                                                  + 8LL * v6++));
        while ( v6 < *((_DWORD *)v9 + 12) );
      }
    }
  }
  return (unsigned int)v10;
}
