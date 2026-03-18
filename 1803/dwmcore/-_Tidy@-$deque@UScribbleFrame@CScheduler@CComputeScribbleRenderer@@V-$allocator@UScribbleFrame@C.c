/*
 * XREFs of ?_Tidy@?$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V?$allocator@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@IEAAXXZ @ 0x18021E7C0
 * Callers:
 *     ??1CScheduler@CComputeScribbleRenderer@@QEAA@XZ @ 0x18021D1C4 (--1CScheduler@CComputeScribbleRenderer@@QEAA@XZ.c)
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x18021DD44 (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x18021E1C4 (-Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::deque<CComputeScribbleRenderer::CScheduler::ScribbleFrame>::_Tidy(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  char *v4; // rcx
  char *v5; // rcx

  v1 = a1[4];
  while ( v1 )
  {
    a1[4] = --v1;
    if ( !v1 )
      a1[3] = 0LL;
  }
  v3 = a1[2];
  while ( v3 )
  {
    --v3;
    v4 = *(char **)(a1[1] + 8 * v3);
    if ( v4 )
      std::_Deallocate(v4, 1uLL, 0x20uLL);
  }
  v5 = (char *)a1[1];
  if ( v5 )
    std::_Deallocate(v5, a1[2], 8uLL);
  a1[2] = 0LL;
  a1[1] = 0LL;
}
