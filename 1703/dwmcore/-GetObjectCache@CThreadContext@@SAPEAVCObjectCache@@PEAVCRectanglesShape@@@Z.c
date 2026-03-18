/*
 * XREFs of ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x1800C45BC
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18007258C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1800C456C (--2CRectanglesShape@@SAPEAX_K@Z.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180094270 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

struct CObjectCache *__fastcall CThreadContext::GetObjectCache(struct CRectanglesShape *a1)
{
  int Current; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  Current = CThreadContext::GetCurrent(&v4);
  if ( Current < 0 )
  {
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
    JUMPOUT(0x180124570LL);
  }
  return (struct CThreadContext *)((char *)v4 + 8);
}
