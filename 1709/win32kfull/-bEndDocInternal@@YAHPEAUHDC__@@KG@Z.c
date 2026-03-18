/*
 * XREFs of ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0144730
 * Callers:
 *     NtGdiStartPage @ 0x1C010C710 (NtGdiStartPage.c)
 *     NtGdiEndDoc @ 0x1C0126990 (NtGdiEndDoc.c)
 *     NtGdiAbortDoc @ 0x1C02579B0 (NtGdiAbortDoc.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0017300 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0027F84 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BE58 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C002BE84 (-vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C010C980 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C010C9A8 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     ?UMPDServer@@YAHPEAVSURFACE@@@Z @ 0x1C0125B9C (-UMPDServer@@YAHPEAVSURFACE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C01A0A78 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?bIsProcessLocalSystem@@YAHXZ @ 0x1C02680A4 (-bIsProcessLocalSystem@@YAHXZ.c)
 */

__int64 __fastcall bEndDocInternal(HDC a1, unsigned int a2, __int16 a3)
{
  int v6; // eax
  DC *v7; // r9
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // edx
  struct SURFACE *v12; // rdi
  bool v13; // zf
  int v14; // esi
  int v15; // r15d
  DC *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // r14d
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  SURFACE *v23; // rcx
  int v24; // eax
  DC **v26; // [rsp+20h] [rbp-30h] BYREF
  DC *v27[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v28; // [rsp+38h] [rbp-18h] BYREF
  int v29; // [rsp+40h] [rbp-10h]
  int v30; // [rsp+44h] [rbp-Ch]
  __int64 v31; // [rsp+88h] [rbp+38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  if ( !v27[0] )
    goto LABEL_36;
  v6 = *((_DWORD *)v27[0] + 9);
  if ( (v6 & 0x800) != 0
    || (v6 & 0x200000) != 0
    || *((_WORD *)v27[0] + 6) != a3
    || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v27)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    goto LABEL_36;
  }
  v8 = *((unsigned int *)v7 + 30);
  if ( *((_DWORD *)v7 + 29) > (int)v8 )
  {
    GreRestoreDC(a1, v8);
    v7 = v27[0];
  }
  *((_DWORD *)v7 + 9) |= 0x200000u;
  v9 = 1;
  v10 = *((_QWORD *)v27[0] + 6);
  v31 = v10;
  v11 = *(_DWORD *)(v10 + 32);
  if ( (v11 & 1) != 0 || !*(_QWORD *)(v10 + 2576) )
  {
LABEL_36:
    EngSetLastError(0x3EBu);
    v9 = 0;
  }
  else
  {
    v26 = 0LL;
    v12 = (struct SURFACE *)*((_QWORD *)v27[0] + 64);
    if ( (v11 & 0x8000) != 0 )
    {
      v26 = v27;
      XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v27);
      v10 = v31;
    }
    if ( gUMPDSecurityLevel == 2
      || gUMPDSecurityLevel && (v13 = (unsigned int)bIsProcessLocalSystem() == 0, v10 = v31, !v13)
      || *(_QWORD *)(v10 + 2976) )
    {
      v14 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v10 + 2976))(
              ((unsigned __int64)v12 + 24) & -(__int64)(v12 != 0LL),
              a2);
    }
    else
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:bEndDocInternal:!(PPFNVALID(po,EndDoc))\n", 2088);
      v14 = 0;
    }
    RESTORESAVEDCATTRS::vDone((XDCOBJ **)&v26);
    v15 = *(_DWORD *)(v31 + 32) & 0x8000;
    *((_WORD *)v27[0] + 1260) = -1;
    UMPDServer(v12);
    v16 = v27[0];
    *((_QWORD *)v27[0] + 64) = 0LL;
    DC::vInheritSurfaceDpiScale(v16);
    v19 = 0;
    *((_DWORD *)v27[0] + 83) |= 0xFu;
    v20 = *((_QWORD *)v27[0] + 16);
    if ( *((_DWORD *)v27[0] + 29) - 1 > 0 )
    {
      while ( 1 )
      {
        v29 = 0;
        LOBYTE(v17) = 1;
        v30 = 0;
        v21 = HmgLockAllOwners(v20, v17);
        v28 = v21;
        v22 = v21;
        if ( !v21 )
          break;
        v23 = *(SURFACE **)(v21 + 512);
        if ( !v23 )
          break;
        v24 = *((_DWORD *)v23 + 28);
        if ( (v24 & 0x800) != 0 )
        {
          DEC_SHARE_REF_CNT(v23);
        }
        else if ( v24 >= 0 )
        {
          SURFACE::vDec_cRef(v23);
        }
        *(_QWORD *)(v22 + 512) = 0LL;
        DC::vInheritSurfaceDpiScale((DC *)v22);
        *(_DWORD *)(v22 + 332) |= 0xFu;
        v20 = *(_QWORD *)(v22 + 128);
        DCOBJ::~DCOBJ((DCOBJ *)&v28);
        if ( ++v19 >= *((_DWORD *)v27[0] + 29) - 1 )
          goto LABEL_32;
      }
      DCOBJ::~DCOBJ((DCOBJ *)&v28);
    }
LABEL_32:
    LOBYTE(v18) = 1;
    PDEVOBJ::vDisableSurface(&v31, 0LL, v18);
    *((_DWORD *)v27[0] + 9) &= ~0x200000u;
    if ( !v15 || !v14 )
      v9 = 0;
    RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS((XDCOBJ **)&v26);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v27);
  return v9;
}
