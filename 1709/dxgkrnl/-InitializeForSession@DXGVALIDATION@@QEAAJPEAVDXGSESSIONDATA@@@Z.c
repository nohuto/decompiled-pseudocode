/*
 * XREFs of ?InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C0008C60
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C0090170 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ?CreateValidationProcessInCallerSession@DXGVALIDATION@@AEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C002CD38 (-CreateValidationProcessInCallerSession@DXGVALIDATION@@AEAAJPEAPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DXGVALIDATION::InitializeForSession(DXGVALIDATION *this, struct DXGSESSIONDATA *a2)
{
  __int64 result; // rax
  struct _EPROCESS *v4; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  if ( *(_DWORD *)this )
  {
    result = DXGVALIDATION::CreateValidationProcessInCallerSession(this, &v4);
    if ( (int)result >= 0 )
      *((_QWORD *)a2 + 2326) = v4;
  }
  return result;
}
