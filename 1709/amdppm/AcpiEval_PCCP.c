/*
 * XREFs of AcpiEval_PCCP @ 0x1C001C7D4
 * Callers:
 *     InitAcpiLegacyPcc @ 0x1C002D6E8 (InitAcpiLegacyPcc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000127C (WPP_RECORDER_SF_.c)
 *     AcpiEvaluateMethod @ 0x1C001AD64 (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C001DB10 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_PCCP(__int64 a1, _QWORD *a2)
{
  void *v4; // rbx
  int v5; // esi
  _QWORD *PoolWithTag; // rax
  _DWORD *v7; // r14
  char v9; // [rsp+40h] [rbp-30h] BYREF
  int v10; // [rsp+42h] [rbp-2Eh]
  const char *v11; // [rsp+48h] [rbp-28h]
  __int64 (__fastcall *v12)(); // [rsp+50h] [rbp-20h]
  char v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ah] [rbp-16h]
  const char *v15; // [rsp+60h] [rbp-10h]
  __int64 (__fastcall *v16)(); // [rsp+68h] [rbp-8h]
  int v17; // [rsp+A0h] [rbp+30h] BYREF
  PVOID P; // [rsp+B0h] [rbp+40h] BYREF

  v13 = 1;
  v9 = 0;
  v11 = "InputBufferOffset";
  v10 = 0;
  v12 = AcpiParseULong;
  v15 = "OutputBufferOffset";
  v14 = 0x40000;
  v4 = 0LL;
  v16 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1076), 0x8000u);
  v5 = AcpiEvaluateMethod(a1, 1346585424, 0LL, (unsigned int **)&P, &v17);
  if ( v5 < 0 )
    goto LABEL_10;
  *(_QWORD *)(a1 + 256) |= *(_DWORD *)(a1 + 264) & 0x80000000;
  if ( !v17 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x2Du,
      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    v5 = -1073741275;
LABEL_10:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x8000u);
    v7 = P;
    goto LABEL_11;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x72637250u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v5 = -1073741670;
    goto LABEL_10;
  }
  v7 = P;
  *PoolWithTag = 0LL;
  v5 = AcpiParseCore((unsigned int)&v9, 2, (int)v7 + 12, v7[1] - 12, (__int64)PoolWithTag, 8, (__int64)"PCCP", 0);
  if ( v5 >= 0 )
  {
    *a2 = v4;
    v4 = 0LL;
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x2Eu,
      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
  }
  if ( v5 < 0 )
    goto LABEL_10;
LABEL_11:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v5;
}
