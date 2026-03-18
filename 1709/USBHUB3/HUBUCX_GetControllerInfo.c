/*
 * XREFs of HUBUCX_GetControllerInfo @ 0x1C0021574
 * Callers:
 *     HUBHSM_Configuring @ 0x1C0007600 (HUBHSM_Configuring.c)
 *     HUBHSM_GettingRootHubInfo @ 0x1C0008A10 (HUBHSM_GettingRootHubInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_GetControllerInfo(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax
  bool v4; // zf

  v1 = (_DWORD *)(a1 + 160);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 568))(*(_QWORD *)(a1 + 240), a1 + 160);
  v4 = *v1 == 3;
  *(_BYTE *)(a1 + 192) = 0;
  if ( v4 )
    *(_BYTE *)(a1 + 192) = 1;
  return result;
}
