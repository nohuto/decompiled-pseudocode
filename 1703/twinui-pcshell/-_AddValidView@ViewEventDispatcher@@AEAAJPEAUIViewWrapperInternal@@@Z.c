/*
 * XREFs of ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x1800F9DD0
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800F189C (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x1800F32D4 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1800F76FC (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x1800F7A78 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001A030 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ?_FindPerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x1800FA054 (-_FindPerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-$CRefCounte.c)
 *     ?_CreatePerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x1800FA104 (-_CreatePerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-$CRefCoun.c)
 *     ?_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x1800FA2F4 (-_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV-$CRefCountedObject@UPerApplicationData.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::_AddValidView(ViewEventDispatcher *this, struct IViewWrapperInternal *a2)
{
  struct IViewWrapperInternal *v2; // rbx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // edi
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  struct IViewWrapperInternal **v9; // rdx
  __int64 v10; // rcx
  __int128 v12; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-18h] BYREF
  char v14; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v16; // [rsp+80h] [rbp+30h] BYREF
  struct IViewWrapperInternal *v17; // [rsp+88h] [rbp+38h] BYREF

  v2 = a2;
  v16 = 0LL;
  if ( (int)ViewEventDispatcher::_FindPerApplicationData(this, a2, &v16) >= 0 )
    goto LABEL_6;
  v4 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = ViewEventDispatcher::_CreatePerApplicationData(this, v2, &v16);
  v6 = v5;
  if ( v5 >= 0 )
  {
LABEL_6:
    *(_QWORD *)&v12 = &v16;
    *((_QWORD *)&v12 + 1) = this;
    wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v13, &v12);
    v17 = v2;
    if ( v2 )
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v2 + 8LL))(v2);
    v7 = (_QWORD *)((char *)this + 296);
    v6 = 0;
    v8 = v7[1];
    if ( v8 != v7[3]
      || (v6 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
                 (__int64)v7,
                 v8 + 1),
          v6 >= 0) )
    {
      v9 = (struct IViewWrapperInternal **)(*v7 + 8 * v7[1]++);
      if ( v9 )
      {
        *v9 = 0LL;
        if ( v9 != &v17 )
        {
          *v9 = v2;
          v2 = 0LL;
        }
      }
    }
    if ( v2 )
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v2 + 16LL))(v2);
    if ( v6 >= 0 )
    {
      ++*(_QWORD *)(v16 + 16);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xD0B,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v6);
    }
    if ( v14 && !*(_QWORD *)(*(_QWORD *)v13[0] + 16LL) )
      ViewEventDispatcher::_RemovePerApplicationData(v13[1]);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xCFE,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v5);
  }
  v10 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v6;
}
