/*
 * XREFs of ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180021AF0
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z @ 0x180022550 (-DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z @ 0x1800225A0 (-DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     McTemplateU0qqqq @ 0x180005A78 (McTemplateU0qqqq.c)
 *     McTemplateU0qqqqqqq @ 0x180005B08 (McTemplateU0qqqqqqq.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z @ 0x180009424 (-GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z.c)
 *     McTemplateU0qq @ 0x180012EF8 (McTemplateU0qq.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x180022128 (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::DeliverInput(DWMInputTarget *this, struct InputInfo *a2)
{
  struct InputInfo *v2; // rbx
  int v4; // edi
  int v5; // r14d
  char v6; // al
  int v7; // r9d
  int PointersFromInput; // eax
  __int64 v9; // rdx
  int v10; // r9d
  unsigned int i; // r14d
  int *v13; // rcx
  __int64 v14; // rcx
  char *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  struct IInputDeliveryServer *v23; // rcx
  __int128 v24; // xmm1
  int v25; // eax
  unsigned int v26; // [rsp+50h] [rbp-BB8h] BYREF
  int v27; // [rsp+58h] [rbp-BB0h] BYREF
  char v28; // [rsp+60h] [rbp-BA8h] BYREF
  struct Pointer *v29[10]; // [rsp+B80h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C08h] [rbp+0h]

  v2 = a2;
  v4 = 0;
  if ( a2 )
  {
    v5 = *(_DWORD *)a2 & 0x3B;
    if ( v5 )
    {
      if ( *((_QWORD *)this + 10) || *((_BYTE *)this + 152) )
      {
        PointersFromInput = DWMInputTarget::AddDwmInputRoutingData(this, a2);
        v4 = PointersFromInput;
        if ( PointersFromInput < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_24;
          v10 = 417;
          goto LABEL_23;
        }
      }
      else
      {
        *((_QWORD *)a2 + 71) = 0LL;
        *((_QWORD *)a2 + 70) = 1065353216LL;
        *(_QWORD *)((char *)a2 + 580) = 1065353216LL;
        *((_QWORD *)a2 + 75) = 1065353216LL;
        *((_DWORD *)a2 + 155) = 1065353216;
        *((_DWORD *)a2 + 144) = 0;
        *(_QWORD *)((char *)a2 + 588) = 0LL;
        *((_DWORD *)a2 + 149) = 0;
        *((_QWORD *)a2 + 76) = 0LL;
        *((_DWORD *)a2 + 154) = 0;
      }
    }
    v6 = Microsoft_OneCore_MinInputEnableBits;
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    {
      McTemplateU0qqqq(
        (__int64)this,
        &MinInput_Log_InputInfo,
        3,
        *(_DWORD *)v2,
        *((_DWORD *)v2 + 1),
        *((_DWORD *)v2 + 2));
      v6 = Microsoft_OneCore_MinInputEnableBits;
    }
    if ( !*((_BYTE *)this + 152) && (v6 & 4) != 0 )
    {
      McTemplateU0qqq((__int64)this, &MinInput_Log_InputInfo_Routing, 3, *((_DWORD *)this + 20), *((_DWORD *)this + 18));
      v6 = Microsoft_OneCore_MinInputEnableBits;
    }
    if ( v5 && (v6 & 4) != 0 )
    {
      v7 = *((_DWORD *)v2 + 135);
      v26 = 0;
      if ( v7 )
        McTemplateU0qq((__int64)this, &MinInput_Log_InputInfo_CaptureFlags, 3, v7);
      PointersFromInput = GetPointersFromInput(v2, (__int64)a2, v29, &v26);
      v4 = PointersFromInput;
      if ( PointersFromInput < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_24;
        v10 = 473;
LABEL_23:
        McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 3, v10, PointersFromInput);
        goto LABEL_24;
      }
      for ( i = 0; i < v26; ++i )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
        {
          v13 = (int *)v29[i];
          McTemplateU0qqqqqqq((__int64)v13, v9, 3, *v13, v13[1], v13[3], v13[4], v13[5], v13[6]);
        }
      }
    }
    v14 = 22LL;
    v27 = 4;
    v15 = &v28;
    do
    {
      v16 = *((_OWORD *)v2 + 1);
      *(_OWORD *)v15 = *(_OWORD *)v2;
      v17 = *((_OWORD *)v2 + 2);
      *((_OWORD *)v15 + 1) = v16;
      v18 = *((_OWORD *)v2 + 3);
      *((_OWORD *)v15 + 2) = v17;
      v19 = *((_OWORD *)v2 + 4);
      *((_OWORD *)v15 + 3) = v18;
      v20 = *((_OWORD *)v2 + 5);
      *((_OWORD *)v15 + 4) = v19;
      v21 = *((_OWORD *)v2 + 6);
      *((_OWORD *)v15 + 5) = v20;
      v22 = *((_OWORD *)v2 + 7);
      v2 = (struct InputInfo *)((char *)v2 + 128);
      *((_OWORD *)v15 + 6) = v21;
      v15 += 128;
      *((_OWORD *)v15 - 1) = v22;
      --v14;
    }
    while ( v14 );
    v23 = InputDeliveryServer::s_pInputDeliveryServer;
    v24 = *((_OWORD *)v2 + 1);
    *(_OWORD *)v15 = *(_OWORD *)v2;
    *((_OWORD *)v15 + 1) = v24;
    v25 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, int *, __int64))(*(_QWORD *)v23 + 48LL))(
            v23,
            (char *)this + 96,
            &v27,
            2856LL);
    if ( v25 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x1EE,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
        (const char *)(unsigned int)v25);
      JUMPOUT(0x180021E08LL);
    }
LABEL_24:
    if ( v4 >= 0 )
      return (unsigned int)v4;
    goto LABEL_25;
  }
  v4 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 3, 408, 87);
LABEL_25:
  if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    McTemplateU0qq((__int64)this, &MinInput_Log_InputInfo_DeliveryFailure, 3, v4);
  return (unsigned int)v4;
}
