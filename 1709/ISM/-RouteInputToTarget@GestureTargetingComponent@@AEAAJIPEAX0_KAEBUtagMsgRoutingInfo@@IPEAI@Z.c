/*
 * XREFs of ?RouteInputToTarget@GestureTargetingComponent@@AEAAJIPEAX0_KAEBUtagMsgRoutingInfo@@IPEAI@Z @ 0x180014120
 * Callers:
 *     ?RouteInputToTargetStatic@GestureTargetingComponent@@SAJPEAX@Z @ 0x180013720 (-RouteInputToTargetStatic@GestureTargetingComponent@@SAJPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     McTemplateU0qqqqq @ 0x180012DA8 (McTemplateU0qqqqq.c)
 *     McTemplateU0q @ 0x180012F64 (McTemplateU0q.c)
 *     ?SetValueForKey@?$DynamicSizeMap@IUInputFrame@GestureTargetingComponent@@$04@@QEAAJAEBIAEBUInputFrame@GestureTargetingComponent@@@Z @ 0x18001471C (-SetValueForKey@-$DynamicSizeMap@IUInputFrame@GestureTargetingComponent@@$04@@QEAAJAEBIAEBUInput.c)
 *     ?GetLastTarget@GestureTargetingTarget@@QEAAJ_KPEAXPEAPEAUIDCompInputTarget@@@Z @ 0x1800151AC (-GetLastTarget@GestureTargetingTarget@@QEAAJ_KPEAXPEAPEAUIDCompInputTarget@@@Z.c)
 *     ?RouteNextInputToTarget@GestureTargetingTarget@@QEAAJ_KPEAX1AEBUtagMsgRoutingInfo@@@Z @ 0x18001529C (-RouteNextInputToTarget@GestureTargetingTarget@@QEAAJ_KPEAX1AEBUtagMsgRoutingInfo@@@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@I_N$09@@QEAAJAEBIAEB_N@Z @ 0x180016794 (-SetValueForKey@-$DynamicSizeMap@I_N$09@@QEAAJAEBIAEB_N@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GestureTargetingComponent::RouteInputToTarget(
        GestureTargetingComponent *this,
        int a2,
        GestureTargetingTarget *a3,
        void *a4,
        GestureTargetingTarget *a5,
        const struct tagMsgRoutingInfo *a6,
        unsigned int a7,
        unsigned int *a8)
{
  GestureTargetingTarget *v8; // rdi
  char *v10; // r14
  unsigned int v11; // edx
  unsigned int v12; // r12d
  GestureTargetingTarget *v13; // r15
  int LastTarget; // eax
  struct IDCompInputTarget *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // ebx
  int v19; // ebx
  __int64 v21; // rsi
  GestureTargetingTarget *v22; // r12
  int v23; // r8d
  __int64 v24; // rdx
  int v25; // esi
  char v26; // bl
  int v27; // r9d
  GestureTargetingTarget *v28; // rbx
  GestureTargetingTarget *v29; // r8
  GestureTargetingTarget *v30; // rdi
  int InputToTarget; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  GestureTargetingComponent *v34; // r8
  __int64 v35; // rbx
  GestureTargetingComponent *v36; // rax
  unsigned int v37; // ebx
  int v38; // eax
  __int64 v39; // rcx
  char v41[8]; // [rsp+40h] [rbp-108h] BYREF
  struct IDCompInputTarget *v42; // [rsp+48h] [rbp-100h] BYREF
  void *v43; // [rsp+50h] [rbp-F8h] BYREF
  int v44; // [rsp+58h] [rbp-F0h] BYREF
  GestureTargetingTarget *v45[11]; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v46; // [rsp+B8h] [rbp-90h] BYREF
  __int128 v47; // [rsp+C8h] [rbp-80h]
  GestureTargetingTarget *v48; // [rsp+D8h] [rbp-70h]
  _BYTE v49[40]; // [rsp+E0h] [rbp-68h] BYREF

  v45[10] = (GestureTargetingTarget *)-2LL;
  v8 = a3;
  v44 = a2;
  v43 = a4;
  v46 = *(_OWORD *)a6;
  v47 = *((_OWORD *)a6 + 1);
  v48 = (GestureTargetingTarget *)*((_QWORD *)a6 + 4);
  v10 = (char *)this + 80;
  if ( a2 == *((_DWORD *)this + 24) )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 4, 116, 87);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v11 = 0;
  if ( !*((_DWORD *)this + 22) )
  {
LABEL_72:
    v26 = 5;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_76;
    McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 4, 133, 5);
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_76;
    v27 = 701;
    goto LABEL_75;
  }
  this = *(GestureTargetingComponent **)v10;
  while ( *((_DWORD *)this + 22 * v11) != a2 )
  {
    if ( ++v11 >= *((_DWORD *)v10 + 2) )
      goto LABEL_72;
  }
  *(_OWORD *)v45 = *(_OWORD *)((char *)this + 88 * v11 + 8);
  *(_OWORD *)&v45[2] = *(_OWORD *)((char *)this + 88 * v11 + 24);
  *(_OWORD *)&v45[4] = *(_OWORD *)((char *)this + 88 * v11 + 40);
  *(_OWORD *)&v45[6] = *(_OWORD *)((char *)this + 88 * v11 + 56);
  *(_OWORD *)&v45[8] = *(_OWORD *)((char *)this + 88 * v11 + 72);
  v12 = a7;
  if ( !a3 || v43 )
  {
    v13 = a5;
  }
  else
  {
    v42 = 0LL;
    v13 = a5;
    LastTarget = GestureTargetingTarget::GetLastTarget(v45[0], (unsigned __int64)a5, a3, &v42);
    v15 = v42;
    if ( LastTarget >= 0 && v42 )
    {
      v16 = (*(__int64 (__fastcall **)(struct IDCompInputTarget *, _BYTE *))(*(_QWORD *)v42 + 96LL))(v42, v49);
      v46 = *(_OWORD *)v16;
      v47 = *(_OWORD *)(v16 + 16);
      v48 = *(GestureTargetingTarget **)(v16 + 32);
      v17 = (*(__int64 (__fastcall **)(struct IDCompInputTarget *))(*(_QWORD *)v15 + 80LL))(v15);
      v18 = NtDuplicateCompositionInputSink(v17, &v43);
      if ( v18 < 0 )
      {
        v19 = v18 | 0x10000000;
        if ( v19 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 4, 720, v19);
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
      }
    }
    else
    {
      v13 = 0LL;
      v8 = 0LL;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
      McTemplateU0qqqqq(
        (__int64)this,
        &MinInput_Log_PointerFrameRouting_InvalidTargetRecovery,
        4,
        a2,
        (char)v8,
        (char)v13,
        a7);
    if ( v15 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(struct IDCompInputTarget *))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  if ( a7 )
  {
    v21 = a7;
    v22 = v45[0];
    do
    {
      if ( v8 )
      {
        v23 = *a8;
        LODWORD(v42) = v23;
        this = (GestureTargetingTarget *)((char *)v22 + 88);
        if ( v23 == *((_DWORD *)v22 + 26) || (v24 = 0LL, !*((_DWORD *)v22 + 24)) )
        {
LABEL_36:
          v41[0] = 1;
          DynamicSizeMap<unsigned int,bool,10>::SetValueForKey(this, &v42, v41);
        }
        else
        {
          while ( *(_DWORD *)(*(_QWORD *)this + 8 * v24) != v23 )
          {
            v24 = (unsigned int)(v24 + 1);
            if ( (unsigned int)v24 >= *((_DWORD *)v22 + 24) )
              goto LABEL_36;
          }
        }
      }
      ++a8;
      --v21;
    }
    while ( v21 );
    v12 = a7;
  }
  v25 = HIDWORD(v45[1]);
  if ( v12 > HIDWORD(v45[1]) )
  {
    v26 = 1;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_76;
    v27 = 756;
    goto LABEL_75;
  }
  if ( LODWORD(v45[1]) != HIDWORD(v45[1]) )
  {
    v28 = v45[8];
    if ( v8 && v45[8] )
    {
      if ( v8 == v45[8] )
        goto LABEL_50;
      if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
        McTemplateU0q((__int64)this, &MinInput_Log_PointerFrameRouting_FrameSplitting);
      v8 = v28;
    }
    if ( v8 == v28 )
    {
LABEL_50:
      if ( v45[9] )
      {
        CloseHandle(v45[9]);
        v45[9] = 0LL;
      }
      goto LABEL_56;
    }
    if ( v28 )
    {
      v13 = v45[2];
      v8 = v28;
      v46 = *(_OWORD *)&v45[3];
      v47 = *(_OWORD *)&v45[5];
      v48 = v45[7];
      v43 = v45[9];
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
      McTemplateU0q((__int64)this, &MinInput_Log_PointerFrameRouting_PartialNullRouting);
  }
LABEL_56:
  if ( v25 == v12 )
  {
    v29 = v8;
    v30 = v45[0];
    InputToTarget = GestureTargetingTarget::RouteNextInputToTarget(
                      v45[0],
                      (unsigned __int64)v13,
                      v29,
                      v43,
                      (const struct tagMsgRoutingInfo *)&v46);
    if ( InputToTarget < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v32, &MinInput_Warning_CheckResult, 4, 823, InputToTarget);
      goto LABEL_76;
    }
    v33 = 0LL;
    if ( *((_DWORD *)v10 + 2) )
    {
      v34 = *(GestureTargetingComponent **)v10;
      while ( *((_DWORD *)v34 + 22 * (unsigned int)v33) != a2 )
      {
        v33 = (unsigned int)(v33 + 1);
        if ( (unsigned int)v33 >= *((_DWORD *)v10 + 2) )
          goto LABEL_66;
      }
      v35 = 88LL * (unsigned int)v33;
      *(_DWORD *)((char *)v34 + v35) = *((_DWORD *)v10 + 4);
      memset(v45, 0, 0x50uLL);
      v36 = *(GestureTargetingComponent **)v10;
      *(_OWORD *)((char *)v36 + v35 + 8) = *(_OWORD *)v45;
      *(_OWORD *)((char *)v36 + v35 + 24) = *(_OWORD *)&v45[2];
      *(_OWORD *)((char *)v36 + v35 + 40) = *(_OWORD *)&v45[4];
      *(_OWORD *)((char *)v36 + v35 + 56) = *(_OWORD *)&v45[6];
      *(_OWORD *)((char *)v36 + v35 + 72) = *(_OWORD *)&v45[8];
      --*((_DWORD *)v10 + 3);
      v37 = 0;
      (*(void (__fastcall **)(GestureTargetingTarget *))(*(_QWORD *)v30 + 16LL))(v30);
      return v37;
    }
LABEL_66:
    v26 = 5;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_76;
    McTemplateU0qqq(v33, &MinInput_Warning_CheckResult, 4, 221, 5);
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_76;
    v27 = 829;
LABEL_75:
    McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 4, v27, v26);
    goto LABEL_76;
  }
  v45[8] = v8;
  *(_OWORD *)&v45[3] = v46;
  *(_OWORD *)&v45[5] = v47;
  v45[7] = v48;
  v45[2] = v13;
  v45[9] = (GestureTargetingTarget *)v43;
  HIDWORD(v45[1]) = v25 - v12;
  v38 = DynamicSizeMap<unsigned int,GestureTargetingComponent::InputFrame,5>::SetValueForKey(v10, &v44, v45);
  v37 = v38;
  if ( v38 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v39, &MinInput_Warning_CheckResult, 4, 843, v38);
LABEL_76:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  return v37;
}
