/*
 * XREFs of _CmGetMatchingDeviceListForSubkey @ 0x1405EA4A0
 * Callers:
 *     _CmGetMatchingDeviceList @ 0x1405EA380 (_CmGetMatchingDeviceList.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x140782720 (_CmGetMatchingFilteredDeviceListWorker.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1400DF820 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x140160420 (wcschr.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14052210C (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140594ADC (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall CmGetMatchingDeviceListForSubkey(
        __int64 *a1,
        const wchar_t *a2,
        char a3,
        __int64 a4,
        __int64 a5,
        _WORD *a6,
        unsigned int a7,
        unsigned int *a8)
{
  int CachedContextBaseKey; // ebx
  const wchar_t *v11; // rax
  int v12; // ebp
  __int64 v13; // rcx
  int v14; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v16; // rdi
  unsigned int v17; // eax
  unsigned int v18; // eax
  wchar_t *v20; // rax
  HANDLE Handle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v22[8]; // [rsp+38h] [rbp-40h] BYREF

  v22[0] = 0LL;
  *a8 = 0;
  Handle = 0LL;
  if ( a7 )
    *a6 = 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 5, v22);
  if ( CachedContextBaseKey >= 0 )
  {
    v11 = a2;
    v12 = 0;
    if ( a2 )
    {
      while ( *v11 && *v11 != 92 )
      {
        if ( (unsigned int)++v12 > 2 )
        {
          CachedContextBaseKey = -1073741811;
          goto LABEL_17;
        }
        v20 = wcschr(v11, 0x5Cu);
        if ( v20 )
        {
          v11 = v20 + 1;
          if ( v11 )
            continue;
        }
        goto LABEL_5;
      }
      CachedContextBaseKey = -1073741811;
    }
LABEL_5:
    if ( CachedContextBaseKey >= 0 )
    {
      v13 = 0LL;
      if ( a1 )
        v13 = *a1;
      v14 = SysCtxRegOpenKey(v13, v22[0], (__int64)a2, 0, 8u, (__int64)&Handle);
      CachedContextBaseKey = v14;
      if ( v14 == -1073741444 )
      {
        CachedContextBaseKey = -1073741595;
      }
      else if ( v14 >= 0 )
      {
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1B8uLL, 0x52504E50u);
        v16 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0x1B8uLL);
          *(_DWORD *)v16 = v12 + 1;
          RtlStringCchCopyExW(v16 + 2, 0xC8uLL, a2, 0LL, 0LL, 0x900u);
          *((_BYTE *)v16 + 404) = a3;
          *((_QWORD *)v16 + 51) = a4;
          *((_QWORD *)v16 + 52) = a5;
          *((_QWORD *)v16 + 53) = a6;
          *((_DWORD *)v16 + 108) = a7;
          *((_DWORD *)v16 + 109) = 0;
          CachedContextBaseKey = PnpCtxRegEnumKeyWithCallback(
                                   a1,
                                   (__int64)Handle,
                                   (__int64)CmEnumSubkeyCallback,
                                   (__int64)v16);
          if ( CachedContextBaseKey >= 0 )
          {
            v17 = *((_DWORD *)v16 + 109);
            *a8 = v17;
            if ( v17 )
            {
              v18 = v17 + 1;
              *a8 = v18;
              if ( a6 && a7 >= v18 )
                a6[v18 - 1] = 0;
              else
                CachedContextBaseKey = -1073741789;
            }
          }
          ExFreePoolWithTag(v16, 0);
        }
        else
        {
          CachedContextBaseKey = -1073741801;
        }
      }
    }
  }
LABEL_17:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)CachedContextBaseKey;
}
