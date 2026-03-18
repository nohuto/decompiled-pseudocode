/*
 * XREFs of GdiThreadCallout @ 0x1C0028480
 * Callers:
 *     <none>
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0012E10 (PopThreadGuardedObject.c)
 *     ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C0028424 (-vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 *     HmgFreeDcAttr @ 0x1C002BCB0 (HmgFreeDcAttr.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     bDeletePalette @ 0x1C0059240 (bDeletePalette.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GdiThreadCallout(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  __int64 ThreadWin32Thread; // rdi
  _QWORD **v7; // r14
  _QWORD *v8; // rsi
  HPALETTE *v9; // rsi
  __int64 v10; // r15
  void (__fastcall *v11)(__int64); // rbp

  v2 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(a1);
      if ( (int)IsGdiThreadCalloutFlushUserBatchSupported() >= 0 )
        GdiThreadCalloutFlushUserBatch();
      if ( *(_QWORD *)(ThreadWin32Thread + 24) )
        HmgFreeDcAttr();
      vUMPDThreadCleanup((struct _W32THREAD *)ThreadWin32Thread);
      v7 = (_QWORD **)(ThreadWin32Thread + 88);
      while ( 1 )
      {
        v8 = *v7;
        if ( *v7 == v7 )
          break;
        if ( v8 )
        {
          KeEnterCriticalRegion();
          v10 = v8[2];
          v11 = (void (__fastcall *)(__int64))v8[3];
          PopThreadGuardedObject(v8);
          if ( v11 )
            v11(v10);
          KeLeaveCriticalRegion();
        }
      }
      v9 = *(HPALETTE **)(ThreadWin32Thread + 288);
      if ( v9 )
      {
        *(_QWORD *)(ThreadWin32Thread + 288) = 0LL;
        bDeletePalette(*v9);
        if ( (int)IsHT_DestroyDeviceHalftoneInfoSupported() >= 0 )
          HT_DestroyDeviceHalftoneInfoWrap(v9);
      }
      if ( *(_QWORD *)(ThreadWin32Thread + 80) )
        ((void (__fastcall *)(__int64, _QWORD))qword_1C018BAE8)(ThreadWin32Thread + 80, 0LL);
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
    v3 = (_QWORD *)W32GetThreadWin32Thread(a1);
    LOBYTE(v4) = 1;
    v3[6] = v3 + 5;
    v3[5] = v3 + 5;
    v3[12] = v3 + 11;
    v3[11] = v3 + 11;
    v3[35] = v3 + 14;
    v3 += 10;
    *v3 = 0LL;
    return (unsigned int)((__int64 (__fastcall *)(_QWORD *, __int64))qword_1C018BAE8)(v3, v4);
  }
  return v2;
}
