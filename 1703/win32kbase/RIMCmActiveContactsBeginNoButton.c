/*
 * XREFs of RIMCmActiveContactsBeginNoButton @ 0x1C0116A4C
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0103CF8 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0104130 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0104474 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C010E9A4 (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C010ED10 (rimStorePointersInHoldingFrame.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01112F4 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     ListTableIteratorNext @ 0x1C01180C8 (ListTableIteratorNext.c)
 */

__int64 __fastcall RIMCmActiveContactsBeginNoButton(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r11
  unsigned int v5; // ecx
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // xmm1_8
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]
  _BYTE v15[32]; // [rsp+38h] [rbp-20h] BYREF

  v13 = 0;
  v14 = *(_QWORD *)(a2 + 1560);
  v12 = a2 + 1560;
  v3 = ListTableIteratorNext(v15, &v12);
  v5 = *(_DWORD *)(v4 + 8);
  v6 = *(_OWORD *)v3;
  v7 = *(_QWORD *)(v3 + 16);
  v8 = *(_QWORD *)v4 + 16LL * v5;
  *(_OWORD *)a1 = v6;
  *(_QWORD *)(a1 + 16) = v7;
  if ( (*(_QWORD *)a1 != v4 || *(_DWORD *)(a1 + 8) != v5 || *(_QWORD *)(a1 + 16) != v8)
    && (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) & 4) != 0 )
  {
    v9 = ListTableIteratorNext(v15, a1);
    v10 = *(_QWORD *)(v9 + 16);
    *(_OWORD *)a1 = *(_OWORD *)v9;
    *(_QWORD *)(a1 + 16) = v10;
  }
  return a1;
}
