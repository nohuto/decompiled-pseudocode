/*
 * XREFs of ?PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x180016450
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceEnforcer::PsmSetApplicationProperties(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        enum _PSM_APPLICATION_PRIORITY *a11,
        unsigned __int64 *a12)
{
  int v14; // eax
  int v15; // edx
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 result; // rax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // [rsp+40h] [rbp-68h] BYREF
  __int64 v25; // [rsp+48h] [rbp-60h]
  __int64 v26; // [rsp+50h] [rbp-58h]
  __int64 v27; // [rsp+58h] [rbp-50h]
  __int64 v28; // [rsp+60h] [rbp-48h]
  __int64 v29; // [rsp+68h] [rbp-40h]

  if ( __PAIR128__((unsigned __int64)a8, (unsigned __int64)a7) == 0 && !a9 && !a10 && !a11 && !a12 )
    return 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( a7 )
  {
    v14 = *a7;
    v15 = 1;
    LODWORD(v24) = 1;
    HIDWORD(v24) = v14;
  }
  else
  {
    v15 = v24;
  }
  if ( a8 )
  {
    v16 = *a8;
    v15 |= 2u;
    v17 = *a8 == -1LL;
    LODWORD(v24) = v15;
    if ( v17 )
      v16 = 0LL;
    v25 = v16;
  }
  if ( a9 )
  {
    v18 = *a9;
    v15 |= 4u;
    v17 = *a9 == -1LL;
    LODWORD(v24) = v15;
    if ( v17 )
      v18 = 0LL;
    v26 = v18;
  }
  if ( a10 )
  {
    v19 = *a10;
    v15 |= 8u;
    LODWORD(v24) = v15;
    v20 = 0LL;
    if ( v19 != -1 )
      v20 = v19;
    v27 = v20;
  }
  if ( a11 )
  {
    v22 = *(_DWORD *)a11;
    v15 |= 0x10u;
    LODWORD(v24) = v15;
    LODWORD(v28) = v22;
  }
  if ( a12 )
  {
    v23 = *a12;
    LODWORD(v24) = v15 | 0x20;
    v29 = v23;
  }
  result = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, __int64 *))this
            + 1))(
             a3,
             a4,
             a2,
             a5,
             a6,
             &v24);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
