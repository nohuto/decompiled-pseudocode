/*
 * XREFs of RtlpWaitOnAddress @ 0x18006DA0C
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x180003A08 (RtlpCSparseBitmapPageCommit.c)
 *     RtlWaitOnAddress @ 0x18006D970 (RtlWaitOnAddress.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18006D990 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     RtlPosixBarrier @ 0x1800EA420 (RtlPosixBarrier.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180105BF0 (RtlpCSparseBitmapPageDecommit.c)
 * Callees:
 *     RtlpAddWaitBlockToWaitList @ 0x18004A924 (RtlpAddWaitBlockToWaitList.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x18004AA1C (RtlpWaitOnAddressWithTimeout.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18004CFD0 (RtlpWaitOnAddressRemoveWaitBlock.c)
 */

__int64 __fastcall RtlpWaitOnAddress(_QWORD *a1, _QWORD *a2, __int64 a3, LARGE_INTEGER *a4, unsigned int a5)
{
  int v6; // ebx
  unsigned int v9; // ebp
  struct _TEB *v10; // rcx
  __int64 WaitOnAddressHashTable; // r14
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  bool v15; // zf
  _QWORD v17[5]; // [rsp+20h] [rbp-48h] BYREF
  int v18; // [rsp+48h] [rbp-20h]

  v6 = a3;
  if ( (unsigned __int64)(a3 - 1) <= 7 && ((a3 - 1) & a3) == 0 )
  {
    v17[0] = a1;
    v18 = 1;
    v9 = 0;
    memset(&v17[2], 0, 24);
    v10 = NtCurrentTeb();
    v17[1] = v10->ClientId.UniqueThread;
    WaitOnAddressHashTable = (__int64)v10->ProcessEnvironmentBlock->WaitOnAddressHashTable;
    RtlpAddWaitBlockToWaitList(WaitOnAddressHashTable, (__int64)v17);
    v12 = v6 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 2;
        if ( v14 )
        {
          if ( v14 != 4 )
            goto LABEL_8;
          v15 = *a1 == *a2;
        }
        else
        {
          v15 = *(_DWORD *)a1 == *(_DWORD *)a2;
        }
      }
      else
      {
        v15 = *(_WORD *)a1 == *(_WORD *)a2;
      }
      if ( !v15 )
      {
LABEL_8:
        RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, (__int64)v17);
        return v9;
      }
    }
    else if ( *(_BYTE *)a1 != *(_BYTE *)a2 )
    {
      goto LABEL_8;
    }
    return (unsigned int)RtlpWaitOnAddressWithTimeout(WaitOnAddressHashTable, (__int64)v17, a4, a5);
  }
  return 3221225485LL;
}
