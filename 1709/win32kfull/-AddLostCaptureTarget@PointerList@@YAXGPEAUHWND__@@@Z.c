/*
 * XREFs of ?AddLostCaptureTarget@PointerList@@YAXGPEAUHWND__@@@Z @ 0x1C01F5720
 * Callers:
 *     ?GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z @ 0x1C01CB004 (-GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z.c)
 * Callees:
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01F5D54 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

void __fastcall PointerList::AddLostCaptureTarget(PointerList *this, __int64 a2, HWND a3)
{
  struct tagINPUTPOINTERNODE *NodeById; // rbx
  int v5; // r8d
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rdx

  NodeById = FindNodeById((unsigned __int16)this, 0, 0);
  if ( NodeById )
  {
    v6 = (_QWORD *)Win32AllocPoolZInit((unsigned int)(v5 + 24), 1851878741LL);
    if ( v6 )
    {
      v7 = (_QWORD *)((char *)NodeById + 136);
      v6[2] = a2;
      v8 = *((_QWORD *)NodeById + 17);
      if ( *(struct tagINPUTPOINTERNODE **)(v8 + 8) != (struct tagINPUTPOINTERNODE *)((char *)NodeById + 136) )
        __fastfail(3u);
      *v6 = v8;
      v6[1] = v7;
      *(_QWORD *)(v8 + 8) = v6;
      *v7 = v6;
    }
  }
}
