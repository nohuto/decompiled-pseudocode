/*
 * XREFs of ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C01CD640
 * Callers:
 *     ?UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0002800 (-UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F9BC0 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z @ 0x1C01CD51C (-InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z.c)
 */

struct _EX_PUSH_LOCK *__fastcall InputTransform::StoreTransform(
        InputTransform *this,
        struct tagWND *a2,
        const struct tagINPUT_TRANSFORM *a3,
        unsigned __int64 *a4)
{
  struct _EX_PUSH_LOCK *result; // rax
  struct _EX_PUSH_LOCK *v7; // rbx
  __int64 v8; // rdx
  __int128 v9; // xmm1
  char v10; // [rsp+48h] [rbp+20h] BYREF

  result = InitInputTransformList(this);
  v7 = result;
  if ( result )
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v10, result);
    v8 = *((_QWORD *)v7 + 1);
    if ( (struct _EX_PUSH_LOCK *)v8 == (struct _EX_PUSH_LOCK *)((char *)v7 + 8)
      || (!a3 || *(_QWORD *)(v8 + 16) != *(_QWORD *)a3)
      && ((*((_DWORD *)v7 + 22) & 1) != 0 || RtlCompareMemory(a2, (const void *)(v8 + 24), 0x40uLL) != 64) )
    {
      *(_OWORD *)((char *)v7 + 24) = *(_OWORD *)a2;
      *(_OWORD *)((char *)v7 + 40) = *((_OWORD *)a2 + 1);
      *(_OWORD *)((char *)v7 + 56) = *((_OWORD *)a2 + 2);
      v9 = *((_OWORD *)a2 + 3);
      *((_DWORD *)v7 + 22) |= 1u;
      *(_OWORD *)((char *)v7 + 72) = v9;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v10);
    return (struct _EX_PUSH_LOCK *)1;
  }
  return result;
}
