/*
 * XREFs of ??0CTouchProcessor@@QEAA@XZ @ 0x1C006E1C4
 * Callers:
 *     InputInitialize @ 0x1C006DA98 (InputInitialize.c)
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x1C012AD38 (--0CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     CreateKernelSemaphore @ 0x1C0058750 (CreateKernelSemaphore.c)
 *     ??0CBaseProcessor@@QEAA@XZ @ 0x1C006F49C (--0CBaseProcessor@@QEAA@XZ.c)
 *     ?InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z @ 0x1C006F548 (-InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z.c)
 */

CTouchProcessor *__fastcall CTouchProcessor::CTouchProcessor(CTouchProcessor *this)
{
  struct _ERESOURCE *PoolWithTag; // rax
  struct _KSEMAPHORE *KernelSemaphore; // rax
  void *v5; // rcx

  CBaseProcessor::CBaseProcessor(this);
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  CBaseProcessor::InitRecorderLog(this, L"CTouchProcessor");
  *((_QWORD *)this + 33) = (char *)this + 256;
  *((_QWORD *)this + 32) = (char *)this + 256;
  *((_DWORD *)this + 62) = 1;
  *((_QWORD *)this + 35) = (char *)this + 272;
  *((_QWORD *)this + 34) = (char *)this + 272;
  *((_QWORD *)this + 37) = (char *)this + 288;
  *((_QWORD *)this + 36) = (char *)this + 288;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_WORD *)this + 152) = 2;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  *((_QWORD *)this + 25) = PoolWithTag;
  if ( PoolWithTag && ExInitializeResourceLite(PoolWithTag) >= 0 )
  {
    KernelSemaphore = CreateKernelSemaphore(0, 0x7FFFFFFF);
    *((_QWORD *)this + 26) = KernelSemaphore;
    if ( KernelSemaphore )
      return this;
    ExDeleteResourceLite(*((PERESOURCE *)this + 25));
  }
  v5 = (void *)*((_QWORD *)this + 25);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *((_QWORD *)this + 25) = 0LL;
  }
  return this;
}
