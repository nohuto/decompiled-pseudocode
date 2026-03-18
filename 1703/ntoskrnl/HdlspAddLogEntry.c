/*
 * XREFs of HdlspAddLogEntry @ 0x14078E008
 * Callers:
 *     HdlspDispatch @ 0x14078E340 (HdlspDispatch.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     wcscmp @ 0x14016BB70 (wcscmp.c)
 *     ZwQuerySystemInformation @ 0x14017E600 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall HdlspAddLogEntry(_WORD *Src)
{
  wchar_t *v2; // r15
  __int64 v3; // rax
  SIZE_T v4; // rdi
  PVOID PoolWithTag; // rax
  PVOID v6; // rsi
  PKSPIN_LOCK v7; // rdi
  KIRQL v8; // al
  unsigned __int8 v9; // bp
  __int16 v10; // ax
  unsigned __int16 v11; // r14
  __int64 v12; // r12
  const wchar_t *v13; // rbx
  KSPIN_LOCK v14; // rax
  __int64 v15; // rcx
  _OWORD SystemInformation[3]; // [rsp+20h] [rbp-68h] BYREF

  v2 = 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( Src[v3] );
  v4 = 2 * v3 + 2;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( ZwQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL) < 0 )
      memset(SystemInformation, 0, sizeof(SystemInformation));
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x736C6448u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, Src, v4);
    v7 = HeadlessGlobals;
    if ( (HeadlessGlobals[6] & 2) != 0 )
    {
      v9 = -1;
    }
    else
    {
      v8 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
      v7 = HeadlessGlobals;
      v9 = v8;
    }
    v10 = *((_WORD *)v7 + 48);
    *((_DWORD *)v7 + 12) |= 4u;
    v11 = *((_WORD *)v7 + 49);
    v12 = (unsigned __int8)(v10 + 1);
    *((_WORD *)v7 + 48) = v12;
    if ( (_WORD)v12 == v11 )
    {
      v13 = *(const wchar_t **)(56LL * v11 + v7[2] + 48);
      if ( wcscmp(v13, L"Entry could not be recorded due to lack of memory.\n") )
        v2 = (wchar_t *)v13;
      *((_WORD *)v7 + 49) = (unsigned __int8)(v11 + 1);
    }
    else if ( v11 == 0xFFFF )
    {
      *((_WORD *)v7 + 49) = 0;
    }
    v14 = v7[2];
    v15 = 56 * v12;
    *(_OWORD *)(v15 + v14) = SystemInformation[0];
    *(_OWORD *)(v15 + v14 + 16) = SystemInformation[1];
    *(_OWORD *)(v15 + v14 + 32) = SystemInformation[2];
    if ( v6 )
      *(_QWORD *)(56LL * *((unsigned __int16 *)HeadlessGlobals + 48) + HeadlessGlobals[2] + 48) = v6;
    else
      *(_QWORD *)(56LL * *((unsigned __int16 *)HeadlessGlobals + 48) + HeadlessGlobals[2] + 48) = L"Entry could not be rec"
                                                                                                   "orded due to lack of memory.\n";
    if ( v9 != 0xFF )
    {
      KxReleaseSpinLock(HeadlessGlobals);
      __writecr8(v9);
    }
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
}
