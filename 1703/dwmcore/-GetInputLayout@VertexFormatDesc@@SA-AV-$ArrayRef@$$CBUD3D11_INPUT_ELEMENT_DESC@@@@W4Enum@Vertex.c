/*
 * XREFs of ?GetInputLayout@VertexFormatDesc@@SA?AV?$ArrayRef@$$CBUD3D11_INPUT_ELEMENT_DESC@@@@W4Enum@VertexFormatKey@@@Z @ 0x1800C9A14
 * Callers:
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800781F8 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VertexFormatDesc::GetInputLayout(__int64 a1, int a2)
{
  __int64 *v3; // rcx

  if ( (dword_180241360 & 1) == 0 )
  {
    dword_180241378 = 4;
    dword_180241360 |= 1u;
    qword_180241370[0] = (__int64)&off_1801CAE40;
    dword_180241388 = 6;
    dword_180241398 = 6;
    qword_180241390 = (__int64)&off_1801CAD40;
    qword_1802413A0 = (__int64)&off_1801CAD40;
    qword_180241380 = (__int64)&off_1801CAE40;
    dword_1802413A8 = 8;
  }
  v3 = &qword_180241370[2 * a2];
  *(_DWORD *)(a1 + 8) = *((_DWORD *)v3 + 2);
  *(_QWORD *)a1 = *v3;
  return a1;
}
