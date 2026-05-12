/*
 * XREFs of RiNormalizeDeviceQueue @ 0x1C0009ADC
 * Callers:
 *     RaidNormalizeDeviceQueue @ 0x1C0007224 (RaidNormalizeDeviceQueue.c)
 *     RaidUnitCompleteRequest @ 0x1C000A210 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RiGetEnqueueReason @ 0x1C0009BD8 (RiGetEnqueueReason.c)
 *     RaidGetIoStartingLbaAndLength @ 0x1C002FF44 (RaidGetIoStartingLbaAndLength.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C0031A90 (RaidGetQosEntryForDeviceEntry.c)
 *     RaidZoneWriteGroupListSearchRequest @ 0x1C0031FD8 (RaidZoneWriteGroupListSearchRequest.c)
 */

__int64 *__fastcall RiNormalizeDeviceQueue(__int64 a1, char a2, int a3)
{
  __int64 *v4; // rbx
  __int64 *v5; // rax
  __int64 **v6; // rcx
  int v7; // eax
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r9
  char v12; // bp
  unsigned int v13; // r14d
  unsigned int v14; // r11d
  __int64 v15; // rcx
  unsigned __int64 v16; // r10
  __int64 v17; // r8
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  bool v23; // cf
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  unsigned __int64 v27; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(__int64 **)(a1 + 96);
  if ( v4 == (__int64 *)(a1 + 96) )
  {
    v4 = *(__int64 **)(a1 + 80);
    if ( v4 == (__int64 *)(a1 + 80) )
      return 0LL;
  }
  if ( !v4 )
    return v4;
  *((_BYTE *)v4 + 22) ^= (*((_BYTE *)v4 + 22) ^ (16 * a2)) & 0x10;
  if ( (*((_BYTE *)v4 + 22) & 0x40) == 0 )
    goto LABEL_5;
  if ( !a3 )
    goto LABEL_5;
  v9 = RaidZoneWriteGroupListSearchRequest(a1, (int)v4 - 120, 0, a3, 0);
  if ( !v9 )
    goto LABEL_5;
  v10 = *(_QWORD *)(v4[8] + 8);
  if ( *(_BYTE *)(v10 + 2) != 40 )
  {
    v11 = v10 + 72;
    goto LABEL_43;
  }
  v11 = 0LL;
  v12 = 0;
  if ( !*(_DWORD *)(v10 + 20) )
  {
    v13 = *(_DWORD *)(v10 + 56);
    v14 = 0;
    if ( v13 )
    {
      while ( 1 )
      {
        v15 = *(unsigned int *)(v10 + 4LL * v14 + 120);
        if ( (unsigned int)v15 >= 0x80 )
        {
          v16 = *(unsigned int *)(v10 + 16);
          if ( (unsigned int)v15 < (unsigned int)v16 )
            break;
        }
LABEL_40:
        if ( ++v14 >= v13 )
          goto LABEL_43;
      }
      v17 = (unsigned int)v15;
      v18 = *(_DWORD *)(v15 + v10) - 64;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          if ( v19 == 1 && v17 + 40 <= v16 )
          {
            v20 = v17 + v10 + 32;
            if ( !*(_DWORD *)(v17 + v10 + 12) )
              v20 = v11;
            v11 = v20;
            goto LABEL_43;
          }
          goto LABEL_39;
        }
        v21 = v17 + 56;
      }
      else
      {
        v21 = v17 + 40;
      }
      if ( v21 <= v16 )
      {
        v12 = 1;
        if ( !*(_BYTE *)(v17 + v10 + 10) )
          goto LABEL_43;
        v11 = v17 + v10 + 24;
      }
LABEL_39:
      if ( v12 )
        goto LABEL_43;
      goto LABEL_40;
    }
  }
LABEL_43:
  v27 = 0LL;
  RaidGetIoStartingLbaAndLength(v11, &v27, 0LL);
  v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 40), 0LL, 0LL);
  v23 = v27 < v22;
  if ( v27 != v22 )
  {
    if ( v27 <= v22 )
      goto LABEL_47;
    if ( *(_DWORD *)(a1 + 76) )
    {
      v23 = v27 < v22;
LABEL_47:
      if ( !v23 )
        goto LABEL_5;
    }
  }
  *((_BYTE *)v4 + 22) &= ~0x40u;
LABEL_5:
  if ( (unsigned int)RiGetEnqueueReason(a1, v4, 0LL) )
    return 0LL;
  v5 = (__int64 *)*v4;
  if ( *(__int64 **)(*v4 + 8) != v4 || (v6 = (__int64 **)v4[1], *v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = (__int64)v6;
  ++*(_DWORD *)(a1 + 76);
  if ( (*((_BYTE *)v4 + 22) & 6) != 0 )
    --*(_DWORD *)(a1 + 20);
  else
    --*(_DWORD *)(a1 + 16);
  if ( (*((_BYTE *)v4 + 22) & 8) != 0 )
    --*(_DWORD *)(a1 + 24);
  *((_BYTE *)v4 + 20) = 0;
  v7 = *(_DWORD *)(a1 + 76);
  if ( v7 > *(_DWORD *)(a1 + 160) )
    *(_DWORD *)(a1 + 160) = v7;
  if ( (*((_BYTE *)v4 + 22) & 1) != 0 )
    *(_BYTE *)(a1 + 38) = 1;
  if ( (*((_BYTE *)v4 + 22) & 0x20) != 0 )
  {
    QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v4);
    v25 = *QosEntryForDeviceEntry;
    if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry
      || (v26 = (_QWORD *)QosEntryForDeviceEntry[1], (_QWORD *)*v26 != QosEntryForDeviceEntry) )
    {
      __fastfail(3u);
    }
    *v26 = v25;
    *(_QWORD *)(v25 + 8) = v26;
  }
  return v4;
}
