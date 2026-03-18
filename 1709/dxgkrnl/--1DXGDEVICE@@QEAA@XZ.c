/*
 * XREFs of ??1DXGDEVICE@@QEAA@XZ @ 0x1C009C928
 * Callers:
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C001D4DC (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0082E60 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::~DXGDEVICE(DXGDEVICE *this)
{
  void *v2; // rcx
  PVOID *v3; // rsi
  __int64 v4; // rbp
  _DWORD *v5; // rdi
  __int64 v6; // rax
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  char *v11; // rdi
  __int64 v12; // rdx
  char **v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  if ( *((_DWORD *)this + 18) != 1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 649LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v2 = (void *)*((_QWORD *)this + 213);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (PVOID *)((char *)this + 1096);
  v4 = 16LL;
  v5 = (_DWORD *)((char *)this + 1224);
  do
  {
    if ( *(v5 - 112) )
    {
      v8 = *(v3 - 56);
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
    }
    if ( *v5 && *v3 )
      ExFreePoolWithTag(*v3, 0);
    ++v5;
    ++v3;
    --v4;
  }
  while ( v4 );
  v6 = *((_QWORD *)this + 10);
  if ( v6 )
  {
    v10 = v6 + 56;
    v11 = (char *)this + 88;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v6 + 56));
    v12 = *((_QWORD *)this + 11);
    if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 || (v13 = (char **)*((_QWORD *)this + 12), *v13 != v11) )
      __fastfail(3u);
    *v13 = (char *)v12;
    *(_QWORD *)(v12 + 8) = v13;
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)this + 12) = 0LL;
    *(_QWORD *)v11 = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 217);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( *((DXGDEVICE **)this + 49) != (DXGDEVICE *)((char *)this + 392) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v14 + 24) = 655LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( *((DXGDEVICE **)this + 47) != (DXGDEVICE *)((char *)this + 376) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v15 + 24) = 655LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( *((DXGDEVICE **)this + 45) != (DXGDEVICE *)((char *)this + 360) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v16 + 24) = 655LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( *((DXGDEVICE **)this + 43) != (DXGDEVICE *)((char *)this + 344) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v17 + 24) = 655LL;
    WdLogEvent5_WdAssertion(v17);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
}
