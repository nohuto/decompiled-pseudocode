/*
 * XREFs of ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C013E78C
 * Callers:
 *     NtGdiStartPage @ 0x1C00FFFF0 (NtGdiStartPage.c)
 *     NtGdiEndDoc @ 0x1C011CCE0 (NtGdiEndDoc.c)
 *     NtGdiAbortDoc @ 0x1C0255EB0 (NtGdiAbortDoc.c)
 * Callees:
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0074A94 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0074C40 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0074C70 (-vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C007B4C4 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C0100250 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?UMPDServer@@YAHPEAVSURFACE@@@Z @ 0x1C011B9BC (-UMPDServer@@YAHPEAVSURFACE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C019583C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?bIsProcessLocalSystem@@YAHXZ @ 0x1C026934C (-bIsProcessLocalSystem@@YAHXZ.c)
 */

__int64 __fastcall bEndDocInternal(HDC a1, unsigned int a2, __int16 a3)
{
  DC *v6; // r9
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // edx
  struct SURFACE *v11; // rdi
  bool v12; // zf
  int v13; // esi
  int v14; // r15d
  DC *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // r14d
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdi
  SURFACE *v22; // rcx
  int v23; // eax
  XDCOBJ *v25; // [rsp+20h] [rbp-30h] BYREF
  DC *v26[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v27; // [rsp+38h] [rbp-18h] BYREF
  int v28; // [rsp+40h] [rbp-10h]
  int v29; // [rsp+44h] [rbp-Ch]
  __int64 v30; // [rsp+88h] [rbp+38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v26, a1);
  if ( !v26[0]
    || (*((_DWORD *)v26[0] + 9) & 0x200800) != 0
    || *((_WORD *)v26[0] + 6) != a3
    || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v26)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    goto LABEL_36;
  }
  v7 = *((unsigned int *)v6 + 30);
  if ( *((_DWORD *)v6 + 29) > (int)v7 )
  {
    GreRestoreDC(a1, v7);
    v6 = v26[0];
  }
  *((_DWORD *)v6 + 9) |= 0x200000u;
  v8 = 1;
  v9 = *((_QWORD *)v26[0] + 6);
  v30 = v9;
  v10 = *(_DWORD *)(v9 + 32);
  if ( (v10 & 1) != 0 || !*(_QWORD *)(v9 + 2576) )
  {
LABEL_36:
    EngSetLastError(0x3EBu);
    v8 = 0;
  }
  else
  {
    v25 = 0LL;
    v11 = (struct SURFACE *)*((_QWORD *)v26[0] + 64);
    if ( (v10 & 0x8000) != 0 )
    {
      v25 = (XDCOBJ *)v26;
      XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v26);
      v9 = v30;
    }
    if ( gUMPDSecurityLevel == 2
      || gUMPDSecurityLevel && (v12 = (unsigned int)bIsProcessLocalSystem() == 0, v9 = v30, !v12)
      || *(_QWORD *)(v9 + 2976) )
    {
      v13 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v9 + 2976))(
              ((unsigned __int64)v11 + 24) & -(__int64)(v11 != 0LL),
              a2);
    }
    else
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:bEndDocInternal:!(PPFNVALID(po,EndDoc))\n", 2096);
      v13 = 0;
    }
    RESTORESAVEDCATTRS::vDone(&v25);
    v14 = *(_DWORD *)(v30 + 32) & 0x8000;
    *((_WORD *)v26[0] + 1260) = -1;
    UMPDServer(v11);
    v15 = v26[0];
    *((_QWORD *)v26[0] + 64) = 0LL;
    DC::vInheritSurfaceDpiScale(v15);
    v18 = 0;
    *((_DWORD *)v26[0] + 83) |= 0xFu;
    v19 = *((_QWORD *)v26[0] + 16);
    if ( *((_DWORD *)v26[0] + 29) - 1 > 0 )
    {
      while ( 1 )
      {
        v28 = 0;
        LOBYTE(v16) = 1;
        v29 = 0;
        v20 = HmgLockAllOwners(v19, v16);
        v27 = v20;
        v21 = v20;
        if ( !v20 )
          break;
        v22 = *(SURFACE **)(v20 + 512);
        if ( !v22 )
          break;
        v23 = *((_DWORD *)v22 + 28);
        if ( (v23 & 0x800) != 0 )
        {
          DEC_SHARE_REF_CNT(v22);
        }
        else if ( v23 >= 0 )
        {
          SURFACE::vDec_cRef(v22);
        }
        *(_QWORD *)(v21 + 512) = 0LL;
        DC::vInheritSurfaceDpiScale((DC *)v21);
        *(_DWORD *)(v21 + 332) |= 0xFu;
        v19 = *(_QWORD *)(v21 + 128);
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v27);
        if ( ++v18 >= *((_DWORD *)v26[0] + 29) - 1 )
          goto LABEL_31;
      }
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v27);
    }
LABEL_31:
    LOBYTE(v17) = 1;
    PDEVOBJ::vDisableSurface(&v30, 0LL, v17);
    *((_DWORD *)v26[0] + 9) &= ~0x200000u;
    if ( !v14 || !v13 )
      v8 = 0;
    if ( v25 )
      XDCOBJ::vSaveAttributesAlways(v25);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v26);
  return v8;
}
