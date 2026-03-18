/*
 * XREFs of PpmParkApplyForcedMask @ 0x14076FDB8
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     PpmCheckApplyParkConstraints @ 0x14017F420 (PpmCheckApplyParkConstraints.c)
 *     PpmParkApplyPolicy @ 0x14017FB78 (PpmParkApplyPolicy.c)
 *     PpmParkParkingAvailable @ 0x14063F8D0 (PpmParkParkingAvailable.c)
 */

__int64 __fastcall PpmParkApplyForcedMask(__int64 *a1)
{
  unsigned __int16 v1; // si
  __int64 v3; // rbp
  __int64 v4; // r8
  unsigned int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax

  v1 = *((_WORD *)a1 + 4);
  v3 = *a1;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( v1 > 0x14u )
    goto LABEL_11;
  v5 = 0;
  if ( *((_WORD *)a1 + 5) )
    goto LABEL_11;
  if ( *((_WORD *)a1 + 6) )
    goto LABEL_11;
  if ( *((_WORD *)a1 + 7) )
    goto LABEL_11;
  v6 = (unsigned int)PpmParkNumNodes;
  LOBYTE(v4) = 0;
  v7 = 0LL;
  if ( !PpmParkNumNodes )
    goto LABEL_11;
  do
  {
    v8 = PpmParkNodes + 248LL * (unsigned __int16)v7;
    if ( *(_WORD *)(v8 + 4) == v1 )
    {
      LOBYTE(v4) = 1;
      v9 = v3 & *(_QWORD *)(v8 + 8);
      *(_BYTE *)(v8 + 122) |= 1u;
      *(_QWORD *)(v8 + 32) = v9;
    }
    LOWORD(v7) = v7 + 1;
  }
  while ( (unsigned __int16)v7 < (unsigned int)v6 );
  if ( !(_BYTE)v4 )
  {
LABEL_11:
    PpmReleaseLock(&PpmPerfPolicyLock);
    return (unsigned int)-1073741811;
  }
  else
  {
    PpmParkApplyPolicy(v8, v7, v4, (_BYTE *)v6);
    PpmParkParkingAvailable();
    PpmCheckApplyParkConstraints();
  }
  return v5;
}
