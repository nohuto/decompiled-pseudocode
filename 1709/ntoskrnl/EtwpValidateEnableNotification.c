/*
 * XREFs of EtwpValidateEnableNotification @ 0x1404EEA30
 * Callers:
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckNotificationAccess @ 0x1404EEFD4 (EtwpCheckNotificationAccess.c)
 *     EtwpValidateFilterDescriptors @ 0x14075128C (EtwpValidateFilterDescriptors.c)
 */

__int64 __fastcall EtwpValidateEnableNotification(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 *a5, __int64 a6)
{
  unsigned int v6; // ebx
  bool v7; // cf
  unsigned int v12; // edx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // eax

  v6 = 0;
  v7 = *(_DWORD *)(a2 + 4) < 0x78u;
  *a5 = 0LL;
  if ( v7 || *(_DWORD *)(a2 + 116) && (unsigned int)EtwpValidateFilterDescriptors(a2, a6) || *(_DWORD *)(a2 + 72) >= 3u )
    return 3221225485LL;
  v12 = *(unsigned __int16 *)(a2 + 78);
  v13 = *(_WORD *)(a2 + 78) & 0x8000;
  *(_BYTE *)(a4 + 18) = v13 != 0;
  if ( v13 )
  {
    if ( (*(_DWORD *)(a2 + 80) & 0x20) != 0 )
      return 3221225485LL;
  }
  else
  {
    if ( v12 == 3 )
      return 3221225506LL;
    v14 = *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 - *(_QWORD *)(a2 + 40);
    if ( *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 == *(_QWORD *)(a2 + 40) )
      v14 = *(_QWORD *)PrivateLoggerNotificationGuid.Data4 - *(_QWORD *)(a2 + 48);
    if ( !v14 )
      return 3221225485LL;
    v15 = EtwpAcquireLoggerContextByLoggerId(a1, v12, 0);
    if ( !v15 )
      goto LABEL_27;
    *a5 = v15;
    if ( (*(_DWORD *)(a2 + 80) & 0x20) != 0 && (*(_DWORD *)(v15 + 12) & 0x1030800) != 0 )
      return 3221225485LL;
    if ( (*(_DWORD *)(v15 + 832) & 0x40) != 0 )
    {
LABEL_27:
      v6 = -1073741162;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)(v15 + 292);
      if ( (*(_DWORD *)(v15 + 12) & 0x80u) != 0 )
        *(_BYTE *)(a4 + 16) = 1;
      if ( (*(_DWORD *)(v15 + 12) & 0x1000000) != 0 )
        *(_BYTE *)(a4 + 17) = 1;
      if ( a3 )
        v6 = EtwpCheckNotificationAccess(a2 + 40, a4);
    }
  }
  v16 = *(_DWORD *)(a2 + 80);
  if ( (v16 & 0x10) != 0 )
    v17 = v16 & 0xFFFFFFEF;
  else
    v17 = v16 | 0x40;
  *(_DWORD *)(a2 + 80) = v17;
  return v6;
}
