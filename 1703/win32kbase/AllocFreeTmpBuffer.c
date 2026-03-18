/*
 * XREFs of AllocFreeTmpBuffer @ 0x1C003EB80
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1C00220D0 (NtGdiExtCreateRegion.c)
 *     NtGdiOpenDCW @ 0x1C00221E0 (NtGdiOpenDCW.c)
 *     NtGdiGetRegionData @ 0x1C003F080 (NtGdiGetRegionData.c)
 *     NtGdiPolyPolyDraw @ 0x1C00962E0 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C003DD40 (PushThreadGuardedObject.c)
 */

__int64 __fastcall AllocFreeTmpBuffer(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  _QWORD *v4; // rax

  if ( a1 > 0x1000 || (v1 = _InterlockedExchange64((volatile __int64 *)gpTmpGlobalFree, 0LL)) == 0 )
  {
    v1 = 0LL;
    if ( a1 < 0xFFFFEFDF )
    {
      v3 = a1 + 32;
      v4 = (int)IsWin32AllocPoolImplSupported() < 0 ? 0LL : (_QWORD *)Win32AllocPoolImpl(33LL, v3, 1886213191LL);
      if ( v4 )
      {
        v1 = (__int64)(v4 + 4);
        PushThreadGuardedObject(v4, (__int64)(v4 + 4), (__int64)FreeThreadBufferWithTag);
      }
    }
  }
  return v1;
}
