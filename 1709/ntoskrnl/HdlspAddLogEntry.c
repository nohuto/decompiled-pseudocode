/*
 * XREFs of HdlspAddLogEntry @ 0x1407CBAE0
 * Callers:
 *     HdlspDispatch @ 0x1407CBE10 (HdlspDispatch.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     wcscmp @ 0x140160450 (wcscmp.c)
 *     ZwQuerySystemInformation @ 0x14017DF80 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void __fastcall HdlspAddLogEntry(_WORD *Src)
{
  wchar_t *v2; // r15
  __int64 v3; // rax
  SIZE_T v4; // rdi
  PVOID PoolWithTag; // rax
  PVOID v6; // r14
  KIRQL v7; // bp
  PKSPIN_LOCK v8; // rdi
  __int16 v9; // si
  unsigned __int16 v10; // r12
  unsigned __int16 v11; // si
  const wchar_t *v12; // rbx
  __int64 v13; // rcx
  KSPIN_LOCK v14; // rax
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
    if ( (HeadlessGlobals[6] & 2) != 0 )
      v7 = -1;
    else
      v7 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
    v8 = HeadlessGlobals;
    v9 = *((_WORD *)HeadlessGlobals + 48);
    *((_DWORD *)HeadlessGlobals + 12) |= 4u;
    v10 = *((_WORD *)v8 + 49);
    v11 = (unsigned __int8)(v9 + 1);
    *((_WORD *)v8 + 48) = v11;
    if ( v11 == v10 )
    {
      v12 = *(const wchar_t **)(56LL * v10 + v8[2] + 48);
      if ( wcscmp(v12, L"Entry could not be recorded due to lack of memory.\n") )
        v2 = (wchar_t *)v12;
      *((_WORD *)v8 + 49) = (unsigned __int8)(v10 + 1);
    }
    else if ( v10 == 0xFFFF )
    {
      *((_WORD *)v8 + 49) = 0;
    }
    v13 = 56LL * v11;
    v14 = v8[2];
    *(_OWORD *)(v13 + v14) = SystemInformation[0];
    *(_OWORD *)(v13 + v14 + 16) = SystemInformation[1];
    *(_OWORD *)(v13 + v14 + 32) = SystemInformation[2];
    if ( v6 )
      *(_QWORD *)(56LL * *((unsigned __int16 *)HeadlessGlobals + 48) + HeadlessGlobals[2] + 48) = v6;
    else
      *(_QWORD *)(56LL * *((unsigned __int16 *)HeadlessGlobals + 48) + HeadlessGlobals[2] + 48) = L"Entry could not be rec"
                                                                                                   "orded due to lack of memory.\n";
    if ( v7 != 0xFF )
    {
      KxReleaseSpinLock(HeadlessGlobals);
      __writecr8(v7);
    }
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
}
