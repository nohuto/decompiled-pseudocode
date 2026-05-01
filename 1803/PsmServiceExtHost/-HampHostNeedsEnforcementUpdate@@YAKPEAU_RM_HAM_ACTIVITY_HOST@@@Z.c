/*
 * XREFs of ?HampHostNeedsEnforcementUpdate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180018F30
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800182E0 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180019AC0 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180041D10 (memcmp_0.c)
 */

_BOOL8 __fastcall HampHostNeedsEnforcementUpdate(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rax
  __int128 v3; // xmm1
  struct _HAM_ACTIVITY *v5; // [rsp+30h] [rbp-79h] BYREF
  _OWORD v6[2]; // [rsp+38h] [rbp-71h] BYREF
  __int64 v7; // [rsp+58h] [rbp-51h]
  _BYTE v8[16]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v9; // [rsp+70h] [rbp-39h]
  __int64 v10; // [rsp+78h] [rbp-31h]
  _OWORD Buf2[2]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v12; // [rsp+A0h] [rbp-9h]
  _OWORD Buf1[2]; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v14; // [rsp+C8h] [rbp+1Fh]
  _BYTE v15[32]; // [rsp+D0h] [rbp+27h] BYREF

  v1 = *((_QWORD *)a1 + 79);
  if ( (v1 & 0x4000000000000LL) != 0 )
    return 1LL;
  if ( (v1 & 0x2000000000000LL) != 0 )
    return 1LL;
  HampHostComputeStaticEnforcementSettings(
    a1,
    (struct _RM_ENFORCEMENT_SETTINGS *)v6,
    (struct _RM_COMMIT_THRESHOLDS *)v15,
    (struct _RM_COMMIT_THRESHOLDS *)v8,
    &v5);
  if ( *((struct _HAM_ACTIVITY **)a1 + 116) != v5 )
    return 1LL;
  v3 = *(_OWORD *)((char *)a1 + 1016);
  Buf1[0] = *((unsigned __int64 *)a1 + 125);
  v14 = *((_QWORD *)a1 + 129);
  *(_QWORD *)&Buf1[0] = 0LL;
  Buf1[1] = v3;
  v12 = v7;
  Buf2[1] = v6[1];
  Buf2[0] = 0uLL;
  return memcmp_0(Buf1, Buf2, 0x28uLL)
      || v10 != *((_QWORD *)a1 + 101)
      || v9 != *((_QWORD *)a1 + 102)
      || memcmp_0(v15, (char *)a1 + 824, 0x20uLL) != 0;
}
