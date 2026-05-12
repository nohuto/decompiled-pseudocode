/*
 * XREFs of RaidRemovePendingDeviceQueue @ 0x1C0031D68
 * Callers:
 *     RaidRemoveIoQueue @ 0x1C0032778 (RaidRemoveIoQueue.c)
 * Callees:
 *     RaidGetQosEntryForDeviceEntry @ 0x1C0031A90 (RaidGetQosEntryForDeviceEntry.c)
 */

_BYTE *__fastcall RaidRemovePendingDeviceQueue(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx
  KIRQL v4; // r8
  _BYTE *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  bool v12; // zf

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v3 = a1 + 96;
  v4 = v2;
  if ( *(_QWORD *)v3 == v3 )
  {
    v7 = a1 + 80;
    if ( *(_QWORD *)v7 == v7 )
    {
      v5 = 0LL;
    }
    else
    {
      v5 = *(_BYTE **)v7;
      if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || (v8 = *(_QWORD *)v5, *(_BYTE **)(*(_QWORD *)v5 + 8LL) != v5) )
        __fastfail(3u);
      *(_QWORD *)v7 = v8;
      *(_QWORD *)(v8 + 8) = v7;
    }
  }
  else
  {
    v5 = *(_BYTE **)v3;
    if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v6 = *(_QWORD *)v5, *(_BYTE **)(*(_QWORD *)v5 + 8LL) != v5) )
      __fastfail(3u);
    *(_QWORD *)v3 = v6;
    *(_QWORD *)(v6 + 8) = v3;
  }
  if ( v5 && (v5[22] & 0x20) != 0 )
  {
    QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry((__int64)v5);
    v10 = *QosEntryForDeviceEntry;
    if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry
      || (v11 = (_QWORD *)QosEntryForDeviceEntry[1], (_QWORD *)*v11 != QosEntryForDeviceEntry) )
    {
      __fastfail(3u);
    }
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
  }
  if ( v5 )
  {
    v12 = (v5[22] & 6) == 0;
    v5[20] = 0;
    if ( v12 )
      --*(_DWORD *)(a1 + 16);
    else
      --*(_DWORD *)(a1 + 20);
    if ( (v5[22] & 8) != 0 )
      --*(_DWORD *)(a1 + 24);
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v4);
  return v5;
}
