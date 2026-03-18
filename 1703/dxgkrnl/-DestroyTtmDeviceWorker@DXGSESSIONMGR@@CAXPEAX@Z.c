/*
 * XREFs of ?DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C01B0A30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ?UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z @ 0x1C01B125C (-UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z.c)
 */

void __fastcall DXGSESSIONMGR::DestroyTtmDeviceWorker(CTTMDEVICE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  CTTMDEVICE **v7; // rcx
  CTTMDEVICE **v8; // rax
  __int64 v9; // rax

  v5 = *((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4) + 73);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5 + 152, 0LL);
  *(_QWORD *)(v5 + 160) = KeGetCurrentThread();
  v7 = *(CTTMDEVICE ***)this;
  if ( *(CTTMDEVICE **)this == this )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = this;
    WdLogEvent5_WdError(v9);
  }
  else
  {
    v8 = (CTTMDEVICE **)*((_QWORD *)this + 1);
    if ( v7[1] != this || *v8 != this )
      __fastfail(3u);
    *v8 = (CTTMDEVICE *)v7;
    v7[1] = (CTTMDEVICE *)v8;
    *((_QWORD *)this + 1) = this;
    *(_QWORD *)this = this;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 888, 0LL);
  *((_QWORD *)this + 112) = KeGetCurrentThread();
  *((_BYTE *)this + 905) = 1;
  *((_QWORD *)this + 112) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 888, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_QWORD *)this + 4) )
    CTTMDEVICE::UnRegisterTtmDevice(this, 0);
  else
    operator delete(this);
  *(_QWORD *)(v5 + 160) = 0LL;
  ExReleasePushLockExclusiveEx(v5 + 152, 0LL);
  KeLeaveCriticalRegion();
}
