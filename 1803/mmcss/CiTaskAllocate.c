/*
 * XREFs of CiTaskAllocate @ 0x1C000C344
 * Callers:
 *     CiConfigInitializeFromRegistry @ 0x1C000CA58 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     WPP_SF_d @ 0x1C00022D8 (WPP_SF_d.c)
 *     CiTaskLocate @ 0x1C000A4BC (CiTaskLocate.c)
 */

__int64 __fastcall CiTaskAllocate(wchar_t *P, _OWORD *a2, _QWORD *a3)
{
  char *PoolWithTag; // rax
  unsigned int v7; // ebx
  __int128 v8; // xmm1
  struct _LIST_ENTRY *v9; // rcx
  __int128 v10; // xmm0
  struct _LIST_ENTRY *Blink; // rdx
  __int64 result; // rax
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  if ( (int)CiTaskLocate(P, &v13) >= 0 )
  {
    v7 = -1073741771;
    goto LABEL_8;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x30uLL, 0x74727641u);
  if ( !PoolWithTag )
  {
    v7 = -1073741801;
LABEL_8:
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_b16952c3df223b48f0e350525c9a1e30_Traceguids,
        v7);
    ExFreePoolWithTag(P, 0);
    return v7;
  }
  v8 = a2[1];
  v9 = (struct _LIST_ENTRY *)(PoolWithTag + 8);
  *(_OWORD *)PoolWithTag = *a2;
  v10 = a2[2];
  *((_OWORD *)PoolWithTag + 1) = v8;
  *((_OWORD *)PoolWithTag + 2) = v10;
  *((_QWORD *)PoolWithTag + 3) = P;
  Blink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
  if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink->Flink != &WPP_MAIN_CB.DeviceLock.Header.WaitListHead )
    __fastfail(3u);
  v9->Flink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
  *((_QWORD *)PoolWithTag + 2) = Blink;
  Blink->Flink = v9;
  *a3 = PoolWithTag;
  result = 0LL;
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v9;
  return result;
}
