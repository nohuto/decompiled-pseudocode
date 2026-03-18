/*
 * XREFs of ?CopyStackFrames@FxTagTracker@@AEAAXPEAPEAUFxTagTrackingStackFrames@@GPEAPEAX@Z @ 0x1C0082C94
 * Callers:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 */

void __fastcall FxTagTracker::CopyStackFrames(
        FxTagTracker *this,
        FxTagTrackingStackFrames **StackFrames,
        unsigned __int16 NumFrames,
        void **Frames)
{
  char *v4; // r10
  FxTagTrackingStackFrames *v8; // rax
  __int64 v9; // rcx
  signed __int64 v10; // r10
  void *Caller; // [rsp+38h] [rbp+0h]

  v4 = (char *)*StackFrames;
  if ( !*StackFrames )
  {
    v8 = (FxTagTrackingStackFrames *)FxPoolAllocator(
                                       this->m_Globals,
                                       &this->m_Globals->FxPoolFrameworks,
                                       ExDefaultNonPagedPoolType,
                                       0x88uLL,
                                       this->m_Globals->Tag,
                                       Caller);
    v4 = (char *)v8;
    if ( !v8 )
      return;
    *StackFrames = v8;
  }
  v9 = NumFrames;
  *(_WORD *)v4 = NumFrames;
  if ( NumFrames )
  {
    v10 = v4 - (char *)Frames;
    do
    {
      *(void **)((char *)Frames + v10 + 8) = *Frames;
      ++Frames;
      --v9;
    }
    while ( v9 );
  }
}
