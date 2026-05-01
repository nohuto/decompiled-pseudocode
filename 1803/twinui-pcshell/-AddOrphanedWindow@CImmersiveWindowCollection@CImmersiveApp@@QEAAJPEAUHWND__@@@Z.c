/*
 * XREFs of ?AddOrphanedWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x18012D174
 * Callers:
 *     ?HandleWindowBecameUnowned@CImmersiveApp@@UEAAJPEAUHWND__@@@Z @ 0x18012ED80 (-HandleWindowBecameUnowned@CImmersiveApp@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_MakeRoomAt@?$CTSimpleArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1800F8E8C (-_MakeRoomAt@-$CTSimpleArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x1801342B8 (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Micro.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddOrphanedWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2)
{
  __int64 v3; // rbx
  int RoomAt; // ebx
  IMalloc *v5; // r8
  unsigned __int64 v6; // rdi
  __int64 *v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-69h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-61h] BYREF
  __int128 v11; // [rsp+38h] [rbp-59h] BYREF
  __int64 v12; // [rsp+48h] [rbp-49h]
  _OWORD v13[2]; // [rsp+50h] [rbp-41h] BYREF
  int v14; // [rsp+70h] [rbp-21h]
  _QWORD v15[2]; // [rsp+78h] [rbp-19h] BYREF
  int v16; // [rsp+88h] [rbp-9h]
  int v17; // [rsp+8Ch] [rbp-5h]
  __int128 v18; // [rsp+90h] [rbp-1h]
  __int128 v19; // [rsp+A0h] [rbp+Fh]
  __int128 v20; // [rsp+B0h] [rbp+1Fh]
  int v21; // [rsp+C0h] [rbp+2Fh]
  __int64 v22; // [rsp+C8h] [rbp+37h]
  int v23; // [rsp+D0h] [rbp+3Fh]
  int v24; // [rsp+D4h] [rbp+43h]

  v12 = -2LL;
  v11 = 0uLL;
  v3 = *((_QWORD *)this + 18);
  v15[0] = a2;
  v15[1] = 0LL;
  v16 = 3;
  v17 = 0;
  v18 = 0uLL;
  memset_0(v13, 0, 0x24uLL);
  v19 = v13[0];
  v20 = v13[1];
  v21 = v14;
  v22 = (v3 + 112) & -(__int64)(v3 != 0);
  v23 = 3;
  v24 = 15;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  *(_QWORD *)&v11 = v15;
  v9 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  RoomAt = Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,TASKWINDOW_INIT_DATA const * const &>(
             &v10,
             &v11);
  if ( RoomAt >= 0 )
    RoomAt = (**v10)(v10, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  if ( RoomAt >= 0 )
  {
    v6 = *((_QWORD *)this + 31);
    RoomAt = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::_MakeRoomAt(
               (_QWORD *)this + 30,
               v6,
               v5);
    if ( RoomAt >= 0 )
    {
      v7 = (__int64 *)(*((_QWORD *)this + 30) + 8 * v6);
      if ( v7 )
      {
        *v7 = v9;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v7);
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return (unsigned int)RoomAt;
}
