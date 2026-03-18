/*
 * XREFs of ?GetDeviceRemovalSupport@DXGPROCESS@@QEAAXPEBU_LUID@@PEAE@Z @ 0x1C01B6E14
 * Callers:
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1C01B8670 (DxgkGetProcessDeviceRemovalSupport.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000AEAC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 */

void __fastcall DXGPROCESS::GetDeviceRemovalSupport(DXGPROCESS *this, const struct _LUID *a2, bool *a3)
{
  __int64 v6; // rax
  char *v7; // rbp
  __int16 v8; // ax
  bool v9; // al
  char *v10; // rax
  _QWORD *v11; // rbx
  __int64 Current; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 14) + 8LL) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 4421LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (char *)this + 168;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 168, 0LL);
  *((_QWORD *)this + 22) = KeGetCurrentThread();
  v8 = *((_WORD *)this + 210);
  if ( v8 )
    v9 = v8 == 1;
  else
    v9 = 0;
  *a3 = v9;
  if ( !v9 )
  {
    v10 = (char *)this + 272;
    *a3 = 1;
    v11 = (_QWORD *)*((_QWORD *)this + 34);
    v16[0] = v10;
    while ( 1 )
    {
      v16[1] = v11;
      Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v16);
      if ( !Current )
        break;
      v14 = *(_QWORD *)(*(_QWORD *)(Current + 16) + 16LL);
      if ( !v14 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v13);
        *(_QWORD *)(v15 + 24) = 4459LL;
        WdLogEvent5_WdAssertion(v15);
      }
      if ( *(_DWORD *)(v14 + 268) == a2->LowPart && *(_DWORD *)(v14 + 272) == a2->HighPart )
      {
        *a3 = 0;
        break;
      }
      v11 = (_QWORD *)*v11;
    }
  }
  *((_QWORD *)v7 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
}
