/*
 * XREFs of ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C010C3BC
 * Callers:
 *     NtGdiStartDoc @ 0x1C010BF00 (NtGdiStartDoc.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0027F84 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C002BD54 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C002BE84 (-vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C00F6464 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     GreExtEscape @ 0x1C01012BC (GreExtEscape.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C010C980 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreStartDocInternal(HDC a1, struct _DOCINFOW *a2, int *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  DC *v9; // r10
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rdx
  DC *v13; // rcx
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64, LPCWSTR, _QWORD); // rdi
  int v16; // edi
  struct _EPROCESS *CurrentProcess; // rax
  char v19[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  XDCOBJ *v21; // [rsp+40h] [rbp-20h] BYREF
  DC *v22[3]; // [rsp+48h] [rbp-18h] BYREF

  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  v9 = v22[0];
  if ( !v22[0] )
    return v8;
  if ( ((unsigned int)a1 & 0x7F0000) != 0x10000 && ((unsigned int)a1 & 0x7F0000) != 0x660000 )
  {
    v10 = *((_QWORD *)v22[0] + 6);
    v20 = v10;
    v11 = *(_DWORD *)(v10 + 32);
    if ( (v11 & 1) == 0 && *(_QWORD *)(v10 + 2576) && !*((_DWORD *)v22[0] + 8) && !*((_QWORD *)v22[0] + 64) )
    {
      if ( (v11 & 0x8000) != 0 )
      {
        if ( PDEVOBJ::bMakeSurface((PDEVOBJ *)&v20, 0LL) )
        {
          v12 = v20;
          *a3 = *(_DWORD *)(*(_QWORD *)(v20 + 2568) + 112LL) & 0x2000000;
          v13 = v22[0];
          *((_QWORD *)v22[0] + 64) = *(_QWORD *)(v12 + 2568);
          DC::vInheritSurfaceDpiScale(v13);
          if ( *a3 )
          {
            *((_QWORD *)v22[0] + 66) = *(_QWORD *)(*(_QWORD *)(v20 + 2568) + 56LL);
            DC::bSetDefaultRegion(v22[0]);
          }
          v21 = 0LL;
          v15 = *(__int64 (__fastcall **)(__int64, LPCWSTR, _QWORD))(v20 + 2984);
          if ( (*(_DWORD *)(v20 + 32) & 0x8000) != 0 )
          {
            v21 = (XDCOBJ *)v22;
            XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v22);
          }
          if ( gUMPDSecurityLevel == 2
            || gUMPDSecurityLevel
            && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v14),
                (unsigned int)bIsProcessLocalSystem(CurrentProcess))
            || v15 )
          {
            v16 = v15(
                    (*(_QWORD *)(v20 + 2568) + 24LL) & -(__int64)(*(_QWORD *)(v20 + 2568) != 0LL),
                    a2->lpszDocName,
                    a4);
          }
          else
          {
            if ( gfUMPDDebug )
              DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreStartDocInternal:!pfnDrvstartDoc\n", 1710);
            v16 = 0;
          }
          RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v21);
          v9 = v22[0];
          if ( *((_DWORD *)v22[0] + 631) != -1 )
          {
            *(_DWORD *)v19 = *((_DWORD *)v22[0] + 631);
            GreExtEscape(a1, 17, 4, v19, 0, 0LL);
            *((_DWORD *)v22[0] + 631) = -1;
            v9 = v22[0];
          }
          if ( (*((_DWORD *)v9 + 9) & 0x400) != 0 )
          {
            *(_WORD *)v19 = 1;
            GreExtEscape(a1, 33, 2, v19, 0, 0LL);
            *((_DWORD *)v22[0] + 9) &= ~0x400u;
            v9 = v22[0];
          }
          if ( v16 )
          {
            v8 = a4;
            *((_DWORD *)v9 + 30) = *((_DWORD *)v9 + 29);
            v9 = v22[0];
          }
          if ( !v21 )
            goto LABEL_25;
          XDCOBJ::vSaveAttributesAlways(v21);
        }
        v9 = v22[0];
      }
      else
      {
        v8 = -1;
      }
    }
  }
LABEL_25:
  if ( v9 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v22);
  return v8;
}
