/*
 * XREFs of RiNormalizeDeviceQueue @ 0x1C000C9F4
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C000B0C0 (RaidUnitCompleteRequest.c)
 *     RaidNormalizeDeviceQueue @ 0x1C000C99C (RaidNormalizeDeviceQueue.c)
 * Callees:
 *     RiPeekDeviceQueue @ 0x1C000CAE8 (RiPeekDeviceQueue.c)
 *     RiGetEnqueueReason @ 0x1C000CB10 (RiGetEnqueueReason.c)
 *     RaidGetIoStartingLbaAndLength @ 0x1C0029FF4 (RaidGetIoStartingLbaAndLength.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C002D6B0 (RaidGetQosEntryForDeviceEntry.c)
 *     RaidZoneWriteGroupListSearchRequest @ 0x1C002D97C (RaidZoneWriteGroupListSearchRequest.c)
 */

__int64 __fastcall RiNormalizeDeviceQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // ecx
  int v6; // r8d
  char v7; // r9
  __int64 v8; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  int v12; // eax
  char v13; // al
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r9
  char v18; // si
  unsigned int v19; // ebp
  unsigned int v20; // r11d
  __int64 v21; // rcx
  unsigned __int64 v22; // r10
  __int64 v23; // r8
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  bool v29; // cf
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  unsigned __int64 v33; // [rsp+68h] [rbp+20h] BYREF

  v4 = RiPeekDeviceQueue(a1, a2, a3);
  v8 = v4;
  if ( !v4 )
    return v8;
  *(_BYTE *)(v4 + 22) ^= (*(_BYTE *)(v4 + 22) ^ (16 * v7)) & 0x10;
  if ( (*(_BYTE *)(v4 + 22) & 0x40) != 0 )
  {
    if ( v6 )
    {
      v14 = v4 - 120;
      v15 = RaidZoneWriteGroupListSearchRequest(v5, (int)v4 - 120, 0, v6, 0);
      if ( v15 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v14 + 184) + 8LL);
        if ( *(_BYTE *)(v16 + 2) != 40 )
        {
          v17 = v16 + 72;
          goto LABEL_43;
        }
        v17 = 0LL;
        v18 = 0;
        if ( !*(_DWORD *)(v16 + 20) )
        {
          v19 = *(_DWORD *)(v16 + 56);
          v20 = 0;
          if ( v19 )
          {
            while ( 1 )
            {
              v21 = *(unsigned int *)(v16 + 4LL * v20 + 120);
              if ( (unsigned int)v21 >= 0x80 )
              {
                v22 = *(unsigned int *)(v16 + 16);
                if ( (unsigned int)v21 < (unsigned int)v22 )
                  break;
              }
LABEL_40:
              if ( ++v20 >= v19 )
                goto LABEL_43;
            }
            v23 = (unsigned int)v21;
            v24 = *(_DWORD *)(v21 + v16) - 64;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                if ( v25 == 1 && v23 + 40 <= v22 )
                {
                  v26 = v23 + v16 + 32;
                  if ( !*(_DWORD *)(v23 + v16 + 12) )
                    v26 = v17;
                  v17 = v26;
                  goto LABEL_43;
                }
                goto LABEL_39;
              }
              v27 = v23 + 56;
            }
            else
            {
              v27 = v23 + 40;
            }
            if ( v27 <= v22 )
            {
              v18 = 1;
              if ( !*(_BYTE *)(v23 + v16 + 10) )
                goto LABEL_43;
              v17 = v23 + v16 + 24;
            }
LABEL_39:
            if ( v18 )
              goto LABEL_43;
            goto LABEL_40;
          }
        }
LABEL_43:
        v33 = 0LL;
        RaidGetIoStartingLbaAndLength(v17, &v33, 0LL, v17);
        v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 40), 0LL, 0LL);
        v29 = v33 < v28;
        if ( v33 != v28 )
        {
          if ( v33 <= v28 )
            goto LABEL_47;
          if ( *(_DWORD *)(a1 + 76) )
          {
            v29 = v33 < v28;
LABEL_47:
            if ( !v29 )
              goto LABEL_4;
          }
        }
        *(_BYTE *)(v8 + 22) &= ~0x40u;
      }
    }
  }
LABEL_4:
  if ( (unsigned int)RiGetEnqueueReason(a1, v8, 0LL) )
    return 0LL;
  v10 = *(_QWORD *)v8;
  if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || (v11 = *(_QWORD **)(v8 + 8), *v11 != v8) )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  ++*(_DWORD *)(a1 + 76);
  if ( (*(_BYTE *)(v8 + 22) & 6) != 0 )
    --*(_DWORD *)(a1 + 20);
  else
    --*(_DWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v8 + 22) & 8) != 0 )
    --*(_DWORD *)(a1 + 24);
  *(_BYTE *)(v8 + 20) = 0;
  v12 = *(_DWORD *)(a1 + 76);
  if ( v12 > *(_DWORD *)(a1 + 160) )
    *(_DWORD *)(a1 + 160) = v12;
  v13 = *(_BYTE *)(v8 + 22);
  if ( (v13 & 1) != 0 )
  {
    *(_BYTE *)(a1 + 38) = 1;
    v13 = *(_BYTE *)(v8 + 22);
  }
  if ( (v13 & 0x20) != 0 )
  {
    QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v8);
    v31 = *QosEntryForDeviceEntry;
    if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry
      || (v32 = (_QWORD *)QosEntryForDeviceEntry[1], (_QWORD *)*v32 != QosEntryForDeviceEntry) )
    {
      __fastfail(3u);
    }
    *v32 = v31;
    *(_QWORD *)(v31 + 8) = v32;
  }
  return v8;
}
