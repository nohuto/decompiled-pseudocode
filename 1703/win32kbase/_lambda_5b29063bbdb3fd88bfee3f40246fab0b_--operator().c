/*
 * XREFs of _lambda_5b29063bbdb3fd88bfee3f40246fab0b_::operator() @ 0x1C014C5EC
 * Callers:
 *     ?EmitUpdateCommands@CVisualSurfaceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014C660 (-EmitUpdateCommands@CVisualSurfaceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_5b29063bbdb3fd88bfee3f40246fab0b_::operator()(__int64 *a1, __int64 a2)
{
  __int128 v2; // xmm1
  __int64 v3; // r8
  int v4; // eax
  __int64 result; // rax

  *(_DWORD *)a2 = 201;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(*a1 + 24);
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(*a1 + 48);
  v2 = *(_OWORD *)(*a1 + 64);
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_OWORD *)(a2 + 24) = v2;
  v3 = *(_QWORD *)(*a1 + 40);
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 24);
  else
    v4 = 0;
  *(_DWORD *)(a2 + 48) = v4;
  *(_DWORD *)(a2 + 60) = 1;
  *(_DWORD *)(a2 + 64) = 1;
  *(_DWORD *)(a2 + 52) = 0;
  *(_DWORD *)(a2 + 56) = 28;
  result = *a1;
  *(_DWORD *)(a2 + 68) = *(_DWORD *)(*a1 + 84);
  return result;
}
