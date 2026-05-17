/*
 * XREFs of sub_180043144 @ 0x180043144
 * Callers:
 *     sub_18004213C @ 0x18004213C (sub_18004213C.c)
 *     sub_1800429E8 @ 0x1800429E8 (sub_1800429E8.c)
 *     sub_180070650 @ 0x180070650 (sub_180070650.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18002BBDC @ 0x18002BBDC (sub_18002BBDC.c)
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 *     sub_18004334C @ 0x18004334C (sub_18004334C.c)
 *     sub_180043B30 @ 0x180043B30 (sub_180043B30.c)
 *     sub_180082248 @ 0x180082248 (sub_180082248.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenFile @ 0x18009B120 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     ZwRaiseHardError @ 0x18009D690 (ZwRaiseHardError.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800C8340 (LdrAppxHandleIntegrityFailure.c)
 *     sub_1800CB510 @ 0x1800CB510 (sub_1800CB510.c)
 *     sub_1800CBAB0 @ 0x1800CBAB0 (sub_1800CBAB0.c)
 */

__int64 __fastcall sub_180043144(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v5; // r15d
  __int64 v6; // r12
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // eax
  int v12; // ebx
  _QWORD *v13; // r15
  int v14; // ecx
  int Section; // eax
  int v16; // eax
  int v18; // r8d
  int v19; // r9d
  char *v20; // rcx
  int v21; // r8d
  int v22; // r9d
  _QWORD v23[2]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v24[16]; // [rsp+50h] [rbp-19h] BYREF
  int v25; // [rsp+60h] [rbp-9h] BYREF
  __int64 v26; // [rsp+68h] [rbp-1h]
  __int64 v27; // [rsp+70h] [rbp+7h]
  int v28; // [rsp+78h] [rbp+Fh]
  __int128 v29; // [rsp+80h] [rbp+17h]
  char v30; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v31; // [rsp+D8h] [rbp+6Fh]
  __int64 v32; // [rsp+E0h] [rbp+77h] BYREF

  v31 = a2;
  v2 = *(_QWORD *)(a1 + 56);
  v5 = 0;
  if ( !(unsigned __int8)sub_18004334C(a1, 0LL) )
  {
    v32 = -1LL;
    v6 = v2 + 72;
    sub_18003BC9C(*(_QWORD *)(v2 + 48), v2 + 72, 0x14A5u);
    v7 = 64;
    v25 = 48;
    v26 = 0LL;
    if ( !byte_18015C318 )
      v7 = 2112;
    v27 = a2;
    v28 = v7;
    v29 = 0LL;
    v8 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v9 = 2147353476LL;
    v10 = 2147353477LL;
    if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v20 = (unsigned int)RtlGetCurrentServiceSessionId()
          ? (char *)NtCurrentPeb()->HotpatchInformation + 555
          : (char *)2147353477;
      if ( (*v20 & 0x20) != 0 )
      {
        LOBYTE(v19) = -1;
        LOBYTE(v18) = -1;
        sub_1800CBAB0(5253, -1, v18, v19, 0LL, 0LL);
      }
    }
    while ( 1 )
    {
      v11 = ZwOpenFile(&v32, 1048609LL, &v25, v24, 5, 96);
      v12 = v11;
      if ( v11 >= 0 )
        break;
      if ( v11 == -1073741772 || v11 == -1073741766 )
      {
        v12 = -1073741515;
        break;
      }
      if ( v11 != -1073741790 || v5 || !(unsigned __int8)sub_1800CB510(a1) )
        break;
      v5 = 1;
    }
    if ( v12 < 0 )
      return (unsigned int)v12;
    if ( !byte_18015C2F8 || (v12 = sub_180082248(a1, v32), v12 >= 0) || !byte_18015C2B0 )
    {
      v13 = (_QWORD *)(a1 + 24);
      v14 = 0x1000000;
      if ( dword_18015C290 )
        v14 = 17825792;
      Section = ZwCreateSection(a1 + 24, 15LL, 0LL, 0LL, 16, v14, v32);
      v12 = Section;
      if ( Section < 0 )
      {
        if ( Section == -1073740702 || (unsigned int)(Section + 1073740674) <= 1 )
        {
          v12 = LdrAppxHandleIntegrityFailure((unsigned int)Section);
        }
        else if ( Section != -1073741801 && Section != -1073741670 && Section != -1073741523 )
        {
          v23[0] = v6;
          v23[1] = Section;
          if ( (int)ZwRaiseHardError(3221225595LL, 2LL, 1LL, v23, 1, &v30) >= 0 && dword_18015CFB8 != 3 )
            ++dword_18015BEE8;
        }
        sub_180043B30((unsigned int)v12, 5253LL, 0LL, v6);
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
            LOBYTE(v22) = -1;
            LOBYTE(v21) = -1;
            sub_1800CBAB0(5254, -1, v21, v22, 0LL, 0LL);
          }
        }
        if ( !dword_18015C290 && (*(_DWORD *)(a1 + 32) & 0x100) == 0 )
        {
          if ( qword_18015D410 )
          {
            v12 = ((__int64 (__fastcall *)(__int64, __int64))(__ROR8__(
                                                                qword_18015BFA8,
                                                                64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
                    v32,
                    v31);
            if ( v12 == -1073741275 )
              v12 = 0;
          }
          else
          {
            v12 = 0;
          }
        }
        if ( v12 >= 0 )
        {
          v16 = sub_18002BBDC(a1);
          v12 = v16;
          if ( *(_QWORD *)(a1 + 168) )
          {
            if ( v16 >= 0 )
            {
              *(_QWORD *)(a1 + 176) = v32;
              return (unsigned int)v12;
            }
          }
        }
        ZwClose(*v13);
        *v13 = 0LL;
      }
    }
    if ( v32 != -1 )
      ZwClose(v32);
    return (unsigned int)v12;
  }
  return 3221226029LL;
}
