/*
 * XREFs of KsepMatchInitBiosInfo @ 0x1408A5780
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x1408A5680 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     KsepLogInfo @ 0x140161AC4 (KsepLogInfo.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     wcstoul @ 0x14018ABB0 (wcstoul.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     __report_rangecheckfailure @ 0x14021F8EC (__report_rangecheckfailure.c)
 *     KsepDebugPrint @ 0x14024D0B4 (KsepDebugPrint.c)
 *     KsepRegistryOpenKey @ 0x1405FE0C4 (KsepRegistryOpenKey.c)
 *     KsepRegistryCloseKey @ 0x140623728 (KsepRegistryCloseKey.c)
 *     KsepRegistryQueryMULTISZ @ 0x1406237F4 (KsepRegistryQueryMULTISZ.c)
 *     KsepRegistryQuerySZ @ 0x140623820 (KsepRegistryQuerySZ.c)
 */

__int64 KsepMatchInitBiosInfo()
{
  int v0; // edi
  int v1; // eax
  HANDLE v2; // rbx
  int MULTISZ; // r14d
  __int64 v4; // rax
  _WORD *v5; // rcx
  unsigned __int64 v6; // rax
  unsigned int v7; // esi
  unsigned int v8; // ebx
  unsigned int v9; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-28h] BYREF
  wchar_t v13[3]; // [rsp+40h] [rbp-20h] BYREF
  wchar_t v14[3]; // [rsp+46h] [rbp-1Ah] BYREF
  wchar_t Str[6]; // [rsp+4Ch] [rbp-14h] BYREF

  KeyHandle = 0LL;
  memset(&qword_1403E6778, 0, 0x38uLL);
  v0 = -1;
  v1 = KsepRegistryOpenKey(L"\\Registry\\Machine\\Hardware\\Description\\System", 0LL, &KeyHandle);
  v2 = KeyHandle;
  MULTISZ = v1;
  if ( v1 >= 0 )
  {
    MULTISZ = KsepRegistryQuerySZ(KeyHandle, L"SystemBiosDate", 1, v13, 0x16uLL, &v12);
    if ( MULTISZ >= 0 )
    {
      Str[4] = 0;
      KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 655816LL;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(0LL, "KSE: BiosDate name [%ws] .\n", v13);
      KsepLogInfo(0LL, (__int64)"KSE: BiosDate name [%ws] .\n", v13);
      MULTISZ = KsepRegistryQueryMULTISZ(KeyHandle, L"SystemBiosVersion", (__int64)&unk_1403D1100, 520LL, (__int64)&v12);
      word_1403D1306 = 0;
      v4 = 0LL;
      v5 = &unk_1403D1100;
      while ( *v5 != 32 )
      {
        v4 = (unsigned int)(v4 + 1);
        ++v5;
        if ( (unsigned int)v4 >= 0x104 )
          goto LABEL_11;
      }
      v6 = 2 * v4;
      if ( v6 >= 0x208 )
        _report_rangecheckfailure();
      *(_WORD *)((char *)&unk_1403D1100 + v6) = 0;
LABEL_11:
      KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 655840LL;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(0LL, "KSE: BiosVendor name [%ws] .\n", &unk_1403D1100);
      KsepLogInfo(0LL, (__int64)"KSE: BiosVendor name [%ws] .\n", &unk_1403D1100);
      v13[2] = 0;
      v14[2] = 0;
      v7 = wcstoul(Str, 0LL, 16);
      v8 = wcstoul(v13, 0LL, 16) << 8;
      v9 = v8 + wcstoul(v14, 0LL, 16);
      v2 = KeyHandle;
      v0 = v9 + ((v7 + (v7 < 0x80 ? 0x2000 : 6400)) << 16);
    }
  }
  if ( v2 )
    KsepRegistryCloseKey(v2);
  if ( MULTISZ < 0 )
  {
    dword_1403E67A0 = -1;
    qword_1403E6778 = 0LL;
  }
  else
  {
    qword_1403E6778 = (__int64)&unk_1403D1100;
    dword_1403E67A0 = v0;
  }
  return (unsigned int)MULTISZ;
}
