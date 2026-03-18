/*
 * XREFs of GreBeginGdiRenderingToDxSurface @ 0x1C0018A24
 * Callers:
 *     NtGdiBeginGdiRendering @ 0x1C001AAC0 (NtGdiBeginGdiRendering.c)
 * Callees:
 *     ?bReset@DC@@QEAAHXZ @ 0x1C0028024 (-bReset@DC@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreBeginGdiRenderingToDxSurface(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rdi
  HDC v10; // rdx
  __int64 v11; // r14
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64); // rax
  unsigned int v13; // eax
  DC *v15; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+28h] [rbp-20h]
  unsigned int v17; // [rsp+2Ch] [rbp-1Ch]
  int v18; // [rsp+60h] [rbp+18h] BYREF

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
            v15 = 0LL;
            v16 = 0;
            v17 = 0;
            XDCOBJ::vLock((XDCOBJ *)&v15, v10);
            if ( v15 )
            {
              v7 = DC::bReset(v15);
              XDCOBJ::RestoreAttributes((XDCOBJ *)&v15);
              v18 = 0;
              v11 = *(_QWORD *)v15;
              HmgDecrementExclusiveReferenceCountEx(v15, v17, &v18);
              if ( v18 )
                bDeleteDCInternalEx(v11, 0LL);
              if ( v7 && (*(_DWORD *)(v8 + 116) & 8) != 0 )
              {
                v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v9 + 3496);
                v7 = 0;
                if ( v12 )
                {
                  v13 = v12(v8 + 24, a2, a3);
                  *(_DWORD *)(v8 + 116) |= 0x200u;
                  v7 = v13;
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
