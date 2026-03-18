/*
 * XREFs of UpdateGammaRampOnDevice @ 0x1C00F6D00
 * Callers:
 *     ?GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z @ 0x1C00F6A5C (-GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003D6D0 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00FDBCC (-SETFLAG@@YAXHAECKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UpdateGammaRampOnDevice(__int64 a1, int a2)
{
  unsigned int v2; // edi
  int v4; // ecx
  unsigned int (__fastcall *v5)(_QWORD, __int64, __int64); // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 (__fastcall *v9)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v10 = a1;
  if ( a1 )
  {
    v4 = *(_DWORD *)(a1 + 2124);
    if ( (unsigned int)(v4 - 3) <= 3 )
    {
      v5 = *(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(a1 + 3240);
      if ( v5 && (*(_DWORD *)(a1 + 2144) & 0x10) != 0 )
      {
        v6 = *(_QWORD *)(a1 + 1712);
        if ( v6
          || *(_QWORD *)(a1 + 1704)
          || (*(_DWORD *)(a1 + 32) & 0x20000) != 0
          || (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v10) )
        {
          v7 = *(_QWORD *)(a1 + 1720);
          if ( !v7 )
          {
            v7 = v6;
            if ( !v6 )
              v7 = *(_QWORD *)(a1 + 1704);
          }
          return v5(*(_QWORD *)(a1 + 1816), 1LL, v7);
        }
      }
      else if ( v4 == 3 && (*(_DWORD *)(a1 + 2188) & 0x100) != 0 && (a2 || *(_QWORD *)(a1 + 1704)) )
      {
        v10 = *(_QWORD *)(a1 + 1824);
        SETFLAG(*(_QWORD *)(a1 + 1704) != 0LL, (volatile unsigned int *)(v10 + 24), 0x800000u);
        *(_QWORD *)(v10 + 64) = a1;
        v11 = *(_QWORD *)(a1 + 48);
        GreAcquireSemaphore(v11);
        GreAcquireSemaphore(*(_QWORD *)(a1 + 40));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(a1 + 40), 11LL);
        if ( (*(_DWORD *)(a1 + 32) & 0x400) == 0 )
        {
          v9 = *(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(a1 + 2880);
          if ( v9 )
            v2 = v9(*(_QWORD *)(a1 + 1816), &v10, 0LL, 0LL, *(_DWORD *)(v10 + 28));
        }
        EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *(_QWORD *)(a1 + 40));
        GreReleaseSemaphoreInternal(*(_QWORD *)(a1 + 40));
        SEMOBJ::vUnlock((SEMOBJ *)&v11);
      }
    }
  }
  return v2;
}
