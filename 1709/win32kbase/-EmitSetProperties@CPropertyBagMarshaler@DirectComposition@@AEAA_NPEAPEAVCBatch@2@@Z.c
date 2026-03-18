/*
 * XREFs of ?EmitSetProperties@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002AC04
 * Callers:
 *     ?EmitUpdateCommands@CPropertyBagMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002A6F0 (-EmitUpdateCommands@CPropertyBagMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitSetVector3Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00039E4 (-EmitSetVector3Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPrope.c)
 *     ?EmitSetVector2Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C0003A80 (-EmitSetVector2Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPrope.c)
 *     ?EmitSetMatrix4x4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C002A91C (-EmitSetMatrix4x4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPro.c)
 *     ?EmitSetMatrix3x2Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C002AA14 (-EmitSetMatrix3x2Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPro.c)
 *     ?EmitSetColorProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C002AACC (-EmitSetColorProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropert.c)
 *     ?EmitSetScalarProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C002AB78 (-EmitSetScalarProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUProper.c)
 *     ?EmitSetBooleanProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C01435CC (-EmitSetBooleanProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPrope.c)
 *     ?EmitSetQuaternionProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C0143658 (-EmitSetQuaternionProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPr.c)
 *     ?EmitSetVector4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C0143704 (-EmitSetVector4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPrope.c)
 */

char __fastcall DirectComposition::CPropertyBagMarshaler::EmitSetProperties(
        DirectComposition::CPropertyBagMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  __int64 i; // rbp
  __int64 v7; // rcx
  unsigned int v8; // eax
  char v9; // al
  __m128i v11; // [rsp+20h] [rbp-18h] BYREF

  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    v5 = *((_DWORD *)this + 26) - 1;
    for ( i = v5; i >= 0; --i )
    {
      if ( !v4 )
        break;
      v7 = *((_QWORD *)this + 6);
      v11 = *(__m128i *)(i * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
      v8 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
      switch ( *(_DWORD *)(v7 + v8) )
      {
        case 0x11:
          v9 = DirectComposition::CPropertyBagMarshaler::EmitSetBooleanProperty(this, a2, (struct PropertyUpdate *)&v11);
          break;
        case 0x12:
          v9 = DirectComposition::CPropertyBagMarshaler::EmitSetScalarProperty(this, a2, (struct PropertyUpdate *)&v11);
          break;
        case 0x23:
          v9 = DirectComposition::CPropertyBagMarshaler::EmitSetVector2Property(this, a2, (struct PropertyUpdate *)&v11);
          break;
        case 0x34:
          v9 = DirectComposition::CPropertyBagMarshaler::EmitSetVector3Property(this, a2, (struct PropertyUpdate *)&v11);
          break;
        case 0x45:
          v9 = DirectComposition::CPropertyBagMarshaler::EmitSetVector4Property(this, a2, (struct PropertyUpdate *)&v11);
          break;
        case 0x46:
          v9 = DirectComposition::CPropertyBagMarshaler::EmitSetColorProperty(this, a2, (struct PropertyUpdate *)&v11);
          break;
        case 0x47:
          v9 = DirectComposition::CPropertyBagMarshaler::EmitSetQuaternionProperty(
                 this,
                 a2,
                 (struct PropertyUpdate *)&v11);
          break;
        case 0x68:
          v9 = DirectComposition::CPropertyBagMarshaler::EmitSetMatrix3x2Property(
                 this,
                 a2,
                 (struct PropertyUpdate *)&v11);
          break;
        case 0x109:
          v9 = DirectComposition::CPropertyBagMarshaler::EmitSetMatrix4x4Property(
                 this,
                 a2,
                 (struct PropertyUpdate *)&v11);
          break;
        default:
          goto LABEL_14;
      }
      v4 &= v9;
LABEL_14:
      if ( v4 )
        --*((_QWORD *)this + 13);
    }
    if ( !*((_QWORD *)this + 13) )
      *((_DWORD *)this + 4) &= ~0x20u;
  }
  return v4;
}
