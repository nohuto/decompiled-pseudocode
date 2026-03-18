/*
 * XREFs of DrvDbGetDeviceIdDriverInfMatches @ 0x1404E682C
 * Callers:
 *     DrvDbGetDeviceIdMappedProperty @ 0x140488504 (DrvDbGetDeviceIdMappedProperty.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140081B60 (RtlStringCchCopyExW.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1404E660C (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegEnumValue @ 0x1404E67DC (_PnpCtxRegEnumValue.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1404E6A1C (DrvDbBuildDeviceIdDriverInfMatch.c)
 */

__int64 __fastcall DrvDbGetDeviceIdDriverInfMatches(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        char a6)
{
  unsigned int *v6; // r15
  ULONG v7; // r13d
  __int64 v8; // r12
  int v9; // ebx
  ULONG v10; // edi
  unsigned int v11; // esi
  __int64 v12; // rcx
  char *PoolWithTag; // r14
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  int v17; // edi
  unsigned int v18; // r12d
  unsigned int v19; // eax
  int v21; // [rsp+40h] [rbp-18h] BYREF
  ULONG v22; // [rsp+44h] [rbp-14h] BYREF
  int v23; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+4Ch] [rbp-Ch]
  unsigned int v25; // [rsp+A0h] [rbp+48h] BYREF
  int v26; // [rsp+A4h] [rbp+4Ch]
  void *v27; // [rsp+A8h] [rbp+50h]
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
  v9 = PnpCtxRegQueryInfoKey((__int64)&v22, a2, 0LL, a4, &v22, &v25);
  if ( v9 >= 0 )
  {
    v10 = v22;
    v11 = v25 + 1;
    if ( v22 )
    {
      if ( a6 )
        v11 = v25 + 17;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 2LL * v11, 0x42444450u);
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
              v14 = PnpCtxRegEnumValue(v12, v27, v7, PoolWithTag, &v25, &v21, &v23, (unsigned int *)&a5);
              v9 = v14;
              if ( v14 < 0 )
                goto LABEL_37;
              if ( !v25 )
              {
LABEL_35:
                v9 = -1073741595;
                goto LABEL_25;
              }
              if ( v21 == 3 )
              {
                if ( (_DWORD)a5 != 4 )
                  goto LABEL_35;
              }
              else
              {
                v15 = 0LL;
                v23 = 0;
              }
              v9 = DrvDbBuildDeviceIdDriverInfMatch(v15, &v23, &PoolWithTag[2 * v25], v11 - v25);
              if ( v9 < 0 )
                goto LABEL_25;
              v16 = -1LL;
              do
                ++v16;
              while ( *(_WORD *)&PoolWithTag[2 * v16] );
            }
            else
            {
              v14 = PnpCtxRegEnumValue(v12, v27, v7, PoolWithTag, &v25, &v21, 0LL, 0LL);
              v9 = v14;
              if ( v14 < 0 )
              {
LABEL_37:
                if ( v14 == -2147483622 )
                  v9 = 0;
                break;
              }
              LODWORD(v16) = v25;
              if ( !v25 )
              {
                v9 = -1073741595;
                break;
              }
              *(_WORD *)&PoolWithTag[2 * v25] = 0;
            }
            v17 = v16 + 1;
            if ( v8 )
            {
              v12 = v24;
              v18 = v24 + v17;
              if ( v24 + v17 < v29 )
              {
                RtlStringCchCopyExW(
                  (NTSTRSAFE_PWSTR)(v28 + 2LL * v24),
                  v29 - v24,
                  (NTSTRSAFE_PCWSTR)PoolWithTag,
                  0LL,
                  0LL,
                  0x900u);
                v24 = v18;
              }
              v8 = v28;
            }
            *v6 += v17;
            ++v7;
          }
          while ( v7 < v22 );
        }
        if ( v9 >= 0 )
        {
          if ( *v6 )
          {
            v19 = *v6 + 1;
            *v6 = v19;
            if ( v8 && v19 <= v29 )
              *(_WORD *)(v8 + 2LL * (v19 - 1)) = 0;
            else
              v9 = -1073741789;
          }
          else
          {
            v9 = -1073741275;
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
  return (unsigned int)v9;
}
