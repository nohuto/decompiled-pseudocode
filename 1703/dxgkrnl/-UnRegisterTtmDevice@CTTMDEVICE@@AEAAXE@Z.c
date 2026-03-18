/*
 * XREFs of ?UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z @ 0x1C01B125C
 * Callers:
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C00DD6DC (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C01B0A30 (-DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0001D90 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall CTTMDEVICE::UnRegisterTtmDevice(CTTMDEVICE *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  CTTMDEVICE **v28; // r8
  CTTMDEVICE **v29; // rdx
  char v30; // al
  struct _KEVENT Event; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-50h] BYREF
  char v33; // [rsp+78h] [rbp-20h]

  v4 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4);
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)Global + 73) + 160LL) != CurrentThread )
  {
    v11 = WdLogNewEntry5_WdAssertion(CurrentThread, v7, v8, v9);
    *(_QWORD *)(v11 + 24) = 4102LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *((_BYTE *)this + 905) )
  {
    if ( v4 )
    {
      v12 = WdLogNewEntry5_WdAssertion(CurrentThread, v7, v8, v9);
      *(_QWORD *)(v12 + 24) = 4109LL;
      WdLogEvent5_WdAssertion(v12);
    }
    if ( *((_BYTE *)this + 905) && *(CTTMDEVICE **)this != this )
    {
      v13 = WdLogNewEntry5_WdAssertion(CurrentThread, v7, v8, v9);
      *(_QWORD *)(v13 + 24) = 4115LL;
      WdLogEvent5_WdAssertion(v13);
    }
  }
  if ( !*((_QWORD *)this + 8) )
  {
    v14 = WdLogNewEntry5_WdAssertion(CurrentThread, v7, v8, v9);
    *(_QWORD *)(v14 + 24) = 4124LL;
    WdLogEvent5_WdAssertion(v14);
  }
  DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 8));
  v19 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
  *(_QWORD *)(v19 + 24) = 4126LL;
  WdLogEvent5_WdAssertion(v19);
  v20 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 156, 1u);
  v21 = (unsigned int)(v20 >> 31);
  LODWORD(v21) = v20 % 32;
  *((_DWORD *)this + 2 * v21 + 157) = 1073741825;
  *((_DWORD *)this + 2 * (unsigned int)(v20 % 32) + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)this + 6);
  if ( *((_QWORD *)this + 7) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
    *(_QWORD *)(v26 + 24) = 4144LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( v4 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    *((_QWORD *)this + 7) = &Event;
  }
  else
  {
    *((_QWORD *)this + 7) = 0LL;
  }
  v27 = *((_QWORD *)this + 4);
  v33 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(v27 + 18584));
  *((_QWORD *)this + 4) = 0LL;
  v28 = (CTTMDEVICE **)*((_QWORD *)this + 2);
  v29 = (CTTMDEVICE **)*((_QWORD *)this + 3);
  if ( v28[1] != (CTTMDEVICE *)((char *)this + 16) || *v29 != (CTTMDEVICE *)((char *)this + 16) )
    __fastfail(3u);
  *v29 = (CTTMDEVICE *)v28;
  v28[1] = (CTTMDEVICE *)v29;
  TtmNotifyDeviceDeparture(1LL, this);
  v30 = v33;
  if ( v33 )
  {
    KeUnstackDetachProcess(&ApcState);
    v30 = 0;
    v33 = 0;
  }
  if ( v4 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v30 = v33;
  }
  if ( v30 )
    KeUnstackDetachProcess(&ApcState);
}
