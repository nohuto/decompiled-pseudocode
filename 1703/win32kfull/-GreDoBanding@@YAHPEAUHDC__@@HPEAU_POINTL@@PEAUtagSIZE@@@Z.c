/*
 * XREFs of ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C0100328
 * Callers:
 *     NtGdiDoBanding @ 0x1C0100280 (NtGdiDoBanding.c)
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0074C40 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     GreDeleteWnd @ 0x1C02683A0 (GreDeleteWnd.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C02692C4 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall GreDoBanding(HDC a1, int a2, struct _POINTL *a3, struct tagSIZE *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, struct _POINTL *); // rdi
  unsigned int v11; // edi
  __int64 (__fastcall *v13)(__int64, struct _POINTL *); // rbx
  EWNDOBJ *v14; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  struct _EPROCESS *v16; // rax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v17)
    || (v7 = v17[0], (v8 = *(_QWORD *)(v17[0] + 512LL)) == 0)
    || (v9 = *(_QWORD *)(v17[0] + 48LL), !*(_QWORD *)(v9 + 2576))
    || (*(_DWORD *)(v8 + 112) & 0x2000000) == 0 )
  {
LABEL_31:
    v11 = 0;
    goto LABEL_12;
  }
  if ( a2 )
  {
    v13 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v9 + 3160);
    if ( gUMPDSecurityLevel == 2
      || gUMPDSecurityLevel
      && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel),
          (unsigned int)bIsProcessLocalSystem(CurrentProcess))
      || v13 )
    {
      v11 = v13(v8 + 24, a3);
    }
    else
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvStartBanding\n", 2465);
      v11 = 0;
    }
    a4->cx = *(_DWORD *)(v8 + 56);
    a4->cy = *(_DWORD *)(v8 + 60);
    goto LABEL_11;
  }
  v10 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v9 + 3168);
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (v16 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel), !(unsigned int)bIsProcessLocalSystem(v16)) )
    {
      if ( !v10 )
      {
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvNextBand\n", 2492);
        goto LABEL_31;
      }
    }
  }
  v11 = v10(v8 + 24, a3);
  if ( v11 )
  {
    if ( a3->x != -1 )
    {
LABEL_11:
      *(struct _POINTL *)(v7 + 2536) = *a3;
      goto LABEL_12;
    }
    v11 &= -((*(_DWORD *)(v9 + 32) & 0x8000) != 0);
    if ( v11 )
    {
      *(_DWORD *)(v7 + 36) &= ~0x100u;
      v14 = *(EWNDOBJ **)(v8 + 136);
      if ( v14 )
      {
        GreDeleteWnd(v14);
        *(_QWORD *)(v8 + 136) = 0LL;
      }
      *(_WORD *)(v7 + 2520) = 0;
    }
  }
LABEL_12:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v17);
  return v11;
}
