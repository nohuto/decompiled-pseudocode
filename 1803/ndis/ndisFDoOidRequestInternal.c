/*
 * XREFs of ndisFDoOidRequestInternal @ 0x1C000CFF0
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005ABC0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000D290 (ndisOidRequestComplete.c)
 *     ndisPreProcessOid @ 0x1C000D870 (ndisPreProcessOid.c)
 *     ndisOidCloneForCompatibility @ 0x1C000DAC0 (ndisOidCloneForCompatibility.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C000E4F8 (ndisOidFreeInternalCloneRequest.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C001A7D4 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qqDD @ 0x1C003A8FC (WPP_SF_qqDD.c)
 *     WPP_SF_qDqL @ 0x1C0042180 (WPP_SF_qDqL.c)
 *     WPP_SF_qLq @ 0x1C0043C94 (WPP_SF_qLq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     WPP_SF_qqDDD @ 0x1C0043E80 (WPP_SF_qqDDD.c)
 *     ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00AF338 (-ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00AF370 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 */

void __fastcall ndisFDoOidRequestInternal(char *Parameter, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r12d
  _DWORD *v6; // rdi
  KIRQL v7; // al
  int v8; // edx
  char *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned int v12; // r15d
  _DWORD *v13; // r14
  unsigned __int8 v14; // al
  char v15; // bp
  KIRQL v16; // al
  bool v17; // zf
  KIRQL v18; // al
  __int64 v19; // r8
  __int64 v20; // r15
  unsigned int v21; // r12d
  int v22; // eax
  __int64 v23; // r8
  _DWORD *v24; // rbp
  int v25; // edi
  _DWORD *v26; // rdx
  NdisWatchdogState *v27; // rcx
  unsigned int v28[2]; // [rsp+20h] [rbp-B8h]
  _QWORD v29[6]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v30[6]; // [rsp+70h] [rbp-68h] BYREF
  unsigned int v31; // [rsp+E0h] [rbp+8h] BYREF
  _DWORD *v32; // [rsp+E8h] [rbp+10h] BYREF

  v31 = 0;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(48LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, Parameter, a4);
  while ( 1 )
  {
    v5 = -1073741823;
    v6 = 0LL;
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
    v8 = *((_DWORD *)Parameter + 14);
    *((_QWORD *)Parameter + 19) = KeGetCurrentThread();
    *((_DWORD *)Parameter + 40) = 2297640;
    if ( (v8 & 0x800) == 0 )
    {
      v9 = Parameter + 168;
      if ( *(char **)v9 != v9 )
      {
        *((_DWORD *)Parameter + 14) = v8 | 0x800;
        v6 = *(_DWORD **)v9;
        if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 || (v10 = *(_QWORD *)v6, *(_DWORD **)(*(_QWORD *)v6 + 8LL) != v6) )
          __fastfail(3u);
        *(_QWORD *)v9 = v10;
        *(_QWORD *)(v10 + 8) = v9;
      }
    }
    *((_QWORD *)Parameter + 19) = 0LL;
    *((_DWORD *)Parameter + 40) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v7);
    if ( !v6 )
      break;
    v12 = *(v6 - 10);
    v13 = v6 - 18;
    v14 = ndisPreProcessOid(Parameter, v6 - 18, 5LL, &v31);
    v15 = v14;
    if ( (unsigned __int8)byte_1C0099612 >= 4u )
    {
      v28[0] = v12;
      WPP_SF_qqDDD(49LL, v31, Parameter, v6 - 18, *(_QWORD *)v28, v14, v31);
    }
    if ( v15 != 1 )
    {
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
      v17 = (*((_DWORD *)Parameter + 14) & 0x10000) == 0;
      *((_QWORD *)Parameter + 19) = KeGetCurrentThread();
      *((_DWORD *)Parameter + 40) = 2297690;
      if ( !v17 )
      {
        v15 = 1;
        v5 = -1073676286;
      }
      *((_QWORD *)Parameter + 19) = 0LL;
      *((_DWORD *)Parameter + 40) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v16);
      if ( v15 == 1 )
      {
        memset(v29, 0, sizeof(v29));
        v29[4] = v6 - 18;
        v29[2] = Parameter;
        LODWORD(v29[5]) = v5;
        ndisOidRequestComplete(v29);
      }
      else
      {
        v6[4] |= 0x20000u;
        v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
        *((_QWORD *)Parameter + 23) = v13;
        *((_QWORD *)Parameter + 19) = 0LL;
        *((_DWORD *)Parameter + 40) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v18);
        ndisDrainWatchdog(*((struct NDISWATCHDOG__ **)Parameter + 24));
        ndisArmWatchdog(
          *((struct NDISWATCHDOG__ **)Parameter + 24),
          Parameter,
          0x24u,
          *(void **)(*((_QWORD *)Parameter + 2) + 248LL),
          0x88B8u,
          (unsigned int)v13[8]);
        v20 = *((_QWORD *)Parameter + 2);
        v21 = v13[8];
        v32 = 0LL;
        if ( (unsigned __int8)byte_1C0099612 >= 4u )
          WPP_SF_qLq(118LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, Parameter, v21, v6 - 18);
        LOBYTE(v19) = 1;
        v22 = ndisOidCloneForCompatibility(Parameter, v6 - 18, v19, &v32);
        v24 = v32;
        v25 = v22;
        if ( !v22 )
        {
          if ( v32 )
          {
            if ( (unsigned __int8)byte_1C0099612 >= 4u )
              WPP_SF_qqd(119LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, v13, v32, v32[8]);
            v26 = v24;
          }
          else
          {
            v26 = v13;
          }
          v25 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(v20 + 248))(*((_QWORD *)Parameter + 3), v26);
        }
        if ( v25 != 259 && v24 )
        {
          LOBYTE(v23) = 1;
          ndisOidFreeInternalCloneRequest(Parameter, v24, v23, 0LL);
        }
        if ( (unsigned __int8)byte_1C0099612 >= 4u )
          WPP_SF_qDqL(120LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, Parameter, v21, v13, v25);
        if ( v25 != 259 )
        {
          v27 = (NdisWatchdogState *)*((_QWORD *)Parameter + 24);
          if ( v27 != (NdisWatchdogState *)-1LL )
            NdisWatchdogState::CancelTimer(v27);
          memset(v30, 0, sizeof(v30));
          if ( (unsigned __int8)byte_1C0099612 >= 4u )
            WPP_SF_qqDD(50LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, Parameter, v13, v13[8], v25);
          v30[4] = v13;
          v30[2] = Parameter;
          LODWORD(v30[5]) = v25;
          ndisOidRequestComplete(v30);
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(51LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, Parameter, v11);
}
