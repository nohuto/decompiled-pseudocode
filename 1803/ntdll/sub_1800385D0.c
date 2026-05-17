/*
 * XREFs of sub_1800385D0 @ 0x1800385D0
 * Callers:
 *     sub_180038510 @ 0x180038510 (sub_180038510.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_180040D60 @ 0x180040D60 (sub_180040D60.c)
 *     sub_180041F10 @ 0x180041F10 (sub_180041F10.c)
 *     LdrGetDllHandleByName @ 0x1800772B0 (LdrGetDllHandleByName.c)
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlEqualUnicodeString @ 0x1800388A0 (RtlEqualUnicodeString.c)
 *     sub_1800CBAB0 @ 0x1800CBAB0 (sub_1800CBAB0.c)
 */

__int64 __fastcall sub_1800385D0(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int16 *i,
        _DWORD *a5)
{
  unsigned __int16 *v5; // r12
  __int64 v6; // r13
  unsigned __int16 *v7; // r15
  unsigned int v8; // ebx
  int v9; // eax
  unsigned __int16 v10; // r10
  int v11; // ecx
  char v12; // di
  __int64 v13; // r8
  char v14; // bp
  _QWORD **v15; // rsi
  _QWORD *v16; // r14
  volatile signed __int32 *v17; // rdi
  __int64 v18; // rax
  unsigned int v19; // ebx
  unsigned __int8 v20; // di
  __int64 v21; // rcx
  __int64 v23; // rcx
  unsigned __int64 v24; // r10
  __int64 v25; // r11
  _WORD *v26; // rax
  __int16 v27; // cx
  __int16 v28; // ax
  char *v29; // rcx
  __int64 v30; // rcx
  _WORD v31[4]; // [rsp+30h] [rbp-48h] BYREF
  _WORD *v32; // [rsp+38h] [rbp-40h]
  char v33; // [rsp+90h] [rbp+18h]

  v33 = (char)a3;
  v5 = i;
  v6 = a2;
  v7 = a1;
  if ( !a1 )
  {
    v24 = *(_QWORD *)(a2 + 8);
    v25 = *(unsigned __int16 *)a2;
    v26 = (_WORD *)(v25 + v24 - 2);
    if ( (unsigned __int64)v26 > v24 )
    {
      while ( *v26 != 92 && *v26 != 47 )
      {
        if ( (unsigned __int64)--v26 <= v24 )
          goto LABEL_46;
      }
      ++v26;
    }
LABEL_46:
    v32 = v26;
    v7 = v31;
    v27 = (_WORD)v26 - v24;
    v28 = *(_WORD *)(a2 + 2) - ((_WORD)v26 - v24);
    v31[0] = v25 - v27;
    v31[1] = v28;
  }
  v8 = 0;
  if ( !v7 )
    goto LABEL_52;
  v9 = *v7 >> 1;
  for ( i = (unsigned __int16 *)*((_QWORD *)v7 + 1); v9; v8 = v11 + 65599 * v8 )
  {
    v10 = *i++;
    --v9;
    if ( v10 < 0x61u )
    {
      v11 = v10;
    }
    else if ( v10 > 0x7Au )
    {
      a3 = (unsigned __int64 *)(v10 & 0xF);
      a2 = *(unsigned __int16 *)(qword_18015B238
                               + 2LL
                               * ((unsigned int)a3
                                + *(unsigned __int16 *)(qword_18015B238
                                                      + 2LL
                                                      * (((v10 >> 4) & 0xF)
                                                       + (unsigned int)*(unsigned __int16 *)(qword_18015B238
                                                                                           + 2
                                                                                           * ((unsigned __int64)v10 >> 8))))));
      LOWORD(a2) = v10 + a2;
      v11 = (unsigned __int16)a2;
    }
    else
    {
      v11 = v10 - 32;
    }
  }
  v12 = v8;
  if ( !v8 )
  {
LABEL_52:
    v8 = 0x80000000;
    v12 = 0;
  }
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, a2, a3, (__int64)i);
  v14 = 0;
  v15 = (_QWORD **)((char *)&unk_18015BFC0 + 16 * (v12 & 0x1F));
  v16 = *v15;
  if ( *v15 == v15 )
    goto LABEL_18;
  while ( 1 )
  {
    v17 = (volatile signed __int32 *)(v16 - 14);
    if ( v8 != *((_DWORD *)v16 + 38) || (v33 & 8) != 0 && (v17[26] & 1) == 0 )
      goto LABEL_30;
    if ( !v6 )
      break;
    LOBYTE(v13) = 1;
    v14 = RtlEqualUnicodeString(v6, v17 + 18, v13);
    if ( v14 )
      goto LABEL_16;
LABEL_30:
    v16 = (_QWORD *)*v16;
    if ( v16 == v15 )
      goto LABEL_18;
  }
  if ( (v17[26] & 0x10000000) != 0 || (LOBYTE(v13) = 1, !(unsigned __int8)RtlEqualUnicodeString(v7, v17 + 22, v13)) )
  {
    v14 = 0;
    goto LABEL_30;
  }
  v14 = 1;
LABEL_16:
  v18 = *((_QWORD *)v17 + 19);
  if ( *(_DWORD *)(v18 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v18 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement(v17 + 69);
  *(_QWORD *)v5 = v17;
LABEL_18:
  v19 = 0;
  if ( v14 )
  {
    if ( a5 )
      *a5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 152LL) + 56LL);
  }
  else
  {
    v19 = -1073741515;
  }
  RtlReleaseSRWLockExclusive(&qword_18015D070);
  v20 = 3;
  if ( v6 )
  {
    if ( v14 )
      v20 = 0;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v23 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v23 = 2147353476LL;
    if ( *(_BYTE *)v23 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v29 = (unsigned int)RtlGetCurrentServiceSessionId()
          ? (char *)NtCurrentPeb()->HotpatchInformation + 555
          : (char *)2147353477;
      if ( (*v29 & 0x20) != 0 )
        sub_1800CBAB0(5280, 0, 0, v20, v6, 0LL);
    }
  }
  else
  {
    if ( v14 )
      v20 = 0;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v21 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v21 = 2147353476LL;
    if ( *(_BYTE *)v21 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v30 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
      else
        v30 = 2147353477LL;
      if ( (*(_BYTE *)v30 & 0x20) != 0 )
        sub_1800CBAB0(5280, 0, 0, v20, (__int64)v7, 0LL);
    }
  }
  return v19;
}
