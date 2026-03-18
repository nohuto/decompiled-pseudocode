/*
 * XREFs of HmgFreeDcAttr @ 0x1C002BCB0
 * Callers:
 *     GdiThreadCallout @ 0x1C0028480 (GdiThreadCallout.c)
 *     bFreeDCAttributesWorker @ 0x1C002BBD0 (bFreeDCAttributesWorker.c)
 *     GreSetDCOwnerEx @ 0x1C002DA50 (GreSetDCOwnerEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 */

__int64 __fastcall HmgFreeDcAttr(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax

  result = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( a1 && result )
  {
    if ( !*(_QWORD *)(result + 24) )
    {
      *(_QWORD *)(result + 24) = a1;
      return result;
    }
    result = PsGetCurrentProcessWin32Process();
    v3 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore();
      v4 = v3 + 192;
      v5 = *(_QWORD *)(v3 + 192);
      if ( v5 == v3 + 192 || *(_DWORD *)(v5 + 16) == 9 )
      {
        v5 = PALLOCMEM2(0x60uLL);
        if ( !v5 )
          return GreReleaseHmgrSemaphore();
        v6 = *(_QWORD *)v4;
        if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 )
          __fastfail(3u);
        *(_QWORD *)v5 = v6;
        *(_QWORD *)(v5 + 8) = v4;
        *(_QWORD *)(v6 + 8) = v5;
        *(_QWORD *)v4 = v5;
        *(_DWORD *)(v5 + 16) = 0;
      }
      *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)(v5 + 16))++ + 24) = a1;
      *(_QWORD *)(v3 + 40) = a1;
      return GreReleaseHmgrSemaphore();
    }
  }
  return result;
}
