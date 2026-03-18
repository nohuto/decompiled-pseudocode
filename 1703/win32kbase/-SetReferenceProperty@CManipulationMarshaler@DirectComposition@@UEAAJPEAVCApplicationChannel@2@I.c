/*
 * XREFs of ?SetReferenceProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01433D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?SetSourceModifier@CManipulationMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@W4SourceModifierIndex@@PEAVCConditionalExpressionMarshaler@2@PEA_N@Z @ 0x1C0143508 (-SetSourceModifier@CManipulationMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@W4So.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetReferenceProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  __int64 v12; // r8

  v8 = a3 - 8;
  if ( !v8 )
  {
    if ( !a4
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
           a4,
           113LL) )
    {
      v12 = 0LL;
      return DirectComposition::CManipulationMarshaler::SetSourceModifier(this, a2, v12, a4, a5);
    }
    return 3221225485LL;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( !a4
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
           a4,
           113LL) )
    {
      v12 = 1LL;
      return DirectComposition::CManipulationMarshaler::SetSourceModifier(this, a2, v12, a4, a5);
    }
    return 3221225485LL;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( !a4
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
           a4,
           113LL) )
    {
      v12 = 2LL;
      return DirectComposition::CManipulationMarshaler::SetSourceModifier(this, a2, v12, a4, a5);
    }
    return 3221225485LL;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( !a4
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
           a4,
           113LL) )
    {
      v12 = 3LL;
      return DirectComposition::CManipulationMarshaler::SetSourceModifier(this, a2, v12, a4, a5);
    }
    return 3221225485LL;
  }
  if ( v11 != 1
    || a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          113LL) )
  {
    return 3221225485LL;
  }
  v12 = 4LL;
  return DirectComposition::CManipulationMarshaler::SetSourceModifier(this, a2, v12, a4, a5);
}
