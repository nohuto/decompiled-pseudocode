/*
 * XREFs of ?FindMeterControlForEndpoint@CMeterHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180065BD4
 * Callers:
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800665E8 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180008A30 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qS @ 0x180066790 (WPP_SF_qS.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMeterHardware::FindMeterControlForEndpoint(
        CMeterHardware *this,
        struct IUnknown *a2,
        struct IPartsList *a3)
{
  struct IUnknown *v6; // rcx
  int v7; // ebx
  CAudioDGProcess *v8; // rcx
  struct IUnknown *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  LPVOID pv; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v14; // [rsp+38h] [rbp-18h]
  __int64 v15; // [rsp+40h] [rbp-10h]
  int v16; // [rsp+88h] [rbp+38h] BYREF
  struct IUnknown *v17; // [rsp+98h] [rbp+48h] BYREF

  v15 = -2LL;
  v6 = 0LL;
  v17 = 0LL;
  v16 = 0;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_118e7498cb42378e567ca6442fb0db3b_Traceguids, this);
    v6 = v17;
  }
  if ( a2 )
  {
    v14 = 0LL;
    pv = 0LL;
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64))a2->lpVtbl[1].QueryInterface)(
           a2,
           &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
           23LL);
    if ( v7 >= 0 )
    {
      v7 = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))a2->lpVtbl[1].Release)(a2, &pv);
      if ( v7 >= 0 )
      {
        v8 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control )
        {
          if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qS(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              14,
              (unsigned int)&WPP_118e7498cb42378e567ca6442fb0db3b_Traceguids,
              (_DWORD)this,
              (__int64)pv);
            v8 = WPP_GLOBAL_Control;
          }
          if ( v8 != (CAudioDGProcess *)&WPP_GLOBAL_Control
            && (*((_DWORD *)v8 + 7) & 0x10000) != 0
            && *((_BYTE *)v8 + 25) >= 4u )
          {
            WPP_SF_q(*((_QWORD *)v8 + 2), 15LL, &WPP_118e7498cb42378e567ca6442fb0db3b_Traceguids, this);
          }
        }
        v9 = v17;
        if ( v17 != a2 )
        {
          ATL::AtlComQIPtrAssign(&v17, a2, &GUID_419e19f7_d318_4c05_b705_2f17133c55da);
          v9 = v17;
        }
        if ( !v9 || (v7 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v9->lpVtbl[3].Release)(v9, &v16), v7 >= 0) )
        {
          v10 = *v14;
          v11 = v16
              ? (*(__int64 (__fastcall **)(__int64 *, struct IPartsList *, GUID *, GUID *, char *))(v10 + 72))(
                  v14,
                  a3,
                  &GUID_35caf6e4_f3b3_4168_bb4b_55e77a461c7e,
                  &GUID_dd79923c_0599_45e0_b8b6_c8df7db6e796,
                  (char *)this + 32)
              : (*(unsigned __int64 (__fastcall **)(__int64 *, struct IPartsList *, GUID *, char *))(v10 + 32))(
                  v14,
                  a3,
                  &GUID_dd79923c_0599_45e0_b8b6_c8df7db6e796,
                  (char *)this + 32);
          v7 = v11;
          if ( v11 >= 0 )
          {
            if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                16LL,
                &WPP_118e7498cb42378e567ca6442fb0db3b_Traceguids,
                this);
            }
            v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, char *))(**((_QWORD **)this + 4) + 104LL))(
                   *((_QWORD *)this + 4),
                   23LL,
                   &GUID_dd79923c_0599_45e0_b8b6_c8df7db6e796,
                   (char *)this + 40);
          }
        }
      }
    }
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    if ( v7 < 0 )
      AudSrvTraceLoggingErrorHelper("CMeterHardware::FindMeterControlForEndpoint", 328, v7);
    if ( v14 )
      (*(void (__fastcall **)(__int64 *))(*v14 + 16))(v14);
    v6 = v17;
  }
  else
  {
    v7 = -2147467261;
  }
  if ( v6 )
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
  return (unsigned int)v7;
}
