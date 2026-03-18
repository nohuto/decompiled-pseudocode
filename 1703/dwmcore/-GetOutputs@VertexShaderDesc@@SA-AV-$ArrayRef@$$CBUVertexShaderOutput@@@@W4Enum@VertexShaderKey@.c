/*
 * XREFs of ?GetOutputs@VertexShaderDesc@@SA?AV?$ArrayRef@$$CBUVertexShaderOutput@@@@W4Enum@VertexShaderKey@@@Z @ 0x1800BB758
 * Callers:
 *     InitializeShaderLinkingInput @ 0x1800B842C (InitializeShaderLinkingInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VertexShaderDesc::GetOutputs(__int64 a1, int a2)
{
  __int64 *v3; // rcx

  if ( (dword_180241440 & 1) == 0 )
  {
    dword_180241478 = 5;
    dword_180241440 |= 1u;
    qword_180241450[0] = (__int64)&unk_1801EA1C8;
    dword_180241458 = 4;
    dword_180241468 = 4;
    qword_180241460 = (__int64)&unk_1801EA1C8;
    qword_180241470 = (__int64)&unk_1801EA1C8;
    dword_180241488 = 8;
    qword_180241480 = (__int64)&unk_1801EA270;
    qword_180241490 = (__int64)&unk_1801EA270;
    qword_1802414A0 = (__int64)&unk_1801E9D80;
    qword_1802414B0 = (__int64)&unk_1801EA210;
    qword_1802414C0 = (__int64)&unk_1801EA210;
    dword_180241498 = 8;
    dword_1802414A8 = 9;
    dword_1802414B8 = 8;
    dword_1802414C8 = 8;
  }
  v3 = &qword_180241450[2 * a2];
  *(_DWORD *)(a1 + 8) = *((_DWORD *)v3 + 2);
  *(_QWORD *)a1 = *v3;
  return a1;
}
