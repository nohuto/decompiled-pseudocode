/*
 * XREFs of ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C027F5AC
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0091110 (UmfdDispatchEscape.c)
 * Callees:
 *     ??1AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C001EB80 (--1AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C00275DC (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     ??0AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C013C2D8 (--0AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     EngGetFileChangeTime @ 0x1C0256980 (EngGetFileChangeTime.c)
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
