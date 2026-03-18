/*
 * XREFs of IrqArbpFindSuitableRangePci @ 0x1C0091504
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C0090610 (IrqArbFindSuitableRange.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C003803C (WPP_RECORDER_SF_DD.c)
 *     LinkNodeCrackPrt @ 0x1C0056F60 (LinkNodeCrackPrt.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C008D288 (LinkNodeGetPossibleGsiv.c)
 *     IrqArbGsivFromIrq @ 0x1C0090A20 (IrqArbGsivFromIrq.c)
 *     IrqArbIrqFromGsiv @ 0x1C0090A40 (IrqArbIrqFromGsiv.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C0090E88 (IrqArbpAssignIrqFromLinkNode.c)
 *     IcGetPossibleInput @ 0x1C0092504 (IcGetPossibleInput.c)
 *     IcIsInputValid @ 0x1C0092604 (IcIsInputValid.c)
 */

char __fastcall IrqArbpFindSuitableRangePci(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  unsigned __int64 v9; // rbx
  int v10; // edx
  int v11; // edx
  unsigned __int64 v12; // rcx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  int v17; // edx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  int v22; // r9d
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+78h] [rbp+10h] BYREF

  v26 = a1;
  if ( (int)LinkNodeCrackPrt(*(_QWORD *)(a2[4] + 32), &v26, &v27, 1) < 0 )
    return 0;
  if ( !v26 )
  {
    v14 = v27;
    if ( (int)IcGetPossibleInput(v27, v3, &v26) >= 0 && (v26 & 0xB) != 3 )
      return 0;
    v15 = a2[2];
    if ( v14 < v15 )
      return 0;
    v16 = a2[3];
    if ( v14 > v16 )
      return 0;
    if ( v15 <= v14 && v16 >= v14 )
    {
      if ( !(unsigned __int8)IcIsInputValid((unsigned int)v14) )
        return 0;
      v18 = a2[5];
      *a2 = v14;
      a2[1] = v14;
      *(_QWORD *)(v18 + 16) = 1LL;
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v17,
        20,
        25,
        (__int64)&WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids,
        v14);
    }
LABEL_19:
    v19 = a2[7];
    v20 = a2[5];
    LODWORD(v26) = 0;
    v21 = a2[9];
    v22 = *(_DWORD *)(v20 + 36);
    v23 = *(_QWORD *)(v20 + 40);
    v24 = a2[4];
    LOBYTE(v26) = *(_BYTE *)(*(_QWORD *)(v19 + 40) + 4LL) & 1;
    if ( (int)((__int64 (__fastcall *)(_QWORD, __int64, unsigned __int64, __int64, _DWORD, _DWORD, int, int))ProcessorFindIdtEntries)(
                *(_QWORD *)(v24 + 32),
                v23,
                v21,
                1LL,
                v14,
                (unsigned __int8)v26,
                v22 & 1,
                1) >= 0 )
      return 1;
    LOBYTE(v25) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v25,
      20,
      26,
      (__int64)&WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids);
    return 0;
  }
  if ( (int)LinkNodeGetPossibleGsiv(v26, &v27) < 0 )
  {
    if ( (int)IrqArbpAssignIrqFromLinkNode(v5, a2, v5) < 0 )
      return 0;
    LODWORD(v14) = IrqArbGsivFromIrq(*(unsigned int *)a2);
    goto LABEL_19;
  }
  v8 = IrqArbIrqFromGsiv(v27, v4, v6, v7);
  v9 = v8;
  LOBYTE(v10) = 4;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v10,
    20,
    23,
    (__int64)&WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids,
    v8);
  if ( a2[2] <= v9 && a2[3] >= v9 )
  {
    v12 = a2[5];
    *a2 = v9;
    a2[1] = v9;
    *(_QWORD *)(v12 + 16) = 1LL;
    return 1;
  }
  LOBYTE(v11) = 4;
  WPP_RECORDER_SF_DD(
    WPP_GLOBAL_Control->DeviceExtension,
    v11,
    20,
    24,
    (__int64)&WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids,
    *(_DWORD *)a2,
    *((_DWORD *)a2 + 2));
  return 0;
}
