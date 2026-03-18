/*
 * XREFs of ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C00242E0
 * Callers:
 *     bDeleteRegion @ 0x1C001E150 (bDeleteRegion.c)
 *     GreSetRectRgn @ 0x1C001E320 (GreSetRectRgn.c)
 *     GreGetRegionData @ 0x1C001E520 (GreGetRegionData.c)
 *     NtGdiDeleteObjectApp @ 0x1C001EE60 (NtGdiDeleteObjectApp.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C001F180 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x1C001F6D0 (SetRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C0023180 (GreCombineRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002D8E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C00313E4 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreOffsetRgn @ 0x1C00347B0 (GreOffsetRgn.c)
 *     GreGetRgnBox @ 0x1C005FE50 (GreGetRgnBox.c)
 *     GreRectInRegion @ 0x1C0060A30 (GreRectInRegion.c)
 *     GreCopyVisRgn @ 0x1C0063650 (GreCopyVisRgn.c)
 *     GrePtInRegion @ 0x1C00646D0 (GrePtInRegion.c)
 *     GreIsValidRegion @ 0x1C006AA30 (GreIsValidRegion.c)
 *     NtGdiEqualRgn @ 0x1C006DD20 (NtGdiEqualRgn.c)
 *     EngDeleteRgn @ 0x1C00D9380 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C00D93F0 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C01F40E8 (InitializeGre.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C00218D0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0022110 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     HmgLock @ 0x1C0028790 (HmgLock.c)
 *     HmgPentryFromPobj @ 0x1C0029460 (HmgPentryFromPobj.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C0075F74 (-GrepIsPreviousModeKernel@@YAHXZ.c)
 */

RGNOBJAPI *__fastcall RGNOBJAPI::RGNOBJAPI(RGNOBJAPI *this, HRGN a2, int a3)
{
  HRGN v4; // rbx
  __int64 v6; // rax
  BOOL v7; // ebx
  __int64 v8; // rdi
  char v9; // cl
  struct _RECTL v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v4 = a2;
  LOBYTE(a2) = 4;
  v6 = HmgLock(v4, a2);
  *(_QWORD *)this = v6;
  *((_QWORD *)this + 1) = v4;
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
