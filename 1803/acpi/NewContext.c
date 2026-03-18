/*
 * XREFs of NewContext @ 0x1C0003A74
 * Callers:
 *     AsyncEvalObject @ 0x1C0002BD8 (AsyncEvalObject.c)
 *     AMLILoadDDB @ 0x1C009BE08 (AMLILoadDDB.c)
 * Callees:
 *     InitContext @ 0x1C0003B5C (InitContext.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C0003CBC (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall NewContext(PVOID *a1)
{
  unsigned int v2; // ebx
  PVOID v3; // rax
  KIRQL v4; // dl
  int v5; // eax
  KIRQL v6; // al
  _QWORD *v7; // rcx
  _UNKNOWN **v8; // rax

  v2 = 0;
  v3 = ExAllocateFromNPagedLookasideList(&AMLIContextLookAsideList);
  *a1 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x238uLL);
    v4 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
    v5 = gdwcCTObjs + 1;
    gdwcCTObjs = v5;
    if ( v5 > 0 && v5 > (unsigned int)gdwcCTObjsMax )
      gdwcCTObjsMax = v5;
    KeReleaseSpinLock(&gdwGContextSpinLock, v4);
    InitContext(*a1);
    v6 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
    v7 = off_1C00640E0;
    byte_1C0067A48 = v6;
    v8 = (_UNKNOWN **)((char *)*a1 + 16);
    if ( *off_1C00640E0 != (_UNKNOWN *)&glistCtxtHead )
      __fastfail(3u);
    *((_QWORD *)*a1 + 3) = off_1C00640E0;
    *v8 = &glistCtxtHead;
    *v7 = v8;
    off_1C00640E0 = v8;
    KeReleaseSpinLock(&gmutCtxtList, byte_1C0067A48);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
