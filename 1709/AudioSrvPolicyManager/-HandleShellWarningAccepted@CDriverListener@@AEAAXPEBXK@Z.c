/*
 * XREFs of ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x1800233B8
 * Callers:
 *     ?s_ShellWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800236E0 (-s_ShellWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     McTemplateU0dsdp @ 0x180021C98 (McTemplateU0dsdp.c)
 *     memset @ 0x1800275FE (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CDriverListener::HandleShellWarningAccepted(CDriverListener *this, _DWORD *a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  _QWORD *v15; // [rsp+20h] [rbp-60h]
  __int64 v16; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-38h] BYREF
  _OWORD v18[2]; // [rsp+58h] [rbp-28h] BYREF
  int v19; // [rsp+B0h] [rbp+30h] BYREF
  BOOL v20; // [rsp+C8h] [rbp+48h] BYREF

  v17[1] = -2LL;
  v6 = 0LL;
  v16 = 0LL;
  v7 = 0LL;
  v17[0] = 0LL;
  memset(v18, 0, sizeof(v18));
  v19 = 0;
  if ( *((_DWORD *)this + 124) == 1 )
  {
    *((_DWORD *)this + 124) = 0;
    if ( a3 == 4 )
    {
      if ( a2 )
      {
        v20 = *a2 == 1;
        v8 = (*(__int64 (__fastcall **)(LPVOID, char *, __int64 *))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
               g_DeviceEnumerator,
               (char *)this + 12,
               &v16);
        v10 = v8;
        if ( v8 >= 0 )
        {
          v15 = v17;
          v11 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v16 + 24LL))(
                  v16,
                  &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
                  1LL);
          v10 = v11;
          if ( v11 >= 0 )
          {
            memset(v18, 0, sizeof(v18));
            v18[0] = GUID_45ffaaa0_6e1b_11d0_bcf2_444553540000;
            *(_QWORD *)&v18[1] = 0x200000039LL;
            DWORD2(v18[1]) = *((unsigned __int16 *)this + 246);
            v19 = 0;
            LODWORD(v15) = 4;
            v13 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, __int64, BOOL *, _QWORD *, int *))(*(_QWORD *)v17[0]
                                                                                                + 24LL))(
                    v17[0],
                    v18,
                    32LL,
                    &v20,
                    v15,
                    &v19);
            v10 = v13;
            if ( v13 >= 0 )
            {
LABEL_18:
              v7 = v17[0];
              v6 = v16;
              goto LABEL_19;
            }
            if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
              McTemplateU0dsdp(
                v14,
                &EUVolumePolicy_Error_Propagation,
                v13,
                "CDriverListener::HandleShellWarningAccepted",
                116,
                (char)this);
          }
          else if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
          {
            McTemplateU0dsdp(
              v12,
              &EUVolumePolicy_Error_Propagation,
              v11,
              "CDriverListener::HandleShellWarningAccepted",
              103,
              (char)this);
          }
        }
        else if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
        {
          McTemplateU0dsdp(
            v9,
            &EUVolumePolicy_Error_Propagation,
            v8,
            "CDriverListener::HandleShellWarningAccepted",
            101,
            (char)this);
        }
        if ( v10 < 0
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_92b9b890caad320d1476e881fb77b9be_Traceguids, v10);
        }
        goto LABEL_18;
      }
    }
  }
LABEL_19:
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v6 = v16;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
}
