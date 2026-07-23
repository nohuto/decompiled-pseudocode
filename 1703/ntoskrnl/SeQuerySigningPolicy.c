/*
 * XREFs of SeQuerySigningPolicy @ 0x140545370
 * Callers:
 *     PspCreateProcess @ 0x14045D9C0 (PspCreateProcess.c)
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     SepIsMinTCB @ 0x1405454E0 (SepIsMinTCB.c)
 *     RtlRunOnceExecuteOnce @ 0x140545670 (RtlRunOnceExecuteOnce.c)
 *     SeQuerySigningPolicyWorker @ 0x140545960 (SeQuerySigningPolicyWorker.c)
 *     SeCompareSigningLevels @ 0x140545CB0 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SeQuerySigningPolicy(
        HANDLE TokenHandle,
        PCUNICODE_STRING String2,
        unsigned int a3,
        char a4,
        _BYTE *a5,
        _BYTE *a6,
        _BYTE *a7)
{
  NTSTATUS IsMinTCB; // ebp
  __int64 v12; // r9
  int SigningPolicyExt; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx

  IsMinTCB = RtlRunOnceExecuteOnce(&SeQuerySigningPolicyInit, SepInitQuerySigningPolicyExt, 0LL, 0LL);
  if ( IsMinTCB < 0 )
    return (unsigned int)IsMinTCB;
  if ( !SeQuerySigningPolicyExtAllowed )
    goto LABEL_5;
  LOBYTE(v12) = a4;
  SigningPolicyExt = SeQuerySigningPolicyExt(TokenHandle, String2, a3, v12, a5, a6, a7);
  IsMinTCB = SigningPolicyExt;
  if ( SigningPolicyExt == -1073741637 )
  {
    if ( SeFailIfExtensionNotSupported )
      KeBugCheckEx(0x29u, 2uLL, 0xFFFFFFFFC00000BBuLL, 0LL, 0LL);
LABEL_5:
    IsMinTCB = SepIsMinTCB(String2, (__int64)a6, (__int64)a7);
    if ( IsMinTCB < 0 )
    {
      IsMinTCB = SeQuerySigningPolicyWorker(TokenHandle, (__int64)a5, (__int64)a6, (__int64)a7);
      if ( IsMinTCB < 0 )
        return (unsigned int)IsMinTCB;
    }
    goto LABEL_7;
  }
  if ( SigningPolicyExt < 0 )
    goto LABEL_5;
LABEL_7:
  v15 = (*a7 & 7u) - 1;
  if ( (*a7 & 7) == 1 )
  {
    *a5 |= 0x30u;
  }
  else
  {
    v15 = (*a7 & 7u) - 2;
    if ( (*a7 & 7) == 2 )
    {
      *a5 |= 0x10u;
      *a6 |= 0x10u;
    }
  }
  if ( IsMinTCB >= 0 && (*a5 & 0xF) != 8 )
  {
    LOBYTE(v14) = 8;
    LOBYTE(v15) = *a5;
    if ( (unsigned int)SeCompareSigningLevels(v15, v14) )
    {
      if ( (SeCiDebugOptions & 4) != 0
        || (SeCiDebugOptions & 2) != 0 && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
      {
        LOBYTE(v17) = SeILSigningPolicy;
        LOBYTE(v16) = 8;
        if ( (unsigned int)SeCompareSigningLevels(v17, v16) || (*a7 & 7) == 0 )
        {
          *a5 = SeILSigningPolicy & 0xF | *a5 & 0x30;
          LOBYTE(v19) = *a6;
          LOBYTE(v20) = SeILSigningPolicy;
          if ( !(unsigned int)SeCompareSigningLevels(v20, v19) )
            *a6 = SeILSigningPolicy & 0xF | *a6 & 0x30;
        }
        else
        {
          LOBYTE(v20) = 8;
          *a5 = *a5 & 0x30 | 8;
          LOBYTE(v19) = *a6;
          if ( !(unsigned int)SeCompareSigningLevels(v20, v19) )
            *a6 = *a6 & 0x30 | 8;
        }
      }
    }
  }
  return (unsigned int)IsMinTCB;
}
