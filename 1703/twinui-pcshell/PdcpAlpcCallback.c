/*
 * XREFs of PdcpAlpcCallback @ 0x1801726B0
 * Callers:
 *     <none>
 * Callees:
 *     PdcpProcessMessageInternal @ 0x1801728F0 (PdcpProcessMessageInternal.c)
 *     PdcPrint @ 0x180172A08 (PdcPrint.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 */

__int64 __fastcall PdcpAlpcCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  RTL_SRWLOCK *v4; // rsi
  volatile signed __int32 *v5; // rdi
  __int64 v6; // rcx
  int v7; // ebp
  __int64 MessageAttribute; // r14
  signed __int32 v9; // eax
  bool v10; // cc
  __int64 v11; // [rsp+40h] [rbp-3D8h] BYREF
  _BYTE v12[8]; // [rsp+48h] [rbp-3D0h] BYREF
  _BYTE v13[160]; // [rsp+50h] [rbp-3C8h] BYREF
  _BYTE v14[768]; // [rsp+F0h] [rbp-328h] BYREF

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a2 + 128));
  if ( (_DWORD)result == 1 )
  {
    v4 = (RTL_SRWLOCK *)(a2 + 16);
    v5 = (volatile signed __int32 *)(a2 + 124);
    while ( 1 )
    {
      memset(v13, 0, sizeof(v13));
      AlpcInitializeMessageAttribute(0x20000000LL, v13, 160LL, v12);
      AcquireSRWLockShared(v4);
      v6 = *(_QWORD *)(a2 + 8);
      if ( !v6 )
        goto LABEL_4;
      v11 = 768LL;
      v7 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _BYTE *, __int64 *, _BYTE *, _QWORD))ZwAlpcSendWaitReceivePort)(
             v6,
             0LL,
             0LL,
             0LL,
             v14,
             &v11,
             v13,
             0LL);
      MessageAttribute = AlpcGetMessageAttribute(v13, 0x20000000LL);
      if ( v7 == -1073741789 )
        break;
      ReleaseSRWLockShared(v4);
      if ( v7 >= 0 )
        PdcpProcessMessageInternal(a2, v14, MessageAttribute);
      else
        PdcPrint(1u, "%s: Error receiving message from PO %x\n");
LABEL_10:
      _InterlockedIncrement(v5);
      if ( *v5 == *(_DWORD *)(a2 + 120) )
        RtlWakeAddressAll(v5);
      v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 128), 0xFFFFFFFF);
      v10 = v9 <= 1;
      result = (unsigned int)(v9 - 1);
      if ( v10 )
        return result;
    }
    PdcPrint(1u, "%s: Error receiving message from PO %x\n");
    ZwAlpcCancelMessage(*(_QWORD *)(a2 + 8), 0LL, MessageAttribute);
LABEL_4:
    ReleaseSRWLockShared(v4);
    goto LABEL_10;
  }
  return result;
}
