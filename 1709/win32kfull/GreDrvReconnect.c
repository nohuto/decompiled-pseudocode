/*
 * XREFs of GreDrvReconnect @ 0x1C0298248
 * Callers:
 *     xxxRemoteReconnect @ 0x1C0140AE0 (xxxRemoteReconnect.c)
 * Callees:
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C0141DC8 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C0141EC0 (--1SEMOBJEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDrvReconnect(__int64 a1)
{
  int v2; // r14d
  int v3; // edi
  struct _LDEV *v4; // rbx
  int v5; // r15d
  struct PDEV *i; // rsi
  __int64 v7; // rdx
  void (__fastcall *v8)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  _BYTE v10[96]; // [rsp+90h] [rbp-80h] BYREF
  _BYTE v11[144]; // [rsp+F0h] [rbp-20h] BYREF
  struct PDEV *v12; // [rsp+1A0h] [rbp+90h] BYREF
  __int64 v13; // [rsp+1A8h] [rbp+98h] BYREF

  v2 = 1;
  v3 = 0;
  SEMOBJEX::SEMOBJEX(
    (SEMOBJEX *)v11,
    ghsemDynamicModeChange,
    1,
    ghsemGreLock,
    2u,
    ghsemDCVisRgn,
    3u,
    0LL,
    0,
    0LL,
    0,
    0LL,
    0);
  v4 = gpldevDrivers;
  do
  {
    if ( !v4 )
      break;
    v5 = 0;
    if ( *((_QWORD *)v4 + 2) && *((_DWORD *)v4 + 6) == 1 && *(_QWORD *)(*((_QWORD *)v4 + 112) + 632LL) )
    {
      GreAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      for ( i = gppdevList; v3 >= 0 && i && *((struct _LDEV **)i + 226) == v4; i = *(struct PDEV **)i )
      {
        v12 = i;
        if ( (*((_DWORD *)i + 8) & 1) != 0 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          SEMOBJEX::SEMOBJEX(
            (SEMOBJEX *)v10,
            *((HSEMAPHORE *)v12 + 6),
            4,
            ghsemSprite,
            5u,
            ghsemHT,
            6u,
            *((HSEMAPHORE *)v12 + 5),
            0xBu,
            0LL,
            0,
            0LL,
            0);
          PDEVOBJ::vSync(
            (PDEVOBJ *)&v12,
            (struct _SURFOBJ *)((*((_QWORD *)v12 + 321) + 24LL) & -(__int64)(*((_QWORD *)v12 + 321) != 0LL)),
            0LL,
            0);
          if ( !v5 )
          {
            v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v4 + 112) + 632LL))(
                   *(_QWORD *)(a1 + 24),
                   *(_QWORD *)(a1 + 16));
            v5 = 1;
            if ( v2 )
            {
              *((_DWORD *)v4 + 226) = 2;
            }
            else
            {
              *((_DWORD *)v4 + 226) = 5;
              v3 = -2143354874;
            }
          }
          v7 = *((_QWORD *)v12 + 228);
          v13 = v7;
          if ( v2 == 1 && (*(_DWORD *)(v7 + 24) & 0x800) != 0 )
          {
            v8 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))*((_QWORD *)v12 + 360);
            if ( v8 )
              v8(*((_QWORD *)v12 + 227), &v13, 0LL, 0LL, *(_DWORD *)(v7 + 28));
          }
          SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v10);
          GreAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
        }
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
      if ( !v5 && v3 >= 0 )
      {
        SEMOBJEX::SEMOBJEX((SEMOBJEX *)v10, ghsemSprite, 5, ghsemHT, 6u, ghsemDriverMgmt, 0xCu, 0LL, 0, 0LL, 0, 0LL, 0);
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v4 + 112) + 632LL))(
               *(_QWORD *)(a1 + 24),
               *(_QWORD *)(a1 + 16));
        if ( v2 )
        {
          *((_DWORD *)v4 + 226) = 2;
        }
        else
        {
          *((_DWORD *)v4 + 226) = 5;
          v3 = -2143354873;
        }
        SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v10);
      }
    }
    v4 = *(struct _LDEV **)v4;
  }
  while ( v3 >= 0 );
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v11);
  return (unsigned int)v3;
}
