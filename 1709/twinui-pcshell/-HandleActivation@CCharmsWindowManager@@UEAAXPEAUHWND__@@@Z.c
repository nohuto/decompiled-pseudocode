/*
 * XREFs of ?HandleActivation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x18003C850
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180017FB0 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?InsertAt@?$CTSimpleArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@_K@Z @ 0x180018028 (-InsertAt@-$CTSimpleArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTaskMe.c)
 *     ??$FindEx@VCTaskWindowFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCTaskWindowFinder@@AEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18003D018 (--$FindEx@VCTaskWindowFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$C.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CCharmsWindowManager::HandleActivation(CCharmsWindowManager *this, unsigned __int64 a2, __int64 a3)
{
  char v5; // di
  char v6; // r14
  char v7; // r15
  __int64 *v8; // r13
  __int64 v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // r12
  __int64 v12; // rcx
  bool v13; // di
  __int64 v14; // rdi
  bool v15; // sf
  int v16; // eax
  HWND v17; // [rsp+38h] [rbp-20h] BYREF
  __int64 v18; // [rsp+40h] [rbp-18h]
  unsigned __int64 v19; // [rsp+A0h] [rbp+48h] BYREF
  unsigned __int64 v20; // [rsp+A8h] [rbp+50h]
  __int64 v21; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+60h]

  v20 = a2;
  if ( *((_QWORD *)this + 4) )
  {
    v5 = 1;
    v6 = *((_BYTE *)this + 56) & 1;
    v7 = 0;
    v8 = (__int64 *)((char *)this + 24);
    v9 = **((_QWORD **)this + 3);
    v22 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v17 = (HWND)a2;
    v18 = 0LL;
    v21 = 0LL;
    v10 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITaskWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::FindEx<CTaskWindowFinder>(
            v8,
            &v17,
            a3,
            &v19);
    v11 = v19;
    if ( v10 < 0 )
    {
      v5 = 0;
    }
    else
    {
      if ( v19 || (*((_BYTE *)this + 56) & 1) == 0 )
      {
        v7 = 1;
        if ( v19 )
          goto LABEL_14;
      }
      else
      {
        v7 = 0;
      }
      v6 = 0;
    }
    if ( !v7 )
    {
      if ( !v6 )
      {
LABEL_30:
        *((_DWORD *)this + 14) &= ~8u;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        return;
      }
      goto LABEL_15;
    }
LABEL_14:
    if ( !v6 )
    {
      v12 = 0LL;
      goto LABEL_17;
    }
LABEL_15:
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
LABEL_17:
    v17 = (HWND)v12;
    v18 = v20 & -(__int64)(v5 != 0);
    v13 = (*(int (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 8) + 56LL))(*((_QWORD *)this + 8), &v17) >= 0;
    LOBYTE(v19) = v13;
    if ( v7 )
    {
      v14 = *(_QWORD *)(*v8 + 8 * v11);
      v21 = v14;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v15 = (*(int (__fastcall **)(__int64))(*(_QWORD *)v14 + 120LL))(v14) < 0;
      v16 = 2;
      if ( !v15 )
        v16 = 3;
      *((_DWORD *)this + 14) |= v16;
      if ( v11 )
      {
        CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
          v8,
          v11);
        CTSimpleArray<Microsoft::WRL::ComPtr<ITaskWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::InsertAt(
          v8,
          &v21,
          0LL);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v13 = v19;
    }
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 112LL))(v9);
      if ( !v7 )
        *((_DWORD *)this + 14) = 0;
    }
    if ( v13 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 64LL))(*((_QWORD *)this + 8));
    goto LABEL_30;
  }
}
