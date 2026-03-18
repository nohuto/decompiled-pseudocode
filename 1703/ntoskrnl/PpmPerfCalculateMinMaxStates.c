/*
 * XREFs of PpmPerfCalculateMinMaxStates @ 0x1401603FC
 * Callers:
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x1405C019C (PpmReapplyPerfPolicy.c)
 *     PpmUpdatePerfStates @ 0x1406C92D0 (PpmUpdatePerfStates.c)
 * Callees:
 *     PpmGetHeterogeneousClass @ 0x14000E7B0 (PpmGetHeterogeneousClass.c)
 */

__int64 __fastcall PpmPerfCalculateMinMaxStates(__int64 a1)
{
  _DWORD *v1; // r9
  __int64 *v2; // r10
  _BOOL8 HeterogeneousClass; // rcx
  int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // eax
  __int64 result; // rax

  v1 = (_DWORD *)a1;
  v2 = &PpmCurrentProfile[175 * dword_14034BB2C];
  if ( *(_BYTE *)(a1 + 207) )
    HeterogeneousClass = 0LL;
  else
    HeterogeneousClass = PpmGetHeterogeneousClass(*(_QWORD *)(a1 + 16));
  v1[93] = *((unsigned __int8 *)v2 + HeterogeneousClass + 66);
  v1[91] = *((unsigned __int8 *)v2 + HeterogeneousClass + 68);
  v4 = *((_DWORD *)v2 + HeterogeneousClass + 21);
  if ( v4 )
  {
    v5 = v1[80];
    if ( (unsigned int)(100 * v4 + (v1[79] >> 1)) / v1[79] < v5 )
      v5 = (unsigned int)(100 * v4 + (v1[79] >> 1)) / v1[79];
    v1[92] = v5;
  }
  else
  {
    v1[92] = v1[80];
  }
  v6 = v1[93];
  v7 = v1[91];
  if ( v7 < v6 )
    v7 = v1[93];
  v1[91] = v7;
  result = (unsigned int)v1[92];
  if ( (unsigned int)result < v6 )
    result = v6;
  v1[92] = result;
  return result;
}
