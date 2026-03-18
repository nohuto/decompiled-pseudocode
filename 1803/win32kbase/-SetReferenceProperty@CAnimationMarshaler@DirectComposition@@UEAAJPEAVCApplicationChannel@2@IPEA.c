/*
 * XREFs of ?SetReferenceProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0007270
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C0145F48 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::SetReferenceProperty(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx

  v5 = 0;
  *a5 = 0;
  if ( a3 )
  {
    if ( a3 == 8
      && a4
      && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
           a4,
           4LL)
      && !*((_QWORD *)this + 15)
      && !*((_QWORD *)this + 11) )
    {
      *((_QWORD *)this + 15) = a4;
      DirectComposition::CResourceMarshaler::AddRef(a4);
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a4
    || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          131LL) )
  {
    return (unsigned int)-1073741811;
  }
  v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 8);
  if ( v9 != a4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
    *((_QWORD *)this + 8) = a4;
    DirectComposition::CResourceMarshaler::AddRef(a4);
    *((_DWORD *)this + 4) &= ~0x40u;
    *a5 = 1;
  }
  return v5;
}
