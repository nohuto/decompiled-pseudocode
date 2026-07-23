/*
 * XREFs of SmKmStoreTerminateWorker @ 0x14024E070
 * Callers:
 *     <none>
 * Callees:
 *     SmKmStoreRefFromStoreIndex @ 0x140053AB4 (SmKmStoreRefFromStoreIndex.c)
 *     SmEtwEnabled @ 0x1400587E0 (SmEtwEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017E600 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x1401812E0 (ZwSetSystemInformation.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SmKmEtwAppendObjectName @ 0x14024DADC (SmKmEtwAppendObjectName.c)
 *     SmKmEtwAppendProductName @ 0x14024DC58 (SmKmEtwAppendProductName.c)
 *     SmKmSqmAddToStream @ 0x14024FD64 (SmKmSqmAddToStream.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmStoreTerminateWorker(PVOID P)
{
  int v2; // r14d
  unsigned int v3; // edx
  int v4; // r10d
  struct _EX_RUNDOWN_REF *v5; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  ULONGLONG *v7; // rsi
  int v8; // edx
  _BYTE *v9; // r8
  unsigned int v10; // edx
  __int64 v11; // rax
  unsigned int v12; // ecx
  _DWORD *v13; // r9
  __int64 v14; // rax
  __int64 v15; // rbx
  struct _EX_RUNDOWN_REF *v16; // rax
  const wchar_t *v17; // rax
  ULONG ReturnLength; // [rsp+40h] [rbp-C0h] BYREF
  __int64 SystemInformation; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD UserDataCount[4]; // [rsp+68h] [rbp-98h] BYREF
  int v24; // [rsp+88h] [rbp-78h]
  const wchar_t *v25; // [rsp+90h] [rbp-70h]
  int v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+A0h] [rbp-60h]
  _DWORD v28[20]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v29[284]; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30[6]; // [rsp+570h] [rbp+470h] BYREF

  memset(v30, 0, sizeof(v30));
  memset(v28, 0, 0x44uLL);
  v21 = 68LL;
  v20 = (__int64 *)v28;
  SystemInformation = 0x800000001LL;
  v28[0] = v28[0] & 0xFFFFFF00 | 1;
  if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, &ReturnLength) >= 0
    && (SystemInformation = 0xD00000001LL,
        v20 = (__int64 *)v29,
        LODWORD(v21) = 1128,
        memset(v29, 0, 0x468uLL),
        v2 = 0,
        v29[0] = v29[0] & 0xFFFFFE00 | 0x103,
        (v28[0] & 0xFF00) != 0) )
  {
    while ( 1 )
    {
      v29[1] = v28[v2 + 1];
      if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, &ReturnLength) >= 0 )
      {
        v3 = 0;
        if ( v29[4] )
          break;
      }
LABEL_9:
      if ( ++v2 >= (unsigned int)BYTE1(v28[0]) )
        goto LABEL_10;
    }
    v4 = v29[24];
    while ( !_bittest(&v4, v3) != *((_DWORD *)P + 13) || v29[v3 + 8] != *((_DWORD *)P + 12) )
    {
      if ( ++v3 >= v29[4] )
        goto LABEL_9;
    }
    memset(UserDataCount, 0, sizeof(UserDataCount));
    HIDWORD(UserDataCount[2]) = 6;
    UserData = v30;
    UserDataCount[1] = v29;
    UserDataCount[0] = v30;
    HIDWORD(UserDataCount[3]) = 1036;
    v7 = SmEtwEnabled(2);
    if ( v7 )
    {
      v8 = UserDataCount[3];
      v9 = (char *)v29 + LODWORD(UserDataCount[3]);
      if ( P != (PVOID)-56LL )
        *v9 = *((_BYTE *)P + 56);
      v10 = v8 + 1;
      v11 = LODWORD(UserDataCount[2]);
      v12 = LODWORD(UserDataCount[2]) + 1;
      v30[v11].Ptr = (ULONGLONG)v9;
      *(_QWORD *)&v30[v11].Size = 1LL;
      v13 = (_DWORD *)((char *)v29 + v10);
      if ( P != (PVOID)-60LL )
        *v13 = *((_DWORD *)P + 15);
      v14 = v12;
      LODWORD(UserDataCount[3]) = v10 + 4;
      LODWORD(UserDataCount[2]) = v12 + 1;
      v30[v14].Ptr = (ULONGLONG)v13;
      *(_QWORD *)&v30[v14].Size = 4LL;
      v15 = *((_QWORD *)P + 5);
      SmKmEtwAppendProductName((__int64)UserDataCount, v15);
      SmKmEtwAppendObjectName((__int64)UserDataCount, *(_QWORD *)(v15 + 8));
      UserData = (struct _EVENT_DATA_DESCRIPTOR *)UserDataCount[0];
    }
    v16 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(*((_QWORD *)P + 4), *((_DWORD *)P + 12) & 0x3FF);
    ExReleaseRundownProtection(v16 + 1);
    SystemInformation = 0xA00000001LL;
    v20 = &v22;
    LODWORD(v21) = 8;
    v22 = 1LL;
    HIDWORD(v22) = v28[v2 + 1];
    if ( ZwSetSystemInformation(SystemStoreInformation, &SystemInformation, 0x18uLL) >= 0 )
    {
      if ( v7 )
      {
        EtwWriteEx(*v7, &SmEventCacheTermination, 0LL, 0, 0LL, 0LL, UserDataCount[2], UserData);
        if ( !*((_DWORD *)P + 14) )
        {
          ReturnLength = UserData[3].Size;
          memmove(v29, (const void *)UserData[3].Ptr, ReturnLength);
          v24 = 2;
          v26 = 1;
          *((_WORD *)v29 + ((unsigned __int64)ReturnLength >> 1)) = 0;
          v17 = (const wchar_t *)v29;
          if ( !LOWORD(v29[0]) )
            v17 = L"(null)";
          v25 = v17;
          v27 = *((_DWORD *)P + 15);
          SmKmSqmAddToStream(*v7);
        }
      }
    }
  }
  else
  {
LABEL_10:
    v5 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(*((_QWORD *)P + 4), *((_DWORD *)P + 12) & 0x3FF);
    ExReleaseRundownProtection(v5 + 1);
  }
  ExFreePoolWithTag(P, 0);
}
