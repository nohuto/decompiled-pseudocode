/*
 * XREFs of ?RouteNextInputToTarget@GestureTargetingTarget@@QEAAJ_KPEAX1AEBUtagMsgRoutingInfo@@@Z @ 0x18001529C
 * Callers:
 *     ?RouteInputToTarget@GestureTargetingComponent@@AEAAJIPEAX0_KAEBUtagMsgRoutingInfo@@IPEAI@Z @ 0x180014120 (-RouteInputToTarget@GestureTargetingComponent@@AEAAJIPEAX0_KAEBUtagMsgRoutingInfo@@IPEAI@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     McTemplateU0q @ 0x180012F64 (McTemplateU0q.c)
 *     ?InContactPointersPresent@GestureTargetingTarget@@AEAA_NPEAUInputInfo@@@Z @ 0x180015B14 (-InContactPointersPresent@GestureTargetingTarget@@AEAA_NPEAUInputInfo@@@Z.c)
 *     ?CheckAndSendCaptureEnded@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z @ 0x180015BAC (-CheckAndSendCaptureEnded@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?DropInvalidContacts@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z @ 0x180015D9C (-DropInvalidContacts@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?DropDepartingContacts@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z @ 0x180015F40 (-DropDepartingContacts@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?CreateRoutingTarget@GestureTargetingTarget@@AEAAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget@@@Z @ 0x18001608C (-CreateRoutingTarget@GestureTargetingTarget@@AEAAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget.c)
 *     ?Enqueue@?$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJAEBUChainedTarget@GestureTargetingTarget@@@Z @ 0x1800162D8 (-Enqueue@-$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJAEBUChainedTarget@G.c)
 *     ?MoveToTail@?$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJI@Z @ 0x1800164A4 (-MoveToTail@-$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJI@Z.c)
 *     ?Tail@?$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJPEAPEAUChainedTarget@GestureTargetingTarget@@@Z @ 0x18001670C (-Tail@-$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJPEAPEAUChainedTarget@G.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GestureTargetingTarget::RouteNextInputToTarget(
        GestureTargetingTarget *this,
        __int64 a2,
        void *a3,
        void *a4,
        const struct tagMsgRoutingInfo *a5)
{
  GestureTargetingTarget *v6; // rdi
  char v7; // al
  int v8; // r9d
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r9d
  __int64 v13; // rcx
  GestureTargetingTarget *v14; // rcx
  __int64 v15; // rcx
  struct IInputTarget *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // r14
  char *v19; // r13
  int v20; // eax
  __int64 v21; // rcx
  int v22; // r9d
  __int64 v23; // rcx
  GestureTargetingTarget *v24; // rcx
  GestureTargetingTarget *v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  unsigned int v28; // ebx
  unsigned int v29; // r12d
  unsigned int v30; // r14d
  __int64 (__fastcall ***v31)(_QWORD, GUID *, struct IInputTarget **); // rcx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  struct IInputTarget *v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  _OWORD *v43; // rax
  __int64 v44; // rcx
  char v45; // al
  _QWORD v47[366]; // [rsp+38h] [rbp-B70h] BYREF
  __int64 v48; // [rsp+BB0h] [rbp+8h] BYREF
  struct IInputTarget *v49; // [rsp+BB8h] [rbp+10h] BYREF
  _QWORD *v50; // [rsp+BC0h] [rbp+18h] BYREF

  v6 = this;
  v48 = 0LL;
  v50 = 0LL;
  *((_QWORD *)this + 14) = a2;
  *((_QWORD *)this + 15) = a3;
  if ( !*((_DWORD *)this + 15) )
  {
    v7 = Microsoft_OneCore_MinInputEnableBits;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 4, 155, 5);
      v7 = Microsoft_OneCore_MinInputEnableBits;
    }
    if ( (v7 & 2) == 0 )
      goto LABEL_7;
    v8 = 282;
    goto LABEL_6;
  }
  v9 = *((_QWORD *)this + 5) + 2848LL * *((unsigned int *)this + 13);
  v48 = 0LL;
  if ( !*((_DWORD *)this + 21) )
  {
    v10 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 4))(
            *((_QWORD *)this + 4),
            &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
            &v48);
    if ( v10 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_15;
      v12 = 296;
      goto LABEL_14;
    }
    v11 = v48;
    if ( !v48 )
    {
      LOBYTE(v10) = -1;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v12 = 300;
LABEL_14:
        McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 4, v12, v10);
        goto LABEL_15;
      }
      goto LABEL_15;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, const struct tagMsgRoutingInfo *, void *))(*(_QWORD *)v48 + 32LL))(
           v48,
           a5,
           a4) )
    {
      v15 = *((_QWORD *)v6 + 4);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      v16 = (struct IInputTarget *)*((_QWORD *)v6 + 4);
    }
    else
    {
      v49 = 0LL;
      v10 = GestureTargetingTarget::CreateRoutingTarget(v14, a5, a4, &v49);
      if ( v10 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v12 = 326;
          goto LABEL_14;
        }
LABEL_15:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v16 = v49;
      a4 = 0LL;
    }
    v47[0] = v16;
    v10 = DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::Enqueue((char *)v6 + 64, v47);
    if ( v10 >= 0 )
    {
      v10 = DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::Tail((char *)v6 + 64, &v50);
      if ( v10 >= 0 )
      {
        v17 = v48;
        if ( v48 )
        {
          v48 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        v18 = v50;
        goto LABEL_105;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v12 = 334;
        goto LABEL_14;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v12 = 333;
      goto LABEL_14;
    }
    goto LABEL_15;
  }
  v19 = (char *)this + 64;
  v20 = DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::Tail((char *)this + 64, &v50);
  if ( v20 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v22 = 340;
      goto LABEL_43;
    }
    goto LABEL_44;
  }
  v23 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v18 = v50;
  v20 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v50)(
          *v50,
          &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
          &v48);
  if ( v20 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v22 = 344;
      goto LABEL_43;
    }
    goto LABEL_44;
  }
  v21 = v48;
  if ( !v48 )
  {
    LOBYTE(v20) = -1;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v22 = 348;
      goto LABEL_43;
    }
    goto LABEL_44;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, const struct tagMsgRoutingInfo *, void *))(*(_QWORD *)v48 + 32LL))(
         v48,
         a5,
         a4) )
  {
    goto LABEL_103;
  }
  if ( !GestureTargetingTarget::InContactPointersPresent(v24, (struct InputInfo *)(v18 + 1)) )
  {
    *((_BYTE *)v18 + 2856) = 0;
    goto LABEL_63;
  }
  *((_BYTE *)v18 + 2856) = 1;
  *((_DWORD *)v18 + 137) = 2;
  v26 = GestureTargetingTarget::DropDepartingContacts(v25, (struct InputInfo *)(v18 + 1));
  v28 = v26;
  if ( v26 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v18 + 24LL))(*v18, v18 + 1);
    *(_DWORD *)(v9 + 540) = 1;
LABEL_63:
    v29 = *((_DWORD *)v6 + 21);
    if ( v29 <= 1 )
    {
LABEL_92:
      v49 = 0LL;
      v20 = GestureTargetingTarget::CreateRoutingTarget(v25, a5, a4, &v49);
      if ( v20 >= 0 )
      {
        v47[0] = v49;
        v20 = DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::Enqueue(v19, v47);
        if ( v20 >= 0 )
        {
          a4 = 0LL;
          goto LABEL_99;
        }
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v22 = 474;
          goto LABEL_43;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v22 = 470;
        goto LABEL_43;
      }
LABEL_44:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v49 = 0LL;
    v30 = 0;
    while ( 1 )
    {
      v49 = 0LL;
      if ( v30 >= *((_DWORD *)v19 + 5) )
        break;
      v31 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **))(*(_QWORD *)v19
                                                                               + 2864LL
                                                                               * ((v30 + *((_DWORD *)v19 + 3))
                                                                                % *((_DWORD *)v19 + 2)));
      v32 = (**v31)(v31, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v49);
      if ( v32 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v33, &MinInput_Warning_CheckResult, 4, 415, v32);
        goto LABEL_89;
      }
      if ( !v49 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 4, 419, 255);
        goto LABEL_89;
      }
      if ( (*(unsigned __int8 (__fastcall **)(struct IInputTarget *, const struct tagMsgRoutingInfo *, void *))(*(_QWORD *)v49 + 32LL))(
             v49,
             a5,
             a4) )
      {
        v34 = DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::MoveToTail(v19, v30);
        if ( v34 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v35, &MinInput_Warning_CheckResult, 4, 430, v34);
          goto LABEL_89;
        }
        v36 = v49;
        if ( v49 )
        {
          v49 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v36 + 16LL))(v36);
        }
        if ( a4 && (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
          McTemplateU0q((__int64)v36, &MinInput_Log_PointerFrameRouting_ReroutedToTarget);
LABEL_99:
        v20 = DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::Tail(v19, &v50);
        if ( v20 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v22 = 479;
LABEL_43:
            McTemplateU0qqq(v21, &MinInput_Warning_CheckResult, 4, v22, v20);
          }
          goto LABEL_44;
        }
        v18 = v50;
LABEL_103:
        v38 = v48;
        if ( v48 )
        {
          v48 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
        }
LABEL_105:
        if ( a4 )
        {
          v39 = GestureTargetingTarget::DropInvalidContacts(v6, (struct InputInfo *)v9);
          v28 = v39;
          if ( v39 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v40, &MinInput_Warning_CheckResult, 4, 485, v39);
            goto LABEL_121;
          }
        }
        if ( *((_DWORD *)v6 + 21) > 1u )
        {
          v41 = GestureTargetingTarget::CheckAndSendCaptureEnded(v6, (struct InputInfo *)v9);
          if ( v41 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v42, &MinInput_Warning_CheckResult, 4, 496, v41);
            goto LABEL_7;
          }
        }
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v18 + 24LL))(*v18, v9);
        v43 = v18 + 1;
        v44 = 22LL;
        do
        {
          *v43 = *(_OWORD *)v9;
          v43[1] = *(_OWORD *)(v9 + 16);
          v43[2] = *(_OWORD *)(v9 + 32);
          v43[3] = *(_OWORD *)(v9 + 48);
          v43[4] = *(_OWORD *)(v9 + 64);
          v43[5] = *(_OWORD *)(v9 + 80);
          v43[6] = *(_OWORD *)(v9 + 96);
          v43 += 8;
          *(v43 - 1) = *(_OWORD *)(v9 + 112);
          v9 += 128LL;
          --v44;
        }
        while ( v44 );
        *v43 = *(_OWORD *)v9;
        v43[1] = *(_OWORD *)(v9 + 16);
        this = (GestureTargetingTarget *)*((unsigned int *)v6 + 15);
        if ( (_DWORD)this )
        {
          *((_DWORD *)v6 + 13) = (unsigned int)(*((_DWORD *)v6 + 13) + 1) % *((_DWORD *)v6 + 12);
          *((_DWORD *)v6 + 15) = (_DWORD)this - 1;
          v28 = 0;
          goto LABEL_121;
        }
        v45 = Microsoft_OneCore_MinInputEnableBits;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, (_DWORD)this + 4, (_DWORD)this + 93, 5);
          v45 = Microsoft_OneCore_MinInputEnableBits;
        }
        if ( (v45 & 2) == 0 )
        {
LABEL_7:
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v8 = 504;
LABEL_6:
        McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 4, v8, 5);
        goto LABEL_7;
      }
      v25 = v49;
      if ( v49 )
      {
        v49 = 0LL;
        (*(void (__fastcall **)(GestureTargetingTarget *))(*(_QWORD *)v25 + 16LL))(v25);
      }
      if ( ++v30 >= v29 )
        goto LABEL_92;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq((__int64)v25, &MinInput_Warning_CheckResult, 4, 175, 87);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v37, &MinInput_Warning_CheckResult, 4, 411, 87);
    }
LABEL_89:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v27, &MinInput_Warning_CheckResult, 4, 381, v26);
  v13 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
LABEL_121:
  if ( a4 )
    CloseHandle(a4);
  return v28;
}
