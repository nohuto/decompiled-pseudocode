/*
 * XREFs of sub_18004AABC @ 0x18004AABC
 * Callers:
 *     RtlWaitOnAddress @ 0x1800494C0 (RtlWaitOnAddress.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180049DC0 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     sub_18005EE4C @ 0x18005EE4C (sub_18005EE4C.c)
 *     sub_180062D68 @ 0x180062D68 (sub_180062D68.c)
 *     RtlBarrier_0 @ 0x1800E65E0 (RtlBarrier_0.c)
 * Callees:
 *     sub_180024BC0 @ 0x180024BC0 (sub_180024BC0.c)
 *     sub_180024C30 @ 0x180024C30 (sub_180024C30.c)
 *     sub_18004ABB4 @ 0x18004ABB4 (sub_18004ABB4.c)
 */

__int64 __fastcall sub_18004AABC(_QWORD *a1, _QWORD *a2, __int64 a3, LARGE_INTEGER *a4, unsigned int a5)
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
    sub_180024BC0(WaitOnAddressHashTable, (__int64)v17);
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
    }
    else
    {
      v15 = *(_BYTE *)a1 == *(_BYTE *)a2;
    }
    if ( v15 )
      return (unsigned int)sub_180024C30(WaitOnAddressHashTable, (__int64)v17, a4, a5);
LABEL_8:
    sub_18004ABB4(WaitOnAddressHashTable, v17);
    return v9;
  }
  return 3221225485LL;
}
