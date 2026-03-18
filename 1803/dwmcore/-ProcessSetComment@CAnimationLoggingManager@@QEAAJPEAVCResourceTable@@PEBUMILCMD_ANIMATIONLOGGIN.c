/*
 * XREFs of ?ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x180180F7C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800CF704 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x18017FD8C (-GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetComment(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT *a3,
        size_t *a4)
{
  unsigned int v6; // edi
  struct CResource *ResourceWithoutType; // rax
  CAnimationLoggingManager *v8; // r9
  struct CResource *v9; // rbx
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rbp
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // r14
  int v13; // eax
  const void *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(
                          *(CResourceTable **)(*((_QWORD *)this + 6) + 24LL),
                          *((_DWORD *)a3 + 2));
  v9 = ResourceWithoutType;
  if ( ResourceWithoutType )
  {
    DebugInfoForResource = CAnimationLoggingManager::GetDebugInfoForResource(v8, ResourceWithoutType);
    operator delete(*((void **)DebugInfoForResource + 1));
    *((_QWORD *)DebugInfoForResource + 1) = 0LL;
    if ( a4 )
    {
      v11 = (unsigned __int16 *)operator new(saturated_mul(*((unsigned int *)a3 + 3), 2uLL));
      v12 = v11;
      if ( !v11 )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xE9u);
        return v6;
      }
      v13 = StringCchCopyW(v11, *((unsigned int *)a3 + 3), a4);
      if ( v13 < 0 )
        ModuleFailFastForHRESULT(v13, retaddr);
      *((_QWORD *)DebugInfoForResource + 1) = v12;
    }
    *((_DWORD *)v9 + 8) &= ~0x10u;
    *((_DWORD *)v9 + 8) |= a4 != 0LL ? 0x10 : 0;
  }
  return v6;
}
