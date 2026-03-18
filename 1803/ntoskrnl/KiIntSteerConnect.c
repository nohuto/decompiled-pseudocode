/*
 * XREFs of KiIntSteerConnect @ 0x1401691C4
 * Callers:
 *     KeConnectInterrupt @ 0x140168E80 (KeConnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x1400C6C54 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KiIntSteerSetDestination @ 0x1400C82E4 (KiIntSteerSetDestination.c)
 *     KiIntSteerLogState @ 0x140169544 (KiIntSteerLogState.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x1401695A0 (KiIntSteerChooseInitialTargetProcessors.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwRegister @ 0x140601F00 (EtwRegister.c)
 */

__int64 __fastcall KiIntSteerConnect(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  char v6; // bp
  int v7; // r12d
  __int64 *PoolWithTag; // rax
  __int64 *v9; // rdi
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  KIRQL v13; // r13
  __int64 i; // rbx
  int v15; // r9d
  int v16; // ebp
  __int16 v17; // cx
  __int64 v18; // rax
  bool v19; // zf
  __int64 *v20; // rax
  __int64 v21; // rbx
  __int64 **v22; // rax
  int v24; // ecx
  int v25; // eax
  unsigned __int16 v26; // cx
  __int64 v27; // rdx
  unsigned __int16 v28; // cx
  __int64 v29; // rdx
  __int64 v30; // [rsp+40h] [rbp-38h] BYREF
  __int16 v31; // [rsp+48h] [rbp-30h]
  int v32; // [rsp+90h] [rbp+18h] BYREF

  v3 = a2;
  if ( !KiIntSteerEtwHandle )
    EtwRegister(&INTSTEER_ETW_PROVIDER, KiIntSteerEventTraceControlCallback, 0LL, &KiIntSteerEtwHandle);
  if ( !*(_DWORD *)a3 )
  {
    v32 = *(_DWORD *)(a3 + 56);
    if ( (unsigned __int8)off_140398860[0]() )
    {
      v6 = 0;
      v25 = ((__int64 (__fastcall *)(__int64, int *))off_140398848[0])(a3, &v32);
      if ( !v25 )
        goto LABEL_31;
    }
    else
    {
      v6 = 1;
      v25 = 0;
    }
    if ( v25 < 0 )
      goto LABEL_34;
LABEL_31:
    v7 = v32;
    goto LABEL_6;
  }
  if ( *(_DWORD *)a3 != 3 )
  {
LABEL_34:
    v26 = *(_WORD *)(a3 + 32);
    v27 = *(_QWORD *)(a3 + 24);
    if ( LOWORD(KiIntSteerAffinitizedInterrupts[0]) <= v26 )
      LOWORD(KiIntSteerAffinitizedInterrupts[0]) = v26 + 1;
    *(_QWORD *)&KiIntSteerAffinitizedInterrupts[2 * v26 + 2] |= v27;
    return 0LL;
  }
  v6 = 1;
  v7 = -1;
LABEL_6:
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x98uLL, 0x6B725449u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[4] = (__int64)a1;
    *((_DWORD *)PoolWithTag + 6) = v3;
    PoolWithTag[5] = 0LL;
    PoolWithTag[6] = 0LL;
    *((_BYTE *)PoolWithTag + 56) = v6;
    *((_OWORD *)PoolWithTag + 4) = *(_OWORD *)a3;
    *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)PoolWithTag + 6) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)PoolWithTag + 7) = *(_OWORD *)(a3 + 48);
    *((_OWORD *)PoolWithTag + 8) = *(_OWORD *)(a3 + 64);
    PoolWithTag[18] = *(_QWORD *)(a3 + 80);
    if ( (_DWORD)v3 )
    {
      v10 = a1;
      v11 = v3;
      do
      {
        v12 = (_QWORD *)*v10++;
        v12[22] = 0LL;
        v12[24] = 0LL;
        v12[25] = 0LL;
        v12[27] = 0LL;
        v12[21] = v9;
        --v11;
      }
      while ( v11 );
    }
    v13 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
    if ( !*(_DWORD *)a3 )
    {
      for ( i = KiIntTrackRootList; (ULONG_PTR *)i != &KiIntTrackRootList; i = *(_QWORD *)i )
      {
        v24 = *(_DWORD *)(i + 32);
        if ( v24 != -1 && v24 == v7 )
        {
          if ( *(_DWORD *)(i + 128) == 2 )
          {
            *(_BYTE *)(*(_QWORD *)(i + 200) + 16LL) = 0;
            *(_DWORD *)(i + 128) = 0;
            *(_BYTE *)(i + 132) = 0;
            v28 = *(_WORD *)(a3 + 32);
            v29 = *(_QWORD *)(a3 + 24);
            if ( LOWORD(KiIntSteerAffinitizedInterrupts[0]) <= v28 )
              LOWORD(KiIntSteerAffinitizedInterrupts[0]) = v28 + 1;
            *(_QWORD *)&KiIntSteerAffinitizedInterrupts[2 * v28 + 2] |= v29;
          }
          v16 = 0;
          goto LABEL_19;
        }
      }
    }
    i = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x6B725449u);
    if ( i )
    {
      v16 = KiIntSteerChooseInitialTargetProcessors((_DWORD)a1, v3, a3, v15, v6, (__int64)&v30, (__int64)&v32);
      if ( v16 >= 0 )
      {
        memset((void *)i, 0, 0xD0uLL);
        v17 = v31;
        *(_QWORD *)(i + 24) = i + 16;
        *(_QWORD *)(i + 16) = i + 16;
        v16 = 0;
        *(_DWORD *)(i + 32) = v7;
        *(_BYTE *)(i + 132) = 0;
        *(_QWORD *)(i + 152) = 0LL;
        *(_WORD *)(i + 144) = *(_WORD *)(a3 + 32);
        *(_DWORD *)(i + 128) = v32;
        v18 = v30;
        *(_QWORD *)(i + 136) = 0LL;
        *(_QWORD *)(i + 160) = v18;
        *(_WORD *)(i + 168) = v17;
        *(_WORD *)(i + 184) = v17;
        *(_QWORD *)(i + 176) = v18;
        v19 = *(_DWORD *)(i + 128) == 2;
        *(_OWORD *)(i + 40) = *(_OWORD *)a3;
        *(_OWORD *)(i + 56) = *(_OWORD *)(a3 + 16);
        *(_OWORD *)(i + 72) = *(_OWORD *)(a3 + 32);
        *(_OWORD *)(i + 88) = *(_OWORD *)(a3 + 48);
        *(_OWORD *)(i + 104) = *(_OWORD *)(a3 + 64);
        *(_QWORD *)(i + 120) = *(_QWORD *)(a3 + 80);
        if ( v19 )
          *(_QWORD *)(i + 200) = *(_QWORD *)(*a1 + 240LL);
        v20 = (__int64 *)qword_1403AD958;
        if ( *(ULONG_PTR **)qword_1403AD958 != &KiIntTrackRootList )
          __fastfail(3u);
        *(_QWORD *)i = &KiIntTrackRootList;
        *(_QWORD *)(i + 8) = v20;
        *v20 = i;
        ++KiIntTrackRootCount;
        qword_1403AD958 = i;
        KiIntSteerUpdateDeviceInterruptMask(i + 160, 0, 1LL);
        if ( *(_DWORD *)(i + 128) )
          KiIntSteerSetDestination(i);
      }
      if ( !v16 )
      {
LABEL_19:
        v9[2] = i;
        v21 = i + 16;
        v22 = *(__int64 ***)(v21 + 8);
        if ( *v22 != (__int64 *)v21 )
          __fastfail(3u);
        *v9 = v21;
        v9[1] = (__int64)v22;
        *v22 = v9;
        *(_QWORD *)(v21 + 8) = v9;
        KiIntSteerLogState(v9, &PPM_ETW_INTERRUPT_STEERING_STATE_CONNECT);
        goto LABEL_21;
      }
    }
    else
    {
      v16 = -1073741670;
    }
    ExFreePoolWithTag(v9, 0x6B725449u);
LABEL_21:
    KxReleaseSpinLock(&KiIntTrackSpinlock);
    __writecr8(v13);
    return (unsigned int)v16;
  }
  return 3221225626LL;
}
