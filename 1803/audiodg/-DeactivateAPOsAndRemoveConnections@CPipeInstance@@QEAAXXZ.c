/*
 * XREFs of ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x140009740
 * Callers:
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x140008010 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000DB40 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140015730 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x140034C70 (WPP_SF_q.c)
 *     ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x140041078 (-RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CPipeInstance::DeactivateAPOsAndRemoveConnections(CPipeInstance *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rbx
  CCrossProcessBaseServerEndpoint *v5; // rbx
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  __int64 v9; // rbp
  struct IAudioProcessor *v10; // r15
  unsigned __int64 v11; // r12
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  CCrossProcessBaseServerEndpoint *v15; // rbx
  CCrossProcessBaseServerEndpoint *v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  CCrossProcessBaseServerEndpoint *v19; // rbx
  void (*v20)(void); // rax
  CCrossProcessBaseServerEndpoint *v21; // rcx
  CCrossProcessBaseServerEndpoint *v22; // [rsp+80h] [rbp+8h] BYREF
  CCrossProcessBaseServerEndpoint *v23; // [rsp+88h] [rbp+10h]
  unsigned __int64 v24; // [rsp+90h] [rbp+18h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_0100469152753b0964101f667eb0634c_Traceguids, this);
  }
  if ( *((_DWORD *)this + 29) )
  {
    v2 = *((_QWORD *)this + 18);
    if ( v2 )
    {
      if ( (*(int (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v2 + 32LL))(v2, &v24) >= 0 )
      {
        v3 = *((_QWORD *)this + 3);
        while ( v3 )
        {
          v4 = *(_QWORD *)(v3 + 16);
          v3 = *(_QWORD *)(v3 + 8);
          if ( *(_DWORD *)(v4 + 40) == 2 )
          {
            v5 = *(CCrossProcessBaseServerEndpoint **)(*(_QWORD *)(v4 + 32) + 40LL);
            v22 = v5;
            if ( v5 )
              (*(void (__fastcall **)(CCrossProcessBaseServerEndpoint *))(*(_QWORD *)v5 + 8LL))(v5);
            (*(void (__fastcall **)(_QWORD, unsigned __int64, CCrossProcessBaseServerEndpoint *))(**((_QWORD **)this + 18)
                                                                                                + 64LL))(
              *((_QWORD *)this + 18),
              v24,
              v5);
            if ( v5 )
              (*(void (__fastcall **)(CCrossProcessBaseServerEndpoint *))(*(_QWORD *)v5 + 16LL))(v5);
          }
        }
        v6 = (_QWORD *)*((_QWORD *)this + 8);
        if ( v6 )
        {
          while ( 1 )
          {
            v7 = (_QWORD *)v6[2];
            v6 = (_QWORD *)*v6;
            v8 = (_QWORD *)*v7;
            if ( v8 )
              break;
LABEL_33:
            if ( !v6 )
              goto LABEL_34;
          }
          while ( 1 )
          {
            v9 = v8[2];
            v8 = (_QWORD *)*v8;
            v10 = (struct IAudioProcessor *)*((_QWORD *)this + 18);
            v11 = v24;
            *(_DWORD *)(v9 + 4) = 0;
            v12 = *(_DWORD *)(v9 + 16);
            if ( v12 )
            {
              if ( v12 == 1 )
                CConnectionInstance::RemoveCaptureConnection((CConnectionInstance *)v9, v10, v11);
              goto LABEL_32;
            }
            v23 = 0LL;
            v22 = 0LL;
            v13 = *(_QWORD *)(v9 + 32);
            if ( !v13 )
              goto LABEL_23;
            v14 = *(_DWORD *)(v13 + 40);
            if ( v14 == 2 )
              break;
            if ( ((v14 - 1) & 0xFFFFFFFD) == 0 )
            {
              if ( (****(int (__fastcall *****)(_QWORD, GUID *, CCrossProcessBaseServerEndpoint **))(v13 + 32))(
                     **(_QWORD **)(v13 + 32),
                     &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                     &v22) < 0 )
                goto LABEL_30;
              (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, CCrossProcessBaseServerEndpoint *))(*(_QWORD *)v10 + 120LL))(
                v10,
                v11,
                v22);
              v16 = v22;
              if ( v22 )
              {
                v22 = 0LL;
LABEL_22:
                (*(void (__fastcall **)(CCrossProcessBaseServerEndpoint *))(*(_QWORD *)v16 + 16LL))(v16);
              }
            }
LABEL_23:
            v17 = *(_QWORD *)(v9 + 24);
            if ( !v17 )
              goto LABEL_30;
            v18 = *(_DWORD *)(v17 + 40);
            if ( v18 == 2 )
            {
              v19 = *(CCrossProcessBaseServerEndpoint **)(*(_QWORD *)(v17 + 32) + 40LL);
              v23 = v19;
              if ( v19 )
                (*(void (__fastcall **)(CCrossProcessBaseServerEndpoint *))(*(_QWORD *)v19 + 8LL))(v19);
              (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, CCrossProcessBaseServerEndpoint *, _QWORD))(*(_QWORD *)v10 + 96LL))(
                v10,
                v11,
                v19,
                *(_QWORD *)(v9 + 8));
              if ( !v19 )
                goto LABEL_30;
              v23 = 0LL;
              v20 = *(void (**)(void))(*(_QWORD *)v19 + 16LL);
LABEL_29:
              v20();
              goto LABEL_30;
            }
            if ( ((v18 - 1) & 0xFFFFFFFD) == 0
              && (****(int (__fastcall *****)(_QWORD, GUID *, CCrossProcessBaseServerEndpoint **))(v17 + 32))(
                   **(_QWORD **)(v17 + 32),
                   &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                   &v22) >= 0 )
            {
              (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, CCrossProcessBaseServerEndpoint *))(*(_QWORD *)v10 + 120LL))(
                v10,
                v11,
                v22);
              v21 = v22;
              if ( v22 )
              {
                v22 = 0LL;
                v20 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
                if ( (char *)v20 != (char *)ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
                  goto LABEL_29;
                ATL::CComObject<CCrossProcessServerInputEndpoint>::Release(v21);
              }
            }
LABEL_30:
            if ( v22 )
              (*(void (__fastcall **)(CCrossProcessBaseServerEndpoint *))(*(_QWORD *)v22 + 16LL))(v22);
LABEL_32:
            if ( !v8 )
              goto LABEL_33;
          }
          v15 = *(CCrossProcessBaseServerEndpoint **)(*(_QWORD *)(v13 + 32) + 40LL);
          v23 = v15;
          if ( v15 )
            (*(void (__fastcall **)(CCrossProcessBaseServerEndpoint *))(*(_QWORD *)v15 + 8LL))(v15);
          (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, CCrossProcessBaseServerEndpoint *, _QWORD))(*(_QWORD *)v10 + 80LL))(
            v10,
            v11,
            v15,
            *(_QWORD *)(v9 + 8));
          v16 = v15;
          if ( !v15 )
            goto LABEL_23;
          v23 = 0LL;
          goto LABEL_22;
        }
LABEL_34:
        if ( (*(int (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 18) + 40LL))(
               *((_QWORD *)this + 18),
               v24) >= 0 )
          *((_DWORD *)this + 29) = 0;
      }
    }
  }
}
