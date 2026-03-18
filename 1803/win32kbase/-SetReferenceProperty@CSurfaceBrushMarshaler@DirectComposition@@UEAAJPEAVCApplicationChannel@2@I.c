/*
 * XREFs of ?SetReferenceProperty@CSurfaceBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C001AEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C0145F48 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CSurfaceBrushMarshaler::SetReferenceProperty(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler **v9; // r14
  int v10; // ebp
  char v11; // al
  bool v13; // zf

  v5 = 0;
  *a5 = 0;
  if ( a3 )
  {
    if ( a3 != 6 )
      return (unsigned int)-1073741811;
    v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 64);
    v10 = 64;
    if ( a4 )
    {
      v11 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              25LL);
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 56);
  v10 = 32;
  if ( !a4
    || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
         a4,
         37LL)
    || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
         a4,
         15LL)
    || (v13 = (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                106LL) == 0,
        v11 = 0,
        !v13) )
  {
LABEL_4:
    v11 = 1;
  }
LABEL_5:
  if ( !v9 || !v11 )
    return (unsigned int)-1073741811;
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
