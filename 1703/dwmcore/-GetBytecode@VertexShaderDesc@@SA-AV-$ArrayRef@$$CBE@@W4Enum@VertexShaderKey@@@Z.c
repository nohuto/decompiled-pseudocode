/*
 * XREFs of ?GetBytecode@VertexShaderDesc@@SA?AV?$ArrayRef@$$CBE@@W4Enum@VertexShaderKey@@@Z @ 0x1800BDA78
 * Callers:
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800781F8 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VertexShaderDesc::GetBytecode(__int64 a1, int a2)
{
  __int64 *v3; // rcx

  if ( (dword_1802413B0 & 1) == 0 )
  {
    dword_1802413C8 = 1368;
    dword_1802413B0 |= 1u;
    qword_1802413C0[0] = (__int64)&unk_1801E9700;
    qword_1802413D0 = (__int64)&unk_1801E9050;
    qword_1802413E0 = (__int64)&unk_1801E8890;
    qword_1802413F0 = (__int64)&unk_1801E6B10;
    qword_180241400 = (__int64)&unk_1801ED5F0;
    qword_180241410 = (__int64)&unk_1801EB630;
    qword_180241420 = (__int64)&unk_1801EACD0;
    qword_180241430 = (__int64)&unk_1801EA2D0;
    dword_1802413D8 = 1704;
    dword_1802413E8 = 1972;
    dword_1802413F8 = 7552;
    dword_180241408 = 7856;
    dword_180241418 = 8124;
    dword_180241428 = 2388;
    dword_180241438 = 2548;
  }
  v3 = &qword_1802413C0[2 * a2];
  *(_DWORD *)(a1 + 8) = *((_DWORD *)v3 + 2);
  *(_QWORD *)a1 = *v3;
  return a1;
}
