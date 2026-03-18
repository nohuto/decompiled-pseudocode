/*
 * XREFs of KeOrAffinityEx @ 0x1400D3780
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x1400D2FA0 (KeQueryLogicalProcessorRelationship.c)
 *     KiForwardTick @ 0x1401094D0 (KiForwardTick.c)
 *     PpmPerfApplyProcessorStates @ 0x14016B790 (PpmPerfApplyProcessorStates.c)
 *     KiStartProfileTarget @ 0x1402463C0 (KiStartProfileTarget.c)
 *     PpmUpdateProcessorPolicy @ 0x140612240 (PpmUpdateProcessorPolicy.c)
 *     PpmRegisterPerfStates @ 0x14063EACC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14063F434 (PpmCheckInitProcessors.c)
 *     PpmHeteroDetectFavoredCores @ 0x140640260 (PpmHeteroDetectFavoredCores.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall KeOrAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3)
{
  _BYTE *v3; // r9
  unsigned __int16 *v4; // r11
  unsigned int v5; // r10d
  unsigned __int16 v6; // bx
  unsigned __int16 v7; // r8
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v11; // rcx
  _BYTE v12[176]; // [rsp+0h] [rbp-D8h] BYREF

  v3 = v12;
  v4 = a2;
  v5 = 0;
  if ( a3 )
    v3 = a3;
  v6 = *a1;
  v7 = 0;
  if ( *a1 >= *a2 )
  {
    v6 = *a2;
    v4 = a1;
  }
  *((_WORD *)v3 + 1) = 20;
  *(_WORD *)v3 = *v4;
  if ( v6 )
  {
    do
    {
      v8 = (*(_QWORD *)&a2[4 * v7 + 4] | *(_QWORD *)&a1[4 * v7 + 4]) == 0LL;
      *(_QWORD *)&v3[8 * v7 + 8] = *(_QWORD *)&a2[4 * v7 + 4] | *(_QWORD *)&a1[4 * v7 + 4];
      if ( !v8 )
        v5 = 1;
      ++v7;
    }
    while ( v7 < v6 );
  }
  while ( v7 < *v4 )
  {
    v9 = *(_QWORD *)&v4[4 * v7 + 4];
    *(_QWORD *)&v3[8 * v7 + 8] = v9;
    if ( v9 )
      v5 = 1;
    ++v7;
  }
  if ( v3 != v12 )
  {
    *((_DWORD *)v3 + 1) = 0;
    while ( v7 < *((_WORD *)v3 + 1) )
    {
      v11 = v7++;
      *(_QWORD *)&v3[8 * v11 + 8] = 0LL;
    }
  }
  return v5;
}
