/*
 * XREFs of ?GetProperty@CInteraction@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801669F0
 * Callers:
 *     <none>
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x18018EC98 (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 */

__int64 __fastcall CInteraction::GetProperty(CInteraction *this, int a2, struct CExpressionValue *a3)
{
  int v4; // edx
  __int64 v5; // rdx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2 - 12;
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      ModuleFailFastForHRESULT(-2147024809, retaddr);
      __debugbreak();
    }
    v5 = 1LL;
  }
  else
  {
    v5 = 0LL;
  }
  *(_BYTE *)a3 = CInteractionProcessor::GetRailsEnabled((char *)this + 352, v5);
  result = 0LL;
  *((_BYTE *)a3 + 68) = 1;
  *((_DWORD *)a3 + 16) = 17;
  return result;
}
