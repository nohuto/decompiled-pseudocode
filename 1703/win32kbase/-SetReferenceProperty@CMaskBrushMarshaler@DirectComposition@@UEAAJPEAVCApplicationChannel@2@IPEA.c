/*
 * XREFs of ?SetReferenceProperty@CMaskBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0024590
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01407EC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CMaskBrushMarshaler::SetReferenceProperty(
        DirectComposition::CMaskBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler **v9; // r14
  int v10; // ebp

  v5 = 0;
  *a5 = 0;
  if ( a3 )
  {
    if ( a3 != 1 )
      return (unsigned int)-1073741811;
    v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 48);
    v10 = 64;
  }
  else
  {
    v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 40);
    v10 = 32;
  }
  if ( !v9
    || a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          81LL) )
  {
    return (unsigned int)-1073741811;
  }
  if ( *v9 != a4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, *v9);
    *v9 = a4;
    if ( a4 )
      DirectComposition::CResourceMarshaler::AddRef(a4);
    *((_DWORD *)this + 4) |= v10;
    *a5 = 1;
  }
  return v5;
}
