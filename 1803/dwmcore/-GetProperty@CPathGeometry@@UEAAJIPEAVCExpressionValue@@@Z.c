/*
 * XREFs of ?GetProperty@CPathGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18019DD50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18018B994 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?GetProperty@CGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18018FBD0 (-GetProperty@CGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CPathGeometry::GetProperty(CPathGeometry *this, int a2, struct CExpressionValue *a3)
{
  int Property; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx

  if ( a2 == 4 )
  {
    v5 = *((_QWORD *)this + 17);
    *((_DWORD *)a3 + 18) = 11;
    *((_BYTE *)a3 + 76) = 1;
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)a3 + 8, v5);
    return 0;
  }
  Property = CGeometry::GetProperty(this, a2, a3);
  v4 = Property;
  if ( Property >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Property, 0x56u);
  return v4;
}
