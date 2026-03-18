/*
 * XREFs of GdiThreadCallout @ 0x1C001DCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C001DE08 (-vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 *     PopThreadGuardedObject @ 0x1C001DE60 (PopThreadGuardedObject.c)
 *     HmgFreeDcAttr @ 0x1C001E0A0 (HmgFreeDcAttr.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     bDeletePalette @ 0x1C006ECD0 (bDeletePalette.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GdiThreadCallout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 ThreadWin32Thread; // rdi
  _QWORD *v9; // r14
  _QWORD *v10; // rsi
  HPALETTE *v11; // rsi
  __int64 v12; // r15
  void (__fastcall *v13)(__int64); // rbp

  v4 = 0;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 == 1 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(a1, a2, a3, a4);
      if ( (int)IsGdiThreadCalloutFlushUserBatchSupported() >= 0 )
        GdiThreadCalloutFlushUserBatch();
      if ( *(_QWORD *)(ThreadWin32Thread + 24) )
        HmgFreeDcAttr();
      vUMPDThreadCleanup((struct _W32THREAD *)ThreadWin32Thread);
      v9 = (_QWORD *)(ThreadWin32Thread + 88);
      while ( 1 )
      {
        v10 = (_QWORD *)*v9;
        if ( (_QWORD *)*v9 == v9 )
          break;
        if ( v10 )
        {
          KeEnterCriticalRegion();
          v12 = v10[2];
          v13 = (void (__fastcall *)(__int64))v10[3];
          PopThreadGuardedObject(v10);
          if ( v13 )
            v13(v12);
          KeLeaveCriticalRegion();
        }
      }
      v11 = *(HPALETTE **)(ThreadWin32Thread + 288);
      if ( v11 )
      {
        *(_QWORD *)(ThreadWin32Thread + 288) = 0LL;
        bDeletePalette(*v11);
        if ( (int)IsHT_DestroyDeviceHalftoneInfoSupported() >= 0 )
          HT_DestroyDeviceHalftoneInfoWrap(v11);
      }
      if ( *(_QWORD *)(ThreadWin32Thread + 80) )
        ((void (__fastcall *)(__int64, _QWORD))qword_1C0190750)(ThreadWin32Thread + 80, 0LL);
      if ( (int)IsUmfdIsCurrentProcessUmfdHostNoLockSupported() >= 0
        && (unsigned int)UmfdIsCurrentProcessUmfdHostNoLock()
        && (int)IsUmfdUninitializeThreadSupported() >= 0 )
      {
        UmfdUninitializeThread();
      }
    }
  }
  else
  {
    v5 = (_QWORD *)W32GetThreadWin32Thread(a1, a2, a3, a4);
    LOBYTE(v6) = 1;
    v5[6] = v5 + 5;
    v5[5] = v5 + 5;
    v5[12] = v5 + 11;
    v5[11] = v5 + 11;
    v5[35] = v5 + 14;
    v5 += 10;
    *v5 = 0LL;
    return (unsigned int)((__int64 (__fastcall *)(_QWORD *, __int64))qword_1C0190750)(v5, v6);
  }
  return v4;
}
