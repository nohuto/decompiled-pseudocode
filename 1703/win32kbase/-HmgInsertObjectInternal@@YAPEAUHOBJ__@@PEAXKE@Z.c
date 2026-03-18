/*
 * XREFs of ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C003F540
 * Callers:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C003DD04 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     GreCreateRectRgnIndirect @ 0x1C003F3D0 (GreCreateRectRgnIndirect.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C003F4EC (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 * Callees:
 *     HmgDecProcessHandleCount @ 0x1C002F18C (HmgDecProcessHandleCount.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C002F230 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0032F44 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     HmgIncProcessHandleCount @ 0x1C0076CF8 (HmgIncProcessHandleCount.c)
 *     ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0078568 (-RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C007BC14 (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00EBBCC (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectInternal(struct OBJECT *a1, unsigned __int16 a2, char a3)
{
  struct HOBJ__ *v6; // rdi
  unsigned int v7; // ebp
  __int64 ThreadWin32Thread; // rax
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // rdx
  GdiHandleManager *v13; // rcx
  __int64 v14; // r8
  struct _BASEOBJECT *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v19; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  v7 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
    ThreadWin32Thread = *(_QWORD *)(ThreadWin32Thread + 72);
  if ( ThreadWin32Thread )
    v7 = *(_DWORD *)(ThreadWin32Thread + 8);
  GreAcquireHmgrSemaphore(v10, v9, v11);
  if ( (a2 & 8) != 0 || (unsigned int)HmgIncProcessHandleCount(v7, v12, v14) )
  {
    v19 = 0;
    if ( GdiHandleManager::AcquireEntryIndex(v13, &v19) )
    {
      v6 = ENTRYOBJ::hSetup(a1, a3, a2, v19);
      RECHMGRCREATE(v6, v15);
      if ( a3 == 5 )
      {
        if ( (a2 & 2) != 0 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
          RECALTLOCKSTACKBACKTRACE((unsigned __int16)v6 | ((unsigned int)v6 >> 8) & 0xFF0000, a1);
        v16 = *((_QWORD *)a1 + 77);
        v17 = 0LL;
        goto LABEL_16;
      }
      if ( a3 == 16 )
      {
        v16 = *((_QWORD *)a1 + 19);
        v17 = 2LL;
LABEL_16:
        TrackObjectReferenceInitialization(v17, v16, *((unsigned int *)a1 + 2));
      }
    }
    else if ( (a2 & 8) == 0 )
    {
      HmgDecProcessHandleCount(v7);
    }
  }
  GreReleaseHmgrSemaphore((__int64)v13);
  return v6;
}
