/*
 * XREFs of GreSetDIBitsInternal @ 0x1C0114550
 * Callers:
 *     GreCreateDIBitmapComp @ 0x1C0114450 (GreCreateDIBitmapComp.c)
 *     GreSetDIBits @ 0x1C02991E0 (GreSetDIBits.c)
 * Callees:
 *     GreSetDIBitsToDeviceInternal @ 0x1C0016100 (GreSetDIBitsToDeviceInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetDIBitsInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        __int64 a10)
{
  __int64 v10; // r15
  unsigned int v11; // r13d
  int v12; // r12d
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbx
  HDC CompatibleDC; // rdi
  __int64 v20; // r14
  _QWORD v22[9]; // [rsp+80h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+E0h] [rbp+18h]

  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( !a6 || *(_DWORD *)a6 >= 0x28u && (unsigned int)(*(_DWORD *)(a6 + 16) - 4) <= 1 )
  {
    EngSetLastError(0x57u);
    return v11;
  }
  v15 = *(_DWORD *)(a6 + 8);
  v24 = *(_DWORD *)(a6 + 4);
  if ( v15 < 0 )
    v15 = -v15;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  LOBYTE(v16) = 5;
  v17 = HmgShareLockCheck(a2, v16);
  v18 = v17;
  if ( v17 && (*(_DWORD *)(v17 + 112) & 0x4000000) != 0 )
  {
    if ( *(_DWORD *)(v17 + 168) )
      CompatibleDC = *(HDC *)(v17 + 160);
    else
      CompatibleDC = 0LL;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    if ( CompatibleDC || (CompatibleDC = (HDC)GreCreateCompatibleDC(a1), v12 = 1, CompatibleDC) )
    {
      if ( a1 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v22, a1);
        if ( !v22[0] )
        {
          EngSetLastError(6u);
LABEL_19:
          if ( v12 )
            bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
          goto LABEL_21;
        }
        v10 = GreSelectPalette(CompatibleDC, *(_QWORD *)(v22[0] + 88LL), 1LL);
        XDCOBJ::vUnlockFast((XDCOBJ *)v22);
      }
      v20 = GreSelectBitmap(CompatibleDC, a2);
      if ( v20 )
      {
        v11 = GreSetDIBitsToDeviceInternal(
                CompatibleDC,
                0,
                0,
                v24,
                v15,
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
        if ( v10 )
          GreSelectPalette(CompatibleDC, v10, 1LL);
        GreSelectBitmap(CompatibleDC, v20);
      }
      goto LABEL_19;
    }
  }
  else
  {
    EngSetLastError(6u);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
LABEL_21:
  if ( v18 )
    DEC_SHARE_REF_CNT(v18);
  return v11;
}
