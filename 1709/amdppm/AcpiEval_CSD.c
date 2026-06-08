/*
 * XREFs of AcpiEval_CSD @ 0x1C001C4F8
 * Callers:
 *     InitAcpiIdleDomain @ 0x1C00241A0 (InitAcpiIdleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000127C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C000C200 (__security_check_cookie.c)
 *     memset @ 0x1C000CA40 (memset.c)
 *     AcpiEvaluateMethod @ 0x1C001AD64 (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C001DB10 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_CSD(__int64 a1, _QWORD *a2)
{
  int v2; // r15d
  _DWORD *v5; // rsi
  int v6; // edi
  unsigned __int16 v7; // r9
  _WORD *v8; // rbx
  int v9; // eax
  SIZE_T v10; // r14
  _DWORD *PoolWithTag; // rax
  _WORD *v12; // r14
  __int64 v13; // rax
  __int64 v15; // [rsp+28h] [rbp-A1h]
  int v16; // [rsp+40h] [rbp-89h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h] BYREF
  char v18; // [rsp+50h] [rbp-79h] BYREF
  int v19; // [rsp+52h] [rbp-77h]
  const char *v20; // [rsp+58h] [rbp-71h]
  __int64 (__fastcall *v21)(); // [rsp+60h] [rbp-69h]
  char v22; // [rsp+68h] [rbp-61h]
  int v23; // [rsp+6Ah] [rbp-5Fh]
  const char *v24; // [rsp+70h] [rbp-59h]
  __int64 (__fastcall *v25)(); // [rsp+78h] [rbp-51h]
  char v26; // [rsp+80h] [rbp-49h]
  int v27; // [rsp+82h] [rbp-47h]
  const char *v28; // [rsp+88h] [rbp-41h]
  __int64 (__fastcall *v29)(); // [rsp+90h] [rbp-39h]
  char v30; // [rsp+98h] [rbp-31h]
  int v31; // [rsp+9Ah] [rbp-2Fh]
  const char *v32; // [rsp+A0h] [rbp-29h]
  __int64 (__fastcall *v33)(); // [rsp+A8h] [rbp-21h]
  char v34; // [rsp+B0h] [rbp-19h]
  int v35; // [rsp+B2h] [rbp-17h]
  const char *v36; // [rsp+B8h] [rbp-11h]
  __int64 (__fastcall *v37)(); // [rsp+C0h] [rbp-9h]
  char v38; // [rsp+C8h] [rbp-1h]
  int v39; // [rsp+CAh] [rbp+1h]
  const char *v40; // [rsp+D0h] [rbp+7h]
  __int64 (__fastcall *v41)(); // [rsp+D8h] [rbp+Fh]

  v2 = 0;
  v23 = 0x40000;
  v18 = 0;
  v20 = "NumberOfEntries";
  v19 = 0;
  v24 = "Revision";
  v34 = 4;
  v28 = "DomainNumber";
  v22 = 1;
  v32 = "CoordinationType";
  v26 = 2;
  v36 = "MemberCount";
  v27 = 0x80000;
  v21 = AcpiParseULong;
  v40 = "Index";
  v5 = 0LL;
  v25 = AcpiParseULong;
  v29 = AcpiParseULong;
  v30 = 3;
  v31 = 786432;
  v33 = AcpiParseULong;
  v35 = 0x100000;
  v37 = AcpiParseULong;
  v38 = 5;
  v39 = 1310720;
  v41 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1076), 0x10u);
  v6 = AcpiEvaluateMethod(a1, 1146307423, 0LL, (unsigned int **)&P, &v16);
  if ( v6 < 0 )
    goto LABEL_19;
  if ( !v16 )
  {
    v7 = 42;
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
  v8 = P;
  v9 = *((_DWORD *)P + 2);
  if ( !v9 )
  {
    v7 = 43;
    goto LABEL_4;
  }
  v10 = (unsigned int)(24 * v9 + 4);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72637250u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v10);
    v12 = v8 + 6;
    *v5 = *((unsigned __int8 *)v8 + 8);
    while ( 1 )
    {
      if ( v12 >= (_WORD *)((char *)v8 + *((unsigned int *)v8 + 1)) )
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
             6,
             (int)v12 + 4,
             (unsigned __int16)v12[1],
             (__int64)&v5[6 * v2 + 1],
             24,
             (__int64)"_CSD",
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
      0x2Cu,
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
  _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x10u);
  v8 = P;
LABEL_20:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v6;
}
