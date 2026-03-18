/*
 * XREFs of ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C027F66C
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0091110 (UmfdDispatchEscape.c)
 * Callees:
 *     ??1AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C001EB80 (--1AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C00275DC (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     ??0AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C013C2D8 (--0AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     EngGetFilePath @ 0x1C0256AB0 (EngGetFilePath.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C027F418 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall UmfdEscEngGetFilePath(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  volatile void **v1; // rbx
  __int64 v2; // rcx
  int v3; // [rsp+20h] [rbp-258h] BYREF
  _BYTE v4[8]; // [rsp+28h] [rbp-250h] BYREF
  HANDLE h[4]; // [rsp+30h] [rbp-248h] BYREF
  WCHAR pDest[261]; // [rsp+50h] [rbp-228h] BYREF

  v1 = (volatile void **)((char *)a1 + 8);
  h[1] = (char *)a1 + 8;
  AutoSharedUmfdFileViewLock::AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)v4);
  h[0] = 0LL;
  if ( UmfdFileviewLookup
    && (v3 = *(_DWORD *)v1, NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v2, &v3, h))
    && EngGetFilePath(h[0], (WCHAR (*)[261])pDest) )
  {
    AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)v4);
    ProbeForWrite(v1[1], 0x20AuLL, 2u);
    if ( (int)RtlStringCchCopyW((char *)v1[1], 522LL, (char *)pDest) < 0 )
      *(_DWORD *)v1 = 0;
    *(_DWORD *)v1 = 1;
  }
  else
  {
    *(_DWORD *)v1 = 0;
    AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)v4);
  }
}
