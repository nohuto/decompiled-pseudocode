/*
 * XREFs of NtGdiEndPage @ 0x1C0256240
 * Callers:
 *     <none>
 * Callees:
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0074A94 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0074C40 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0074C70 (-vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C0100250 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     GreDeleteWnd @ 0x1C02683A0 (GreDeleteWnd.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C02692C4 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiEndPage(HDC a1)
{
  int v1; // ebx
  unsigned int v2; // r14d
  int v3; // ebx
  __int64 v4; // rsi
  __int64 v5; // rdi
  int v6; // eax
  XDCOBJ *v7; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  EWNDOBJ *v9; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-10h] BYREF
  XDCOBJ *v12; // [rsp+58h] [rbp+28h] BYREF

  v1 = (int)a1;
  v2 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v11) )
  {
    v3 = v1 & 0x7F0000;
    if ( v3 != 0x10000 && v3 != 6684672 )
    {
      v4 = *(_QWORD *)(v11[0] + 512LL);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v11[0] + 48LL);
        v6 = *(_DWORD *)(v5 + 32);
        if ( (v6 & 1) == 0 )
        {
          if ( *(_QWORD *)(v5 + 2576) )
          {
            v7 = 0LL;
            v12 = 0LL;
            if ( (v6 & 0x8000) != 0 )
            {
              v7 = (XDCOBJ *)v11;
              v12 = (XDCOBJ *)v11;
              XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v11);
            }
            if ( gUMPDSecurityLevel == 2
              || gUMPDSecurityLevel
              && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel),
                  (unsigned int)bIsProcessLocalSystem(CurrentProcess))
              || *(_QWORD *)(v5 + 2960) )
            {
              v2 = (*(__int64 (__fastcall **)(__int64))(v5 + 2960))((v4 + 24) & -(__int64)(v4 != 0));
              if ( v2 )
              {
                RESTORESAVEDCATTRS::vDone(&v12);
                if ( (*(_DWORD *)(v5 + 32) & 0x8000) != 0 )
                {
                  *(_DWORD *)(v11[0] + 36LL) &= ~0x100u;
                  v9 = *(EWNDOBJ **)(v4 + 136);
                  if ( v9 )
                  {
                    GreDeleteWnd(v9);
                    *(_QWORD *)(v4 + 136) = 0LL;
                  }
                  *(_WORD *)(v11[0] + 2520LL) = -1;
                }
                v7 = v12;
              }
            }
            else if ( gfUMPDDebug )
            {
              DbgPrint(
                "windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:NtGdiEndPage:!(PPFNVALID(po, SendPage))\n",
                2361);
            }
            if ( v7 )
              XDCOBJ::vSaveAttributesAlways(v7);
          }
        }
      }
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v11);
  return v2;
}
