/*
 * XREFs of _CmCreateInstallerClass @ 0x140739CF0
 * Callers:
 *     PiCMOpenClassKey @ 0x14043DC08 (PiCMOpenClassKey.c)
 *     _PnpDispatchInstallerClass @ 0x1405A9680 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     _CmCreateInstallerClassWorker @ 0x140739E70 (_CmCreateInstallerClassWorker.c)
 */

__int64 __fastcall CmCreateInstallerClass(__int64 a1, __int64 a2, int a3, _QWORD *a4, _BYTE *a5, int a6)
{
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, int, _DWORD *); // rsi
  int v11; // eax
  int InstallerClassWorker; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  _DWORD v18[24]; // [rsp+40h] [rbp-59h] BYREF

  v18[0] = 0;
  memset(&v18[2], 0, 0x50uLL);
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _DWORD *))(a1 + 328);
  if ( a3 || (v18[4] = 1, a4) )
    v18[4] = a3;
  v18[9] = a6;
  if ( v10 )
  {
    v11 = v10(a1, a2, 2LL, 2LL, 1, v18);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        goto LABEL_17;
      if ( v11 )
      {
        v13 = -1073741595;
        goto LABEL_20;
      }
    }
  }
  InstallerClassWorker = CmCreateInstallerClassWorker(a1, a2, v18[4], (unsigned int)&v18[6], (__int64)&v18[8], v18[9]);
  v13 = InstallerClassWorker;
  if ( !v10 )
    goto LABEL_13;
  v18[0] = InstallerClassWorker;
  v14 = v10(a1, a2, 2LL, 2LL, 2, v18);
  v15 = v14;
  if ( v14 == -1073741822 )
    goto LABEL_13;
  if ( v14 == -1073741536 )
  {
LABEL_17:
    v13 = v18[0];
    goto LABEL_13;
  }
  v16 = v13;
  if ( v15 )
    v16 = -1073741595;
  v13 = v16;
LABEL_13:
  if ( v13 >= 0 && a4 )
  {
    *a4 = *(_QWORD *)&v18[6];
    goto LABEL_22;
  }
LABEL_20:
  if ( *(_QWORD *)&v18[6] )
    ZwClose(*(HANDLE *)&v18[6]);
LABEL_22:
  if ( v13 >= 0 && a5 )
    *a5 = v18[8];
  return (unsigned int)v13;
}
