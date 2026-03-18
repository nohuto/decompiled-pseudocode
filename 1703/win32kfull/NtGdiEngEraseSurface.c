/*
 * XREFs of NtGdiEngEraseSurface @ 0x1C02914C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0096D7C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0097294 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0098510 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C009BC6C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     EngEraseSurface @ 0x1C00DDE90 (EngEraseSurface.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngEraseSurface(struct _SURFOBJ *a1, RECTL *a2, ULONG a3)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v7; // rbx
  __int64 result; // rax
  SURFOBJ *v9; // rsi
  unsigned int v10; // edi
  RECTL *prcl; // [rsp+20h] [rbp-58h] BYREF
  ULONG v12; // [rsp+28h] [rbp-50h]
  SURFOBJ *pso; // [rsp+30h] [rbp-48h] BYREF
  int v14; // [rsp+38h] [rbp-40h]
  struct UMPDOBJ *v15; // [rsp+40h] [rbp-38h]
  struct _RECTL v16; // [rsp+48h] [rbp-30h] BYREF

  prcl = a2;
  v12 = a3;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  v15 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v7 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, v7);
    v9 = pso;
    if ( pso )
    {
      CaptureRECTL(&prcl, &v16);
      if ( (*((_DWORD *)v7 + 103) & 0x100) != 0 && !prcl )
      {
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngEraseSurface:prcl == NULL\n", 2493);
        if ( v14 )
          EngUnlockSurface(v9);
        --*((_DWORD *)v7 + 108);
        return 0LL;
      }
      v10 = bCheckSurfaceRect(v9, prcl, 0LL);
      if ( v10 )
        v10 = EngEraseSurface(v9, prcl, a3);
    }
    else
    {
      v10 = 0;
    }
    if ( v14 )
      EngUnlockSurface(v9);
    --*((_DWORD *)v7 + 108);
    return v10;
  }
  return result;
}
