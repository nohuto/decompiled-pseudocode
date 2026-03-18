/*
 * XREFs of ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z @ 0x18018610C
 * Callers:
 *     ??_GCWARPDrawListEntry@@EEAAPEAXI@Z @ 0x18015EA80 (--_GCWARPDrawListEntry@@EEAAPEAXI@Z.c)
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z @ 0x18015EACC (-Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180094270 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

struct CObjectCache *__fastcall CThreadContext::GetObjectCache(struct CWARPDrawListEntry *a1)
{
  int Current; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  Current = CThreadContext::GetCurrent(&v4);
  if ( Current < 0 )
  {
    ModuleFailFastForHRESULT(Current, retaddr);
    __debugbreak();
  }
  return (struct CThreadContext *)((char *)v4 + 40);
}
