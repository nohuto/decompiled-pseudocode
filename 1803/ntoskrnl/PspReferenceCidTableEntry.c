/*
 * XREFs of PspReferenceCidTableEntry @ 0x14059B080
 * Callers:
 *     PsLookupThreadByThreadId @ 0x1404D75A0 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x14059A9C0 (PsLookupProcessByProcessId.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x14003EC38 (ExLockHandleTableEntry.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1400FE940 (ExSlowReplenishHandleTableEntry.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14054D4C4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1405A4D70 (ExpLookupHandleTableEntry.c)
 */

_BYTE *__fastcall PspReferenceCidTableEntry(__int64 a1, char a2)
{
  __int64 *v3; // rax
  __int64 *v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rdi
  signed __int64 v7; // rcx
  __int128 v8; // rt0
  unsigned __int8 v9; // tt
  unsigned __int64 v10; // rax
  _BYTE *v11; // rdi
  int v13; // ebx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  __int64 v16; // rcx
  volatile __int64 *v17; // rcx
  signed __int32 v18[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (a1 & 0x3FC) == 0 )
    return 0LL;
  v3 = (__int64 *)ExpLookupHandleTableEntry(*(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 6), a1);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  v5 = *(__int64 *)((char *)&Mm64BitPhysicalAddress + 6);
  _m_prefetchw(v3);
  v6 = *v3;
  v7 = v3[1];
  if ( (*v3 & 0x1FFFE) == 0 )
  {
LABEL_10:
    v13 = 0;
    if ( !ExLockHandleTableEntry(*(__int64 *)((char *)&Mm64BitPhysicalAddress + 6), v4) )
      return 0LL;
    v11 = (_BYTE *)((*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (*v11 & 0x7F) != a2 )
      goto LABEL_26;
    if ( a2 == 3 )
    {
      if ( (*(_DWORD *)(((*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x304) & 0x400000C) != 0x4000000 )
        goto LABEL_15;
    }
    else if ( (*(_DWORD *)(((*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x6D0) & 3) != 2 )
    {
LABEL_15:
      _m_prefetchw(v11 - 48);
      v14 = *((_QWORD *)v11 - 6);
      if ( v14 )
      {
        while ( 1 )
        {
          v15 = v14;
          v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 - 6, (unsigned int)(v13 + 1) + v14, v14);
          if ( v15 == v14 )
            break;
          if ( !v14 )
            goto LABEL_25;
        }
        if ( ObpTraceFlags )
          ObpPushStackInfo((__int64)(v11 - 48), 1, v13 + 1, 1953261124);
LABEL_19:
        v16 = *(__int64 *)((char *)&Mm64BitPhysicalAddress + 6);
        _InterlockedExchangeAdd64(v4, 1uLL);
        v17 = (volatile __int64 *)(v16 + 48);
        _InterlockedOr(v18, 0);
        if ( *v17 )
          ExfUnblockPushLock(v17, 0LL);
        return v11;
      }
LABEL_25:
      *v4 &= 0xFFFFFFFFFFFE0001uLL;
LABEL_26:
      v11 = 0LL;
      goto LABEL_19;
    }
    v13 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v4);
    goto LABEL_15;
  }
  while ( 1 )
  {
    if ( (v6 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v5, v4, v6);
      _m_prefetchw(v4);
      v6 = *v4;
      v7 = v4[1];
      goto LABEL_27;
    }
    *(_QWORD *)&v8 = v6;
    *((_QWORD *)&v8 + 1) = v7;
    v9 = _InterlockedCompareExchange128(v4, v7, v6 - 2, (signed __int64 *)&v8);
    v7 = *((_QWORD *)&v8 + 1);
    v10 = v8;
    v6 = v8;
    if ( v9 )
      break;
LABEL_27:
    if ( (v6 & 0x1FFFE) == 0 )
      goto LABEL_10;
  }
  if ( (unsigned __int16)(v10 >> 1) == 16 )
    v6 = ((unsigned int)v6 ^ (2 * (unsigned int)(v10 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v6;
  v11 = (_BYTE *)((v6 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (*v11 & 0x7F) == a2 )
    return v11;
  ObfDereferenceObject(v11);
  return 0LL;
}
