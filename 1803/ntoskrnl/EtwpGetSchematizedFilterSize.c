/*
 * XREFs of EtwpGetSchematizedFilterSize @ 0x140590420
 * Callers:
 *     EtwpBuildNotificationPacket @ 0x14058B92C (EtwpBuildNotificationPacket.c)
 *     EtwpCalculateUpdateNotification @ 0x14058C620 (EtwpCalculateUpdateNotification.c)
 *     EtwpAddRegEntryToGroup @ 0x14058F4F0 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x140590090 (EtwpRegisterUMGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140591B34 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpRegisterProvider @ 0x140601F6C (EtwpRegisterProvider.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetSchematizedFilterSize(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r11
  unsigned int v3; // r10d
  unsigned int v5; // r8d
  _DWORD *v6; // r9
  __int64 v7; // r11

  v2 = *(_QWORD *)(a1 + 368);
  v3 = 0;
  if ( v2 )
  {
    v5 = 0;
    v6 = (_DWORD *)(a1 + 112);
    v7 = v2 + 80;
    do
    {
      if ( *v6 && *(_QWORD *)v7 && ((unsigned __int8)(1 << v5) & a2) != 0 )
        v3 += (*(_DWORD *)(*(_QWORD *)v7 + 16LL) + 7) & 0xFFFFFFF8;
      ++v5;
      v6 += 8;
      v7 += 96LL;
    }
    while ( v5 < 8 );
  }
  return v3;
}
