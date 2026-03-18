/*
 * XREFs of ?GetCurrentState@CSpringForce@@UEBA?BUIntegrationState@@XZ @ 0x180188AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpringForce::GetCurrentState(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  float v5; // xmm0_4
  int v6; // eax

  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 32))(a1) )
  {
    v6 = *((_DWORD *)a1 + 11);
    *(_QWORD *)a2 = *(__int64 *)((char *)a1 + 36);
    *(_DWORD *)(a2 + 8) = v6;
  }
  else
  {
    v4 = *a1;
    *(_DWORD *)a2 = 0;
    v5 = (*(float (__fastcall **)(__int64 *))(v4 + 48))(a1);
    *(_DWORD *)(a2 + 8) = 0;
    *(float *)(a2 + 4) = v5;
  }
  return a2;
}
