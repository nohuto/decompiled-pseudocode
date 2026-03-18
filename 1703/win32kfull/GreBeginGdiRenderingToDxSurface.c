/*
 * XREFs of GreBeginGdiRenderingToDxSurface @ 0x1C007FDFC
 * Callers:
 *     NtGdiBeginGdiRendering @ 0x1C0102D10 (NtGdiBeginGdiRendering.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bReset@DC@@QEAAHXZ @ 0x1C007B564 (-bReset@DC@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreBeginGdiRenderingToDxSurface(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rdi
  HDC v10; // rdx
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64); // rax
  unsigned int v12; // eax
  DC *v14; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+28h] [rbp-10h]
  int v16; // [rsp+2Ch] [rbp-Ch]

  if ( a3 && (int)GreDxgkEnableUnorderedWaitsForDevice((unsigned int)a3, 0LL) < 0 )
    return 0LL;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  LOBYTE(v6) = 5;
  v7 = 0;
  v8 = HmgShareLockCheck(a1, v6);
  if ( v8 )
  {
    if ( (a1 & 0x800000) == 0 )
    {
      if ( (unsigned int)GreGetObjectOwner(a1, 5LL) )
      {
        v9 = *(_QWORD *)(v8 + 48);
        if ( (*(_DWORD *)(v8 + 116) & 8) != 0 || *(_QWORD *)(v8 + 232) )
        {
          v10 = *(HDC *)(v8 + 160);
          *(_WORD *)(v8 + 102) &= ~0x200u;
          if ( v10 )
          {
            v14 = 0LL;
            v15 = 0;
            v16 = 0;
            XDCOBJ::vLock(&v14, v10);
            if ( v14 )
            {
              v7 = DC::bReset(v14);
              XDCOBJ::RestoreAttributes((XDCOBJ *)&v14);
              _InterlockedDecrement((volatile signed __int32 *)v14 + 3);
              if ( v7 )
              {
                if ( (*(_DWORD *)(v8 + 116) & 8) != 0 )
                {
                  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v9 + 3496);
                  v7 = 0;
                  if ( v11 )
                  {
                    v12 = v11(v8 + 24, a2, a3);
                    *(_DWORD *)(v8 + 116) |= 0x200u;
                    v7 = v12;
                  }
                }
              }
            }
          }
        }
      }
    }
    DEC_SHARE_REF_CNT(v8);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  return v7;
}
