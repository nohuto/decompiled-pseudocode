/*
 * XREFs of ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0043920
 * Callers:
 *     bDeleteRegion @ 0x1C001F530 (bDeleteRegion.c)
 *     GreGetRegionData @ 0x1C0040F80 (GreGetRegionData.c)
 *     NtGdiDeleteObjectApp @ 0x1C0042D20 (NtGdiDeleteObjectApp.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C00430C0 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x1C0043220 (SetRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C0043CC0 (GreCombineRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0050E30 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSetRectRgn @ 0x1C00560A0 (GreSetRectRgn.c)
 *     GreOffsetRgn @ 0x1C00569D0 (GreOffsetRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0059C88 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCopyVisRgn @ 0x1C0059E40 (GreCopyVisRgn.c)
 *     GreGetRgnBox @ 0x1C007C160 (GreGetRgnBox.c)
 *     GreRectInRegion @ 0x1C007DAF0 (GreRectInRegion.c)
 *     GrePtInRegion @ 0x1C00851F0 (GrePtInRegion.c)
 *     GreIsValidRegion @ 0x1C0093170 (GreIsValidRegion.c)
 *     NtGdiEqualRgn @ 0x1C0096E50 (NtGdiEqualRgn.c)
 *     EngDeleteRgn @ 0x1C00FC5B0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C00FC620 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C01DFC44 (InitializeGre.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C00463B0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0046BE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     HmgLock @ 0x1C004CF70 (HmgLock.c)
 *     HmgPentryFromPobj @ 0x1C004D460 (HmgPentryFromPobj.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C00A96D8 (-GrepIsPreviousModeKernel@@YAHXZ.c)
 */

RGNOBJAPI *__fastcall RGNOBJAPI::RGNOBJAPI(RGNOBJAPI *this, struct HOBJ__ *a2, int a3)
{
  __int64 v6; // rax
  BOOL v7; // ebx
  __int64 v8; // rdi
  char v9; // cl
  struct _RECTL v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v6 = HmgLock(a2);
  *(_QWORD *)this = v6;
  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 4) = a3;
  if ( !v6 )
    return this;
  v7 = 1;
  if ( *(_DWORD *)(v6 + 36) )
  {
    v7 = GrepIsPreviousModeKernel() != 0;
    goto LABEL_17;
  }
  v8 = *(_QWORD *)(HmgPentryFromPobj(v6) + 16);
  if ( v8 )
  {
    v11 = *(struct _RECTL *)v8;
    v12 = *(_QWORD *)(v8 + 16);
    v9 = _mm_cvtsi128_si32((__m128i)v11);
    if ( (v9 & 0x11) == 0x10 )
    {
      if ( (v9 & 0x20) == 0 )
        goto LABEL_17;
      if ( v11.top == 1 )
      {
        RGNOBJ::vSet(this);
LABEL_15:
        *(_DWORD *)v8 &= ~0x20u;
        goto LABEL_17;
      }
      if ( v11.top != 2 )
        goto LABEL_17;
      if ( (((v11.right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((HIDWORD(v12) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((v12 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((v11.bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
      {
        RGNOBJ::vSet(this, (struct _RECTL *)&v11.right);
        goto LABEL_15;
      }
    }
    v7 = 0;
  }
LABEL_17:
  if ( !v7 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
  }
  return this;
}
