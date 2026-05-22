/*
 * XREFs of ??_EContextualProcessorManager@@MEAAPEAXI@Z @ 0x1800AF500
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180017550 (--1-$vector@V-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMessageProxy@@@WR.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ContextualProcessorManager *__fastcall ContextualProcessorManager::`vector deleting destructor'(
        ContextualProcessorManager *this,
        __int64 a2)
{
  char v3; // di

  *(_QWORD *)this = &ContextualProcessorManager::`vftable';
  v3 = a2;
  std::vector<Microsoft::WRL::ComPtr<IMessageProxy>>::~vector<Microsoft::WRL::ComPtr<IMessageProxy>>(
    (__int64)this + 16,
    a2);
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
