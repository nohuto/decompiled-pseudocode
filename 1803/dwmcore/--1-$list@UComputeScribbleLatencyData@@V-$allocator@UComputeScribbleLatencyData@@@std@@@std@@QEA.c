/*
 * XREFs of ??1?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@QEAA@XZ @ 0x1800DA854
 * Callers:
 *     _anonymous_namespace_::_dynamic_atexit_destructor_for__g_latencyData__ @ 0x1800DEAC0 (_anonymous_namespace_--_dynamic_atexit_destructor_for__g_latencyData__.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void std::list<ComputeScribbleLatencyData>::~list<ComputeScribbleLatencyData>()
{
  char *v0; // r9
  char *v1; // rcx
  char *v2; // rbx

  v0 = *(char **)xmmword_1802D63F0;
  *(_QWORD *)xmmword_1802D63F0 = xmmword_1802D63F0;
  *((_QWORD *)xmmword_1802D63F0 + 1) = xmmword_1802D63F0;
  *(&xmmword_1802D63F0 + 1) = 0LL;
  v1 = (char *)xmmword_1802D63F0;
  if ( v0 != xmmword_1802D63F0 )
  {
    do
    {
      v2 = *(char **)v0;
      std::_Deallocate(v0, 1uLL, 0x30uLL);
      v1 = (char *)xmmword_1802D63F0;
      v0 = v2;
    }
    while ( v2 != xmmword_1802D63F0 );
  }
  std::_Deallocate(v1, 1uLL, 0x30uLL);
}
