/*
 * XREFs of ??0CTouchProcessor@@QEAA@XZ @ 0x1C000753C
 * Callers:
 *     InputInitialize @ 0x1C000650C (InputInitialize.c)
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x1C012A488 (--0CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     CreateKernelSemaphore @ 0x1C00085A0 (CreateKernelSemaphore.c)
 *     ?InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z @ 0x1C00086A0 (-InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z.c)
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C0012EBC (--0CSpatialProcessor@@QEAA@XZ.c)
 */

CTouchProcessor *__fastcall CTouchProcessor::CTouchProcessor(CTouchProcessor *this)
{
  struct _ERESOURCE *PoolWithTag; // rax
  __int64 KernelSemaphore; // rax
  void *v5; // rcx

  CSpatialProcessor::CSpatialProcessor(this);
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  CBaseProcessor::InitRecorderLog(this, L"CTouchProcessor");
  *((_QWORD *)this + 36) = (char *)this + 280;
  *((_QWORD *)this + 35) = (char *)this + 280;
  *((_DWORD *)this + 68) = 1;
  *((_QWORD *)this + 38) = (char *)this + 296;
  *((_QWORD *)this + 37) = (char *)this + 296;
  *((_QWORD *)this + 40) = (char *)this + 312;
  *((_QWORD *)this + 39) = (char *)this + 312;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_WORD *)this + 164) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  *((_QWORD *)this + 28) = PoolWithTag;
  if ( PoolWithTag && ExInitializeResourceLite(PoolWithTag) >= 0 )
  {
    KernelSemaphore = CreateKernelSemaphore(0, 0x7FFFFFFF);
    *((_QWORD *)this + 29) = KernelSemaphore;
    if ( KernelSemaphore )
      return this;
    ExDeleteResourceLite(*((PERESOURCE *)this + 28));
  }
  v5 = (void *)*((_QWORD *)this + 28);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *((_QWORD *)this + 28) = 0LL;
  }
  return this;
}
