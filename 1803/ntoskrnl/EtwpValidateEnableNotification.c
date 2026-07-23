/*
 * XREFs of EtwpValidateEnableNotification @ 0x14058DA84
 * Callers:
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 * Callees:
 *     EtwpCheckNotificationAccess @ 0x14058D188 (EtwpCheckNotificationAccess.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpValidateFilterDescriptors @ 0x1407B1FCC (EtwpValidateFilterDescriptors.c)
 */

__int64 __fastcall EtwpValidateEnableNotification(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 *a5, __int64 a6)
{
  unsigned int v6; // ebx
  bool v7; // cf
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // eax

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
    v18 = *(_DWORD *)(a2 + 80);
    if ( (v18 & 0x20) == 0 )
      goto LABEL_19;
    return 3221225485LL;
  }
  if ( (_DWORD)v12 == 3 )
    return 3221225506LL;
  v14 = *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 - *(_QWORD *)(a2 + 40);
  if ( *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 == *(_QWORD *)(a2 + 40) )
    v14 = *(_QWORD *)PrivateLoggerNotificationGuid.Data4 - *(_QWORD *)(a2 + 48);
  if ( !v14 )
    return 3221225485LL;
  v15 = EtwpAcquireLoggerContextByLoggerId(a1, v12, 0LL);
  v16 = v15;
  if ( !v15 )
    goto LABEL_29;
  *a5 = v15;
  if ( (*(_DWORD *)(a2 + 80) & 0x20) != 0 && (*(_DWORD *)(v15 + 12) & 0x1030800) != 0 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v15 + 832) & 0x40) == 0 )
  {
    *(_OWORD *)a4 = *(_OWORD *)(v15 + 292);
    v17 = *(_DWORD *)(v15 + 12);
    if ( (v17 & 0x80u) != 0 )
    {
      *(_BYTE *)(a4 + 16) = 1;
      v17 = *(_DWORD *)(v16 + 12);
    }
    if ( (v17 & 0x1000000) != 0 )
      *(_BYTE *)(a4 + 17) = 1;
    if ( a3 )
      v6 = EtwpCheckNotificationAccess((_QWORD *)(a2 + 40), a4);
    goto LABEL_18;
  }
LABEL_29:
  v6 = -1073741162;
LABEL_18:
  v18 = *(_DWORD *)(a2 + 80);
LABEL_19:
  if ( (v18 & 0x10) != 0 )
    v19 = v18 & 0xFFFFFFEF;
  else
    v19 = v18 | 0x40;
  *(_DWORD *)(a2 + 80) = v19;
  return v6;
}
