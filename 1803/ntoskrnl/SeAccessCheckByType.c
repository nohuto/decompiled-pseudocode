/*
 * XREFs of SeAccessCheckByType @ 0x14005CD40
 * Callers:
 *     NtAccessCheck @ 0x14005EA3C (NtAccessCheck.c)
 *     NtAccessCheckByType @ 0x1400BED68 (NtAccessCheckByType.c)
 *     NtAccessCheckByTypeResultList @ 0x14029F7E4 (NtAccessCheckByTypeResultList.c)
 * Callees:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     AdminlessTelemetryEnabled @ 0x14005E210 (AdminlessTelemetryEnabled.c)
 *     SepAccessStatusHasAccessDenied @ 0x1401A6E0C (SepAccessStatusHasAccessDenied.c)
 *     SepLogAdminlessAccessFailure @ 0x14029FCE0 (SepLogAdminlessAccessFailure.c)
 */

__int64 __fastcall SeAccessCheckByType(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        unsigned __int8 a12)
{
  int v16; // ebx
  __int64 result; // rax
  int v18; // [rsp+58h] [rbp-50h]
  int v20; // [rsp+60h] [rbp-48h]
  char v21; // [rsp+60h] [rbp-48h]
  char v22; // [rsp+70h] [rbp-38h]

  v22 = AdminlessTelemetryEnabled(a3, 0LL);
  if ( v22 )
  {
    v21 = 1;
    v16 = SeAccessCheckByTypeWithAdminlessChecks(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, v21);
    if ( v16 >= 0 && !(unsigned __int8)SepAccessStatusHasAccessDenied(a12, a6, a11) )
      return (unsigned int)v16;
  }
  LOBYTE(v20) = 0;
  LOBYTE(v18) = a12;
  result = SeAccessCheckByTypeWithAdminlessChecks(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, v18, v20);
  v16 = result;
  if ( v22 && (int)result >= 0 )
  {
    if ( !(unsigned __int8)SepAccessStatusHasAccessDenied(a12, a6, a11) )
      SepLogAdminlessAccessFailure();
    return (unsigned int)v16;
  }
  return result;
}
