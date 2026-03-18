/*
 * XREFs of ??0CAnimationLoggingManager@@QEAA@PEAVCComposition@@@Z @ 0x1801569CC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

CAnimationLoggingManager *__fastcall CAnimationLoggingManager::CAnimationLoggingManager(
        CAnimationLoggingManager *this,
        struct CComposition *a2)
{
  _QWORD *v3; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CAnimationLoggingManager::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v3 = operator new(0x30uLL);
  if ( !v3 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *v3 = v3;
  if ( v3 != (_QWORD *)-8LL )
    v3[1] = v3;
  if ( v3 != (_QWORD *)-16LL )
    v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 11) = v3;
  return this;
}
