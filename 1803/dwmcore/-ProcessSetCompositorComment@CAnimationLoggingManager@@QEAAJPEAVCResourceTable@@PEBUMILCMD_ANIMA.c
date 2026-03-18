/*
 * XREFs of ?ProcessSetCompositorComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT@@PEBXI@Z @ 0x18018106C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800CF704 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetCompositorComment(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT *a3,
        size_t *a4)
{
  unsigned int v5; // ebx
  void *v6; // rcx
  unsigned __int16 *v9; // rax
  unsigned __int16 *v10; // rsi
  int v11; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v5 = 0;
  v6 = (void *)*((_QWORD *)this + 19);
  if ( v6 )
  {
    operator delete(v6);
    *((_QWORD *)this + 19) = 0LL;
  }
  if ( a4 )
  {
    v9 = (unsigned __int16 *)operator new(saturated_mul(*((unsigned int *)a3 + 2), 2uLL));
    v10 = v9;
    if ( v9 )
    {
      v11 = StringCchCopyW(v9, *((unsigned int *)a3 + 2), a4);
      if ( v11 < 0 )
        ModuleFailFastForHRESULT(v11, retaddr);
      *((_QWORD *)this + 19) = v10;
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x11Cu);
    }
  }
  return v5;
}
