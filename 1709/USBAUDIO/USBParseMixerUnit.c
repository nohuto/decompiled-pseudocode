/*
 * XREFs of USBParseMixerUnit @ 0x1C001DC00
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0008440 (memset.c)
 *     sub_1C001A670 @ 0x1C001A670 (sub_1C001A670.c)
 *     USBHwAllocateAndBag @ 0x1C001B7EC (USBHwAllocateAndBag.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C001D7B4 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C001D858 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C001D8FC (USBParseGetUnitString.c)
 *     USBParseBuildSourceIdArray @ 0x1C001DA44 (USBParseBuildSourceIdArray.c)
 */

__int64 __fastcall USBParseMixerUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  unsigned __int8 *v5; // r13
  __int64 v6; // rdi
  int UnitString; // ebx
  unsigned __int16 v8; // ax
  int v9; // edx
  int v10; // r9d
  unsigned int i; // r8d
  unsigned int v12; // ecx
  int v13; // eax
  int v14; // r14d
  unsigned int v15; // esi
  unsigned int v16; // r15d
  __int64 v17; // r12
  unsigned int v18; // r14d
  void *v19; // rbx
  char *v20; // rsi
  char *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r13
  int *v24; // r15
  __int64 v25; // r13
  int ChannelConfigForUnit; // ebx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  char v30; // al
  unsigned int v33; // [rsp+A0h] [rbp+8h]
  __int64 v34; // [rsp+A8h] [rbp+10h] BYREF
  char *PoolWithTag; // [rsp+B0h] [rbp+18h] BYREF
  PCWSTR SourceString; // [rsp+B8h] [rbp+20h] BYREF

  v2 = a1;
  v4 = a2[4];
  v34 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v5 = &a2[v4 + 5];
  v6 = 0LL;
  UnitString = USBParseGetUnitString(a1, a2, &SourceString);
  if ( UnitString >= 0 )
  {
    v8 = *(_WORD *)(v5 + 1);
    if ( v8 )
    {
      v9 = 0;
      v10 = v8;
      for ( i = 0; i < 0x10; ++i )
      {
        v12 = i;
        v13 = v9 + 1;
        if ( !_bittest(&v10, v12) )
          v13 = v9;
        v9 = v13;
      }
      if ( v13 != *v5 )
        UnitString = -1073741438;
    }
    if ( UnitString >= 0 )
    {
      v14 = 0;
      v15 = 0;
      v16 = *a2 - a2[4] - 10;
      if ( a2[4] )
      {
        v17 = v34;
        do
          v14 += USBParseCountOutputChannelsForUnit(
                   *(unsigned __int16 **)(v17 + 40),
                   *(char **)(v17 + 48),
                   a2[v15++ + 5]);
        while ( v15 < a2[4] );
        v2 = a1;
      }
      v18 = ((v14 * (unsigned int)*v5) >> 3) + ((((_BYTE)v14 * *v5) & 7) != 0);
      if ( v18 <= v16 )
      {
        v20 = (char *)(v5 + 4);
      }
      else
      {
        v19 = *(void **)(v2 + 8);
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v18, 0x41627845u);
        v20 = PoolWithTag;
        if ( PoolWithTag )
          UnitString = USBHwAllocateAndBag((PVOID *)&PoolWithTag, v19);
        else
          UnitString = -1073741670;
        if ( UnitString < 0 )
          return (unsigned int)-1073741670;
        memset(v20, 0, v18);
        if ( v16 )
        {
          v21 = v20;
          v22 = v16;
          v23 = v5 - (unsigned __int8 *)v20;
          do
          {
            *v21 = v21[v23 + 4];
            ++v21;
            --v22;
          }
          while ( v22 );
        }
        v2 = a1;
      }
      v24 = USBParseBuildSourceIdArray(a2[4], a2 + 5);
      if ( v24 )
      {
        v25 = v34;
        v33 = a2[4];
        ChannelConfigForUnit = USBParseGetChannelConfigForUnit(
                                 *(unsigned __int16 **)(v34 + 40),
                                 *(char **)(v34 + 48),
                                 a2[3]);
        v27 = USBParseCountOutputChannelsForUnit(*(unsigned __int16 **)(v25 + 40), *(char **)(v25 + 48), a2[3]);
        UnitString = sub_1C001A670(v2, a2[3], 5, v27, ChannelConfigForUnit, v33, v24, SourceString, v18, &v34);
        if ( UnitString >= 0 )
        {
          v28 = v34;
          if ( v34 )
          {
            *(_DWORD *)(v34 + 68) = v18;
            *(_QWORD *)(v28 + 72) = v28 + 12 * (v33 + 8LL);
            if ( v18 )
            {
              v29 = v18;
              do
              {
                v30 = *v20++;
                *(_BYTE *)(v6 + *(_QWORD *)(v28 + 72)) = v30;
                ++v6;
                --v29;
              }
              while ( v29 );
            }
          }
        }
        ExFreePool(v24);
      }
    }
  }
  return (unsigned int)UnitString;
}
