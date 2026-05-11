/*
 * XREFs of USBParseFeatureUnit @ 0x1C0022AD0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C000A580 (memset.c)
 *     BusApiBuildFunctionUnit @ 0x1C001EA24 (BusApiBuildFunctionUnit.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C00222D8 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C002237C (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C0022420 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseFeatureUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  int v4; // r8d
  int v6; // edi
  __int64 v7; // rbx
  int v8; // r15d
  unsigned int v9; // r12d
  int ChannelConfigForUnit; // r13d
  unsigned __int64 v11; // rax
  unsigned int v12; // esi
  int UnitString; // ebx
  unsigned int v14; // ebp
  int *PoolWithTag; // rax
  int *v16; // rdi
  __int64 v17; // rdx
  int *v18; // r11
  int v19; // r10d
  __int16 v20; // r8
  int v21; // r9d
  __int16 v22; // ax
  __int64 v23; // rcx
  __int64 v24; // r8
  int *v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v30; // [rsp+A8h] [rbp+10h] BYREF
  PCWSTR SourceString; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v4 = a2[3];
  v6 = 0;
  SourceString = 0LL;
  v7 = *(_QWORD *)(v2 + 72);
  v8 = USBParseCountOutputChannelsForUnit(*(unsigned __int16 **)(v7 + 40), *(char **)(v7 + 48), v4);
  v9 = v8 + 1;
  ChannelConfigForUnit = USBParseGetChannelConfigForUnit(*(unsigned __int16 **)(v7 + 40), *(char **)(v7 + 48), a2[3]);
  v11 = ((unsigned __int64)*a2 - 7) / a2[5];
  v12 = v11;
  if ( (_DWORD)v11 != v8 + 1 )
  {
    if ( ChannelConfigForUnit )
    {
      if ( (unsigned int)v11 < v9 )
      {
        v6 = v8 - v11 + 1;
        goto LABEL_5;
      }
    }
    else if ( (_DWORD)v11 == v8 )
    {
      v6 = 1;
      goto LABEL_5;
    }
    return (unsigned int)-1073741438;
  }
LABEL_5:
  UnitString = USBParseGetUnitString(a1, a2, &SourceString);
  if ( UnitString >= 0 )
  {
    v14 = v6 + v12;
    PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 4LL * (v6 + v12), 0x41627845u);
    v16 = PoolWithTag;
    if ( PoolWithTag )
    {
      LODWORD(v30) = a2[4];
      memset(PoolWithTag, 0, 4LL * v12);
      v17 = 0LL;
      if ( v12 )
      {
        v18 = v16;
        do
        {
          v19 = a2[5];
          v20 = 0;
          if ( a2[5] )
          {
            v21 = v19 + v17 * v19;
            do
            {
              v22 = a2[--v21 + 6];
              v20 = v22 | (v20 << 8);
              --v19;
            }
            while ( v19 );
          }
          v17 = (unsigned int)(v17 + 1);
          *v18++ = v20 & 3 | (4 * (v20 & 0xFFFC));
        }
        while ( (unsigned int)v17 < v12 );
      }
      if ( (unsigned int)v17 < v14 )
        memset(&v16[v17], 0, 4LL * (v14 - (unsigned int)v17));
      UnitString = BusApiBuildFunctionUnit(
                     a1,
                     a2[3],
                     2,
                     v8,
                     ChannelConfigForUnit,
                     1u,
                     (int *)&v30,
                     SourceString,
                     4 * v8 + 4,
                     &v32);
      if ( UnitString >= 0 )
      {
        v23 = v32;
        if ( v32 )
        {
          v24 = v32 + 108;
          *(_QWORD *)(v32 + 72) = v32 + 108;
          *(_BYTE *)(v23 + 64) = *v16 != 0;
          if ( v8 != -1 )
          {
            v25 = v16;
            v26 = v9;
            v27 = v24 - (_QWORD)v16;
            do
            {
              *(_DWORD *)(v23 + 68) |= *v25;
              *(int *)((char *)v25 + v27) = *v25;
              ++v25;
              --v26;
            }
            while ( v26 );
          }
        }
      }
      ExFreePool(v16);
    }
  }
  return (unsigned int)UnitString;
}
