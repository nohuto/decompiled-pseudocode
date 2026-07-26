/*
 * XREFs of PdcTaskClientRequest @ 0x1C00FFBE4
 * Callers:
 *     ndisPMPDCTaskClient @ 0x1C004AE10 (ndisPMPDCTaskClient.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C004B6FC (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisPdcTaskClientDisableTimeoutWorkItem @ 0x1C00E1E60 (ndisPdcTaskClientDisableTimeoutWorkItem.c)
 * Callees:
 *     PdcPortSendMessageSynchronously @ 0x1C007E998 (PdcPortSendMessageSynchronously.c)
 *     PdcAcquireRwLockExclusive @ 0x1C00FFD64 (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcTaskClientRequest(__int64 a1, char a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // edx
  _BYTE v9[40]; // [rsp+20h] [rbp-328h] BYREF
  int v10; // [rsp+48h] [rbp-300h]
  bool v11; // [rsp+50h] [rbp-2F8h]

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
    v5 = *(_DWORD *)(a1 + 48);
    v4 = 0;
    if ( a2 )
    {
      if ( v5 )
        goto LABEL_12;
    }
    else if ( v5 != 1 )
    {
      goto LABEL_12;
    }
    v6 = *(_QWORD *)(a1 + 40);
    v10 = 7;
    v11 = a2 != 0;
    PdcPortSendMessageSynchronously(v6, (__int64)v9);
    v4 = *(_DWORD *)(a1 + 52);
    if ( v4 < 0 )
      goto LABEL_15;
LABEL_12:
    v7 = *(_DWORD *)(a1 + 48);
    if ( a2 )
      *(_DWORD *)(a1 + 48) = v7 + 1;
    else
      *(_DWORD *)(a1 + 48) = v7 - 1;
    goto LABEL_15;
  }
  return (unsigned int)-1073741585;
}
