/*
 * XREFs of rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0103CF8
 * Callers:
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0103C78 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0104130 (rimAbSuppressLowerRankActivityForFrame.c)
 * Callees:
 *     rimAbIsPointerSuppressedByPointer @ 0x1C0103EC0 (rimAbIsPointerSuppressedByPointer.c)
 *     WPP_RECORDER_SF_dDdddDdd @ 0x1C0105468 (WPP_RECORDER_SF_dDdddDdd.c)
 *     RIMGetPointerInputType @ 0x1C0106658 (RIMGetPointerInputType.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C0116A4C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C0116C5C (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     ListTableIteratorNext @ 0x1C01180C8 (ListTableIteratorNext.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByOtherDeviceContacts(_DWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 active; // rax
  _QWORD *v10; // rsi
  __int64 v11; // xmm1_8
  __int128 v12; // xmm0
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  bool v17; // zf
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // r8
  __int64 v24; // rax
  char v25; // cl
  __int64 v26; // r9
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  __int128 v30; // [rsp+78h] [rbp-90h] BYREF
  __int64 v31; // [rsp+88h] [rbp-80h]
  _OWORD v32[2]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v33[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v34; // [rsp+D8h] [rbp-30h]
  __int128 v35; // [rsp+E8h] [rbp-20h]
  __int128 v36; // [rsp+F8h] [rbp-10h]
  __int128 v37; // [rsp+108h] [rbp+0h]

  if ( *a1 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = RIMCmActiveContactsBeginNoButton(v32, a3);
    v10 = (_QWORD *)(a3 + 1560);
    while ( 1 )
    {
      v11 = *(_QWORD *)(active + 16);
      v12 = *(_OWORD *)active;
      v13 = *(_DWORD *)(a3 + 1568);
      v31 = v11;
      v14 = v11;
      v15 = *v10 + 16LL * v13;
      v30 = v12;
      if ( (_QWORD *)v12 == v10 && DWORD2(v30) == v13 && v11 == v15 )
        return 0LL;
      v16 = a4 != 0 ? 2608LL : 2392LL;
      v17 = *(_DWORD *)(v11 - 8) == 0;
      v18 = *(_OWORD *)(v16 + v11);
      v33[0] = *(_OWORD *)(v16 + v14 - 16);
      v19 = *(_OWORD *)(v16 + v14 + 16);
      v33[1] = v18;
      v20 = *(_OWORD *)(v16 + v14 + 32);
      v34 = v19;
      v21 = *(_OWORD *)(v16 + v14 + 48);
      v35 = v20;
      v22 = *(_OWORD *)(v16 + v14 + 64);
      v36 = v21;
      v37 = v22;
      if ( v17 )
      {
        v25 = BYTE12(v33[0]);
      }
      else
      {
        if ( (unsigned int)(*(_DWORD *)(a3 + 24) - 5) > 1
          || !(unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v14 - 16) )
        {
          goto LABEL_14;
        }
        v24 = *(_QWORD *)(v23 + 56);
        v25 = BYTE12(v33[0]) | 2;
        HIDWORD(v33[0]) |= 2u;
        LODWORD(v33[0]) = 3;
        *((_QWORD *)&v34 + 1) = v24;
      }
      if ( (v25 & 2) != 0 )
      {
        v26 = (unsigned int)-__CFSHR__(*(_DWORD *)(a2 + 260), 6);
        v32[0] = *(_OWORD *)(a3 + 156);
        if ( (unsigned int)rimAbIsPointerSuppressedByPointer(v32, a1, v33, v26) )
        {
          WPP_RECORDER_SF_dDdddDdd(WPP_GLOBAL_Control->DeviceExtension, v27, v28, v29);
          return 1LL;
        }
      }
LABEL_14:
      active = ListTableIteratorNext(v32, &v30);
    }
  }
  return 0LL;
}
