/*
 * XREFs of HmgAlloc @ 0x1C0095E80
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0037088 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C0037300 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 * Callees:
 *     HmgDecProcessHandleCount @ 0x1C002F18C (HmgDecProcessHandleCount.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C002F230 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0032F44 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     FreeObject @ 0x1C0037CE0 (FreeObject.c)
 *     AllocateObject @ 0x1C003C340 (AllocateObject.c)
 *     HmgIncProcessHandleCount @ 0x1C0076CF8 (HmgIncProcessHandleCount.c)
 *     ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0078568 (-RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 */

struct HOBJ__ *__fastcall HmgAlloc(size_t a1, unsigned __int8 a2, unsigned int a3)
{
  unsigned __int16 v3; // si
  int v5; // r14d
  struct OBJECT *Object; // rbp
  unsigned int v7; // ebx
  __int64 ThreadWin32Thread; // rax
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // rax
  int v13; // edx
  GdiHandleManager *v14; // rcx
  int v15; // r8d
  struct HOBJ__ *v16; // rbx
  struct _BASEOBJECT *v17; // rdx
  __int64 v18; // rcx
  unsigned int v20; // [rsp+58h] [rbp+10h] BYREF

  v3 = a3;
  LOWORD(a3) = ~(_WORD)a3;
  v5 = a2;
  Object = (struct OBJECT *)AllocateObject(a1, a2, (a3 >> 2) & 1);
  if ( !Object )
    return 0LL;
  v7 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( !ThreadWin32Thread || (v3 & 0x10) != 0 )
    v12 = 0LL;
  else
    v12 = *(_QWORD *)(ThreadWin32Thread + 72);
  if ( v12 )
    v7 = *(_DWORD *)(v12 + 8);
  GreAcquireHmgrSemaphore(v10, v9, v11);
  if ( (v3 & 8) == 0 && !(unsigned int)HmgIncProcessHandleCount(v7, v13, v15) )
  {
LABEL_16:
    GreReleaseHmgrSemaphore((__int64)v14);
    FreeObject((__int64)Object, v5);
    return 0LL;
  }
  v20 = 0;
  if ( !GdiHandleManager::AcquireEntryIndex(v14, &v20) )
  {
    if ( (v3 & 8) == 0 )
      HmgDecProcessHandleCount(v7);
    goto LABEL_16;
  }
  v16 = ENTRYOBJ::hSetup(Object, a2, v3, v20);
  RECHMGRCREATE(v16, v17);
  if ( (v3 & 3) != 0 )
    v16 = Object;
  GreReleaseHmgrSemaphore(v18);
  return v16;
}
