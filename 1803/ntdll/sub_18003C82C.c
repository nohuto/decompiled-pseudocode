/*
 * XREFs of sub_18003C82C @ 0x18003C82C
 * Callers:
 *     sub_180004180 @ 0x180004180 (sub_180004180.c)
 *     RtlDosSearchPath_Ustr @ 0x18003C290 (RtlDosSearchPath_Ustr.c)
 *     sub_18004F794 @ 0x18004F794 (sub_18004F794.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_18003D190 @ 0x18003D190 (sub_18003D190.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryAttributesFile @ 0x18009B260 (ZwQueryAttributesFile.c)
 */

bool __fastcall sub_18003C82C(int a1, char a2)
{
  char v2; // bl
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
  if ( (int)sub_18003D190(2, a1, 0, (unsigned int)&v8, 0LL, 0LL, (__int64)&v9) < 0 )
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
    return a2 != 0;
  return v2;
}
