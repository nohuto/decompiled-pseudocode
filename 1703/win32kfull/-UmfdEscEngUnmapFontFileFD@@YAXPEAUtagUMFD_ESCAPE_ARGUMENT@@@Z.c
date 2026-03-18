/*
 * XREFs of ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C013F3BC
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0091110 (UmfdDispatchEscape.c)
 * Callees:
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00227F8 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C00275DC (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     EngUnmapFontFileFD @ 0x1C00FCCB0 (EngUnmapFontFileFD.c)
 */

void __fastcall UmfdEscEngUnmapFontFileFD(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  __int64 v2; // rcx
  int v3; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR iFile; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  AutoSharedPushLock::AutoSharedPushLock((AutoSharedPushLock *)&v5, (struct _EX_PUSH_LOCK *)&UmfdFileViewPushLock);
  iFile = 0LL;
  if ( UmfdFileviewLookup )
  {
    v3 = *((_DWORD *)a1 + 2);
    if ( NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v2, &v3, &iFile) )
      EngUnmapFontFileFD(iFile);
  }
  if ( v5 )
  {
    GreReleasePushLockShared(v5);
    KeLeaveCriticalRegion();
  }
}
