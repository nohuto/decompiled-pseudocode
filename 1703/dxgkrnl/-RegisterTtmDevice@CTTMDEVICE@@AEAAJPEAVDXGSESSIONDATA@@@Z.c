/*
 * XREFs of ?RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C01B0CD8
 * Callers:
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C00DD6DC (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C0121F80 (-CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CTTMDEVICE::RegisterTtmDevice(CTTMDEVICE *this, struct DXGSESSIONDATA *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // r8
  __int64 v13; // rax
  char v14; // bl
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  struct DXGSESSIONDATA **v25; // rdx
  struct DXGSESSIONDATA *v26; // rax
  _QWORD v28[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v28, 0, 0x20uLL);
  Global = DXGGLOBAL::GetGlobal(v5, v4, v6, v7);
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)Global + 73) + 160LL) != CurrentThread )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, CurrentThread, v11);
    *(_QWORD *)(v13 + 24) = 4018LL;
    WdLogEvent5_WdAssertion(v13);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 888, 0LL);
  *((_QWORD *)this + 112) = KeGetCurrentThread();
  v14 = *((_BYTE *)this + 904);
  *((_QWORD *)this + 112) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 888, 0LL);
  KeLeaveCriticalRegion();
  if ( v14 )
  {
    v16 = WdLogNewEntry5_WdEvent(v15);
    LODWORD(v17) = -1073741130;
    *(_QWORD *)(v16 + 24) = this;
    *(_QWORD *)(v16 + 32) = -1073741130LL;
    WdLogEvent5_WdEvent(v16);
  }
  else
  {
    v18 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 156, 1u);
    v19 = (unsigned int)(v18 >> 31);
    LODWORD(v19) = v18 % 32;
    *((_DWORD *)this + 2 * v19 + 157) = 0x40000000;
    v28[0] = CTTMDEVICE::CloseCallback;
    *((_DWORD *)this + 2 * (unsigned int)(v18 % 32) + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
    v20 = *((unsigned int *)this + 21);
    v28[2] = &CTTMDEVICE::SetDisplayStateCallback;
    v21 = TtmNotifyDeviceArrival(1LL, this, v28, v20, (char *)this + 608);
    v17 = v21;
    if ( v21 >= 0 )
    {
      v25 = (struct DXGSESSIONDATA **)*((_QWORD *)a2 + 2322);
      v26 = (CTTMDEVICE *)((char *)this + 16);
      if ( *v25 != (struct DXGSESSIONDATA *)((char *)a2 + 18568) )
        __fastfail(3u);
      *(_QWORD *)v26 = (char *)a2 + 18568;
      *((_QWORD *)this + 3) = v25;
      *v25 = v26;
      *((_QWORD *)a2 + 2322) = v26;
      *((_QWORD *)this + 4) = a2;
    }
    else
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
      v24[3] = *((unsigned int *)this + 20);
      v24[4] = *((_QWORD *)this + 8);
      v24[5] = v17;
      WdLogEvent5_WdError(v24);
    }
  }
  return (unsigned int)v17;
}
