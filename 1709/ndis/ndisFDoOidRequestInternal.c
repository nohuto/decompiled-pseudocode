/*
 * XREFs of ndisFDoOidRequestInternal @ 0x1C000C1D0
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005A2A0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000C470 (ndisOidRequestComplete.c)
 *     ndisPreProcessOid @ 0x1C000CA90 (ndisPreProcessOid.c)
 *     ndisOidCloneForCompatibility @ 0x1C000CCD8 (ndisOidCloneForCompatibility.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C000E2C4 (ndisOidFreeInternalCloneRequest.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C000F020 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     WPP_SF_qDqL @ 0x1C0041034 (WPP_SF_qDqL.c)
 *     WPP_SF_qqDDD @ 0x1C0042D94 (WPP_SF_qqDDD.c)
 *     WPP_SF_qLq @ 0x1C004ED08 (WPP_SF_qLq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B98A8 (-ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00B98E0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 */

void __fastcall ndisFDoOidRequestInternal(char *Parameter)
{
  int v2; // r15d
  __int64 *v3; // rdi
  KIRQL v4; // al
  int v5; // edx
  char *v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ebp
  __int64 *v9; // r14
  unsigned __int8 v10; // al
  char v11; // di
  KIRQL v12; // al
  bool v13; // zf
  KIRQL v14; // al
  __int64 v15; // r8
  __int64 v16; // r15
  unsigned int v17; // r12d
  int v18; // eax
  __int64 v19; // r8
  __int64 *v20; // rbp
  int v21; // edi
  __int64 *v22; // rdx
  NdisWatchdogState *v23; // rcx
  unsigned int v24[2]; // [rsp+20h] [rbp-B8h]
  _QWORD v25[6]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v26[6]; // [rsp+70h] [rbp-68h] BYREF
  unsigned int v27; // [rsp+E0h] [rbp+8h] BYREF
  __int64 *v28; // [rsp+E8h] [rbp+10h] BYREF

  v27 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(48LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, Parameter);
  while ( 1 )
  {
    v2 = -1073741823;
    v3 = 0LL;
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
    v5 = *((_DWORD *)Parameter + 14);
    *((_QWORD *)Parameter + 19) = KeGetCurrentThread();
    *((_DWORD *)Parameter + 40) = 2297645;
    if ( (v5 & 0x800) == 0 )
    {
      v6 = Parameter + 168;
      if ( *(char **)v6 != v6 )
      {
        *((_DWORD *)Parameter + 14) = v5 | 0x800;
        v3 = *(__int64 **)v6;
        if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v7 = *v3, *(__int64 **)(*v3 + 8) != v3) )
          __fastfail(3u);
        *(_QWORD *)v6 = v7;
        *(_QWORD *)(v7 + 8) = v6;
      }
    }
    *((_QWORD *)Parameter + 19) = 0LL;
    *((_DWORD *)Parameter + 40) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v4);
    if ( !v3 )
      break;
    v8 = *((_DWORD *)v3 - 10);
    v9 = v3 - 9;
    v10 = ndisPreProcessOid(Parameter, v3 - 9, 5LL, &v27);
    v11 = v10;
    if ( (unsigned __int8)byte_1C0098752 >= 4u )
    {
      v24[0] = v8;
      WPP_SF_qqDDD(49LL, v27, Parameter, v9, *(_QWORD *)v24, v10, v27);
    }
    if ( v11 != 1 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
      v13 = (*((_DWORD *)Parameter + 14) & 0x10000) == 0;
      *((_QWORD *)Parameter + 19) = KeGetCurrentThread();
      *((_DWORD *)Parameter + 40) = 2297695;
      if ( !v13 )
      {
        v11 = 1;
        v2 = -1073676286;
      }
      *((_QWORD *)Parameter + 19) = 0LL;
      *((_DWORD *)Parameter + 40) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v12);
      if ( v11 == 1 )
      {
        memset(v25, 0, sizeof(v25));
        v25[4] = v9;
        v25[2] = Parameter;
        LODWORD(v25[5]) = v2;
        ndisOidRequestComplete(v25);
      }
      else
      {
        *((_DWORD *)v9 + 22) |= 0x20000u;
        v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
        *((_QWORD *)Parameter + 23) = v9;
        *((_QWORD *)Parameter + 19) = 0LL;
        *((_DWORD *)Parameter + 40) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v14);
        ndisDrainWatchdog(*((struct NDISWATCHDOG__ **)Parameter + 24));
        ndisArmWatchdog(
          *((struct NDISWATCHDOG__ **)Parameter + 24),
          Parameter,
          0x24u,
          *(void **)(*((_QWORD *)Parameter + 2) + 248LL),
          0x88B8u,
          *((unsigned int *)v9 + 8));
        v16 = *((_QWORD *)Parameter + 2);
        v17 = *((_DWORD *)v9 + 8);
        v28 = 0LL;
        if ( (unsigned __int8)byte_1C0098752 >= 4u )
          WPP_SF_qLq(118LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, Parameter, v17, v9);
        LOBYTE(v15) = 1;
        v18 = ndisOidCloneForCompatibility(Parameter, v9, v15, &v28);
        v20 = v28;
        v21 = v18;
        if ( !v18 )
        {
          if ( v28 )
          {
            if ( (unsigned __int8)byte_1C0098752 >= 4u )
              WPP_SF_qqd(119LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, v9, v28, *((_DWORD *)v28 + 8));
            v22 = v20;
          }
          else
          {
            v22 = v9;
          }
          v21 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v16 + 248))(*((_QWORD *)Parameter + 3), v22);
        }
        if ( v21 != 259 && v20 )
        {
          LOBYTE(v19) = 1;
          ndisOidFreeInternalCloneRequest(Parameter, v20, v19, 0LL);
        }
        if ( (unsigned __int8)byte_1C0098752 >= 4u )
          WPP_SF_qDqL(120LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, Parameter, v17, v9, v21);
        if ( v21 != 259 )
        {
          v23 = (NdisWatchdogState *)*((_QWORD *)Parameter + 24);
          if ( v23 != (NdisWatchdogState *)-1LL )
            NdisWatchdogState::CancelTimer(v23);
          memset(v26, 0, sizeof(v26));
          if ( (unsigned __int8)byte_1C0098752 >= 4u )
            WPP_SF_qqDD(50LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, Parameter, v9, *((_DWORD *)v9 + 8), v21);
          v26[4] = v9;
          v26[2] = Parameter;
          LODWORD(v26[5]) = v21;
          ndisOidRequestComplete(v26);
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(51LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, Parameter);
}
