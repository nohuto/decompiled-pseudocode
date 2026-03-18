/*
 * XREFs of RIMCmActiveContactsBeginNoButton @ 0x1C01155C0
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0103D78 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01041C0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0104504 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C010D8EC (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C010DC60 (rimStorePointersInHoldingFrame.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C010FDC4 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     ListTableIteratorNext @ 0x1C008C710 (ListTableIteratorNext.c)
 */

__int64 __fastcall RIMCmActiveContactsBeginNoButton(__int64 a1, __int64 a2)
{
  __int64 **v3; // rax
  __int64 v4; // r11
  unsigned int v5; // ecx
  __int128 v6; // xmm0
  __int64 *v7; // xmm1_8
  __int64 v8; // rax
  bool v9; // al
  __int64 **v10; // rax
  __int64 *v11; // xmm1_8
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int64 *v16[4]; // [rsp+38h] [rbp-20h] BYREF

  v14 = 0;
  v15 = *(_QWORD *)(a2 + 896);
  v13 = a2 + 896;
  v3 = ListTableIteratorNext(v16, (__int64)&v13);
  v5 = *(_DWORD *)(v4 + 8);
  v6 = *(_OWORD *)v3;
  v7 = v3[2];
  v8 = *(_QWORD *)v4 + 16LL * v5;
  *(_OWORD *)a1 = v6;
  *(_QWORD *)(a1 + 16) = v7;
  v9 = *(_QWORD *)a1 != v4 || *(_DWORD *)(a1 + 8) != v5 || *(_QWORD *)(a1 + 16) != v8;
  if ( v9 && (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) & 4) != 0 )
  {
    v10 = ListTableIteratorNext(v16, a1);
    v11 = v10[2];
    *(_OWORD *)a1 = *(_OWORD *)v10;
    *(_QWORD *)(a1 + 16) = v11;
  }
  return a1;
}
