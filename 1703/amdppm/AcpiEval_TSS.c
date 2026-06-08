/*
 * XREFs of AcpiEval_TSS @ 0x1C0019118
 * Callers:
 *     InitAcpi3ThrottleStates @ 0x1C0026D80 (InitAcpi3ThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 *     memset @ 0x1C000C3C0 (memset.c)
 *     AcpiEvaluateMethod @ 0x1C0017D74 (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C001AB1C (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_TSS(__int64 a1, _QWORD *a2)
{
  int v2; // r12d
  _DWORD *v5; // rsi
  int v6; // edi
  unsigned __int16 v7; // r9
  unsigned int *v8; // rbx
  int v9; // eax
  SIZE_T v10; // r14
  _DWORD *PoolWithTag; // rax
  _WORD *v12; // r14
  __int64 v13; // rax
  __int64 v15; // [rsp+28h] [rbp-91h]
  int v16; // [rsp+40h] [rbp-79h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  char v18; // [rsp+50h] [rbp-69h] BYREF
  int v19; // [rsp+52h] [rbp-67h]
  const char *v20; // [rsp+58h] [rbp-61h]
  __int64 (__fastcall *v21)(); // [rsp+60h] [rbp-59h]
  char v22; // [rsp+68h] [rbp-51h]
  int v23; // [rsp+6Ah] [rbp-4Fh]
  const char *v24; // [rsp+70h] [rbp-49h]
  __int64 (__fastcall *v25)(); // [rsp+78h] [rbp-41h]
  char v26; // [rsp+80h] [rbp-39h]
  int v27; // [rsp+82h] [rbp-37h]
  const char *v28; // [rsp+88h] [rbp-31h]
  __int64 (__fastcall *v29)(); // [rsp+90h] [rbp-29h]
  char v30; // [rsp+98h] [rbp-21h]
  int v31; // [rsp+9Ah] [rbp-1Fh]
  const char *v32; // [rsp+A0h] [rbp-19h]
  __int64 (__fastcall *v33)(); // [rsp+A8h] [rbp-11h]
  char v34; // [rsp+B0h] [rbp-9h]
  int v35; // [rsp+B2h] [rbp-7h]
  const char *v36; // [rsp+B8h] [rbp-1h]
  __int64 (__fastcall *v37)(); // [rsp+C0h] [rbp+7h]

  v2 = 0;
  v23 = 0x40000;
  v18 = 0;
  v20 = "Percentage";
  v19 = 0;
  v24 = "Power";
  v22 = 1;
  v28 = "Latency";
  v26 = 2;
  v32 = "Control";
  v27 = 0x80000;
  v21 = AcpiParseULong;
  v36 = "Status";
  v5 = 0LL;
  v25 = AcpiParseULong;
  v29 = AcpiParseULong;
  v30 = 3;
  v31 = 786432;
  v33 = AcpiParseULong;
  v34 = 4;
  v35 = 0x100000;
  v37 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1076), 0x800u);
  v6 = AcpiEvaluateMethod(a1, 1397970015, 0LL, (unsigned int **)&P, &v16);
  if ( v6 < 0 )
    goto LABEL_19;
  *(_QWORD *)(a1 + 256) |= *(_DWORD *)(a1 + 264) & 0x3000000;
  if ( !v16 )
  {
    v7 = 36;
LABEL_4:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v7,
      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    v6 = -1073741275;
    goto LABEL_19;
  }
  v8 = (unsigned int *)P;
  v9 = *((_DWORD *)P + 2);
  if ( !v9 )
  {
    v7 = 37;
    goto LABEL_4;
  }
  v10 = (unsigned int)(20 * v9 + 4);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72637250u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v10);
    v12 = v8 + 3;
    *v5 = v8[2];
    while ( 1 )
    {
      if ( v12 >= (_WORD *)((char *)v8 + v8[1]) )
      {
        *a2 = v5;
        v5 = 0LL;
        goto LABEL_18;
      }
      if ( *v12 != 3 )
      {
        v6 = -1072431096;
        goto LABEL_19;
      }
      v6 = AcpiParseCore(
             (unsigned int)&v18,
             5,
             (int)v12 + 4,
             (unsigned __int16)v12[1],
             (__int64)&v5[4 * v2 + 1 + v2],
             20,
             (__int64)"_TSS",
             0);
      if ( v6 < 0 )
        break;
      LOWORD(v13) = v12[1];
      if ( (unsigned __int16)v13 >= 4u )
        v13 = (unsigned __int16)v13;
      else
        v13 = 4LL;
      v12 = (_WORD *)((char *)v12 + v13 + 4);
      ++v2;
    }
    LODWORD(v15) = v2;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x26u,
      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
      v15);
LABEL_18:
    if ( v6 >= 0 )
      goto LABEL_20;
  }
  else
  {
    v6 = -1073741670;
  }
LABEL_19:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x800u);
  v8 = (unsigned int *)P;
LABEL_20:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v6;
}
