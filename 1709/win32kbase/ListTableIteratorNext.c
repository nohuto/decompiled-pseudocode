/*
 * XREFs of ListTableIteratorNext @ 0x1C008C710
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C001B040 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C00AA4DC (RIMSuppressAllActiveContacts.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0103D78 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01041C0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0104504 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C010480C (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C010D8EC (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C010DC60 (rimStorePointersInHoldingFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C010FAE8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C010FDC4 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C011098C (rimEndPointerDeviceStaleContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01155C0 (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall ListTableIteratorNext(__int64 **a1, __int64 a2)
{
  __int64 **v2; // rax
  __int64 *v4; // r9
  __int64 *v5; // rdx
  __int64 v6; // r10
  __int64 *v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 *v10; // rcx
  __int64 *v11; // rax
  __int128 v13; // [rsp+0h] [rbp-28h]

  v2 = *(__int64 ***)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  v4 = *a1;
  v5 = *v2;
  v6 = **a1;
  v7 = (__int64 *)(v6 + 16LL * *((unsigned int *)a1 + 2));
  a1[2] = v5;
  if ( v5 == v7 )
  {
    v8 = *((unsigned int *)v4 + 2);
    while ( 1 )
    {
      v9 = ++*((_DWORD *)a1 + 2);
      if ( v9 >= (unsigned int)v8 )
        break;
      v10 = (__int64 *)(v6 + 16LL * v9);
      v11 = (__int64 *)*v10;
      a1[2] = (__int64 *)*v10;
      if ( v11 != v10 )
        return a1;
    }
    *(_QWORD *)&v13 = v4;
    DWORD2(v13) = v8;
    *(_OWORD *)a1 = v13;
    a1[2] = (__int64 *)(v6 + 16 * v8);
  }
  return a1;
}
