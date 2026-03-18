/*
 * XREFs of IrqArbpAssignIrqFromLinkNode @ 0x1C0090E88
 * Callers:
 *     IrqArbpFindSuitableRangePci @ 0x1C0091504 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C00299A8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C00377D8 (WPP_RECORDER_SF_d.c)
 *     LinkNodeGetPossibleResources @ 0x1C008D2A8 (LinkNodeGetPossibleResources.c)
 *     IrqArbIrqFromGsiv @ 0x1C0090A40 (IrqArbIrqFromGsiv.c)
 *     IcGetPossibleInput @ 0x1C0092504 (IcGetPossibleInput.c)
 *     IcIsInputValid @ 0x1C0092604 (IcIsInputValid.c)
 */

__int64 __fastcall IrqArbpAssignIrqFromLinkNode(__int64 a1, _QWORD *a2, __int64 a3)
{
  int PossibleResources; // ebx
  _DWORD *v5; // rdi
  int v6; // edx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  int v9; // r11d
  int v10; // r12d
  char v11; // r15
  __int64 v12; // rbp
  unsigned int v13; // esi
  int v14; // eax
  unsigned __int64 v15; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v23 = a1;
  P = 0LL;
  PossibleResources = LinkNodeGetPossibleResources(a3, &P, &v23);
  v5 = P;
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_q(
    WPP_GLOBAL_Control->DeviceExtension,
    v6,
    20,
    27,
    (__int64)&WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids,
    (char)P);
  if ( PossibleResources < 0 )
    goto LABEL_12;
  v8 = v5[4];
  v9 = 0;
  if ( !v8 )
  {
LABEL_11:
    PossibleResources = -1073741275;
LABEL_12:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      20,
      29,
      (__int64)&WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids,
      PossibleResources);
    goto LABEL_13;
  }
  v10 = (unsigned __int8)IrqArbPciAlternativeRotation;
  v11 = v23;
  while ( 1 )
  {
    v7 = (v10 + v9) % v8;
    v12 = 5 * v7;
    v13 = v5[5 * (unsigned int)v7 + 7];
    if ( v13 >= 0x10 || (v14 = (unsigned __int16)PciExclusionMask, !_bittest(&v14, v13)) )
    {
      if ( (int)IcGetPossibleInput(v13, v7, &v23) < 0 || v11 == (_BYTE)v23 )
      {
        v15 = (unsigned int)v5[v12 + 7];
        if ( v15 >= a2[2] && v15 <= a2[3] )
          break;
      }
    }
    if ( ++v9 >= v8 )
      goto LABEL_11;
  }
  if ( !(unsigned __int8)IcIsInputValid(v13) )
  {
    PossibleResources = -1073741823;
    goto LABEL_12;
  }
  v20 = (unsigned int)IrqArbIrqFromGsiv(v17, v7, v18, v19);
  v21 = a2[5];
  *a2 = v20;
  a2[1] = v20;
  *(_QWORD *)(v21 + 16) = 1LL;
  LOBYTE(v22) = 4;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v22,
    20,
    28,
    (__int64)&WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids,
    v5[v12 + 7]);
  PossibleResources = 0;
LABEL_13:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)PossibleResources;
}
