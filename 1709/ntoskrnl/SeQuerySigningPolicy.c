/*
 * XREFs of SeQuerySigningPolicy @ 0x14053A940
 * Callers:
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x140599DF0 (PspCreateProcess.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     SeCompareSigningLevels @ 0x1405040A0 (SeCompareSigningLevels.c)
 *     SeQuerySigningPolicyWorker @ 0x14053A578 (SeQuerySigningPolicyWorker.c)
 *     SepIsMinTCB @ 0x14053AAD0 (SepIsMinTCB.c)
 *     RtlRunOnceExecuteOnce @ 0x14053ADB0 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall SeQuerySigningPolicy(
        void *a1,
        UNICODE_STRING *a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7)
{
  unsigned __int8 v7; // r14
  int IsMinTCB; // ebp
  __int64 v12; // r9
  int SigningPolicyExt; // eax
  char v14; // bl

  v7 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v7 = SeILSigningPolicyRuntime;
  IsMinTCB = RtlRunOnceExecuteOnce(&SeQuerySigningPolicyInit, SepInitQuerySigningPolicyExt, 0LL, 0LL);
  if ( IsMinTCB >= 0 )
  {
    if ( SeQuerySigningPolicyExtAllowed )
    {
      LOBYTE(v12) = a4;
      SigningPolicyExt = SeQuerySigningPolicyExt(a1, a2, a3, v12, a5, a6, a7);
      IsMinTCB = SigningPolicyExt;
      if ( SigningPolicyExt == -1073741637 )
      {
        if ( SeFailIfExtensionNotSupported )
          KeBugCheckEx(0x29u, 2uLL, 0xFFFFFFFFC00000BBuLL, 0LL, 0LL);
      }
      else if ( SigningPolicyExt >= 0 )
      {
LABEL_9:
        if ( (*a7 & 7) == 1 )
        {
          *a5 |= 0x30u;
        }
        else if ( (*a7 & 7) == 2 )
        {
          *a5 |= 0x10u;
          *a6 |= 0x10u;
        }
        if ( IsMinTCB >= 0 )
        {
          v14 = 8;
          if ( (*a5 & 0xF) != 8
            && (unsigned int)SeCompareSigningLevels()
            && ((SeCiDebugOptions & 4) != 0
             || (SeCiDebugOptions & 2) != 0 && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent) )
          {
            if ( (unsigned int)SeCompareSigningLevels() || (*a7 & 7) == 0 )
              v14 = v7 & 0xF;
            *a5 = v14 | *a5 & 0x30;
            if ( !(unsigned int)SeCompareSigningLevels() )
              *a6 = v14 | *a6 & 0x30;
          }
        }
        return (unsigned int)IsMinTCB;
      }
    }
    IsMinTCB = SepIsMinTCB(a2, (__int64)a5, (__int64)a6, (__int64)a7);
    if ( IsMinTCB < 0 )
    {
      IsMinTCB = SeQuerySigningPolicyWorker(a1, &a2->Length, a3, a4, v7, a5, a6, a7);
      if ( IsMinTCB < 0 )
        return (unsigned int)IsMinTCB;
    }
    goto LABEL_9;
  }
  return (unsigned int)IsMinTCB;
}
