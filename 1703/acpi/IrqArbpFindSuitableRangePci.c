/*
 * XREFs of IrqArbpFindSuitableRangePci @ 0x1C0089D58
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C0088E70 (IrqArbFindSuitableRange.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     LinkNodeCrackPrt @ 0x1C001B96C (LinkNodeCrackPrt.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0045158 (WPP_RECORDER_SF_DD.c)
 *     IrqArbGsivFromIrq @ 0x1C0086A70 (IrqArbGsivFromIrq.c)
 *     IcGetPossibleInput @ 0x1C0089220 (IcGetPossibleInput.c)
 *     IcIsInputValid @ 0x1C0089B00 (IcIsInputValid.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C00A5590 (LinkNodeGetPossibleGsiv.c)
 *     IrqArbIrqFromGsiv @ 0x1C00A5BA0 (IrqArbIrqFromGsiv.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00A5DE8 (IrqArbpAssignIrqFromLinkNode.c)
 */

char __fastcall IrqArbpFindSuitableRangePci(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  int v7; // edx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  int v15; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned __int64 v20; // rbx
  int v21; // edx
  int v22; // edx
  unsigned __int64 v23; // rcx
  __int64 v24; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+78h] [rbp+10h] BYREF

  v24 = a1;
  if ( (int)LinkNodeCrackPrt(*(_QWORD *)(a2[4] + 32), &v24, &v25, 1) < 0 )
    return 0;
  if ( !v24 )
  {
    v4 = v25;
    if ( (int)IcGetPossibleInput(v25, v3, &v24) >= 0 && (v24 & 0xB) != 3 )
      return 0;
    v5 = a2[2];
    if ( v4 < v5 )
      return 0;
    v6 = a2[3];
    if ( v4 > v6 )
      return 0;
    if ( v5 <= v4 && v6 >= v4 )
    {
      if ( !IcIsInputValid(v4) )
        return 0;
      v8 = a2[5];
      *a2 = v4;
      a2[1] = v4;
      *(_QWORD *)(v8 + 16) = 1LL;
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        20,
        25,
        (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
        v4);
    }
    goto LABEL_10;
  }
  if ( (int)LinkNodeGetPossibleGsiv(v24, &v25) < 0 )
  {
    if ( (int)IrqArbpAssignIrqFromLinkNode(v18, a2, v18) < 0 )
      return 0;
    LODWORD(v4) = IrqArbGsivFromIrq(*(unsigned int *)a2);
LABEL_10:
    v9 = a2[7];
    v10 = a2[5];
    LODWORD(v24) = 0;
    v11 = a2[9];
    v12 = *(_DWORD *)(v10 + 36);
    v13 = *(_QWORD *)(v10 + 40);
    v14 = a2[4];
    LOBYTE(v24) = *(_BYTE *)(*(_QWORD *)(v9 + 40) + 4LL) & 1;
    if ( (int)((__int64 (__fastcall *)(_QWORD, __int64, unsigned __int64, __int64, _DWORD, _DWORD, int, int))ProcessorFindIdtEntries)(
                *(_QWORD *)(v14 + 32),
                v13,
                v11,
                1LL,
                v4,
                (unsigned __int8)v24,
                v12 & 1,
                1) >= 0 )
      return 1;
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      20,
      26,
      (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids);
    return 0;
  }
  v19 = IrqArbIrqFromGsiv(v25, v17);
  v20 = v19;
  LOBYTE(v21) = 4;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v21,
    20,
    23,
    (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
    v19);
  if ( a2[2] <= v20 && a2[3] >= v20 )
  {
    v23 = a2[5];
    *a2 = v20;
    a2[1] = v20;
    *(_QWORD *)(v23 + 16) = 1LL;
    return 1;
  }
  LOBYTE(v22) = 4;
  WPP_RECORDER_SF_DD(
    WPP_GLOBAL_Control->DeviceExtension,
    v22,
    20,
    24,
    (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
    *(_DWORD *)a2,
    *((_DWORD *)a2 + 2));
  return 0;
}
