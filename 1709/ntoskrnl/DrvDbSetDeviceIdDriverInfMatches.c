/*
 * XREFs of DrvDbSetDeviceIdDriverInfMatches @ 0x1404490D4
 * Callers:
 *     DrvDbSetDeviceIdMappedProperty @ 0x140448F74 (DrvDbSetDeviceIdMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     wcschr @ 0x140160420 (wcschr.c)
 *     wcsncmp @ 0x140160550 (wcsncmp.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _PnpCtxRegEnumValue @ 0x14058469C (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1405847D8 (_PnpCtxRegQueryInfoKey.c)
 *     _RegRtlSetValue @ 0x14058E7F0 (_RegRtlSetValue.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14059449C (DrvDbSplitDeviceIdDriverInfMatch.c)
 */

__int64 __fastcall DrvDbSetDeviceIdDriverInfMatches(__int64 a1, void *a2, const wchar_t *a3)
{
  const wchar_t *v3; // rsi
  void *v4; // r13
  NTSTATUS InfoKey; // ebx
  unsigned int v6; // r15d
  const wchar_t *v7; // rdi
  wchar_t *v8; // rax
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rax
  int v12; // ecx
  wchar_t *PoolWithTag; // rdi
  int v14; // r12d
  const wchar_t *v15; // r14
  size_t v16; // r13
  int v17; // eax
  __int64 v18; // rax
  wchar_t v19; // ax
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // r14d
  int v24; // ecx
  int v25; // esi
  int v26; // [rsp+40h] [rbp-28h] BYREF
  char v27; // [rsp+44h] [rbp-24h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-20h] BYREF
  unsigned int MaxCount; // [rsp+B0h] [rbp+48h] BYREF
  int MaxCount_4; // [rsp+B4h] [rbp+4Ch]
  void *v31; // [rsp+B8h] [rbp+50h]
  const wchar_t *v32; // [rsp+C0h] [rbp+58h]
  unsigned int v33; // [rsp+C8h] [rbp+60h] BYREF

  v32 = a3;
  v31 = a2;
  MaxCount_4 = HIDWORD(a1);
  v3 = a3;
  v33 = 0;
  MaxCount = 0;
  v4 = a2;
  v26 = 0;
  InfoKey = PnpCtxRegQueryInfoKey(a1, (_DWORD)a2, 0, 0, (__int64)&v33, (__int64)&MaxCount);
  if ( InfoKey >= 0 )
  {
    v6 = MaxCount + 1;
    if ( v3 )
    {
      v7 = v3;
      if ( *v3 )
      {
        do
        {
          v8 = wcschr(v7, 0x5Cu);
          if ( v8 )
          {
            v9 = v8 - v7;
          }
          else
          {
            v9 = -1LL;
            do
              ++v9;
            while ( v7[v9] );
          }
          v10 = v9 + 1;
          if ( v10 > v6 )
            v6 = v10;
          v11 = -1LL;
          do
            ++v11;
          while ( v7[v11] );
          v7 += v11 + 1;
        }
        while ( *v7 );
        v4 = v31;
      }
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v6, 0x42444450u);
      if ( PoolWithTag )
      {
        v14 = 0;
        if ( v33 )
        {
          while ( 1 )
          {
            MaxCount = v6;
            InfoKey = PnpCtxRegEnumValue(
                        v12,
                        (_DWORD)v4,
                        v14,
                        (_DWORD)PoolWithTag,
                        (__int64)&MaxCount,
                        (__int64)&v26,
                        0LL,
                        0LL);
            if ( InfoKey < 0 )
              break;
            if ( v26 == 3 || !v26 )
            {
              v12 = 0;
              v15 = v3;
              if ( *v3 )
              {
                v16 = MaxCount;
                do
                {
                  v17 = wcsncmp(v15, PoolWithTag, v16);
                  v12 = 0;
                  if ( !v17 )
                  {
                    v19 = v15[v16];
                    if ( v19 == 92 || !v19 )
                      break;
                  }
                  v18 = -1LL;
                  do
                    ++v18;
                  while ( v15[v18] );
                  v15 += v18 + 1;
                }
                while ( *v15 );
                v3 = v32;
                v4 = v31;
              }
              if ( !*v15 )
              {
                InfoKey = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
                if ( InfoKey >= 0 )
                  InfoKey = ZwDeleteValueKey(v4, &DestinationString);
                if ( InfoKey == -1073741772 )
                {
                  InfoKey = 0;
                }
                else if ( InfoKey < 0 )
                {
                  goto LABEL_28;
                }
              }
            }
            if ( ++v14 >= v33 )
              goto LABEL_27;
          }
          if ( InfoKey == -2147483622 )
            InfoKey = 0;
        }
LABEL_27:
        if ( InfoKey >= 0 )
        {
          while ( *v3 )
          {
            InfoKey = DrvDbSplitDeviceIdDriverInfMatch(v3, PoolWithTag, v6);
            if ( InfoKey < 0 )
              break;
            v22 = v27 ? RegRtlSetValue(v4, 4u) : RegRtlSetValue(v4, 0);
            InfoKey = v22;
            if ( v22 < 0 )
              break;
            v21 = -1LL;
            do
              ++v21;
            while ( v3[v21] );
            v3 += v21 + 1;
          }
        }
LABEL_28:
        ExFreePoolWithTag(PoolWithTag, 0);
        return (unsigned int)InfoKey;
      }
    }
    else
    {
      v23 = v33;
      if ( !v33 )
        return 0;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v6, 0x42444450u);
      if ( PoolWithTag )
      {
        v25 = 0;
        if ( v23 )
        {
          while ( 1 )
          {
            MaxCount = v6;
            InfoKey = PnpCtxRegEnumValue(v24, (_DWORD)v4, v25, (_DWORD)PoolWithTag, (__int64)&MaxCount, 0LL, 0LL, 0LL);
            if ( InfoKey < 0 )
              break;
            InfoKey = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
            if ( InfoKey >= 0 )
              InfoKey = ZwDeleteValueKey(v4, &DestinationString);
            if ( InfoKey == -1073741772 )
            {
              InfoKey = 0;
            }
            else if ( InfoKey < 0 )
            {
              goto LABEL_28;
            }
            if ( ++v25 >= v23 )
              goto LABEL_28;
          }
          if ( InfoKey == -2147483622 )
            InfoKey = 0;
        }
        goto LABEL_28;
      }
    }
    return (unsigned int)-1073741801;
  }
  return (unsigned int)InfoKey;
}
