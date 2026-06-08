/*
 * XREFs of AcpiEval_PSD_TSD @ 0x1C001F9C0
 * Callers:
 *     InitAcpiPerfDomain @ 0x1C001F114 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C002DF08 (InitAcpiThrottleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C00023E0 (WPP_RECORDER_SF_s.c)
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     memset @ 0x1C0005000 (memset.c)
 *     WPP_RECORDER_SF_sd @ 0x1C000B314 (WPP_RECORDER_SF_sd.c)
 *     AcpiParseCore @ 0x1C0020180 (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x1C0020CD4 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PSD_TSD(__int64 a1, int a2, _QWORD *a3)
{
  int v3; // r12d
  _DWORD *v6; // r14
  int v7; // edi
  _WORD *v8; // rbx
  int v9; // eax
  SIZE_T v10; // r15
  _DWORD *PoolWithTag; // rax
  _WORD *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int16 v17; // r9
  int v18; // [rsp+20h] [rbp-A9h]
  char v19[8]; // [rsp+40h] [rbp-89h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h] BYREF
  _DWORD v21[4]; // [rsp+50h] [rbp-79h] BYREF
  char v22; // [rsp+60h] [rbp-69h] BYREF
  int v23; // [rsp+62h] [rbp-67h]
  const char *v24; // [rsp+68h] [rbp-61h]
  __int64 (__fastcall *v25)(); // [rsp+70h] [rbp-59h]
  char v26; // [rsp+78h] [rbp-51h]
  int v27; // [rsp+7Ah] [rbp-4Fh]
  const char *v28; // [rsp+80h] [rbp-49h]
  __int64 (__fastcall *v29)(); // [rsp+88h] [rbp-41h]
  char v30; // [rsp+90h] [rbp-39h]
  int v31; // [rsp+92h] [rbp-37h]
  const char *v32; // [rsp+98h] [rbp-31h]
  __int64 (__fastcall *v33)(); // [rsp+A0h] [rbp-29h]
  char v34; // [rsp+A8h] [rbp-21h]
  int v35; // [rsp+AAh] [rbp-1Fh]
  const char *v36; // [rsp+B0h] [rbp-19h]
  __int64 (__fastcall *v37)(); // [rsp+B8h] [rbp-11h]
  char v38; // [rsp+C0h] [rbp-9h]
  int v39; // [rsp+C2h] [rbp-7h]
  const char *v40; // [rsp+C8h] [rbp-1h]
  __int64 (__fastcall *v41)(); // [rsp+D0h] [rbp+7h]
  int v42; // [rsp+E0h] [rbp+17h] BYREF
  char v43; // [rsp+E4h] [rbp+1Bh]

  v3 = 0;
  *(_DWORD *)v19 = a2;
  v22 = 0;
  v24 = "NumberOfEntries";
  v28 = "Revision";
  v32 = "DomainNumber";
  v36 = "CoordinationType";
  v23 = 0;
  v27 = 0x40000;
  v25 = AcpiParseULong;
  v40 = "MemberCount";
  v26 = 1;
  v29 = AcpiParseULong;
  v6 = 0LL;
  v30 = 2;
  v31 = 0x80000;
  v33 = AcpiParseULong;
  v34 = 3;
  v35 = 786432;
  v37 = AcpiParseULong;
  v38 = 4;
  v39 = 0x100000;
  v41 = AcpiParseULong;
  v42 = a2;
  v43 = 0;
  P = 0LL;
  if ( a2 == 1146310751 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1076), 0x200u);
  else
    _InterlockedOr((volatile signed __int32 *)(a1 + 1076), 0x2000u);
  v7 = AcpiEvaluateMethod(a1, *(_DWORD *)v19, 0, (unsigned int)&P, (__int64)v21);
  if ( v7 < 0 )
  {
LABEL_29:
    if ( *(_DWORD *)v19 == 1146310751 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x200u);
    else
      _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x2000u);
    v8 = P;
    goto LABEL_16;
  }
  if ( !v21[0] )
  {
    v17 = 20;
LABEL_25:
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v17,
      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
      v19);
    v7 = -1073741275;
    goto LABEL_29;
  }
  v8 = P;
  v9 = *((_DWORD *)P + 2);
  if ( !v9 )
  {
    v17 = 21;
    goto LABEL_25;
  }
  v10 = (unsigned int)(20 * v9 + 4);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72637250u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v7 = -1073741670;
    goto LABEL_29;
  }
  memset(PoolWithTag, 0, (unsigned int)v10);
  v12 = v8 + 6;
  *v6 = *((unsigned __int8 *)v8 + 8);
  while ( 1 )
  {
    if ( v12 >= (_WORD *)((char *)v8 + *((unsigned int *)v8 + 1)) )
    {
      *a3 = v6;
      v6 = 0LL;
      goto LABEL_15;
    }
    if ( *v12 != 3 )
    {
      v7 = -1072431096;
      goto LABEL_29;
    }
    v7 = AcpiParseCore(
           (unsigned int)&v22,
           5,
           (int)v12 + 4,
           (unsigned __int16)v12[1],
           (__int64)&v6[4 * v3 + 1 + v3],
           20,
           (__int64)&v42,
           0);
    if ( v7 < 0 )
      break;
    LOWORD(v15) = v12[1];
    if ( (unsigned __int16)v15 < 4u )
      v15 = 4LL;
    else
      v15 = (unsigned __int16)v15;
    v12 = (_WORD *)((char *)v12 + v15 + 4);
    ++v3;
  }
  WPP_RECORDER_SF_sd((__int64)WPP_GLOBAL_Control->DeviceExtension, v13, v14, 0x16u, v18, (const char *)&v42);
LABEL_15:
  if ( v7 < 0 )
    goto LABEL_29;
LABEL_16:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v7;
}
