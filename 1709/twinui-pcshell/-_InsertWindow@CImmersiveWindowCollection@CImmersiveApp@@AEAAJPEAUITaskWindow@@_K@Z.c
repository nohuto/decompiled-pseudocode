/*
 * XREFs of ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x18005B550
 * Callers:
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18005A208 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x18005A410 (-AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerI.c)
 *     ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x18005B664 (-_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z.c)
 * Callees:
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001ADC0 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x180072024 (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_InsertWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct ITaskWindow *a2,
        unsigned __int64 a3)
{
  struct ITaskWindow *v6; // rbx
  _QWORD *v7; // rsi
  int v8; // ebp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r8
  struct ITaskWindow **v12; // rcx
  struct ITaskWindow *v14; // [rsp+60h] [rbp+8h] BYREF

  v6 = a2;
  v14 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = (_QWORD *)((char *)this + 152);
  v8 = 0;
  v9 = *((_QWORD *)this + 20);
  if ( a3 >= v9 )
    v9 = a3;
  v10 = v9 + 1;
  if ( v9 + 1 <= *((_QWORD *)this + 22)
    || (v8 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
               (__int64)this + 152,
               v9 + 1),
        v8 >= 0) )
  {
    v11 = *((_QWORD *)this + 20);
    if ( a3 < v11 )
      memmove((void *)(*v7 + 8 * a3 + 8), (const void *)(*v7 + 8 * a3), 8 * (v11 - a3));
    *((_QWORD *)this + 20) = v10;
    v12 = (struct ITaskWindow **)(*v7 + 8 * a3);
    if ( v12 )
    {
      *v12 = 0LL;
      if ( v12 != &v14 )
      {
        *v12 = a2;
        v6 = 0LL;
      }
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v8 >= 0 )
    CSplashScreen::OnViewAdded(*((CSplashScreen **)this + 29), a2);
  (*(void (__fastcall **)(struct ITaskWindow *, _QWORD))(*(_QWORD *)a2 + 248LL))(a2, 0LL);
  return (unsigned int)v8;
}
