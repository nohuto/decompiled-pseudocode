/*
 * XREFs of KeOrAffinityEx @ 0x1400FC680
 * Callers:
 *     KiForwardTick @ 0x140093460 (KiForwardTick.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400FBEB0 (KeQueryLogicalProcessorRelationship.c)
 *     PpmPerfApplyProcessorStates @ 0x14014D300 (PpmPerfApplyProcessorStates.c)
 *     KiStartProfileTarget @ 0x1402087C0 (KiStartProfileTarget.c)
 *     PpmRegisterPerfStates @ 0x1405B500C (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405B5958 (PpmCheckInitProcessors.c)
 *     PpmHeteroDetectFavoredCores @ 0x1405B5C34 (PpmHeteroDetectFavoredCores.c)
 *     PpmUpdateProcessorPolicy @ 0x1405B5DF8 (PpmUpdateProcessorPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall KeOrAffinityEx(unsigned __int16 *a1, _WORD *a2, _BYTE *a3)
{
  unsigned __int16 v3; // ax
  _BYTE *v4; // r9
  unsigned __int16 *v6; // r11
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // r8
  bool v10; // cf
  unsigned __int16 v11; // cx
  unsigned int v12; // r8d
  signed __int64 v13; // rsi
  _QWORD *v14; // r10
  __int64 v15; // rbx
  __int64 v16; // rdi
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rcx
  _BYTE v21[176]; // [rsp+0h] [rbp-D8h] BYREF

  v3 = *a2;
  v4 = v21;
  v6 = a2;
  v8 = 0;
  if ( a3 )
    v4 = a3;
  v9 = *a1;
  v10 = *a1 < v3;
  v11 = v3;
  if ( v10 )
    v11 = v9;
  else
    v6 = a1;
  *((_WORD *)v4 + 1) = 20;
  v12 = 0;
  *(_WORD *)v4 = *v6;
  if ( v11 )
  {
    v13 = (char *)a1 - (char *)a2;
    v8 = v11;
    v14 = a2 + 4;
    v15 = v4 - (_BYTE *)a2;
    v16 = v11;
    do
    {
      v17 = (*v14 | *(_QWORD *)((char *)v14 + v13)) == 0LL;
      *(_QWORD *)((char *)v14 + v15) = *v14 | *(_QWORD *)((char *)v14 + v13);
      ++v14;
      if ( !v17 )
        v12 = 1;
      --v16;
    }
    while ( v16 );
  }
  while ( v8 < *v6 )
  {
    v18 = *(_QWORD *)&v6[4 * v8 + 4];
    *(_QWORD *)&v4[8 * v8 + 8] = v18;
    if ( v18 )
      v12 = 1;
    ++v8;
  }
  if ( v4 != v21 )
  {
    *((_DWORD *)v4 + 1) = 0;
    while ( v8 < *((_WORD *)v4 + 1) )
    {
      v19 = v8++;
      *(_QWORD *)&v4[8 * v19 + 8] = 0LL;
    }
  }
  return v12;
}
