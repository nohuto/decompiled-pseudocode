/*
 * XREFs of PdcpAlpcProcessMessage @ 0x18010C3A0
 * Callers:
 *     PdcpAlpcCallback @ 0x18010C340 (PdcpAlpcCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     PdcpProcessMessageInternal @ 0x18010C584 (PdcpProcessMessageInternal.c)
 *     PdcPrint @ 0x18010D268 (PdcPrint.c)
 */

__int64 __fastcall PdcpAlpcProcessMessage(RTL_SRWLOCK *a1)
{
  PVOID Ptr; // rcx
  int v3; // ebx
  __int64 MessageAttribute; // rbp
  __int64 v6; // [rsp+40h] [rbp-3E8h] BYREF
  _BYTE v7[8]; // [rsp+48h] [rbp-3E0h] BYREF
  _BYTE v8[160]; // [rsp+50h] [rbp-3D8h] BYREF
  _BYTE v9[800]; // [rsp+F0h] [rbp-338h] BYREF

  memset_0(v8, 0, sizeof(v8));
  AlpcInitializeMessageAttribute(0x20000000LL, v8, 160LL, v7);
  AcquireSRWLockShared(a1 + 2);
  Ptr = a1[1].Ptr;
  if ( Ptr )
  {
    v6 = 792LL;
    v3 = ZwAlpcSendWaitReceivePort(Ptr, 0LL, 0LL, 0LL, v9, &v6, v8, 0LL);
    MessageAttribute = AlpcGetMessageAttribute(v8, 0x20000000LL);
    if ( v3 == -1073741789 )
    {
      PdcPrint(1u, "%s: Error receiving message from PO %x\n");
      v3 = ZwAlpcCancelMessage(a1[1].Ptr, 0LL, MessageAttribute);
      ReleaseSRWLockShared(a1 + 2);
    }
    else
    {
      ReleaseSRWLockShared(a1 + 2);
      if ( v3 >= 0 )
        return (unsigned int)PdcpProcessMessageInternal(a1, v9, MessageAttribute);
      else
        PdcPrint(1u, "%s: Error receiving message from PO %x\n");
    }
  }
  else
  {
    ReleaseSRWLockShared(a1 + 2);
    return (unsigned int)-1073741758;
  }
  return (unsigned int)v3;
}
