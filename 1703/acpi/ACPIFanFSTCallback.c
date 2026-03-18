/*
 * XREFs of ACPIFanFSTCallback @ 0x1C004DC50
 * Callers:
 *     ACPIFanLoop @ 0x1C004DF94 (ACPIFanLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C000F2AC (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C000F60C (WPP_RECORDER_SF_qss.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     AMLIEvalPkgDataElement @ 0x1C001B8B8 (AMLIEvalPkgDataElement.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     AcpiDiagTraceFanStatusChange @ 0x1C0041E80 (AcpiDiagTraceFanStatusChange.c)
 *     ACPIFanLoop @ 0x1C004DF94 (ACPIFanLoop.c)
 */

__int64 __fastcall ACPIFanFSTCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // r15d
  bool v8; // r14
  char v9; // r10
  const char *v10; // rax
  const char *v11; // r8
  __int64 v12; // rdx
  char v13; // r10
  const char *v14; // rax
  const char *v15; // r8
  __int64 v16; // rdx
  char v17; // r10
  const char *v18; // rax
  const char *v19; // r8
  __int64 v20; // rdx
  unsigned __int16 v21; // r9
  int v22; // edx
  char v23; // r11
  const char *v24; // rax
  const char *v25; // r10
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // ecx
  _DWORD v30[12]; // [rsp+50h] [rbp-48h] BYREF

  v7 = 0x40000000;
  memset(v30, 0, 0x28uLL);
  v8 = 0;
  if ( a2 < 0 )
  {
    v9 = 0;
    v10 = byte_1C0066CD0;
    v11 = byte_1C0066CD0;
    if ( a4 )
    {
      v12 = *(_QWORD *)(a4 + 8);
      v9 = a4;
      if ( (v12 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a4 + 560);
        if ( (v12 & 0x400000000000LL) != 0 )
          v11 = *(const char **)(a4 + 568);
      }
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x10u,
      0xFu,
      (__int64)&WPP_c4ce4549a8103c4f89a2f46d9050f7e8_Traceguids,
      a2,
      v9,
      v10,
      v11);
    goto LABEL_36;
  }
  if ( *(_WORD *)(a3 + 2) != 4 )
  {
    v13 = 0;
    v14 = byte_1C0066CD0;
    v15 = byte_1C0066CD0;
    if ( a4 )
    {
      v16 = *(_QWORD *)(a4 + 8);
      v13 = a4;
      if ( (v16 & 0x200000000000LL) != 0 )
      {
        v14 = *(const char **)(a4 + 560);
        if ( (v16 & 0x400000000000LL) != 0 )
          v15 = *(const char **)(a4 + 568);
      }
    }
    WPP_RECORDER_SF_qss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x10u,
      0x10u,
      (__int64)&WPP_c4ce4549a8103c4f89a2f46d9050f7e8_Traceguids,
      v13,
      v14,
      v15);
    goto LABEL_36;
  }
  if ( **(_DWORD **)(a3 + 32) < 3u )
  {
    v17 = 0;
    v18 = byte_1C0066CD0;
    v19 = byte_1C0066CD0;
    if ( a4 )
    {
      v20 = *(_QWORD *)(a4 + 8);
      v17 = a4;
      if ( (v20 & 0x200000000000LL) != 0 )
      {
        v18 = *(const char **)(a4 + 560);
        if ( (v20 & 0x400000000000LL) != 0 )
          v19 = *(const char **)(a4 + 568);
      }
    }
    v21 = 17;
LABEL_21:
    WPP_RECORDER_SF_qss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x10u,
      v21,
      (__int64)&WPP_c4ce4549a8103c4f89a2f46d9050f7e8_Traceguids,
      v17,
      v18,
      v19);
    goto LABEL_36;
  }
  v22 = AMLIEvalPkgDataElement(a3, 1u, v30);
  v8 = v22 >= 0;
  if ( v22 >= 0 )
  {
    if ( HIWORD(v30[0]) != 1 )
    {
      v17 = 0;
      v18 = byte_1C0066CD0;
      v19 = byte_1C0066CD0;
      if ( a4 )
      {
        v27 = *(_QWORD *)(a4 + 8);
        v17 = a4;
        if ( (v27 & 0x200000000000LL) != 0 )
        {
          v18 = *(const char **)(a4 + 560);
          if ( (v27 & 0x400000000000LL) != 0 )
            v19 = *(const char **)(a4 + 568);
        }
      }
      v21 = 19;
      goto LABEL_21;
    }
    v28 = v30[4];
    if ( v30[4] != *(_DWORD *)(a4 + 280) )
    {
      *(_DWORD *)(a4 + 280) = v30[4];
      *(_BYTE *)(a4 + 284) = v28 != 0;
      AcpiDiagTraceFanStatusChange(a4);
      v7 = 1073741826;
    }
  }
  else
  {
    v23 = 0;
    v24 = byte_1C0066CD0;
    v25 = byte_1C0066CD0;
    if ( a4 )
    {
      v26 = *(_QWORD *)(a4 + 8);
      v23 = a4;
      if ( (v26 & 0x200000000000LL) != 0 )
      {
        v24 = *(const char **)(a4 + 560);
        if ( (v26 & 0x400000000000LL) != 0 )
          v25 = *(const char **)(a4 + 568);
      }
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x10u,
      0x12u,
      (__int64)&WPP_c4ce4549a8103c4f89a2f46d9050f7e8_Traceguids,
      v22,
      v23,
      v24,
      v25);
  }
LABEL_36:
  if ( a2 >= 0 )
  {
    dword_1C00776F8 = 0;
    pszDest = 0;
    FreeDataBuffs(a3, 1u);
  }
  if ( v8 )
  {
    dword_1C00776F8 = 0;
    pszDest = 0;
    FreeDataBuffs((__int64)v30, 1u);
  }
  return ACPIFanLoop(a4, v7, 0LL);
}
