/*
 * XREFs of RiNormalizeDeviceQueue @ 0x1C0009E90
 * Callers:
 *     RaidNormalizeDeviceQueue @ 0x1C0006B14 (RaidNormalizeDeviceQueue.c)
 *     RaidUnitCompleteRequest @ 0x1C0008A50 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RiGetEnqueueReason @ 0x1C0009F58 (RiGetEnqueueReason.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00312D8 (RaidGetQosEntryForDeviceEntry.c)
 */

__int64 *__fastcall RiNormalizeDeviceQueue(__int64 a1, char a2)
{
  __int64 *v2; // r11
  __int64 v3; // rcx
  __int64 *v4; // rdx
  __int64 **v5; // rax
  int v6; // eax
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx

  v2 = *(__int64 **)(a1 + 96);
  if ( v2 == (__int64 *)(a1 + 96) )
  {
    v2 = *(__int64 **)(a1 + 80);
    if ( v2 == (__int64 *)(a1 + 80) )
      return 0LL;
  }
  if ( !v2 )
    return v2;
  *((_BYTE *)v2 + 22) ^= (*((_BYTE *)v2 + 22) ^ (16 * a2)) & 0x10;
  if ( (unsigned int)RiGetEnqueueReason(a1, v2, 0LL) )
    return 0LL;
  v4 = (__int64 *)*v2;
  v5 = (__int64 **)v2[1];
  if ( *(__int64 **)(*v2 + 8) != v2 || *v5 != v2 )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = (__int64)v5;
  ++*(_DWORD *)(v3 + 76);
  if ( (*((_BYTE *)v2 + 22) & 6) != 0 )
    --*(_DWORD *)(v3 + 20);
  else
    --*(_DWORD *)(v3 + 16);
  if ( (*((_BYTE *)v2 + 22) & 8) != 0 )
    --*(_DWORD *)(v3 + 24);
  *((_BYTE *)v2 + 20) = 0;
  v6 = *(_DWORD *)(v3 + 76);
  if ( v6 > *(_DWORD *)(v3 + 132) )
    *(_DWORD *)(v3 + 132) = v6;
  if ( (*((_BYTE *)v2 + 22) & 1) != 0 )
    *(_BYTE *)(v3 + 38) = 1;
  if ( (*((_BYTE *)v2 + 22) & 0x20) != 0 )
  {
    QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v2);
    v9 = *QosEntryForDeviceEntry;
    v10 = (_QWORD *)QosEntryForDeviceEntry[1];
    if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry
      || (_QWORD *)*v10 != QosEntryForDeviceEntry )
    {
      __fastfail(3u);
    }
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
  }
  return v2;
}
