/*
 * XREFs of ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C027C0DC
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0036F60 (UmfdDispatchEscape.c)
 * Callees:
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C00B4D5C (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     ??1AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C01430F0 (--1AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     ??0AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C0143120 (--0AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     EngGetFileChangeTime @ 0x1C0258490 (EngGetFileChangeTime.c)
 */

void __fastcall UmfdEscEngGetFileChangeTime(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  volatile void **v1; // rbx
  __int64 v2; // rcx
  LARGE_INTEGER pChangeTime; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF
  HANDLE h; // [rsp+50h] [rbp+18h] BYREF
  char *v6; // [rsp+58h] [rbp+20h]

  v1 = (volatile void **)((char *)a1 + 8);
  v6 = (char *)a1 + 8;
  AutoSharedUmfdFileViewLock::AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)&v4);
  h = 0LL;
  if ( UmfdFileviewLookup
    && (pChangeTime.LowPart = *(_DWORD *)v1,
        NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v2, &pChangeTime, &h))
    && EngGetFileChangeTime(h, &pChangeTime) )
  {
    AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)&v4);
    ProbeForWrite(v1[1], 8uLL, 4u);
    *(LARGE_INTEGER *)v1[1] = pChangeTime;
    *(_DWORD *)v1 = 1;
  }
  else
  {
    *(_DWORD *)v1 = 0;
    AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)&v4);
  }
}
