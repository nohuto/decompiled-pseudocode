/*
 * XREFs of ?GetProperty@CInteraction@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180191D60
 * Callers:
 *     <none>
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x1801D5010 (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 */

__int64 __fastcall CInteraction::GetProperty(CInteraction *this, int a2, struct CExpressionValue *a3)
{
  int v4; // edx
  __int64 v5; // rdx
  char RailsEnabled; // al
  __int64 result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2 - 11;
  if ( v4 )
  {
    if ( v4 != 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v5 = 1LL;
  }
  else
  {
    v5 = 0LL;
  }
  RailsEnabled = CInteractionProcessor::GetRailsEnabled((char *)this + 336, v5);
  *((_DWORD *)a3 + 18) = 17;
  *(_BYTE *)a3 = RailsEnabled;
  result = 0LL;
  *((_BYTE *)a3 + 76) = 1;
  return result;
}
