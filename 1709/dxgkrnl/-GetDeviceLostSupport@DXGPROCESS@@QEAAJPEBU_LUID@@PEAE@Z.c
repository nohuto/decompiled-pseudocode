/*
 * XREFs of ?GetDeviceLostSupport@DXGPROCESS@@QEAAJPEBU_LUID@@PEAE@Z @ 0x1C01B9964
 * Callers:
 *     DxgkGetProcessDeviceLostSupport @ 0x1C01BA4A0 (DxgkGetProcessDeviceLostSupport.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000E9EC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 */

__int64 __fastcall DXGPROCESS::GetDeviceLostSupport(DXGPROCESS *this, const struct _LUID *a2, unsigned __int8 *a3)
{
  __int64 v6; // rax
  char *v7; // rsi
  __int64 Current; // rax
  struct DXGDEVICE *v9; // rdi
  __int64 v10; // rcx
  _DWORD *v11; // rbx
  __int64 v12; // rax
  bool v13; // zf
  char *v15; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *i; // [rsp+28h] [rbp-38h]
  _QWORD v17[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v18[8]; // [rsp+40h] [rbp-20h] BYREF
  _DWORD *v19; // [rsp+48h] [rbp-18h]
  char v20; // [rsp+50h] [rbp-10h]

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 13) + 8LL) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 4218LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (char *)this + 160;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 160, 0LL);
  *((_QWORD *)this + 21) = KeGetCurrentThread();
  v15 = (char *)this + 256;
  *a3 = 1;
  for ( i = (_QWORD *)*((_QWORD *)this + 32); ; i = (_QWORD *)*i )
  {
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v15);
    v9 = (struct DXGDEVICE *)Current;
    if ( !Current )
      break;
    v10 = *(_QWORD *)(Current + 16);
    v11 = *(_DWORD **)(v10 + 16);
    if ( !v11 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v12 + 24) = 4239LL;
      WdLogEvent5_WdAssertion(v12);
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17, v9);
    if ( v11[67] == a2->LowPart && v11[68] == a2->HighPart )
    {
      v19 = v11;
      v20 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
      if ( v11[44] == 1 && !*((_BYTE *)v9 + 1731) )
      {
        v13 = v20 == 0;
        *a3 = 0;
        if ( !v13 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
        if ( v17[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17);
        break;
      }
      if ( v20 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
    }
    if ( v17[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17);
  }
  *((_QWORD *)v7 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
