/*
 * XREFs of ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C00FFCA8
 * Callers:
 *     NtGdiStartDoc @ 0x1C00FF7D0 (NtGdiStartDoc.c)
 * Callees:
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0074A94 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0074C70 (-vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C007B4C4 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreExtEscape @ 0x1C00F360C (GreExtEscape.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C0100250 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C02692C4 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall GreStartDocInternal(HDC a1, struct _DOCINFOW *a2, int *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rdx
  DC *v12; // rcx
  __int64 (__fastcall *v13)(__int64, LPCWSTR, _QWORD); // rdi
  int v14; // edi
  DC *v15; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  char v18[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  XDCOBJ *v20; // [rsp+40h] [rbp-20h] BYREF
  DC *v21[3]; // [rsp+48h] [rbp-18h] BYREF

  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v21, a1);
  if ( v21[0] )
  {
    if ( ((unsigned int)a1 & 0x7F0000) != 0x10000 && ((unsigned int)a1 & 0x7F0000) != 0x660000 )
    {
      v9 = *((_QWORD *)v21[0] + 6);
      v19 = v9;
      v10 = *(_DWORD *)(v9 + 32);
      if ( (v10 & 1) == 0 && *(_QWORD *)(v9 + 2576) && !*((_DWORD *)v21[0] + 8) && !*((_QWORD *)v21[0] + 64) )
      {
        if ( (v10 & 0x8000) != 0 )
        {
          if ( PDEVOBJ::bMakeSurface((PDEVOBJ *)&v19, 0LL) )
          {
            v11 = v19;
            *a3 = *(_DWORD *)(*(_QWORD *)(v19 + 2568) + 112LL) & 0x2000000;
            v12 = v21[0];
            *((_QWORD *)v21[0] + 64) = *(_QWORD *)(v11 + 2568);
            DC::vInheritSurfaceDpiScale(v12);
            if ( *a3 )
            {
              *((_QWORD *)v21[0] + 66) = *(_QWORD *)(*(_QWORD *)(v19 + 2568) + 56LL);
              DC::bSetDefaultRegion(v21[0]);
            }
            v20 = 0LL;
            v13 = *(__int64 (__fastcall **)(__int64, LPCWSTR, _QWORD))(v19 + 2984);
            if ( (*(_DWORD *)(v19 + 32) & 0x8000) != 0 )
            {
              v20 = (XDCOBJ *)v21;
              XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v21);
            }
            if ( gUMPDSecurityLevel == 2
              || gUMPDSecurityLevel
              && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel),
                  (unsigned int)bIsProcessLocalSystem(CurrentProcess))
              || v13 )
            {
              v14 = v13(
                      (*(_QWORD *)(v19 + 2568) + 24LL) & -(__int64)(*(_QWORD *)(v19 + 2568) != 0LL),
                      a2->lpszDocName,
                      a4);
            }
            else
            {
              if ( gfUMPDDebug )
                DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreStartDocInternal:!pfnDrvstartDoc\n", 1710);
              v14 = 0;
            }
            RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v20);
            v15 = v21[0];
            if ( *((_DWORD *)v21[0] + 631) != -1 )
            {
              *(_DWORD *)v18 = *((_DWORD *)v21[0] + 631);
              GreExtEscape(a1, 17, 4, v18, 0, 0LL);
              *((_DWORD *)v21[0] + 631) = -1;
              v15 = v21[0];
            }
            if ( (*((_DWORD *)v15 + 9) & 0x400) != 0 )
            {
              *(_WORD *)v18 = 1;
              GreExtEscape(a1, 33, 2, v18, 0, 0LL);
              *((_DWORD *)v21[0] + 9) &= ~0x400u;
              v15 = v21[0];
            }
            if ( v14 )
            {
              v8 = a4;
              *((_DWORD *)v15 + 30) = *((_DWORD *)v15 + 29);
            }
            if ( v20 )
              XDCOBJ::vSaveAttributesAlways(v20);
          }
        }
        else
        {
          v8 = -1;
        }
      }
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v21);
  return v8;
}
