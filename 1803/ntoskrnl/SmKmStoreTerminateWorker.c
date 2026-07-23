/*
 * XREFs of SmKmStoreTerminateWorker @ 0x1402A7610
 * Callers:
 *     <none>
 * Callees:
 *     SmKmStoreRefFromStoreIndex @ 0x140090324 (SmKmStoreRefFromStoreIndex.c)
 *     SmEtwEnabled @ 0x140092880 (SmEtwEnabled.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401A7B80 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x1401AA900 (ZwSetSystemInformation.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SmKmEtwAppendObjectName @ 0x1402A7078 (SmKmEtwAppendObjectName.c)
 *     SmKmEtwAppendProductName @ 0x1402A71F8 (SmKmEtwAppendProductName.c)
 *     SmKmSqmAddToStream @ 0x1402A9460 (SmKmSqmAddToStream.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmStoreTerminateWorker(PVOID P)
{
  unsigned int v2; // ebx
  __int64 v3; // r14
  unsigned int v4; // edx
  int v5; // r10d
  struct _EX_RUNDOWN_REF *v6; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  ULONGLONG *v8; // rsi
  int v9; // edx
  _BYTE *v10; // r8
  __int64 v11; // rax
  unsigned int v12; // r9d
  int v13; // r8d
  _DWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  struct _EX_RUNDOWN_REF *v17; // rax
  const wchar_t *v18; // rax
  ULONG ReturnLength; // [rsp+40h] [rbp-C0h] BYREF
  __int64 SystemInformation; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h]
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  __int64 UserDataCount[4]; // [rsp+68h] [rbp-98h] BYREF
  int v25; // [rsp+88h] [rbp-78h]
  const wchar_t *v26; // [rsp+90h] [rbp-70h]
  int v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+A0h] [rbp-60h]
  _DWORD v29[20]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v30[284]; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31[6]; // [rsp+570h] [rbp+470h] BYREF

  memset(v31, 0, sizeof(v31));
  memset(v29, 0, 0x44uLL);
  SystemInformation = 0x800000001LL;
  v21 = (__int64 *)v29;
  v22 = 68LL;
  v29[0] = 1;
  if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, &ReturnLength) >= 0
    && (SystemInformation = 0xD00000001LL,
        v21 = (__int64 *)v30,
        LODWORD(v22) = 1128,
        memset(v30, 0, 0x468uLL),
        v2 = 0,
        v30[0] = 259,
        (v29[0] & 0xFF00) != 0) )
  {
    while ( 1 )
    {
      v3 = v2;
      v30[1] = v29[v2 + 1];
      if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, &ReturnLength) >= 0 )
      {
        v4 = 0;
        if ( v30[4] )
          break;
      }
LABEL_9:
      if ( ++v2 >= BYTE1(v29[0]) )
        goto LABEL_10;
    }
    v5 = v30[24];
    while ( !_bittest(&v5, v4) != *((_DWORD *)P + 13) || v30[v4 + 8] != *((_DWORD *)P + 12) )
    {
      if ( ++v4 >= v30[4] )
        goto LABEL_9;
    }
    memset(UserDataCount, 0, sizeof(UserDataCount));
    HIDWORD(UserDataCount[2]) = 6;
    UserData = v31;
    UserDataCount[1] = (__int64)v30;
    UserDataCount[0] = (__int64)v31;
    HIDWORD(UserDataCount[3]) = 1036;
    v8 = SmEtwEnabled(2);
    if ( v8 )
    {
      v9 = UserDataCount[3];
      v10 = (char *)v30 + LODWORD(UserDataCount[3]);
      if ( P != (PVOID)-56LL )
        *v10 = *((_BYTE *)P + 56);
      v11 = LODWORD(UserDataCount[2]);
      v12 = LODWORD(UserDataCount[2]) + 1;
      v31[v11].Ptr = (ULONGLONG)v10;
      v13 = v9 + 1;
      *(_QWORD *)&v31[v11].Size = 1LL;
      v14 = (_DWORD *)((char *)v30 + (unsigned int)(v9 + 1));
      if ( P != (PVOID)-60LL )
        *v14 = *((_DWORD *)P + 15);
      v15 = v12;
      v31[v15].Ptr = (ULONGLONG)v14;
      *(_QWORD *)&v31[v15].Size = 4LL;
      v16 = *((_QWORD *)P + 5);
      LODWORD(UserDataCount[2]) = v12 + 1;
      LODWORD(UserDataCount[3]) = v13 + 4;
      SmKmEtwAppendProductName(UserDataCount, v16);
      SmKmEtwAppendObjectName((__int64)UserDataCount, *(_QWORD *)(v16 + 8));
      UserData = (struct _EVENT_DATA_DESCRIPTOR *)UserDataCount[0];
    }
    v17 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(*((_QWORD *)P + 4), *((_DWORD *)P + 12) & 0x3FF);
    ExReleaseRundownProtection(v17 + 1);
    SystemInformation = 0xA00000001LL;
    v21 = &v23;
    v23 = 0LL;
    HIDWORD(v23) = v29[v3 + 1];
    LODWORD(v22) = 8;
    LODWORD(v23) = 1;
    if ( ZwSetSystemInformation(SystemStoreInformation, &SystemInformation, 0x18uLL) >= 0 )
    {
      if ( v8 )
      {
        EtwWriteEx(*v8, &SmEventCacheTermination, 0LL, 0, 0LL, 0LL, UserDataCount[2], UserData);
        if ( !*((_DWORD *)P + 14) )
        {
          ReturnLength = UserData[3].Size;
          memmove(v30, (const void *)UserData[3].Ptr, ReturnLength);
          v25 = 2;
          v27 = 1;
          *((_WORD *)v30 + ((unsigned __int64)ReturnLength >> 1)) = 0;
          v18 = (const wchar_t *)v30;
          if ( !LOWORD(v30[0]) )
            v18 = L"(null)";
          v26 = v18;
          v28 = *((_DWORD *)P + 15);
          SmKmSqmAddToStream(*v8);
        }
      }
    }
  }
  else
  {
LABEL_10:
    v6 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(*((_QWORD *)P + 4), *((_DWORD *)P + 12) & 0x3FF);
    ExReleaseRundownProtection(v6 + 1);
  }
  ExFreePoolWithTag(P, 0);
}
