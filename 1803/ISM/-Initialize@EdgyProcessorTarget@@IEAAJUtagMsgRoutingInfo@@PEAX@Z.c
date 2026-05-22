/*
 * XREFs of ?Initialize@EdgyProcessorTarget@@IEAAJUtagMsgRoutingInfo@@PEAX@Z @ 0x1800B3864
 * Callers:
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800B3090 (-OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialSt.c)
 * Callees:
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAX@Z @ 0x1800B3B3C (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAX@Z.c)
 *     ??0GestureSession@@AEAA@XZ @ 0x1800DAFEC (--0GestureSession@@AEAA@XZ.c)
 *     ??0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z @ 0x1800DF41C (--0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EdgyProcessorTarget::Initialize(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 result; // rax
  TouchInfoAdapter *v9; // rax
  bool v10; // r8
  TouchInfoAdapter *v11; // rbx
  TouchInfoAdapter *v12; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  GestureSession *v20; // rax
  GestureSession *v21; // rbx
  GestureSession *v22; // rax
  _OWORD v23[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+50h] [rbp-28h]

  v6 = a1 + 18;
  v7 = a1[18];
  if ( v7 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  result = CoreUICreate(v6);
  if ( (int)result >= 0 )
  {
    v9 = (TouchInfoAdapter *)malloc(0x2D0uLL);
    v11 = v9;
    if ( v9 )
      memset_0(v9, 0, 0x2D0uLL);
    if ( v11 )
      v11 = TouchInfoAdapter::TouchInfoAdapter(
              v11,
              (struct ITouchInfoAdapterClient *)((unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL)),
              v10);
    v12 = (TouchInfoAdapter *)a1[16];
    if ( v12 != v11 )
    {
      v13 = a1[16];
      if ( v11 )
      {
        (*(void (__fastcall **)(TouchInfoAdapter *))(*(_QWORD *)v11 + 8LL))(v11);
        v13 = a1[16];
      }
      a1[16] = v11;
      v12 = v11;
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        v12 = (TouchInfoAdapter *)a1[16];
      }
    }
    if ( !v12 )
      return 2147942414LL;
    v14 = malloc(0x70uLL);
    v15 = v14;
    if ( v14 )
      memset_0(v14, 0, 0x70uLL);
    if ( v15 )
    {
      v16 = a1[16];
      *(_QWORD *)v15 = &RefCountedObject::`vftable';
      v15[2] = 1;
      *(_QWORD *)v15 = &SessionBasedPointerDeviceArbitration::`vftable';
      *((_QWORD *)v15 + 2) = v16;
      v15[26] = 0;
      *((_WORD *)v15 + 54) = 0;
      memset_0(v15 + 6, 0, 0x50uLL);
    }
    v17 = (_DWORD *)a1[15];
    if ( v17 != v15 )
    {
      v18 = a1[15];
      if ( v15 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 8LL))(v15);
        v18 = a1[15];
      }
      a1[15] = v15;
      v17 = v15;
      if ( v18 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        v17 = (_DWORD *)a1[15];
      }
    }
    if ( !v17 )
      return 2147942414LL;
    v19 = a1[17];
    if ( v19 )
    {
      a1[17] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    a1[17] = 0LL;
    v20 = (GestureSession *)malloc(0x4B0uLL);
    v21 = v20;
    if ( v20 )
      memset_0(v20, 0, 0x4B0uLL);
    v22 = v21 ? GestureSession::GestureSession(v21) : 0LL;
    if ( v22 )
    {
      a1[17] = v22;
      v23[0] = *(_OWORD *)a2;
      v23[1] = *(_OWORD *)(a2 + 16);
      v24 = *(_QWORD *)(a2 + 32);
      return EdgyProcessorTarget::UpdateInputTarget(a1, v23, a3);
    }
    else
    {
      return 2147942414LL;
    }
  }
  return result;
}
