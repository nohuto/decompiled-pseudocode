/*
 * XREFs of NtGdiEngCheckAbort @ 0x1C028D890
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C00B9358 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     EngCheckAbort @ 0x1C02573F0 (EngCheckAbort.c)
 */

__int64 __fastcall NtGdiEngCheckAbort(struct _SURFOBJ *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v7; // rbx
  unsigned int v8; // edi
  SURFOBJ *v9; // rsi
  SURFOBJ *pso; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  v8 = 1;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 108);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, ThreadCurrentObj);
    v9 = pso;
    if ( pso )
      v8 = EngCheckAbort(pso);
    if ( v12 )
      EngUnlockSurface(v9);
    if ( v7 )
      --*((_DWORD *)v7 + 108);
  }
  return v8;
}
