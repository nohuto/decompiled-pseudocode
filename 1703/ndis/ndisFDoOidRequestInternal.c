/*
 * XREFs of ndisFDoOidRequestInternal @ 0x1C000B2E0
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005AA60 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000B560 (ndisOidRequestComplete.c)
 *     ndisPreProcessOid @ 0x1C000BAF0 (ndisPreProcessOid.c)
 *     ndisOidCloneForCompatibility @ 0x1C000BD2C (ndisOidCloneForCompatibility.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C000C1E4 (ndisOidFreeInternalCloneRequest.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C0016AF4 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qqDD @ 0x1C003CA88 (WPP_SF_qqDD.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     WPP_SF_qqDDD @ 0x1C0045BF4 (WPP_SF_qqDDD.c)
 *     WPP_SF_qLq @ 0x1C005013C (WPP_SF_qLq.c)
 *     WPP_SF_qLqL @ 0x1C0059B8C (WPP_SF_qLqL.c)
 *     ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00A5300 (-ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXKK_K@Z @ 0x1C00A5338 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXKK_K@Z.c)
 */

void __fastcall ndisFDoOidRequestInternal(char *Parameter)
{
  __int64 *v2; // rsi
  KIRQL v3; // r8
  int v4; // edx
  __int64 **v5; // rcx
  __int64 v6; // rax
  int v7; // r14d
  __int64 *v8; // rsi
  unsigned __int8 v9; // al
  char v10; // bl
  KIRQL v11; // dl
  int v12; // r14d
  int v13; // r14d
  KIRQL v14; // al
  __int64 v15; // r13
  unsigned int v16; // r12d
  int v17; // eax
  __int64 *v18; // r14
  int v19; // ebx
  __int64 *v20; // rdx
  _QWORD *v21; // rcx
  NdisWatchdogState *v22; // rcx
  _QWORD v23[6]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v24[12]; // [rsp+70h] [rbp-9h] BYREF
  unsigned int v25; // [rsp+E0h] [rbp+67h] BYREF
  __int64 *v26; // [rsp+E8h] [rbp+6Fh] BYREF

  v25 = 0;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(48LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, Parameter);
  while ( 1 )
  {
    v2 = 0LL;
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
    v4 = *((_DWORD *)Parameter + 14);
    *((_QWORD *)Parameter + 19) = KeGetCurrentThread();
    *((_DWORD *)Parameter + 40) = 2297340;
    if ( (v4 & 0x800) == 0 )
    {
      v5 = (__int64 **)(Parameter + 168);
      if ( *v5 != (__int64 *)v5 )
      {
        *((_DWORD *)Parameter + 14) = v4 | 0x800;
        v2 = *v5;
        v6 = **v5;
        if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v6 + 8) != v2 )
          __fastfail(3u);
        *v5 = (__int64 *)v6;
        *(_QWORD *)(v6 + 8) = v5;
      }
    }
    *((_QWORD *)Parameter + 19) = 0LL;
    *((_DWORD *)Parameter + 40) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v3);
    if ( !v2 )
      break;
    v7 = *((_DWORD *)v2 - 10);
    v8 = v2 - 9;
    v9 = ndisPreProcessOid(Parameter, v8, 5LL, &v25);
    v10 = v9;
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
      WPP_SF_qqDDD(49LL, v25, Parameter, v8, v7, v9, v25);
    if ( v10 != 1 )
    {
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
      v12 = *((_DWORD *)Parameter + 14);
      *((_DWORD *)Parameter + 40) = 2297390;
      v13 = v12 & 0x10000;
      if ( v13 )
        v10 = 1;
      *((_QWORD *)Parameter + 19) = 0LL;
      *((_DWORD *)Parameter + 40) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v11);
      if ( v10 == 1 )
      {
        memset(v23, 0, sizeof(v23));
        v23[4] = v8;
        v23[2] = Parameter;
        v21 = v23;
        LODWORD(v23[5]) = v13 != 0 ? -1073676286 : -1073741823;
        goto LABEL_39;
      }
      *((_DWORD *)v8 + 22) |= 0x20000u;
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
      *((_QWORD *)Parameter + 23) = v8;
      *((_QWORD *)Parameter + 19) = 0LL;
      *((_DWORD *)Parameter + 40) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v14);
      ndisDrainWatchdog(*((struct NDISWATCHDOG__ **)Parameter + 24));
      ndisArmWatchdog(*((struct NDISWATCHDOG__ **)Parameter + 24), Parameter, 0x24u, 0x88B8u, *((unsigned int *)v8 + 8));
      v26 = 0LL;
      v15 = *((_QWORD *)Parameter + 2);
      v16 = *((_DWORD *)v8 + 8);
      if ( (unsigned __int8)byte_1C0092612 >= 4u )
        WPP_SF_qLq(120LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, Parameter, v16, v8);
      v17 = ndisOidCloneForCompatibility(Parameter, v8, 1LL, &v26);
      v18 = v26;
      v19 = v17;
      if ( !v17 )
      {
        if ( v26 )
        {
          if ( (unsigned __int8)byte_1C0092612 >= 4u )
            WPP_SF_qqd(121LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, v8, v26, *((_DWORD *)v26 + 8));
          v20 = v18;
        }
        else
        {
          v20 = v8;
        }
        v19 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v15 + 248))(*((_QWORD *)Parameter + 3), v20);
      }
      if ( v19 != 259 && v18 )
        ndisOidFreeInternalCloneRequest(Parameter, v18, 1LL);
      if ( (unsigned __int8)byte_1C0092612 >= 4u )
        WPP_SF_qLqL(122LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, Parameter, v16, v8, v19);
      if ( v19 != 259 )
      {
        v22 = (NdisWatchdogState *)*((_QWORD *)Parameter + 24);
        if ( v22 != (NdisWatchdogState *)-1LL )
          NdisWatchdogState::CancelTimer(v22);
        memset(v24, 0, 0x30uLL);
        if ( (unsigned __int8)byte_1C0092612 >= 4u )
          WPP_SF_qqDD(50LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, Parameter, v8, *((_DWORD *)v8 + 8), v19);
        v24[4] = v8;
        v21 = v24;
        v24[2] = Parameter;
        LODWORD(v24[5]) = v19;
LABEL_39:
        ndisOidRequestComplete(v21);
      }
    }
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(51LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, Parameter);
}
