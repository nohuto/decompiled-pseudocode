/*
 * XREFs of ?SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0021CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0017430 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01407EC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CSpriteVisualMarshaler::SetReferenceProperty(
        DirectComposition::CSpriteVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler **v9; // r14
  int v10; // ebp
  struct DirectComposition::CResourceMarshaler *v11; // rdx

  v5 = 0;
  *a5 = 0;
  if ( a3 == 10 )
    return (unsigned int)-1073741811;
  if ( a3 == 41 )
  {
    if ( !a4
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
           a4,
           81LL) )
    {
      v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 240);
      v10 = 0x4000000;
      goto LABEL_6;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 42 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
  if ( a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          125LL) )
  {
    return (unsigned int)-1073741811;
  }
  v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 248);
  v10 = 0x8000000;
LABEL_6:
  v11 = *v9;
  if ( *v9 != a4 )
  {
    if ( v11 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
      *v9 = 0LL;
    }
    if ( a4 )
    {
      *v9 = a4;
      DirectComposition::CResourceMarshaler::AddRef(a4);
    }
    *((_DWORD *)this + 4) |= v10;
    *a5 = 1;
  }
  return v5;
}
