/*
 * XREFs of rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0103D78
 * Callers:
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0103CF8 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01041C0 (rimAbSuppressLowerRankActivityForFrame.c)
 * Callees:
 *     ListTableIteratorNext @ 0x1C008C710 (ListTableIteratorNext.c)
 *     rimAbIsPointerSuppressedByPointer @ 0x1C0103F50 (rimAbIsPointerSuppressedByPointer.c)
 *     WPP_RECORDER_SF_dDdddDdd @ 0x1C0105298 (WPP_RECORDER_SF_dDdddDdd.c)
 *     RIMGetPointerInputType @ 0x1C0107340 (RIMGetPointerInputType.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01155C0 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C01157D8 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByOtherDeviceContacts(_DWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 **active; // rax
  _QWORD *v9; // rsi
  __int64 *v10; // xmm1_8
  __int128 v11; // xmm0
  unsigned int v12; // ecx
  __int64 *v13; // r8
  __int64 v14; // rax
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
  __int128 v31; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v32; // [rsp+88h] [rbp-80h]
  _OWORD v33[2]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v34[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v35; // [rsp+D8h] [rbp-30h]
  __int128 v36; // [rsp+E8h] [rbp-20h]
  __int128 v37; // [rsp+F8h] [rbp-10h]
  __int128 v38; // [rsp+108h] [rbp+0h]

  if ( *a1 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = (__int64 **)RIMCmActiveContactsBeginNoButton(v33, a3);
    v9 = (_QWORD *)(a3 + 896);
    while ( 1 )
    {
      v10 = active[2];
      v11 = *(_OWORD *)active;
      v12 = *(_DWORD *)(a3 + 904);
      v32 = v10;
      v13 = v10;
      v14 = *v9 + 16LL * v12;
      v31 = v11;
      if ( (_QWORD *)v11 == v9 && DWORD2(v31) == v12 && v10 == (__int64 *)v14 )
        return 0LL;
      v16 = a4 != 0 ? 2608LL : 2392LL;
      v17 = *((_DWORD *)v10 - 2) == 0;
      v18 = *(_OWORD *)((char *)v10 + v16);
      v34[0] = *(_OWORD *)((char *)v13 + v16 - 16);
      v19 = *(_OWORD *)((char *)v13 + v16 + 16);
      v34[1] = v18;
      v20 = *(_OWORD *)((char *)v13 + v16 + 32);
      v35 = v19;
      v21 = *(_OWORD *)((char *)v13 + v16 + 48);
      v36 = v20;
      v22 = *(_OWORD *)((char *)v13 + v16 + 64);
      v37 = v21;
      v38 = v22;
      if ( v17 )
      {
        v25 = BYTE12(v34[0]);
      }
      else
      {
        if ( (unsigned int)(*(_DWORD *)(a3 + 24) - 5) > 1
          || !(unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v13 - 2) )
        {
          goto LABEL_16;
        }
        v24 = *(_QWORD *)(v23 + 56);
        v25 = BYTE12(v34[0]) | 2;
        HIDWORD(v34[0]) |= 2u;
        LODWORD(v34[0]) = 3;
        *((_QWORD *)&v35 + 1) = v24;
      }
      if ( (v25 & 2) != 0 )
      {
        v26 = (unsigned int)-__CFSHR__(*(_DWORD *)(a2 + 276), 6);
        v33[0] = *(_OWORD *)(a3 + 176);
        if ( (unsigned int)rimAbIsPointerSuppressedByPointer(v33, a1, v34, v26) )
        {
          WPP_RECORDER_SF_dDdddDdd(WPP_GLOBAL_Control->DeviceExtension, v27, v28, v29);
          return 1LL;
        }
      }
LABEL_16:
      active = ListTableIteratorNext((__int64 **)v33, (__int64)&v31);
    }
  }
  return 0LL;
}
