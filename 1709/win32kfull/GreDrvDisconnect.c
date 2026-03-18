/*
 * XREFs of GreDrvDisconnect @ 0x1C0141CDC
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00D63E0 (xxxRemoteDisconnect.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00D7298 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteReconnect @ 0x1C0140AE0 (xxxRemoteReconnect.c)
 *     xxxRemotePassthruEnable @ 0x1C01F9360 (xxxRemotePassthruEnable.c)
 * Callees:
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C0141DC8 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C0141EC0 (--1SEMOBJEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDrvDisconnect(__int64 a1)
{
  int v2; // edi
  struct _LDEV *v3; // rbx
  int v4; // r15d
  struct PDEV *v6; // r14
  struct PDEV *i; // rsi
  HSEMAPHORE v8; // [rsp+68h] [rbp-A8h]
  HSEMAPHORE v9; // [rsp+68h] [rbp-A8h]
  unsigned int v10; // [rsp+70h] [rbp-A0h]
  unsigned int v11; // [rsp+70h] [rbp-A0h]
  HSEMAPHORE v12; // [rsp+78h] [rbp-98h]
  HSEMAPHORE v13; // [rsp+78h] [rbp-98h]
  unsigned int v14; // [rsp+80h] [rbp-90h]
  unsigned int v15; // [rsp+80h] [rbp-90h]
  _BYTE v16[96]; // [rsp+90h] [rbp-80h] BYREF
  _BYTE v17[144]; // [rsp+F0h] [rbp-20h] BYREF
  struct PDEV *v18; // [rsp+198h] [rbp+88h] BYREF
  struct PDEV *v19; // [rsp+1A0h] [rbp+90h] BYREF
  struct PDEV *v20; // [rsp+1A8h] [rbp+98h] BYREF

  v2 = 0;
  SEMOBJEX::SEMOBJEX(
    (SEMOBJEX *)v17,
    ghsemDynamicModeChange,
    1u,
    ghsemGreLock,
    2u,
    ghsemDCVisRgn,
    3u,
    0LL,
    0,
    0LL,
    0,
    0LL,
    0,
    v8,
    v10,
    v12,
    v14);
  v3 = gpldevDrivers;
  do
  {
    if ( !v3 )
      break;
    v4 = 0;
    if ( *((_QWORD *)v3 + 2) && *((_DWORD *)v3 + 6) == 1 && *(_QWORD *)(*((_QWORD *)v3 + 112) + 624LL) )
    {
      GreAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      v6 = 0LL;
      for ( i = gppdevList; v2 >= 0 && i && *((struct _LDEV **)i + 226) == v3; i = *(struct PDEV **)i )
      {
        v18 = i;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v18);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        if ( v6 )
        {
          v19 = v6;
          PDEVOBJ::vUnreferencePdev(&v19, 0LL);
        }
        if ( v18 && (*((_DWORD *)v18 + 8) & 1) != 0 )
        {
          SEMOBJEX::SEMOBJEX(
            (SEMOBJEX *)v16,
            *((HSEMAPHORE *)v18 + 6),
            4u,
            ghsemSprite,
            5u,
            ghsemHT,
            6u,
            *((HSEMAPHORE *)v18 + 5),
            0xBu,
            0LL,
            0,
            0LL,
            0,
            v9,
            v11,
            v13,
            v15);
          PDEVOBJ::vSync(
            (PDEVOBJ *)&v18,
            (struct _SURFOBJ *)((*((_QWORD *)v18 + 321) + 24LL) & -(__int64)(*((_QWORD *)v18 + 321) != 0LL)),
            0LL,
            0);
          if ( !v4 )
          {
            v4 = 1;
            if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v3 + 112) + 624LL))(
                   *(_QWORD *)(a1 + 24),
                   *(_QWORD *)(a1 + 16)) )
            {
              *((_DWORD *)v3 + 226) = 3;
            }
            else
            {
              *((_DWORD *)v3 + 226) = 6;
              v2 = -2143354873;
            }
          }
          SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v16);
        }
        GreAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
        v6 = i;
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
      if ( v6 )
      {
        v20 = v6;
        PDEVOBJ::vUnreferencePdev(&v20, 0LL);
      }
      if ( !v4 && v2 >= 0 )
      {
        SEMOBJEX::SEMOBJEX(
          (SEMOBJEX *)v16,
          ghsemSprite,
          5u,
          ghsemHT,
          6u,
          ghsemDriverMgmt,
          0xCu,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0,
          v9,
          v11,
          v13,
          v15);
        if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v3 + 112) + 624LL))(
               *(_QWORD *)(a1 + 24),
               *(_QWORD *)(a1 + 16)) )
        {
          *((_DWORD *)v3 + 226) = 3;
        }
        else
        {
          *((_DWORD *)v3 + 226) = 6;
          v2 = -2143354873;
        }
        SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v16);
      }
    }
    v3 = *(struct _LDEV **)v3;
  }
  while ( v2 >= 0 );
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v17);
  return (unsigned int)v2;
}
