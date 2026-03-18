/*
 * XREFs of rimCountContactsToDeliverWithFrame @ 0x1C010D8EC
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C010D1BC (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     ListTableIteratorNext @ 0x1C008C710 (ListTableIteratorNext.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01155C0 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmGetButtonContact @ 0x1C0115794 (RIMCmGetButtonContact.c)
 */

char __fastcall rimCountContactsToDeliverWithFrame(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 **active; // rax
  __int64 v7; // r11
  __int64 *v8; // xmm1_8
  __int128 v9; // xmm0
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 ButtonContact; // rax
  __int128 v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v15; // [rsp+30h] [rbp-20h]
  __int64 *v16[3]; // [rsp+38h] [rbp-18h] BYREF

  *a2 = 0;
  *a3 = 0;
  active = (__int64 **)RIMCmActiveContactsBeginNoButton(v16, a1);
  v7 = a1 + 896;
  while ( 1 )
  {
    v8 = active[2];
    v9 = *(_OWORD *)active;
    v10 = *(_DWORD *)(v7 + 8);
    v15 = v8;
    v11 = *(_QWORD *)v7 + 16LL * v10;
    v14 = v9;
    LOBYTE(ButtonContact) = (_QWORD)v9 != v7 || DWORD2(v14) != v10 || v8 != (__int64 *)v11;
    if ( !(_BYTE)ButtonContact )
      break;
    if ( (v8[288] & 1) != 0 )
      ++*a2;
    active = ListTableIteratorNext(v16, (__int64)&v14);
  }
  if ( !*a2 )
  {
    ButtonContact = RIMCmGetButtonContact(a1);
    if ( ButtonContact )
    {
      if ( (*(_DWORD *)(ButtonContact + 32) & 2) != 0 )
      {
        LODWORD(ButtonContact) = *(_DWORD *)(ButtonContact + 2320);
        if ( (ButtonContact & 1) != 0 )
        {
          *a2 = 1;
          *a3 = 1;
        }
      }
    }
  }
  return ButtonContact;
}
