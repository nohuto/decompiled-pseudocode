/*
 * XREFs of rimCountContactsToDeliverWithFrame @ 0x1C010E9A4
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C010E278 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsBeginNoButton @ 0x1C0116A4C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmGetButtonContact @ 0x1C0116C18 (RIMCmGetButtonContact.c)
 *     ListTableIteratorNext @ 0x1C01180C8 (ListTableIteratorNext.c)
 */

__int64 __fastcall rimCountContactsToDeliverWithFrame(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 active; // rax
  __int64 v7; // r11
  __int64 v8; // xmm1_8
  __int128 v9; // xmm0
  unsigned int v10; // edx
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+30h] [rbp-20h]
  _BYTE v14[24]; // [rsp+38h] [rbp-18h] BYREF

  *a2 = 0;
  *a3 = 0;
  active = RIMCmActiveContactsBeginNoButton(v14, a1);
  v7 = a1 + 1560;
  while ( 1 )
  {
    v8 = *(_QWORD *)(active + 16);
    v9 = *(_OWORD *)active;
    v10 = *(_DWORD *)(v7 + 8);
    v13 = v8;
    result = *(_QWORD *)v7 + 16LL * v10;
    v12 = v9;
    if ( (_QWORD)v9 == v7 && DWORD2(v12) == v10 && v8 == result )
      break;
    if ( (*(_DWORD *)(v8 + 2304) & 1) != 0 )
      ++*a2;
    active = ListTableIteratorNext(v14, &v12);
  }
  if ( !*a2 )
  {
    result = RIMCmGetButtonContact(a1);
    if ( result )
    {
      if ( (*(_DWORD *)(result + 32) & 2) != 0 )
      {
        result = *(unsigned int *)(result + 2320);
        if ( (result & 1) != 0 )
        {
          *a2 = 1;
          *a3 = 1;
        }
      }
    }
  }
  return result;
}
