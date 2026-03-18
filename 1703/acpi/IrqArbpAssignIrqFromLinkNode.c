/*
 * XREFs of IrqArbpAssignIrqFromLinkNode @ 0x1C00A5DE8
 * Callers:
 *     IrqArbpFindSuitableRangePci @ 0x1C0089D58 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C0017654 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C0056320 (WPP_RECORDER_SF_d.c)
 *     IcGetPossibleInput @ 0x1C0089220 (IcGetPossibleInput.c)
 *     IcIsInputValid @ 0x1C0089B00 (IcIsInputValid.c)
 *     LinkNodeGetPossibleResources @ 0x1C00A55B0 (LinkNodeGetPossibleResources.c)
 *     IrqArbIrqFromGsiv @ 0x1C00A5BA0 (IrqArbIrqFromGsiv.c)
 */

__int64 __fastcall IrqArbpAssignIrqFromLinkNode(__int64 a1, _QWORD *a2, __int64 a3)
{
  int PossibleResources; // ebx
  _DWORD *v5; // rdi
  int v6; // edx
  __int64 v7; // rdx
  unsigned int v8; // esi
  int v9; // ebx
  int v10; // eax
  char v11; // r12
  unsigned __int16 v12; // r13
  __int64 v13; // r15
  unsigned int v14; // ebp
  int v15; // eax
  unsigned __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // edx
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v22 = a1;
  P = 0LL;
  PossibleResources = LinkNodeGetPossibleResources(a3, &P, &v22);
  v5 = P;
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_q(
    WPP_GLOBAL_Control->DeviceExtension,
    v6,
    20,
    27,
    (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
    (char)P);
  if ( PossibleResources >= 0 )
  {
    v8 = v5[4];
    v9 = 0;
    if ( v8 )
    {
      v10 = (unsigned __int8)IrqArbPciAlternativeRotation;
      v11 = v22;
      v12 = PciExclusionMask;
      LODWORD(P) = (unsigned __int8)IrqArbPciAlternativeRotation;
      while ( 1 )
      {
        v7 = (v9 + v10) % v8;
        v13 = 5 * v7;
        v14 = v5[5 * (unsigned int)v7 + 7];
        if ( v14 >= 0x10 || (v15 = v12, !_bittest(&v15, v14)) )
        {
          if ( (int)IcGetPossibleInput(v14, v7, &v22) < 0 || v11 == (_BYTE)v22 )
          {
            v16 = (unsigned int)v5[v13 + 7];
            if ( v16 >= a2[2] && v16 <= a2[3] )
              break;
          }
        }
        if ( ++v9 >= v8 )
          goto LABEL_15;
        v10 = (int)P;
      }
      if ( IcIsInputValid(v14) )
      {
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
          v5[v13 + 7]);
        PossibleResources = 0;
        goto LABEL_17;
      }
      PossibleResources = -1073741823;
    }
    else
    {
LABEL_15:
      PossibleResources = -1073741275;
    }
  }
  LOBYTE(v7) = 2;
  WPP_RECORDER_SF_d(
    WPP_GLOBAL_Control->DeviceExtension,
    v7,
    20,
    29,
    (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
    PossibleResources);
LABEL_17:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)PossibleResources;
}
