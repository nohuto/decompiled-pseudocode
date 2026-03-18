/*
 * XREFs of IrqArbpAssignIrqFromLinkNode @ 0x1C00A8888
 * Callers:
 *     IrqArbpFindSuitableRangePci @ 0x1C00950DC (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C000E138 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C0056F10 (WPP_RECORDER_SF_d.c)
 *     IcIsInputValid @ 0x1C0095428 (IcIsInputValid.c)
 *     IcGetPossibleInput @ 0x1C009545C (IcGetPossibleInput.c)
 *     LinkNodeGetPossibleResources @ 0x1C00A8060 (LinkNodeGetPossibleResources.c)
 *     IrqArbIrqFromGsiv @ 0x1C00A8640 (IrqArbIrqFromGsiv.c)
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
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v21 = a1;
  P = 0LL;
  PossibleResources = LinkNodeGetPossibleResources(a3, &P, &v21);
  v5 = P;
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_q(
    WPP_GLOBAL_Control->DeviceExtension,
    v6,
    20,
    27,
    (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
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
      (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
      PossibleResources);
    goto LABEL_13;
  }
  v10 = (unsigned __int8)IrqArbPciAlternativeRotation;
  v11 = v21;
  while ( 1 )
  {
    v7 = (v10 + v9) % v8;
    v12 = 5 * v7;
    v13 = v5[5 * (unsigned int)v7 + 7];
    if ( v13 >= 0x10 || (v14 = (unsigned __int16)PciExclusionMask, !_bittest(&v14, v13)) )
    {
      if ( (int)IcGetPossibleInput(v13, v7, &v21) < 0 || v11 == (_BYTE)v21 )
      {
        v15 = (unsigned int)v5[v12 + 7];
        if ( v15 >= a2[2] && v15 <= a2[3] )
          break;
      }
    }
    if ( ++v9 >= v8 )
      goto LABEL_11;
  }
  if ( !IcIsInputValid(v13) )
  {
    PossibleResources = -1073741823;
    goto LABEL_12;
  }
  v18 = (unsigned int)IrqArbIrqFromGsiv(v17);
  v19 = a2[5];
  *a2 = v18;
  a2[1] = v18;
  *(_QWORD *)(v19 + 16) = 1LL;
  LOBYTE(v20) = 4;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v20,
    20,
    28,
    (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
    v5[v12 + 7]);
  PossibleResources = 0;
LABEL_13:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)PossibleResources;
}
