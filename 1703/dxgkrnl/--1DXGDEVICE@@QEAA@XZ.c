/*
 * XREFs of ??1DXGDEVICE@@QEAA@XZ @ 0x1C00C90A8
 * Callers:
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C002024C (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CF778 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::~DXGDEVICE(DXGDEVICE *this, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rcx
  void **v6; // rsi
  __int64 v7; // rbp
  _DWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  char *v12; // rdi
  __int64 v13; // rdx
  char **v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  if ( *((_DWORD *)this + 18) != 1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 651LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v5 = (void *)*((_QWORD *)this + 229);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = (void **)((char *)this + 1096);
  v7 = 16LL;
  v8 = (_DWORD *)((char *)this + 1224);
  do
  {
    if ( *(v8 - 112) )
    {
      v5 = *(v6 - 56);
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
    }
    if ( *v8 )
    {
      v5 = *v6;
      if ( *v6 )
        ExFreePoolWithTag(v5, 0);
    }
    ++v8;
    ++v6;
    --v7;
  }
  while ( v7 );
  v9 = *((_QWORD *)this + 10);
  if ( v9 )
  {
    v11 = v9 + 48;
    v12 = (char *)this + 88;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v9 + 48));
    v13 = *((_QWORD *)this + 11);
    v14 = (char **)*((_QWORD *)this + 12);
    if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 || *v14 != v12 )
      __fastfail(3u);
    *v14 = (char *)v13;
    *(_QWORD *)(v13 + 8) = v14;
    *(_QWORD *)(v11 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)this + 12) = 0LL;
    *(_QWORD *)v12 = 0LL;
  }
  if ( *((DXGDEVICE **)this + 49) != (DXGDEVICE *)((char *)this + 392) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = 644LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( *((DXGDEVICE **)this + 47) != (DXGDEVICE *)((char *)this + 376) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v5, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 644LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( *((DXGDEVICE **)this + 45) != (DXGDEVICE *)((char *)this + 360) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v5, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = 644LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( *((DXGDEVICE **)this + 43) != (DXGDEVICE *)((char *)this + 344) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v5, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 644LL;
    WdLogEvent5_WdAssertion(v18);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
}
