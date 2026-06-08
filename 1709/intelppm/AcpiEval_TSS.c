/*
 * XREFs of AcpiEval_TSS @ 0x1C0020334
 * Callers:
 *     InitAcpi3ThrottleStates @ 0x1C001F870 (InitAcpi3ThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     memset @ 0x1C0005000 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C0008840 (WPP_RECORDER_SF_d.c)
 *     AcpiParseCore @ 0x1C0020180 (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x1C0020CD4 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_TSS(__int64 a1, _QWORD *a2)
{
  int v2; // r12d
  _DWORD *v5; // rsi
  int v6; // edi
  unsigned int *v7; // rbx
  unsigned __int16 v9; // r9
  int v10; // eax
  SIZE_T v11; // r14
  _DWORD *PoolWithTag; // rax
  _WORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // [rsp+28h] [rbp-91h]
  int v16; // [rsp+40h] [rbp-79h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int8 v18[2]; // [rsp+50h] [rbp-69h] BYREF
  int v19; // [rsp+52h] [rbp-67h]
  const char *v20; // [rsp+58h] [rbp-61h]
  __int64 (__fastcall *v21)(__int64, _DWORD *, unsigned int); // [rsp+60h] [rbp-59h]
  char v22; // [rsp+68h] [rbp-51h]
  int v23; // [rsp+6Ah] [rbp-4Fh]
  const char *v24; // [rsp+70h] [rbp-49h]
  __int64 (__fastcall *v25)(__int64, _DWORD *, unsigned int); // [rsp+78h] [rbp-41h]
  char v26; // [rsp+80h] [rbp-39h]
  int v27; // [rsp+82h] [rbp-37h]
  const char *v28; // [rsp+88h] [rbp-31h]
  __int64 (__fastcall *v29)(__int64, _DWORD *, unsigned int); // [rsp+90h] [rbp-29h]
  char v30; // [rsp+98h] [rbp-21h]
  int v31; // [rsp+9Ah] [rbp-1Fh]
  const char *v32; // [rsp+A0h] [rbp-19h]
  __int64 (__fastcall *v33)(__int64, _DWORD *, unsigned int); // [rsp+A8h] [rbp-11h]
  char v34; // [rsp+B0h] [rbp-9h]
  int v35; // [rsp+B2h] [rbp-7h]
  const char *v36; // [rsp+B8h] [rbp-1h]
  __int64 (__fastcall *v37)(__int64, _DWORD *, unsigned int); // [rsp+C0h] [rbp+7h]

  v2 = 0;
  v23 = 0x40000;
  v18[0] = 0;
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
  v6 = AcpiEvaluateMethod(a1, 1397970015, 0, (unsigned int)&P, (__int64)&v16);
  if ( v6 < 0 )
    goto LABEL_2;
  *(_QWORD *)(a1 + 256) |= *(_DWORD *)(a1 + 264) & 0x3000000;
  if ( !v16 )
  {
    v9 = 36;
LABEL_11:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v9,
      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    v6 = -1073741275;
    goto LABEL_2;
  }
  v7 = (unsigned int *)P;
  v10 = *((_DWORD *)P + 2);
  if ( !v10 )
  {
    v9 = 37;
    goto LABEL_11;
  }
  v11 = (unsigned int)(20 * v10 + 4);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72637250u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v11);
    v13 = v7 + 3;
    *v5 = v7[2];
    while ( 1 )
    {
      if ( v13 >= (_WORD *)((char *)v7 + v7[1]) )
      {
        *a2 = v5;
        v5 = 0LL;
        goto LABEL_24;
      }
      if ( *v13 != 3 )
      {
        v6 = -1072431096;
        goto LABEL_2;
      }
      v6 = AcpiParseCore(
             v18,
             5LL,
             (unsigned __int64)(v13 + 2),
             (unsigned __int16)v13[1],
             (__int64)&v5[4 * v2 + 1 + v2],
             20,
             "_TSS",
             0);
      if ( v6 < 0 )
        break;
      LOWORD(v14) = v13[1];
      if ( (unsigned __int16)v14 >= 4u )
        v14 = (unsigned __int16)v14;
      else
        v14 = 4LL;
      v13 = (_WORD *)((char *)v13 + v14 + 4);
      ++v2;
    }
    LODWORD(v15) = v2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x26u,
      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
      v15);
LABEL_24:
    if ( v6 >= 0 )
      goto LABEL_3;
  }
  else
  {
    v6 = -1073741670;
  }
LABEL_2:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x800u);
  v7 = (unsigned int *)P;
LABEL_3:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v6;
}
