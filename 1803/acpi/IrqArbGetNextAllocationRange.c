/*
 * XREFs of IrqArbGetNextAllocationRange @ 0x1C0090750
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     LinkNodeCrackPrt @ 0x1C0056F60 (LinkNodeCrackPrt.c)
 *     WPP_RECORDER_SF_xx @ 0x1C0058A40 (WPP_RECORDER_SF_xx.c)
 *     PcisuppIsPciDevice @ 0x1C008C778 (PcisuppIsPciDevice.c)
 *     IrqArbIrqFromGsiv @ 0x1C0090A40 (IrqArbIrqFromGsiv.c)
 *     IrqArbpFindBootConfig @ 0x1C0091020 (IrqArbpFindBootConfig.c)
 *     IrqArbpFindIrqInAlternatives @ 0x1C0091098 (IrqArbpFindIrqInAlternatives.c)
 *     ArbGetNextAllocationRange @ 0x1C0094210 (ArbGetNextAllocationRange.c)
 */

char __fastcall IrqArbGetNextAllocationRange(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int16 v6; // dx
  char result; // al
  _DWORD *v8; // rdi
  void *v9; // rdx
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rcx
  unsigned int v14; // r10d
  _QWORD *v15; // rcx
  int BootConfig; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r11
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r11
  int v24; // [rsp+20h] [rbp-30h]
  __int64 v25; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v27; // [rsp+80h] [rbp+30h] BYREF
  int v28; // [rsp+88h] [rbp+38h] BYREF

  v3 = a2;
  v4 = *(_QWORD *)(a2[4] + 32LL);
  if ( *(PVOID *)(v4 + 8) == AcpiDriverObject && (*(_DWORD *)(*(_QWORD *)(v4 + 64) + 8LL) & 0x2000000) != 0 )
    return ArbGetNextAllocationRange(a1, a2);
  v5 = a2[5];
  if ( v5 )
    v6 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 4LL);
  else
    v6 = *(_WORD *)(*(_QWORD *)(a2[7] + 40LL) + 4LL);
  if ( (v6 & 0x20) != 0 )
    goto LABEL_40;
  if ( (int)PcisuppIsPciDevice(v4, (bool *)&v26) < 0 )
    return 0;
  if ( !(_BYTE)v26 )
  {
LABEL_40:
    a2 = v3;
    return ArbGetNextAllocationRange(a1, a2);
  }
  v8 = (_DWORD *)v3[9];
  if ( !v3[5] )
    *v8 = 4096;
LABEL_12:
  while ( 2 )
  {
    v9 = &WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids;
    while ( 1 )
    {
      while ( 1 )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v9,
          20,
          10,
          (__int64)&WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids,
          *v8);
        if ( *v8 == 4096 )
        {
          if ( IrqArbGlobalDistributionDisposition == 1 )
          {
            *v8 = 4100;
          }
          else if ( IrqArbGlobalDistributionDisposition == 2 )
          {
            *v8 = 4098;
          }
          else
          {
            *v8 = 4097;
          }
          goto LABEL_12;
        }
        if ( *v8 != 4097 )
          break;
        *v8 = 4099;
        v21 = LinkNodeCrackPrt(*(_QWORD *)(v3[4] + 32LL), &v25, &v28, 0);
        v9 = &WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids;
        if ( v21 >= 0 )
        {
          v9 = &WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids;
          if ( v25 )
          {
            v22 = *(unsigned int *)(v25 + 40);
            v9 = &WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids;
            if ( (_DWORD)v22 != -1 )
            {
              v19 = (unsigned int)IrqArbIrqFromGsiv(v22, &WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids);
              v20 = v19;
LABEL_29:
              v27 = v19;
              if ( (int)IrqArbpFindIrqInAlternatives(v13, v3, v20, &v26) < 0 )
                goto LABEL_12;
              v3[5] = v3[7] + ((unsigned __int64)v26 << 6);
              v18 = v23;
              goto LABEL_31;
            }
          }
        }
      }
      v13 = (unsigned int)(*v8 - 4098);
      if ( *v8 == 4098 )
      {
        *v8 = 4099;
        LODWORD(v19) = IrqArbGlobalStackingIrq;
        v20 = (unsigned int)IrqArbGlobalStackingIrq;
        goto LABEL_29;
      }
      if ( *v8 != 4099 )
        break;
      *v8 = 4100;
      BootConfig = IrqArbpFindBootConfig(a1, v3, &v27);
      v9 = &WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids;
      if ( BootConfig >= 0 )
      {
        if ( (int)IrqArbpFindIrqInAlternatives(v17, v3, v27, &v26) < 0 )
          goto LABEL_12;
        v3[5] = v3[7] + ((unsigned __int64)v26 << 6);
        v18 = v27;
LABEL_31:
        v3[2] = v18;
        goto LABEL_32;
      }
    }
    if ( *v8 == 4100 )
    {
      *v8 = 4101;
      v15 = (_QWORD *)v3[7];
      v3[5] = v15;
LABEL_39:
      v3[2] = *v15;
      v18 = v15[1];
LABEL_32:
      v3[3] = v18;
      WPP_RECORDER_SF_xx(WPP_GLOBAL_Control->DeviceExtension, v10, v11, v12, v24, v3[2], v18);
      result = 1;
      ++IrqArbPciAlternativeRotation;
      return result;
    }
    if ( *v8 != 4101 )
      continue;
    break;
  }
  v14 = *((_DWORD *)v3 + 12);
  v3[5] += 64LL;
  if ( v3[5] < v3[7] + ((unsigned __int64)v14 << 6) )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      20,
      11,
      (__int64)&WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids,
      v14);
    v15 = (_QWORD *)v3[5];
    goto LABEL_39;
  }
  return 0;
}
