/*
 * XREFs of GreSetDIBitsInternal @ 0x1C010AE08
 * Callers:
 *     GreCreateDIBitmapComp @ 0x1C010AD08 (GreCreateDIBitmapComp.c)
 *     GreSetDIBits @ 0x1C029CA38 (GreSetDIBits.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0080550 (GreSetDIBitsToDeviceInternal.c)
 */

__int64 __fastcall GreSetDIBitsInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        __int64 a10)
{
  HDC CompatibleDC; // rdi
  __int64 v12; // r12
  int v13; // r13d
  int v16; // r14d
  int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r14
  _QWORD v23[9]; // [rsp+80h] [rbp-48h] BYREF
  int v25; // [rsp+E0h] [rbp+18h]
  int v27; // [rsp+F8h] [rbp+30h]

  CompatibleDC = 0LL;
  v12 = 0LL;
  v25 = 0;
  v13 = 0;
  if ( a6 && ((v16 = 1, *(_DWORD *)a6 < 0x28u) || (unsigned int)(*(_DWORD *)(a6 + 16) - 4) > 1) )
  {
    v17 = *(_DWORD *)(a6 + 8);
    v27 = *(_DWORD *)(a6 + 4);
    if ( v17 < 0 )
      v17 = -v17;
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    LOBYTE(v18) = 5;
    v19 = HmgShareLockCheck(a2, v18);
    v20 = v19;
    if ( v19 && (*(_DWORD *)(v19 + 112) & 0x4000000) != 0 )
    {
      if ( *(_DWORD *)(v19 + 168) )
        CompatibleDC = *(HDC *)(v19 + 160);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      if ( CompatibleDC || (CompatibleDC = (HDC)GreCreateCompatibleDC(a1), v13 = 1, CompatibleDC) )
      {
        if ( !a1
          || ((DCOBJ::DCOBJ((DCOBJ *)v23, a1), !v23[0])
            ? (EngSetLastError(6u), v16 = 0)
            : (v12 = GreSelectPalette(CompatibleDC, *(_QWORD *)(v23[0] + 88LL), 1LL)),
              XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v23),
              v16) )
        {
          v21 = GreSelectBitmap(CompatibleDC, a2);
          if ( v21 )
          {
            v25 = GreSetDIBitsToDeviceInternal(
                    CompatibleDC,
                    0LL,
                    0,
                    v27,
                    v17,
                    0,
                    0,
                    0,
                    a4,
                    a5,
                    (struct tagRGBQUAD *)a6,
                    a7,
                    a8,
                    a9,
                    0,
                    a10);
            if ( v12 )
              GreSelectPalette(CompatibleDC, v12, 1LL);
            GreSelectBitmap(CompatibleDC, v21);
          }
        }
        if ( v13 )
          bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
        LODWORD(CompatibleDC) = v25;
      }
      else
      {
        LODWORD(CompatibleDC) = 0;
      }
    }
    else
    {
      EngSetLastError(6u);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    }
    if ( v20 )
      DEC_SHARE_REF_CNT(v20);
  }
  else
  {
    EngSetLastError(0x57u);
  }
  return (unsigned int)CompatibleDC;
}
