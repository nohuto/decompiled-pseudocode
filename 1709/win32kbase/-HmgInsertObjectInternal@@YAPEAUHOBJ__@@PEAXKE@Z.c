/*
 * XREFs of ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0051BC0
 * Callers:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C001C9A0 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001E250 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C001E590 (NtGdiCreateRectRgn.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0046D44 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0053E50 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0048CA0 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C00495E4 (-RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C004E190 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0051618 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCount @ 0x1C0053EA4 (HmgIncProcessHandleCount.c)
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C0053FEC (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFC28 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectInternal(struct _BASEOBJECT *a1, unsigned __int16 a2, char a3)
{
  struct HOBJ__ *v6; // rdi
  unsigned int v7; // ebp
  __int64 ThreadWin32Thread; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // rdx
  GdiHandleManager *v13; // rcx
  __int64 v14; // rdx
  int v15; // r8d
  struct HOBJ__ *v16; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  v7 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
    ThreadWin32Thread = *(_QWORD *)(ThreadWin32Thread + 72);
  if ( ThreadWin32Thread )
    v7 = *(_DWORD *)(ThreadWin32Thread + 8);
  GreAcquireHmgrSemaphore(v10, v9, v11);
  if ( (a2 & 8) != 0 || (unsigned int)HmgIncProcessHandleCount(v7, v12) )
  {
    v20 = 0;
    if ( GdiHandleManager::AcquireEntryIndex(v13, &v20) )
    {
      v16 = ENTRYOBJ::hSetup(a1, a3, a2, v20);
      v6 = v16;
      if ( gbGdiHmgrStacks && gpentHmgrStacks )
        RECSTACKBACKTRACE((unsigned __int16)v16 | ((unsigned int)v16 >> 8) & 0xFF0000);
      if ( a3 == 5 )
      {
        if ( (a2 & 2) != 0 )
          RECALTLOCK(v6, a1);
        v18 = *((_QWORD *)a1 + 77);
        v19 = 0LL;
      }
      else
      {
        if ( a3 != 16 )
          goto LABEL_11;
        v18 = *((_QWORD *)a1 + 19);
        v19 = 2LL;
      }
      TrackObjectReferenceInitialization(v19, v18, *((unsigned int *)a1 + 2));
      goto LABEL_11;
    }
    if ( (a2 & 8) == 0 )
      HmgDecProcessHandleCount(v7, v14, v15);
  }
LABEL_11:
  GreReleaseHmgrSemaphore((int)v13, v14, v15);
  return v6;
}
