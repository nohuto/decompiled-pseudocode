/*
 * XREFs of ?SetReferenceProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0149780
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C0145F48 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4SourceModifierIndex@@PEAVCConditionalExpressionMarshaler@2@PEA_N@Z @ 0x1C01499BC (-SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4So.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v10; // rdx
  int v11; // eax
  __int64 v12; // r8

  v5 = 0;
  switch ( a3 )
  {
    case 8:
      if ( !a4
        || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
             a4,
             38LL) )
      {
        v12 = 0LL;
        return (unsigned int)DirectComposition::CManipulationMarshaler::SetSourceModifier(this, a2, v12, a4, a5);
      }
      return (unsigned int)-1073741811;
    case 9:
      if ( !a4
        || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
             a4,
             38LL) )
      {
        v12 = 1LL;
        return (unsigned int)DirectComposition::CManipulationMarshaler::SetSourceModifier(this, a2, v12, a4, a5);
      }
      return (unsigned int)-1073741811;
    case 10:
      if ( !a4
        || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
             a4,
             38LL) )
      {
        v12 = 2LL;
        return (unsigned int)DirectComposition::CManipulationMarshaler::SetSourceModifier(this, a2, v12, a4, a5);
      }
      return (unsigned int)-1073741811;
    case 11:
      if ( !a4
        || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
             a4,
             38LL) )
      {
        v12 = 3LL;
        return (unsigned int)DirectComposition::CManipulationMarshaler::SetSourceModifier(this, a2, v12, a4, a5);
      }
      return (unsigned int)-1073741811;
    case 12:
      if ( !a4
        || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
             a4,
             38LL) )
      {
        v12 = 4LL;
        return (unsigned int)DirectComposition::CManipulationMarshaler::SetSourceModifier(this, a2, v12, a4, a5);
      }
      return (unsigned int)-1073741811;
  }
  if ( a3 != 13 && a3 != 19
    || a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          82LL) )
  {
    return (unsigned int)-1073741811;
  }
  v10 = this[86];
  if ( v10 != a4 )
  {
    if ( v10 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
      this[86] = 0LL;
    }
    if ( a4 )
    {
      this[86] = a4;
      DirectComposition::CResourceMarshaler::AddRef(a4);
    }
    v11 = 256;
    if ( a3 != 13 )
      v11 = 512;
    *((_DWORD *)this + 4) |= v11;
    *a5 = 1;
  }
  return v5;
}
