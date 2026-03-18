/*
 * XREFs of AlpcpDispatchCloseMessage @ 0x1404745FC
 * Callers:
 *     AlpcpSendCloseMessage @ 0x140473580 (AlpcpSendCloseMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x140470C5C (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x14047478C (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpSetOwnerPortMessage @ 0x140474A2C (AlpcpSetOwnerPortMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x140525120 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpLogClosePort @ 0x1406B2758 (AlpcpLogClosePort.c)
 */

__int64 __fastcall AlpcpDispatchCloseMessage(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  _QWORD *v4; // r15
  __int64 result; // rax
  __int64 v6; // r8
  char v7; // r14
  volatile signed __int32 *v8; // rcx
  signed __int32 v9; // eax
  signed __int64 *v10; // rbx
  signed __int64 *v11; // rsi
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  signed __int64 *v13; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  v2 = a1[1];
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v4 = *(_QWORD **)(v1 + 16);
  result = AlpcpReferenceAndLockTargetPortsAndCommunicationInfo(v1, &v13, &Object);
  if ( (int)result >= 0 )
  {
    if ( (v13[32] & 0x20000) != 0 )
    {
      *(_DWORD *)(v2 + 40) |= 0x200u;
      v7 = 1;
      v8 = (volatile signed __int32 *)Object;
      *(_WORD *)(v2 + 244) &= ~0x2000u;
      v9 = _InterlockedExchangeAdd(v8 + 100, 1u);
      v10 = (signed __int64 *)Object;
      *(_DWORD *)(v2 + 44) = v9 + 1;
      LOBYTE(v6) = 1;
      *(_QWORD *)(v2 + 120) = v10[7];
      *(_QWORD *)(v2 + 184) = v4;
      *(_QWORD *)(v2 + 192) = *v4;
      if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
      {
        AlpcpSetOwnerPortMessage(v2, v10, v6);
        v11 = v13;
      }
      else
      {
        AlpcpSetOwnerPortMessage(v2, v1, v6);
        v11 = v13;
        if ( v10 != v13 )
        {
          if ( _InterlockedCompareExchange64(v10 + 44, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v10 + 44);
          KeAbPostRelease((ULONG_PTR)(v10 + 44));
          v10 = (signed __int64 *)Object;
          v11 = v13;
        }
        v7 = 0;
      }
      if ( AlpcpLogEnabled )
        AlpcpLogClosePort(v2);
      a1[4] = (__int64)v11;
      a1[2] = (__int64)v4;
      AlpcpCompleteDispatchMessage(a1);
      if ( v7 && v10 != v11 )
      {
        if ( _InterlockedCompareExchange64(v10 + 44, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v10 + 44);
        KeAbPostRelease((ULONG_PTR)(v10 + 44));
        v10 = (signed __int64 *)Object;
      }
      ObfDereferenceObject(v10);
      return 0LL;
    }
    else
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v4, v13, (signed __int64 *)Object);
      return 3221227271LL;
    }
  }
  return result;
}
