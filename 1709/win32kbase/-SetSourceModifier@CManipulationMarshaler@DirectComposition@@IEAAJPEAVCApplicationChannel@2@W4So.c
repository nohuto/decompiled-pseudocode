/*
 * XREFs of ?SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4SourceModifierIndex@@PEAVCConditionalExpressionMarshaler@2@PEA_N@Z @ 0x1C0142678
 * Callers:
 *     ?SetReferenceProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0142540 (-SetReferenceProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C002ED4C (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C013FE48 (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetSourceModifier(
        __int64 a1,
        DirectComposition::CApplicationChannel *a2,
        __int64 a3,
        struct DirectComposition::CResourceMarshaler *a4,
        _BYTE *a5)
{
  __int64 v5; // r15
  int WeakReferenceBase; // ebp
  __int64 v9; // rbx
  struct DirectComposition::CResourceMarshaler *v10; // rax
  struct DirectComposition::CWeakReferenceBase *v11; // rsi
  _BYTE *v12; // rax
  struct DirectComposition::CWeakReferenceBase *v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = (int)a3;
  WeakReferenceBase = 0;
  v9 = *(_QWORD *)(a1 + 8LL * (int)a3 + 48);
  if ( v9 )
    v10 = *(struct DirectComposition::CResourceMarshaler **)(v9 + 16);
  else
    v10 = 0LL;
  if ( a4 == v10 )
  {
    if ( v9 && !v10 )
    {
      DirectComposition::CApplicationChannel::ReleaseWeakReference(
        a2,
        *(struct DirectComposition::CWeakReferenceBase **)(a1 + 8LL * (int)a3 + 48),
        a3);
      *(_QWORD *)(a1 + 8 * v5 + 48) = 0LL;
    }
  }
  else
  {
    v11 = 0LL;
    v14 = 0LL;
    if ( a4 )
    {
      WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, a4, &v14);
      if ( WeakReferenceBase < 0 )
        return (unsigned int)WeakReferenceBase;
      v11 = v14;
    }
    if ( v9 )
      DirectComposition::CApplicationChannel::ReleaseWeakReference(
        a2,
        (struct DirectComposition::CWeakReferenceBase *)v9,
        a3);
    v12 = a5;
    *(_QWORD *)(a1 + 8 * v5 + 48) = v11;
    *(_DWORD *)(a1 + 16) |= 0x80u;
    *v12 = 1;
  }
  return (unsigned int)WeakReferenceBase;
}
