/*
 * XREFs of HmgFreeDcAttr @ 0x1C001E0A0
 * Callers:
 *     GdiThreadCallout @ 0x1C001DCC0 (GdiThreadCallout.c)
 *     bFreeDCAttributesWorker @ 0x1C001DEB0 (bFreeDCAttributesWorker.c)
 *     GreSetDCOwnerEx @ 0x1C0047C80 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C0055870 (GreCreateDisplayDC.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HmgFreeDcAttr(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax

  result = W32GetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( a1 && result )
  {
    if ( !*(_QWORD *)(result + 24) )
    {
      *(_QWORD *)(result + 24) = a1;
      return result;
    }
    result = PsGetCurrentProcessWin32Process();
    v6 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore();
      v7 = v6 + 192;
      v8 = *(_QWORD *)(v6 + 192);
      if ( v8 == v6 + 192 || *(_DWORD *)(v8 + 16) == 9 )
      {
        v8 = PALLOCMEM2(0x60uLL);
        if ( !v8 )
          return GreReleaseHmgrSemaphore();
        v9 = *(_QWORD *)v7;
        if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 )
          __fastfail(3u);
        *(_QWORD *)v8 = v9;
        *(_QWORD *)(v8 + 8) = v7;
        *(_QWORD *)(v9 + 8) = v8;
        *(_QWORD *)v7 = v8;
        *(_DWORD *)(v8 + 16) = 0;
      }
      *(_QWORD *)(v8 + 8LL * (unsigned int)(*(_DWORD *)(v8 + 16))++ + 24) = a1;
      *(_QWORD *)(v6 + 40) = a1;
      return GreReleaseHmgrSemaphore();
    }
  }
  return result;
}
