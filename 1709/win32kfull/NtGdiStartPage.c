/*
 * XREFs of NtGdiStartPage @ 0x1C010C710
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C002BD54 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BE58 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C002BE84 (-vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C00F6464 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C010C980 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0144730 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiStartPage(HDC a1)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  struct _EPROCESS *CurrentProcess; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-10h] BYREF
  XDCOBJ *v9; // [rsp+58h] [rbp+28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v2 = 0;
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v8)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    EngSetLastError(6u);
  }
  else
  {
    v3 = *(_QWORD *)(v8[0] + 512LL);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v8[0] + 48LL);
      if ( *(_QWORD *)(v4 + 2576) )
      {
        if ( (*(_DWORD *)(v4 + 32) & 0x8000) != 0 )
        {
          v9 = (XDCOBJ *)v8;
          XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v8);
          if ( (gUMPDSecurityLevel == 2
             || gUMPDSecurityLevel
             && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v5),
                 (unsigned int)bIsProcessLocalSystem(CurrentProcess))
             || *(_QWORD *)(v4 + 2968))
            && (v2 = (*(__int64 (__fastcall **)(__int64))(v4 + 2968))((v3 + 24) & -(__int64)(v3 != 0))) != 0 )
          {
            RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v9);
            *(_DWORD *)(v8[0] + 36LL) |= 0x100u;
            *(_DWORD *)(v8[0] + 2536LL) = 0;
            *(_DWORD *)(v8[0] + 2540LL) = 0;
          }
          else
          {
            RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v9);
            bEndDocInternal(a1, 1u, 2u);
          }
          if ( v9 )
            XDCOBJ::vSaveAttributesAlways(v9);
        }
      }
    }
  }
  if ( v8[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  return v2;
}
