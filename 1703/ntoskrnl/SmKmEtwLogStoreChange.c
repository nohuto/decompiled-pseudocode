/*
 * XREFs of SmKmEtwLogStoreChange @ 0x140701CD4
 * Callers:
 *     SmKmStoreDelete @ 0x14043BDDC (SmKmStoreDelete.c)
 *     SmKmStoreAdd @ 0x140567F1C (SmKmStoreAdd.c)
 *     SmKmEtwLogStoreRundown @ 0x1405C2328 (SmKmEtwLogStoreRundown.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ?SmStEtwFillStoreEvent@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x14024F000 (-SmStEtwFillStoreEvent@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z.c)
 */

NTSTATUS __fastcall SmKmEtwLogStoreChange(REGHANDLE *a1, __int64 a2, const EVENT_DESCRIPTOR *a3)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // r8
  int v7; // edx
  __int64 *v8; // rcx
  __int64 v9; // rax
  ULONG UserDataCount; // edx
  _QWORD v12[6]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v13[160]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14[19]; // [rsp+110h] [rbp+10h] BYREF

  memset(v14, 0, sizeof(v14));
  memset(v13, 0, 0x98uLL);
  memset(v12, 0, 0x20uLL);
  HIDWORD(v12[2]) = 19;
  v12[1] = v13;
  UserData = v14;
  v12[0] = v14;
  HIDWORD(v12[3]) = 152;
  if ( a3 == (const EVENT_DESCRIPTOR *)&SmEventStoreDelete )
  {
    v7 = v12[2];
    v8 = (__int64 *)&v13[LODWORD(v12[3])];
    v12[4] = a2;
    v9 = LODWORD(v12[2]);
    *v8 = a2;
    *(&v14[0].Reserved + 1 * v9) = 0;
    UserDataCount = v7 + 1;
    v14[v9].Ptr = (ULONGLONG)v8;
    v14[v9].Size = 8;
  }
  else
  {
    SMKM_STORE<SM_TRAITS>::SmStEtwFillStoreEvent(a2, (__int64)v12);
    UserDataCount = v12[2];
    UserData = (struct _EVENT_DATA_DESCRIPTOR *)v12[0];
  }
  return EtwWriteEx(*a1, a3, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
}
