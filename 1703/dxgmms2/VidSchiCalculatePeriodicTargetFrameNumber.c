/*
 * XREFs of VidSchiCalculatePeriodicTargetFrameNumber @ 0x1C00259B0
 * Callers:
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C002694C (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C00289D0 (-VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiCalculatePeriodicTargetFrameNumber(
        union _LARGE_INTEGER a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int *a5)
{
  LARGE_INTEGER v8; // rax
  int v9; // r10d
  LARGE_INTEGER v10; // rcx
  unsigned __int128 v11; // rax
  unsigned __int64 QuadPart; // kr00_8
  LARGE_INTEGER v13; // rax
  union _LARGE_INTEGER v14; // rcx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  int *v18; // rax
  unsigned __int64 v19; // rax
  bool v20; // cf
  bool v21; // zf
  union _LARGE_INTEGER v23; // [rsp+30h] [rbp+8h] BYREF

  v23 = a1;
  v8 = KeQueryPerformanceCounter(&v23);
  v9 = 0;
  v10 = v8;
  QuadPart = v8.QuadPart;
  v11 = (unsigned __int64)v8.QuadPart * (unsigned __int128)0x989680uLL;
  if ( is_mul_ok(QuadPart, 0x989680uLL) )
  {
    v14 = v23;
    v15 = v11 / (unsigned __int64)v23.QuadPart;
  }
  else
  {
    v13 = v10;
    v14 = v23;
    v15 = 10000000 * (v13.QuadPart / (unsigned __int64)v23.QuadPart)
        + 10000000 * (v13.QuadPart % (unsigned __int64)v23.QuadPart) / v23.QuadPart;
  }
  if ( is_mul_ok(a3, 0x989680uLL) )
    v16 = a3 * (unsigned __int128)0x989680uLL / (unsigned __int64)v14.QuadPart;
  else
    v16 = 10000000 * (a3 / v14.QuadPart) + 10000000 * (a3 % v14.QuadPart) / v14.QuadPart;
  v17 = v16 + *(_QWORD *)(a2 + 48) / 2LL - *(_QWORD *)(a2 + 16);
  if ( v15 > v17 )
  {
    v19 = *(_QWORD *)(a2 + 48) + v17;
    v20 = v15 < v19;
    v21 = v15 == v19;
    v18 = a5;
    LOBYTE(v9) = !v20 && !v21;
    *a5 = v9;
  }
  else
  {
    v18 = a5;
    *a5 = -1;
  }
  return a4 + 1 + *v18;
}
