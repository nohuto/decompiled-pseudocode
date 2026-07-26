/*
 * XREFs of ndisTranslateResources @ 0x1C00C9D28
 * Callers:
 *     NdisMMapIoSpace @ 0x1C00C9C70 (NdisMMapIoSpace.c)
 *     ndisImmediateReadWritePort @ 0x1C00E63D0 (ndisImmediateReadWritePort.c)
 *     ndisImmediateReadWriteSharedMemory @ 0x1C00E6528 (ndisImmediateReadWriteSharedMemory.c)
 *     NdisMRegisterIoPortRange @ 0x1C00EBF70 (NdisMRegisterIoPortRange.c)
 *     NdisMRegisterInterrupt @ 0x1C00ED1F0 (NdisMRegisterInterrupt.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisTranslateResources(__int64 a1, int a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // r15d
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r8
  unsigned __int16 *v17; // rdx
  __int64 v18; // r11
  __int64 v19; // rcx

  v9 = -1073741823;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x1Au, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, a1, a2);
  v10 = *(_QWORD *)(a1 + 944);
  if ( !v10 )
    goto LABEL_18;
  v11 = *(_QWORD *)(a1 + 952);
  if ( !v11 )
    goto LABEL_18;
  v12 = *(_DWORD *)(v10 + 16);
  v13 = v11 + 12;
  v14 = v10 + 12;
  v15 = 0LL;
  if ( !v12 )
    goto LABEL_18;
  v16 = 0LL;
  v17 = (unsigned __int16 *)(v14 + 12);
  v18 = v13 - v14;
  while ( 1 )
  {
    if ( *((unsigned __int8 *)v17 - 4) != a2 )
      goto LABEL_21;
    if ( a2 == 1 )
      goto LABEL_11;
    if ( a2 != 2 )
      break;
    if ( a3 == *v17 )
    {
      *a4 = *(unsigned __int16 *)((char *)v17 + v18);
      goto LABEL_14;
    }
LABEL_15:
    if ( !v9 )
      goto LABEL_16;
LABEL_21:
    v15 = (unsigned int)(v15 + 1);
    ++v16;
    v17 += 10;
    if ( (unsigned int)v15 >= v12 )
      goto LABEL_18;
  }
  if ( a2 == 3 )
  {
LABEL_11:
    v19 = a3 - *(_QWORD *)v17;
    if ( v19 >= 0 && v19 < (unsigned __int64)*((unsigned int *)v17 + 2) )
    {
      *a4 = *(_QWORD *)((char *)v17 + v18) + v19;
LABEL_14:
      v9 = 0;
      goto LABEL_15;
    }
    goto LABEL_15;
  }
  if ( a2 != 4 || a3 != *(_DWORD *)v17 )
    goto LABEL_15;
  v9 = 0;
  *a4 = *(unsigned int *)(v13 + 20 * v16 + 12);
LABEL_16:
  if ( a5 )
    *a5 = v13 + 4 * (v15 + 4 * v15 + 2);
LABEL_18:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x1Bu, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, a1, v9);
  return v9;
}
