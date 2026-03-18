/*
 * XREFs of NtGdiStartPage @ 0x1C00FFFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0074A94 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0074C40 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0074C70 (-vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C0100250 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C013E78C (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C02692C4 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiStartPage(HDC a1)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-10h] BYREF
  XDCOBJ *v8; // [rsp+58h] [rbp+28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v2 = 0;
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v7)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    EngSetLastError(6u);
  }
  else
  {
    v3 = *(_QWORD *)(v7[0] + 512LL);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v7[0] + 48LL);
      if ( *(_QWORD *)(v4 + 2576) )
      {
        if ( (*(_DWORD *)(v4 + 32) & 0x8000) != 0 )
        {
          v8 = (XDCOBJ *)v7;
          XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v7);
          if ( (gUMPDSecurityLevel == 2
             || gUMPDSecurityLevel
             && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel),
                 (unsigned int)bIsProcessLocalSystem(CurrentProcess))
             || *(_QWORD *)(v4 + 2968))
            && (v2 = (*(__int64 (__fastcall **)(__int64))(v4 + 2968))((v3 + 24) & -(__int64)(v3 != 0))) != 0 )
          {
            RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v8);
            *(_DWORD *)(v7[0] + 36LL) |= 0x100u;
            *(_DWORD *)(v7[0] + 2536LL) = 0;
            *(_DWORD *)(v7[0] + 2540LL) = 0;
          }
          else
          {
            RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v8);
            bEndDocInternal(a1, 1u, 2u);
          }
          if ( v8 )
            XDCOBJ::vSaveAttributesAlways(v8);
        }
      }
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  return v2;
}
