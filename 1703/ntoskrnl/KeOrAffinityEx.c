/*
 * XREFs of KeOrAffinityEx @ 0x140080BD0
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x140080400 (KeQueryLogicalProcessorRelationship.c)
 *     KiForwardTick @ 0x1400F2D20 (KiForwardTick.c)
 *     PpmPerfApplyProcessorStates @ 0x140146A10 (PpmPerfApplyProcessorStates.c)
 *     KiStartProfileTarget @ 0x1402021C0 (KiStartProfileTarget.c)
 *     PpmUpdateProcessorPolicy @ 0x14058358C (PpmUpdateProcessorPolicy.c)
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405BFD98 (PpmCheckInitProcessors.c)
 *     PpmHeteroDetectFavoredCores @ 0x1405C0998 (PpmHeteroDetectFavoredCores.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall KeOrAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3)
{
  _BYTE *v3; // r9
  unsigned __int16 *v5; // r10
  unsigned __int16 *v6; // rax
  unsigned __int16 v7; // di
  unsigned int v8; // esi
  unsigned __int16 v9; // cx
  __int64 v10; // r8
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v14; // rdx
  _BYTE v15[176]; // [rsp+0h] [rbp-C8h] BYREF

  v3 = a3;
  if ( !a3 )
    v3 = v15;
  if ( *a1 < *a2 )
  {
    v5 = a2;
    v6 = a1;
  }
  else
  {
    v5 = a1;
    v6 = a2;
  }
  v7 = *v6;
  v8 = 0;
  *((_WORD *)v3 + 1) = 20;
  v9 = 0;
  for ( *(_WORD *)v3 = *v5; v9 < v7; ++v9 )
  {
    v10 = 4LL * v9;
    v11 = (*(_QWORD *)&a2[v10 + 4] | *(_QWORD *)&a1[v10 + 4]) == 0LL;
    *(_QWORD *)&v3[v10 * 2 + 8] = *(_QWORD *)&a2[v10 + 4] | *(_QWORD *)&a1[v10 + 4];
    if ( !v11 )
      v8 = 1;
  }
  for ( ; v9 < *v5; ++v9 )
  {
    v14 = *(_QWORD *)&v5[4 * v9 + 4];
    *(_QWORD *)&v3[8 * v9 + 8] = v14;
    if ( v14 )
      v8 = 1;
  }
  if ( v3 != v15 )
  {
    for ( *((_DWORD *)v3 + 1) = 0; v9 < *((_WORD *)v3 + 1); *(_QWORD *)&v3[8 * v12 + 8] = 0LL )
      v12 = v9++;
  }
  return v8;
}
