/*
 * XREFs of ?GetPointerVisualization@PointerList@@YAHGPEAH@Z @ 0x1C01F6050
 * Callers:
 *     ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01BBDB0 (-GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z.c)
 * Callees:
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01F5D54 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

__int64 __fastcall PointerList::GetPointerVisualization(PointerList *this, unsigned int *a2, int *a3)
{
  struct tagINPUTPOINTERNODE *NodeById; // rax
  int v5; // edx
  unsigned int v6; // ecx
  int v8; // eax

  NodeById = FindNodeById((unsigned __int16)this, 0, 0);
  v6 = 0;
  if ( !NodeById )
    return (unsigned int)(v5 + 1);
  if ( a2 )
    *a2 = (*((_DWORD *)NodeById + 38) & 0x200u) >> 9;
  v8 = *((_DWORD *)NodeById + 38);
  if ( (v8 & 0x80u) != 0 || (v8 & 0x100) != 0 )
    return 1;
  return v6;
}
