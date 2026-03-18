/*
 * XREFs of DrvDbSetDeviceIdDriverInfMatches @ 0x140743E28
 * Callers:
 *     DrvDbSetDeviceIdMappedProperty @ 0x14074417C (DrvDbSetDeviceIdMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     wcschr @ 0x14016BB40 (wcschr.c)
 *     wcsncmp @ 0x14016BC70 (wcsncmp.c)
 *     ZwDeleteValueKey @ 0x14017F900 (ZwDeleteValueKey.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _RegRtlSetValue @ 0x140456A24 (_RegRtlSetValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1404E660C (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegEnumValue @ 0x1404E67DC (_PnpCtxRegEnumValue.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14058FB54 (DrvDbSplitDeviceIdDriverInfMatch.c)
 */

__int64 __fastcall DrvDbSetDeviceIdDriverInfMatches(__int64 a1, void *a2, const wchar_t *a3, __int64 a4)
{
  const wchar_t *v4; // rsi
  void *v5; // r13
  int inited; // ebx
  unsigned int v7; // r15d
  const wchar_t *v8; // rdi
  wchar_t *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  PVOID PoolWithTag; // rdi
  ULONG v15; // r12d
  const wchar_t *v16; // r14
  size_t v17; // r13
  int v18; // eax
  wchar_t v19; // ax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  ULONG v23; // r14d
  __int64 v24; // rcx
  ULONG v25; // esi
  int v27; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v28[4]; // [rsp+44h] [rbp-24h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-20h] BYREF
  unsigned int MaxCount; // [rsp+B0h] [rbp+48h] BYREF
  int MaxCount_4; // [rsp+B4h] [rbp+4Ch]
  void *v32; // [rsp+B8h] [rbp+50h]
  const wchar_t *v33; // [rsp+C0h] [rbp+58h]
  ULONG v34; // [rsp+C8h] [rbp+60h] BYREF

  v33 = a3;
  v32 = a2;
  MaxCount_4 = HIDWORD(a1);
  v4 = a3;
  v34 = 0;
  v5 = a2;
  MaxCount = 0;
  v27 = 0;
  inited = PnpCtxRegQueryInfoKey(a1, a2, 0LL, a4, &v34, &MaxCount);
  if ( inited >= 0 )
  {
    v7 = MaxCount + 1;
    if ( v4 )
    {
      v8 = v4;
      if ( *v4 )
      {
        do
        {
          v9 = wcschr(v8, 0x5Cu);
          if ( v9 )
          {
            v10 = v9 - v8;
          }
          else
          {
            v10 = -1LL;
            do
              ++v10;
            while ( v8[v10] );
          }
          v11 = v10 + 1;
          if ( v11 > v7 )
            v7 = v11;
          v12 = -1LL;
          do
            ++v12;
          while ( v8[v12] );
          v8 += v12 + 1;
        }
        while ( *v8 );
        v5 = v32;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v7, 0x42444450u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      v15 = 0;
      if ( v34 )
      {
        while ( 1 )
        {
          MaxCount = v7;
          inited = PnpCtxRegEnumValue(v13, v5, v15, PoolWithTag, &MaxCount, &v27, 0LL, 0LL);
          if ( inited < 0 )
            break;
          if ( v27 == 3 || !v27 )
          {
            v13 = 0LL;
            v16 = v4;
            if ( *v4 )
            {
              v17 = MaxCount;
              do
              {
                v18 = wcsncmp(v16, (const wchar_t *)PoolWithTag, v17);
                v13 = 0LL;
                if ( !v18 )
                {
                  v19 = v16[v17];
                  if ( v19 == 92 || !v19 )
                    break;
                }
                v20 = -1LL;
                do
                  ++v20;
                while ( v16[v20] );
                v16 += v20 + 1;
              }
              while ( *v16 );
              v4 = v33;
              v5 = v32;
            }
            if ( !*v16 )
            {
              inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)PoolWithTag);
              if ( inited >= 0 )
                inited = ZwDeleteValueKey(v5, &DestinationString);
              if ( inited == -1073741772 )
              {
                inited = 0;
              }
              else if ( inited < 0 )
              {
                goto LABEL_65;
              }
            }
          }
          if ( ++v15 >= v34 )
            goto LABEL_39;
        }
        if ( inited == -2147483622 )
          inited = 0;
      }
LABEL_39:
      if ( inited >= 0 )
      {
        while ( *v4 )
        {
          inited = DrvDbSplitDeviceIdDriverInfMatch(v4, (NTSTRSAFE_PWSTR)PoolWithTag, v7, (__int64)v28);
          if ( inited < 0 )
            break;
          v21 = v28[0]
              ? RegRtlSetValue(v5, (const WCHAR *)PoolWithTag, 3u, v28, 4u)
              : RegRtlSetValue(v5, (const WCHAR *)PoolWithTag, 0, 0LL, 0);
          inited = v21;
          if ( v21 < 0 )
            break;
          v22 = -1LL;
          do
            ++v22;
          while ( v4[v22] );
          v4 += v22 + 1;
        }
      }
    }
    else
    {
      v23 = v34;
      if ( !v34 )
        return 0;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v7, 0x42444450u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      v25 = 0;
      if ( v23 )
      {
        while ( 1 )
        {
          MaxCount = v7;
          inited = PnpCtxRegEnumValue(v24, v5, v25, PoolWithTag, &MaxCount, 0LL, 0LL, 0LL);
          if ( inited < 0 )
            break;
          inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)PoolWithTag);
          if ( inited >= 0 )
            inited = ZwDeleteValueKey(v5, &DestinationString);
          if ( inited == -1073741772 )
          {
            inited = 0;
          }
          else if ( inited < 0 )
          {
            goto LABEL_65;
          }
          if ( ++v25 >= v23 )
            goto LABEL_65;
        }
        if ( inited == -2147483622 )
          inited = 0;
      }
    }
LABEL_65:
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)inited;
}
