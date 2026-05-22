/*
 * XREFs of ?GetCandidateConfiguration@Edges@@QEAA_NPEAXPEAUEdgyConfiguration@@PEAPEAX@Z @ 0x18002B5BC
 * Callers:
 *     ?EnsureInputTargeting@CShellEdgyImpl@@QEAAJPEAW4InputBufferingDecision@@@Z @ 0x18002C0E0 (-EnsureInputTargeting@CShellEdgyImpl@@QEAAJPEAW4InputBufferingDecision@@@Z.c)
 *     ?EnsureInputTargeting@CShellEdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x18002C460 (-EnsureInputTargeting@CShellEdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 *     ?OnEdgeGestureDetected@EdgeGestureTarget@@AEAAJXZ @ 0x18002DDC8 (-OnEdgeGestureDetected@EdgeGestureTarget@@AEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FindEdge@Edges@@AEAAHI@Z @ 0x18002B2A0 (-FindEdge@Edges@@AEAAHI@Z.c)
 */

char __fastcall Edges::GetCandidateConfiguration(Edges *this, void *a2, struct EdgyConfiguration *a3, void **a4)
{
  int Edge; // eax
  _QWORD *v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a4 )
    *a4 = 0LL;
  if ( !(_DWORD)a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x18E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\cshelledges.cpp",
      (const char *)a4);
    JUMPOUT(0x18002B63DLL);
  }
  Edge = Edges::FindEdge(this, (int)a2);
  if ( Edge < 0 )
    return 0;
  v8 = *(_QWORD *)this;
  v9 = 9LL * Edge;
  v10 = *(_OWORD *)(*(_QWORD *)this + 8 * v9 + 44);
  *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)this + 8 * v9 + 28);
  v11 = *(_QWORD *)(v8 + 8 * v9 + 60);
  *((_OWORD *)a3 + 1) = v10;
  *((_QWORD *)a3 + 4) = v11;
  if ( v7 )
    *v7 = *(_QWORD *)(v8 + 8 * v9);
  return 1;
}
