/*
 * XREFs of ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01B6964
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01B64D8 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 * Callees:
 *     FeedbackGetWindowSetting @ 0x1C01B727C (FeedbackGetWindowSetting.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01E9DBC (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

__int64 __fastcall Feedback::GetWindowBarrelVisualizationSetting(Feedback *this, const struct tagPOINTER_INFO *a2)
{
  unsigned int v3; // ebx
  int PointerBarrelVisualization; // ecx
  struct tagINPUTPOINTERNODE *v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  struct tagINPUTPOINTERNODE *NodeById; // rax
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = 1;
  if ( (_DWORD)a2
    || ((gdwMitConfig & 4) == 0
      ? ((v5 = FindNodeById(*((_WORD *)this + 2), 0, 0)) != 0LL
       ? ((v6 = *((_DWORD *)v5 + 38), (v6 & 0x800) != 0)
        ? (PointerBarrelVisualization = (v6 & 0x400) != 0 ? 1 : -1)
        : (PointerBarrelVisualization = 0))
       : (PointerBarrelVisualization = 1))
      : (PointerBarrelVisualization = CTouchProcessor::GetPointerBarrelVisualization(
                                        gpTouchProcessor,
                                        *((_WORD *)this + 2))),
        !PointerBarrelVisualization || (*((_DWORD *)this + 3) & 0x10000) != 0) )
  {
    v7 = *((_QWORD *)this + 3);
    if ( v7 )
    {
      v8 = ValidateHwnd(v7);
      if ( v8 )
      {
        v11 = 1;
        if ( (unsigned int)FeedbackGetWindowSetting(v8, 2LL, 1LL, &v11) )
          v3 = v11;
      }
    }
    if ( (gdwMitConfig & 4) != 0 )
    {
      CTouchProcessor::SetPointerBarrelVisualization(gpTouchProcessor, *((_WORD *)this + 2), v3);
    }
    else
    {
      NodeById = FindNodeById(*((_WORD *)this + 2), 1, 0);
      if ( NodeById )
        *((_DWORD *)NodeById + 38) = *((_DWORD *)NodeById + 38) & 0xFFFFFBFF | ((v3 & 1 | 2) << 10);
    }
  }
  else
  {
    return PointerBarrelVisualization == 1;
  }
  return v3;
}
