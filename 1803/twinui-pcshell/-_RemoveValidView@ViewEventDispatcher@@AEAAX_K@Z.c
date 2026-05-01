/*
 * XREFs of ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x180031E9C
 * Callers:
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x180035B2C (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x1801D1190 (-v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18000C304 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolic.c)
 *     ?_FindPerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x18003152C (-_FindPerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-$CRefCounte.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@WRL@Microsoft@@IEAAKXZ @ 0x1800912CC (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@WRL@M.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z @ 0x1801D0C38 (-_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z.c)
 *     ?_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x1801D0CF8 (-_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV-$CRefCountedObject@UPerApplicationData.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewEventDispatcher::_RemoveValidView(ViewEventDispatcher *this, unsigned __int64 a2)
{
  int PerApplicationData; // eax
  __int64 v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventDispatcher::PerApplicationData>>::InternalRelease(&v8);
  PerApplicationData = ViewEventDispatcher::_FindPerApplicationData(
                         (__int64)this,
                         *(ViewWrapperBase **)(*((_QWORD *)this + 46) + 8 * a2),
                         &v8);
  if ( PerApplicationData < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC46,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)PerApplicationData,
      -2);
  }
  else
  {
    v5 = v8;
    if ( (*(_QWORD *)(v8 + 16))-- == 1LL )
    {
      ViewEventDispatcher::_RemovePendingActivationsForAppId(this, (const struct Windows::Internal::String *)(v5 + 8));
      ViewEventDispatcher::_RemovePerApplicationData(this, v5);
    }
  }
  CTSimpleArray<Microsoft::WRL::ComPtr<IViewWrapperInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IViewWrapperInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IViewWrapperInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IViewWrapperInternal>>>::RemoveAt(
    (_QWORD *)this + 46,
    a2);
  Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventDispatcher::PerApplicationData>>::InternalRelease(&v8);
}
