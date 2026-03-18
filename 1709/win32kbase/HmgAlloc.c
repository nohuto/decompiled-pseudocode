/*
 * XREFs of HmgAlloc @ 0x1C0054040
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0054F7C (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C0055210 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     AllocateObject @ 0x1C0047B40 (AllocateObject.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0048CA0 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C004E190 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0051618 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCount @ 0x1C0053EA4 (HmgIncProcessHandleCount.c)
 *     ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0053FCC (-RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     FreeObject @ 0x1C0054E50 (FreeObject.c)
 */

struct HOBJ__ *__fastcall HmgAlloc(size_t a1, unsigned __int8 a2, unsigned int a3)
{
  unsigned __int16 v3; // si
  unsigned int v5; // r14d
  struct OBJECT *Object; // rbp
  unsigned int v7; // ebx
  __int64 ThreadWin32Thread; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // rax
  int v13; // edx
  GdiHandleManager *v14; // rcx
  int v15; // r8d
  __int64 v16; // rdx
  int v17; // r8d
  struct HOBJ__ *v18; // rbx
  struct _BASEOBJECT *v19; // rdx
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // r8d
  unsigned int v24; // [rsp+58h] [rbp+10h] BYREF

  v3 = a3;
  LOWORD(a3) = ~(_WORD)a3;
  v5 = a2;
  Object = (struct OBJECT *)AllocateObject(a1, a2, (a3 >> 2) & 1);
  if ( !Object )
    return 0LL;
  v7 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread && (v3 & 0x10) == 0 )
    v12 = *(_QWORD *)(ThreadWin32Thread + 72);
  else
    v12 = 0LL;
  if ( v12 )
    v7 = *(_DWORD *)(v12 + 8);
  GreAcquireHmgrSemaphore(v10, v9, v11);
  if ( (v3 & 8) == 0 && !(unsigned int)HmgIncProcessHandleCount(v7, v13, v15) )
  {
LABEL_17:
    GreReleaseHmgrSemaphore((int)v14, v16, v17);
    FreeObject(Object, v5);
    return 0LL;
  }
  v24 = 0;
  if ( !GdiHandleManager::AcquireEntryIndex(v14, &v24) )
  {
    if ( (v3 & 8) == 0 )
      HmgDecProcessHandleCount(v7, v16, v17);
    goto LABEL_17;
  }
  v18 = ENTRYOBJ::hSetup(Object, a2, v3, v24);
  RECHMGRCREATE(v18, v19);
  if ( (v3 & 3) != 0 )
    v18 = Object;
  GreReleaseHmgrSemaphore(v21, v20, v22);
  return v18;
}
