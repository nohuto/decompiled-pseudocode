/*
 * XREFs of PdcTaskClientRequest @ 0x1C00F4318
 * Callers:
 *     ndisPMPDCTaskClient @ 0x1C004C5C0 (ndisPMPDCTaskClient.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C004CE70 (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisPdcTaskClientDisableTimeoutWorkItem @ 0x1C00D61F0 (ndisPdcTaskClientDisableTimeoutWorkItem.c)
 * Callees:
 *     PdcPortSendMessageSynchronously @ 0x1C00796A4 (PdcPortSendMessageSynchronously.c)
 *     PdcAcquireRwLockExclusive @ 0x1C00F4490 (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcTaskClientRequest(__int64 a1, char a2)
{
  int v4; // edi
  __int64 v5; // rcx
  _BYTE v7[40]; // [rsp+20h] [rbp-308h] BYREF
  int v8; // [rsp+48h] [rbp-2E0h]
  bool v9; // [rsp+50h] [rbp-2D8h]

  if ( a1 && *(_DWORD *)a1 == 1667458128 )
  {
    PdcAcquireRwLockExclusive(a1 + 8);
    if ( !a2 && !*(_DWORD *)(a1 + 48) )
    {
      v4 = -1073741823;
LABEL_15:
      *(_QWORD *)(a1 + 16) = 0LL;
      ExReleasePushLockEx(a1 + 8, 0LL);
      KeLeaveCriticalRegion();
      return (unsigned int)v4;
    }
    v4 = 0;
    if ( a2 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
LABEL_12:
        if ( a2 )
        {
          ++*(_DWORD *)(a1 + 48);
          goto LABEL_15;
        }
        goto LABEL_13;
      }
    }
    else if ( *(_DWORD *)(a1 + 48) != 1 )
    {
LABEL_13:
      --*(_DWORD *)(a1 + 48);
      goto LABEL_15;
    }
    v5 = *(_QWORD *)(a1 + 40);
    v8 = 7;
    v9 = a2 != 0;
    PdcPortSendMessageSynchronously(v5, (__int64)v7);
    v4 = *(_DWORD *)(a1 + 52);
    if ( v4 < 0 )
      goto LABEL_15;
    goto LABEL_12;
  }
  return (unsigned int)-1073741585;
}
