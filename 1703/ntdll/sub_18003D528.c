/*
 * XREFs of sub_18003D528 @ 0x18003D528
 * Callers:
 *     sub_1800050C8 @ 0x1800050C8 (sub_1800050C8.c)
 *     RtlDosSearchPath_Ustr @ 0x18003CF70 (RtlDosSearchPath_Ustr.c)
 *     sub_180058280 @ 0x180058280 (sub_180058280.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_18003E060 @ 0x18003E060 (sub_18003E060.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryAttributesFile @ 0x1800A5AA0 (ZwQueryAttributesFile.c)
 */

bool __fastcall sub_18003D528(int a1, int a2)
{
  char v2; // bl
  char v3; // r14
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // edi
  __int128 v8; // [rsp+40h] [rbp-49h] BYREF
  __int128 v9; // [rsp+50h] [rbp-39h] BYREF
  __int64 v10; // [rsp+60h] [rbp-29h]
  volatile signed __int32 *v11; // [rsp+68h] [rbp-21h]
  int v12; // [rsp+70h] [rbp-19h] BYREF
  __int64 v13; // [rsp+78h] [rbp-11h]
  __int128 *v14; // [rsp+80h] [rbp-9h]
  int v15; // [rsp+88h] [rbp-1h]
  __int128 v16; // [rsp+90h] [rbp+7h]
  _BYTE v17[40]; // [rsp+A0h] [rbp+17h] BYREF

  v2 = 0;
  v3 = a2;
  LOBYTE(a2) = 1;
  if ( (int)sub_18003E060(0, a2, a1, 0, (__int64)&v8, 0LL, 0LL, (__int64)&v9) < 0 )
    return 0;
  v4 = *((_QWORD *)&v8 + 1);
  if ( (_WORD)v9 )
  {
    v5 = v10;
    v8 = v9;
  }
  else
  {
    v5 = 0LL;
    v10 = 0LL;
  }
  v13 = v5;
  v12 = 48;
  v14 = &v8;
  v15 = 64;
  v16 = 0LL;
  v6 = ZwQueryAttributesFile(&v12, v17);
  if ( v11 && _InterlockedExchangeAdd(v11, 0xFFFFFFFF) == 1 )
  {
    ZwClose(*((_QWORD *)v11 + 1));
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v11);
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  if ( v6 >= 0 )
    return 1;
  if ( v6 == -1073741757 || v6 == -1073741790 )
    return v3 != 0;
  return v2;
}
