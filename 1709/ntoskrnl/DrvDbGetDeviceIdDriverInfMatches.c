/*
 * XREFs of DrvDbGetDeviceIdDriverInfMatches @ 0x14058445C
 * Callers:
 *     DrvDbGetDeviceIdMappedProperty @ 0x140531474 (DrvDbGetDeviceIdMappedProperty.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1400DF820 (RtlStringCchCopyExW.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _PnpCtxRegEnumValue @ 0x14058469C (_PnpCtxRegEnumValue.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1405846EC (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1405847D8 (_PnpCtxRegQueryInfoKey.c)
 */

__int64 __fastcall DrvDbGetDeviceIdDriverInfMatches(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        char a6)
{
  unsigned int *v6; // r12
  unsigned int v7; // r13d
  __int64 v8; // r15
  int InfoKey; // ebx
  unsigned int v10; // edi
  unsigned int v11; // esi
  unsigned int v12; // ecx
  wchar_t *PoolWithTag; // r14
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  int v17; // edi
  unsigned int v18; // r15d
  unsigned int v19; // eax
  int v21; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+44h] [rbp-14h] BYREF
  int v23; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+4Ch] [rbp-Ch]
  unsigned int v25; // [rsp+A0h] [rbp+48h] BYREF
  int v26; // [rsp+A4h] [rbp+4Ch]
  __int64 v27; // [rsp+A8h] [rbp+50h]
  __int64 v28; // [rsp+B0h] [rbp+58h]
  unsigned int v29; // [rsp+B8h] [rbp+60h]

  v29 = a4;
  v28 = a3;
  v27 = a2;
  v26 = HIDWORD(a1);
  v6 = a5;
  v7 = 0;
  v22 = 0;
  v8 = a3;
  *a5 = 0;
  v25 = 0;
  v21 = 0;
  v24 = 0;
  InfoKey = PnpCtxRegQueryInfoKey((unsigned int)&v22, a2, 0, 0, (__int64)&v22, (__int64)&v25);
  if ( InfoKey >= 0 )
  {
    v10 = v22;
    v11 = v25 + 1;
    if ( v22 )
    {
      if ( a6 )
        v11 = v25 + 17;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v11, 0x42444450u);
      if ( PoolWithTag )
      {
        if ( v10 )
        {
          do
          {
            v25 = v11;
            if ( a6 )
            {
              LODWORD(a5) = 4;
              v14 = PnpCtxRegEnumValue(
                      v12,
                      v27,
                      v7,
                      (_DWORD)PoolWithTag,
                      (__int64)&v25,
                      (__int64)&v21,
                      (__int64)&v23,
                      (__int64)&a5);
              InfoKey = v14;
              if ( v14 < 0 )
                goto LABEL_36;
              if ( !v25 )
              {
LABEL_34:
                InfoKey = -1073741595;
                goto LABEL_25;
              }
              if ( v21 == 3 )
              {
                if ( (_DWORD)a5 != 4 )
                  goto LABEL_34;
              }
              else
              {
                v15 = 0LL;
                v23 = 0;
              }
              InfoKey = DrvDbBuildDeviceIdDriverInfMatch(v15, &v23, &PoolWithTag[v25], v11 - v25);
              if ( InfoKey < 0 )
                goto LABEL_25;
              v16 = -1LL;
              do
                ++v16;
              while ( PoolWithTag[v16] );
            }
            else
            {
              v14 = PnpCtxRegEnumValue(v12, v27, v7, (_DWORD)PoolWithTag, (__int64)&v25, (__int64)&v21, 0LL, 0LL);
              InfoKey = v14;
              if ( v14 < 0 )
              {
LABEL_36:
                if ( v14 == -2147483622 )
                  InfoKey = 0;
                break;
              }
              LODWORD(v16) = v25;
              if ( !v25 )
              {
                InfoKey = -1073741595;
                break;
              }
              PoolWithTag[v25] = 0;
            }
            v17 = v16 + 1;
            if ( v8 )
            {
              v12 = v24;
              v18 = v24 + v17;
              if ( v24 + v17 < v29 )
              {
                RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v28 + 2LL * v24), v29 - v24, PoolWithTag, 0LL, 0LL, 0x900u);
                v24 = v18;
              }
              v8 = v28;
            }
            *v6 += v17;
            ++v7;
          }
          while ( v7 < v22 );
        }
        if ( InfoKey >= 0 )
        {
          if ( *v6 )
          {
            v19 = *v6 + 1;
            *v6 = v19;
            if ( v8 && v19 <= v29 )
              *(_WORD *)(v8 + 2LL * (v19 - 1)) = 0;
            else
              InfoKey = -1073741789;
          }
          else
          {
            InfoKey = -1073741275;
          }
        }
LABEL_25:
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741275;
    }
  }
  return (unsigned int)InfoKey;
}
