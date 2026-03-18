/*
 * XREFs of ?DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C01CA7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ?UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z @ 0x1C01CB01C (-UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z.c)
 */

void __fastcall DXGSESSIONMGR::DestroyTtmDeviceWorker(CTTMDEVICE *this)
{
  __int64 v2; // rsi
  CTTMDEVICE **v3; // rcx
  CTTMDEVICE **v4; // rax
  __int64 v5; // rax

  v2 = *((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 73);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2 + 152, 0LL);
  *(_QWORD *)(v2 + 160) = KeGetCurrentThread();
  v3 = *(CTTMDEVICE ***)this;
  if ( *(CTTMDEVICE **)this == this )
  {
    v5 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v5 + 24) = this;
    WdLogEvent5_WdError(v5);
  }
  else
  {
    if ( v3[1] != this || (v4 = (CTTMDEVICE **)*((_QWORD *)this + 1), *v4 != this) )
      __fastfail(3u);
    *v4 = (CTTMDEVICE *)v3;
    v3[1] = (CTTMDEVICE *)v4;
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
  *(_QWORD *)(v2 + 160) = 0LL;
  ExReleasePushLockExclusiveEx(v2 + 152, 0LL);
  KeLeaveCriticalRegion();
}
