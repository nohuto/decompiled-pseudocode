/*
 * XREFs of ndisTranslateResources @ 0x1C00BD228
 * Callers:
 *     NdisMMapIoSpace @ 0x1C00BD170 (NdisMMapIoSpace.c)
 *     ndisImmediateReadWritePort @ 0x1C00DAB60 (ndisImmediateReadWritePort.c)
 *     ndisImmediateReadWriteSharedMemory @ 0x1C00DACB8 (ndisImmediateReadWriteSharedMemory.c)
 *     NdisMRegisterIoPortRange @ 0x1C00DFBB0 (NdisMRegisterIoPortRange.c)
 *     NdisMRegisterInterrupt @ 0x1C00E07B0 (NdisMRegisterInterrupt.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisTranslateResources(__int64 a1, int a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v9; // edi
  unsigned __int8 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // r13d
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 v17; // r9
  unsigned __int16 *v18; // r8
  __int64 v19; // r15
  __int64 v20; // rax

  v9 = -1073741823;
  v10 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_qD(0x1Au, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, a1, a2);
    v10 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  }
  v11 = *(_QWORD *)(a1 + 944);
  v12 = *(_QWORD *)(a1 + 952);
  if ( !v11 )
    goto LABEL_18;
  if ( !v12 )
    goto LABEL_18;
  v13 = *(_DWORD *)(v11 + 16);
  v14 = v12 + 12;
  v15 = v11 + 12;
  v16 = 0LL;
  if ( !v13 )
    goto LABEL_18;
  v17 = 0LL;
  v18 = (unsigned __int16 *)(v15 + 12);
  v19 = v14 - v15;
  while ( 1 )
  {
    if ( *((unsigned __int8 *)v18 - 4) != a2 )
      goto LABEL_21;
    if ( a2 == 1 )
      goto LABEL_11;
    if ( a2 != 2 )
      break;
    if ( a3 == *v18 )
    {
      *a4 = *(unsigned __int16 *)((char *)v18 + v19);
      goto LABEL_14;
    }
LABEL_15:
    if ( !v9 )
      goto LABEL_16;
LABEL_21:
    v16 = (unsigned int)(v16 + 1);
    ++v17;
    v18 += 10;
    if ( (unsigned int)v16 >= v13 )
      goto LABEL_18;
  }
  if ( a2 == 3 )
  {
LABEL_11:
    v20 = a3 - *(_QWORD *)v18;
    if ( v20 >= 0 && v20 < (unsigned __int64)*((unsigned int *)v18 + 2) )
    {
      *a4 = v20 + *(_QWORD *)((char *)v18 + v19);
LABEL_14:
      v9 = 0;
      goto LABEL_15;
    }
    goto LABEL_15;
  }
  if ( a2 != 4 || a3 != *(_DWORD *)v18 )
    goto LABEL_15;
  v9 = 0;
  *a4 = *(unsigned int *)(v14 + 20 * v17 + 12);
LABEL_16:
  if ( a5 )
    *a5 = v14 + 4 * (v16 + 4 * v16 + 2);
LABEL_18:
  if ( v10 >= 4u )
    WPP_SF_qD(0x1Bu, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, a1, v9);
  return v9;
}
