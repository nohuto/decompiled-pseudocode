/*
 * XREFs of ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x180010340
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800122B4 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z @ 0x18006F61C (--0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Win32kInterop::DeliverInputToTarget(
        Win32kInterop *this,
        struct InputInfo *a2,
        int (__fastcall ***a3)(struct IInputTarget *, GUID *, __int64))
{
  _DWORD *v6; // rax
  void *v7; // rbx
  __int64 i; // r8
  void *v9; // rcx
  int (__fastcall **v10)(struct IInputTarget *, GUID *, __int64); // rbx
  __int64 v11; // rax
  int v12; // r15d
  const char *v13; // r9
  __int64 v14; // rdx
  unsigned __int64 j; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rbx
  __int64 v19; // rdx
  __int64 *v20; // r8
  __int64 *v21; // rax
  PointerInfoAdapter *v22; // rax
  bool v23; // r8
  PointerInfoAdapter *v24; // rbp
  PointerInfoAdapter *v25; // r14
  __int64 v26; // rcx
  int v27; // eax
  _DWORD *v28; // rax
  void *v29; // r14
  __int64 k; // r8
  __int64 v31; // rbx
  unsigned int v32; // ebx
  __int64 v33; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  PointerInfoAdapter *v36; // [rsp+80h] [rbp+18h]
  __int64 v37; // [rsp+88h] [rbp+20h] BYREF

  v37 = 0LL;
  if ( !a3 )
  {
    v6 = operator new[](saturated_mul(*((unsigned int *)a2 + 12), 4uLL));
    v7 = v6;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 12); i = (unsigned int)(i + 1) )
      v6[i] = *((_DWORD *)a2 + 12 * i + 14);
    MITSetManipulationInputTarget(*((unsigned int *)a2 + 13));
    v9 = v7;
    goto LABEL_36;
  }
  v10 = *a3;
  v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFocusInputTarget>>(&v37);
  if ( (*v10)((struct IInputTarget *)a3, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, v11) >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 88LL))(v37);
    if ( v12 )
    {
      v13 = (const char *)*((unsigned int *)a2 + 1);
      LODWORD(v36) = *((_DWORD *)a2 + 1);
      v14 = 0xCBF29CE484222325uLL;
      for ( j = 0LL; j < 4; ++j )
        v14 = 0x100000001B3LL * (*((unsigned __int8 *)&v36 + j) ^ (unsigned __int64)v14);
      v16 = v14 & *((_QWORD *)this + 16);
      v17 = *((_QWORD *)this + 13);
      v18 = *(__int64 **)(v17 + 16 * v16);
      v19 = 2 * v16;
      v20 = v18;
      while ( 1 )
      {
        v21 = v20 == *((__int64 **)this + 11) ? (__int64 *)*((_QWORD *)this + 11) : **(__int64 ***)(v17 + 8 * v19 + 8);
        if ( v18 == v21 )
          break;
        if ( *((_DWORD *)v18 + 4) == (_DWORD)v13 )
          goto LABEL_17;
        v18 = (__int64 *)*v18;
      }
      v18 = (__int64 *)*((_QWORD *)this + 11);
LABEL_17:
      if ( v18 == *((__int64 **)this + 11) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x4EE,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
          v13);
        __debugbreak();
      }
      if ( !v18[7] )
      {
        v22 = (PointerInfoAdapter *)malloc(0x60uLL);
        v24 = v22;
        if ( v22 )
          memset(v22, 0, 0x60uLL);
        v36 = v24;
        if ( v24 )
          v25 = PointerInfoAdapter::PointerInfoAdapter(
                  v24,
                  (struct IPointerInfoAdapterClient *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 16) >> 64)),
                  v23);
        else
          v25 = 0LL;
        if ( (PointerInfoAdapter *)v18[7] != v25 )
        {
          if ( v25 )
            (*(void (__fastcall **)(PointerInfoAdapter *))(*(_QWORD *)v25 + 8LL))(v25);
          v26 = v18[7];
          v18[7] = (__int64)v25;
          if ( v26 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
      *((_DWORD *)this + 36) = v12;
      *((_QWORD *)this + 19) = *((_QWORD *)a2 + 3);
      v27 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v18[7] + 24LL))(v18[7], a2);
      if ( v27 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x4F8,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
          (const char *)(unsigned int)v27);
        __debugbreak();
      }
      *((_DWORD *)this + 36) = 0;
      *((_QWORD *)this + 19) = 0LL;
      goto LABEL_37;
    }
    v28 = operator new[](saturated_mul(*((unsigned int *)a2 + 12), 4uLL));
    v29 = v28;
    for ( k = 0LL; (unsigned int)k < *((_DWORD *)a2 + 12); k = (unsigned int)(k + 1) )
      v28[k] = *((_DWORD *)a2 + 12 * k + 14);
    v31 = v37;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 72LL))(v37);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 80LL))(v31);
    MITSetManipulationInputTarget(*((unsigned int *)a2 + 13));
    v9 = v29;
LABEL_36:
    operator delete(v9);
LABEL_37:
    v32 = 0;
    goto LABEL_39;
  }
  v32 = ((__int64 (__fastcall *)(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64), struct InputInfo *))(*a3)[3])(
          a3,
          a2);
LABEL_39:
  v33 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  return v32;
}
