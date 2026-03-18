/*
 * XREFs of PpmParkSetLpiCap @ 0x14024CC50
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 *     PpmCheckCustomRun @ 0x140130618 (PpmCheckCustomRun.c)
 *     PpmParkApplyPolicy @ 0x140138AB4 (PpmParkApplyPolicy.c)
 *     PpmCheckReInit @ 0x1405B5FE0 (PpmCheckReInit.c)
 */

__int64 __fastcall PpmParkSetLpiCap(int a1, int a2, unsigned int *a3)
{
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  _BYTE *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r10
  char v15; // al

  if ( KeGetCurrentPrcb()->PowerState.Hypervisor >= ProcHypervisorPower && (HvlEnlightenments & 0x40000) == 0 )
    return 3221225473LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v9 = (unsigned __int8)PpmParkGranularity
     + a1
     - 1
     - ((unsigned int)(unsigned __int8)PpmParkGranularity + a1 - 1) % (unsigned __int8)PpmParkGranularity;
  if ( v9 )
  {
    v7 = (unsigned int)PpmParkNumNodes;
    v10 = 0;
    if ( PpmParkNumNodes )
    {
      v8 = (unsigned int)PpmParkNumNodes;
      v11 = (_BYTE *)(PpmParkNodes + 6);
      do
      {
        if ( *v11 > (unsigned __int8)PpmParkGranularity )
          v10 += (unsigned __int8)*v11 - (unsigned __int8)PpmParkGranularity;
        v11 += 248;
        --v8;
      }
      while ( v8 );
    }
    if ( v9 > v10 )
      v9 = v10;
  }
  v12 = ((unsigned int)(unsigned __int8)PpmParkGranularity + a2 - 1) % (unsigned __int8)PpmParkGranularity;
  v13 = (unsigned __int8)PpmParkGranularity + a2 - 1 - (unsigned int)v12;
  if ( (_DWORD)v13 )
  {
    v8 = (unsigned int)PpmParkNumNodes;
    v12 = 0LL;
    if ( PpmParkNumNodes )
    {
      v14 = (unsigned int)PpmParkNumNodes;
      v7 = PpmParkNodes + 6;
      do
      {
        if ( *(_BYTE *)v7 > (unsigned __int8)PpmParkGranularity )
          v12 = *(unsigned __int8 *)v7 - (unsigned __int8)PpmParkGranularity + (unsigned int)v12;
        v7 += 248LL;
        --v14;
      }
      while ( v14 );
    }
    if ( (unsigned int)v13 > (unsigned int)v12 )
      v13 = (unsigned int)v12;
  }
  v15 = 0;
  if ( v9 != PpmParkLpiCap )
  {
    PpmParkLpiCap = v9;
    v15 = 1;
    PpmParkLpiCapChanged = 1;
  }
  if ( (_DWORD)v13 != PpmParkThermalCap )
  {
    PpmParkThermalCap = v13;
    v15 = 1;
  }
  if ( v15 )
  {
    PpmParkApplyPolicy(v13, v12, v7, (_BYTE *)v8);
    PpmCheckReInit();
    PpmCheckCustomRun(4);
  }
  else
  {
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
  *a3 = v9;
  return 0LL;
}
