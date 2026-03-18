/*
 * XREFs of AllocFreeTmpBuffer @ 0x1C005A4F0
 * Callers:
 *     NtGdiGetRegionData @ 0x1C0040E70 (NtGdiGetRegionData.c)
 *     NtGdiOpenDCW @ 0x1C0059EE0 (NtGdiOpenDCW.c)
 *     NtGdiExtCreateRegion @ 0x1C005AC90 (NtGdiExtCreateRegion.c)
 *     NtGdiPolyPolyDraw @ 0x1C009E9F0 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall AllocFreeTmpBuffer(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax

  if ( a1 > 0x1000 || (v1 = _InterlockedExchange64((volatile __int64 *)gpTmpGlobalFree, 0LL)) == 0 )
  {
    v1 = 0LL;
    if ( a1 < 0xFFFFEFDF )
    {
      v3 = a1 + 32;
      if ( (int)IsWin32AllocPoolImplSupported() >= 0 )
      {
        v4 = Win32AllocPoolImpl(33LL, v3, 1886213191LL);
        v5 = (_QWORD *)v4;
        if ( v4 )
        {
          v1 = v4 + 32;
          KeEnterCriticalRegion();
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v5[2] = v1;
          v5[3] = FreeThreadBufferWithTag;
          if ( ThreadWin32Thread )
          {
            v7 = *(_QWORD *)(ThreadWin32Thread + 88);
            v8 = (_QWORD *)(ThreadWin32Thread + 88);
            if ( *(_QWORD **)(v7 + 8) != v8 )
              __fastfail(3u);
            *v5 = v7;
            v5[1] = v8;
            *(_QWORD *)(v7 + 8) = v5;
            *v8 = v5;
          }
          else
          {
            v5[1] = v5;
            *v5 = v5;
          }
          KeLeaveCriticalRegion();
        }
      }
    }
  }
  return v1;
}
