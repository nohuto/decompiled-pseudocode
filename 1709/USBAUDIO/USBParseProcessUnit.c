/*
 * XREFs of USBParseProcessUnit @ 0x1C001E200
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C001A670 @ 0x1C001A670 (sub_1C001A670.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C001D7B4 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C001D858 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C001D8FC (USBParseGetUnitString.c)
 *     USBParseBuildSourceIdArray @ 0x1C001DA44 (USBParseBuildSourceIdArray.c)
 */

__int64 __fastcall USBParseProcessUnit(__int64 a1, __int64 a2)
{
  int v3; // r13d
  __int64 v4; // r14
  int v5; // r13d
  __int64 v6; // rdi
  int UnitString; // ebx
  __int64 v8; // rcx
  int v9; // r15d
  char *v10; // rsi
  unsigned int v11; // edi
  __int64 v12; // r12
  char *PoolWithTag; // rax
  unsigned __int16 *v14; // rdx
  int v15; // ecx
  int *v16; // r14
  __int64 v17; // r12
  int ChannelConfigForUnit; // ebx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v25; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+18h]
  PCWSTR SourceString; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *(unsigned __int16 *)(a2 + 4);
  v4 = *(unsigned __int8 *)(a2 + 6) + a2 + 7;
  v25 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v5 = v3 + 1;
  v6 = *(unsigned __int8 *)(v4 + 4);
  v26 = v6;
  UnitString = USBParseGetUnitString(a1, (unsigned __int8 *)a2, &SourceString);
  if ( UnitString >= 0 )
  {
    v8 = *(unsigned __int8 *)(v4 + 4);
    v9 = 0;
    v10 = 0LL;
    while ( --v8 >= 0 )
      v9 = *(unsigned __int8 *)(v4 + v8 + 5) | (v9 << 8);
    if ( (unsigned int)(v5 - 2) <= 1 )
    {
      v11 = *(unsigned __int8 *)(v6 + v4 + 6);
      if ( v11 )
      {
        v12 = v11;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 4LL * v11, 0x41627845u);
        v10 = PoolWithTag;
        if ( PoolWithTag )
        {
          v14 = (unsigned __int16 *)(v4 + v26 + 7);
          do
          {
            v15 = *v14++;
            *(_DWORD *)PoolWithTag = v15;
            PoolWithTag += 4;
            --v12;
          }
          while ( v12 );
        }
        else
        {
          UnitString = -1073741670;
        }
      }
    }
    else
    {
      v11 = 0;
    }
    if ( UnitString >= 0 )
    {
      v16 = USBParseBuildSourceIdArray(*(unsigned __int8 *)(a2 + 6), (unsigned __int8 *)(a2 + 7));
      if ( v16 )
      {
        v17 = *(unsigned __int8 *)(a2 + 6);
        ChannelConfigForUnit = USBParseGetChannelConfigForUnit(
                                 *(unsigned __int16 **)(v25 + 40),
                                 *(char **)(v25 + 48),
                                 *(unsigned __int8 *)(a2 + 3));
        v19 = USBParseCountOutputChannelsForUnit(
                *(unsigned __int16 **)(v25 + 40),
                *(char **)(v25 + 48),
                *(unsigned __int8 *)(a2 + 3));
        UnitString = sub_1C001A670(
                       a1,
                       *(unsigned __int8 *)(a2 + 3),
                       4,
                       v19,
                       ChannelConfigForUnit,
                       v17,
                       v16,
                       SourceString,
                       4 * v11,
                       &v25);
        if ( UnitString >= 0 )
        {
          v20 = v25;
          if ( v25 )
          {
            *(_DWORD *)(v25 + 64) = v5;
            *(_DWORD *)(v20 + 76) = v9;
            *(_DWORD *)(v20 + 80) = v11;
            if ( v11 )
            {
              v21 = v11;
              v22 = 0LL;
              *(_QWORD *)(v20 + 88) = v20 + 12 * (v17 + 8);
              do
              {
                *(_DWORD *)(v22 + *(_QWORD *)(v20 + 88)) = *(_DWORD *)&v10[v22];
                v22 += 4LL;
                --v21;
              }
              while ( v21 );
            }
          }
        }
        ExFreePool(v16);
      }
      else
      {
        UnitString = -1073741670;
      }
    }
    if ( v10 )
      ExFreePool(v10);
  }
  return (unsigned int)UnitString;
}
