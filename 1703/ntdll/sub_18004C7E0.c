/*
 * XREFs of sub_18004C7E0 @ 0x18004C7E0
 * Callers:
 *     sub_180019768 @ 0x180019768 (sub_180019768.c)
 *     sub_18004C234 @ 0x18004C234 (sub_18004C234.c)
 *     sub_18005040C @ 0x18005040C (sub_18005040C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180038B4C @ 0x180038B4C (sub_180038B4C.c)
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     sub_180084734 @ 0x180084734 (sub_180084734.c)
 *     sub_180089560 @ 0x180089560 (sub_180089560.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenFile @ 0x1800A5960 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     ZwRaiseHardError @ 0x1800A7E30 (ZwRaiseHardError.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800D3C90 (LdrAppxHandleIntegrityFailure.c)
 *     sub_1800D5D50 @ 0x1800D5D50 (sub_1800D5D50.c)
 *     sub_1800D62F0 @ 0x1800D62F0 (sub_1800D62F0.c)
 */

__int64 __fastcall sub_18004C7E0(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r12
  int v6; // r14d
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  int v11; // eax
  int v12; // ebx
  int v13; // ecx
  int v14; // eax
  int v16; // r8d
  int v17; // r9d
  char *v18; // rcx
  int v19; // r8d
  int v20; // r9d
  _QWORD v21[2]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v22[16]; // [rsp+50h] [rbp-29h] BYREF
  int v23; // [rsp+60h] [rbp-19h] BYREF
  __int64 v24; // [rsp+68h] [rbp-11h]
  __int64 v25; // [rsp+70h] [rbp-9h]
  int v26; // [rsp+78h] [rbp-1h]
  __int128 v27; // [rsp+80h] [rbp+7h]
  char v28; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v29; // [rsp+E8h] [rbp+6Fh]
  __int64 v30; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v31; // [rsp+F8h] [rbp+7Fh] BYREF

  v29 = a2;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = v4 + 72;
  sub_18003CA5C(*(_QWORD *)(v4 + 48), v4 + 72, 0x14A5u);
  v6 = 0;
  v23 = 48;
  v24 = 0LL;
  v25 = a2;
  v7 = 64;
  if ( !byte_18015B2E8 )
    v7 = 2112;
  v26 = v7;
  v27 = 0LL;
  v8 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
  else
    v9 = 2147353476LL;
  v10 = 2147353477LL;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v18 = (unsigned int)RtlGetCurrentServiceSessionId()
        ? (char *)NtCurrentPeb()->HotpatchInformation + 555
        : (char *)2147353477;
    if ( (*v18 & 0x20) != 0 )
    {
      LOBYTE(v17) = -1;
      LOBYTE(v16) = -1;
      sub_1800D62F0(5253, -1, v16, v17, 0LL, 0LL);
    }
  }
  while ( 1 )
  {
    v11 = ZwOpenFile(&v30, 1048609LL, &v23, v22, 5, 96);
    v12 = v11;
    if ( v11 >= 0 )
      break;
    if ( v11 == -1073741772 || v11 == -1073741766 )
    {
      v12 = -1073741515;
      break;
    }
    if ( v11 != -1073741790 || v6 || !(unsigned __int8)sub_1800D5D50(a1) )
      break;
    v6 = 1;
  }
  if ( v12 >= 0 )
  {
    if ( byte_18015B2C8 )
    {
      v12 = sub_180089560(a1, v30);
      if ( v12 < 0 )
      {
        if ( byte_18015B280 )
        {
          v12 = -1073740760;
          ZwClose(v30);
        }
        else
        {
          v12 = 0;
        }
      }
    }
  }
  if ( v12 >= 0 )
  {
    v13 = 0x1000000;
    if ( dword_18015B264 )
      v13 = 17825792;
    v14 = ZwCreateSection(&v31, 15LL, 0LL, 0LL, 16, v13, v30);
    v12 = v14;
    if ( v14 < 0 )
    {
      if ( v14 == -1073740702 || (unsigned int)(v14 + 1073740674) <= 1 )
      {
        v12 = LdrAppxHandleIntegrityFailure((unsigned int)v14);
      }
      else if ( v14 != -1073741801 && v14 != -1073741670 && v14 != -1073741523 )
      {
        v21[0] = v5;
        v21[1] = v14;
        if ( (int)ZwRaiseHardError(3221225595LL, 2LL, 1LL, v21, 1, &v28) >= 0 && dword_18015C018 != 3 )
          ++dword_18015AEC8;
      }
      sub_180084734((unsigned int)v12, 5253LL, 0LL, v5);
    }
    else
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
      if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
        if ( (*(_BYTE *)v10 & 0x20) != 0 )
        {
          LOBYTE(v20) = -1;
          LOBYTE(v19) = -1;
          sub_1800D62F0(5254, -1, v19, v20, 0LL, 0LL);
        }
      }
      if ( !dword_18015B264 && (*(_DWORD *)(a1 + 24) & 0x100) == 0 )
      {
        if ( qword_18015C3C8 )
        {
          v12 = ((__int64 (__fastcall *)(__int64, __int64))(__ROR8__(qword_18015AF80, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
                  v30,
                  v29);
          if ( v12 == -1073741275 )
            v12 = 0;
        }
        else
        {
          v12 = 0;
        }
      }
      if ( v12 >= 0 )
        v12 = sub_180038B4C(a1);
      ZwClose(v31);
    }
    ZwClose(v30);
  }
  return (unsigned int)v12;
}
