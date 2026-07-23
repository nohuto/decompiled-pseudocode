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

__int64 __fastcall sub_1800385D0(PUNICODE_STRING String1, PUNICODE_STRING a2, char a3, __int64 a4, _DWORD *a5)
{
  PUNICODE_STRING v7; // r15
  unsigned int v8; // ebx
  int v9; // eax
  PWCH i; // r9
  unsigned __int16 v11; // r10
  int v12; // ecx
  char v13; // di
  BOOLEAN v14; // bp
  _QWORD **v15; // rsi
  _QWORD *v16; // r14
  _QWORD *v17; // rdi
  __int64 v18; // rax
  unsigned int v19; // ebx
  unsigned __int8 v20; // di
  __int64 v21; // rcx
  __int64 v23; // rcx
  PWCH Buffer; // r10
  __int64 Length; // r11
  PWCH v26; // rax
  __int16 v27; // cx
  __int16 v28; // ax
  USHORT *v29; // rcx
  __int64 v30; // rcx
  _WORD v31[4]; // [rsp+30h] [rbp-48h] BYREF
  PWCH v32; // [rsp+38h] [rbp-40h]

  v7 = String1;
  if ( !String1 )
  {
    Buffer = a2->Buffer;
    Length = a2->Length;
    v26 = (PWCH)((char *)Buffer + Length - 2);
    if ( v26 > Buffer )
    {
      while ( *v26 != 92 && *v26 != 47 )
      {
        if ( --v26 <= Buffer )
          goto LABEL_46;
      }
      ++v26;
    }
LABEL_46:
    v32 = v26;
    v7 = (PUNICODE_STRING)v31;
    v27 = (_WORD)v26 - (_WORD)Buffer;
    v28 = a2->MaximumLength - ((_WORD)v26 - (_WORD)Buffer);
    v31[0] = Length - v27;
    v31[1] = v28;
  }
  v8 = 0;
  if ( !v7 )
    goto LABEL_52;
  v9 = v7->Length >> 1;
  for ( i = v7->Buffer; v9; v8 = v12 + 65599 * v8 )
  {
    v11 = *i++;
    --v9;
    if ( v11 < 0x61u )
    {
      v12 = v11;
    }
    else if ( v11 > 0x7Au )
    {
      v12 = (unsigned __int16)(v11
                             + *(_WORD *)(qword_18015B238
                                        + 2LL
                                        * ((v11 & 0xF)
                                         + (unsigned int)*(unsigned __int16 *)(qword_18015B238
                                                                             + 2LL
                                                                             * (((v11 >> 4) & 0xF)
                                                                              + (unsigned int)*(unsigned __int16 *)(qword_18015B238 + 2 * ((unsigned __int64)v11 >> 8)))))));
    }
    else
    {
      v12 = v11 - 32;
    }
  }
  v13 = v8;
  if ( !v8 )
  {
LABEL_52:
    v8 = 0x80000000;
    v13 = 0;
  }
  RtlAcquireSRWLockExclusive(&stru_18015D070);
  v14 = 0;
  v15 = (_QWORD **)((char *)&unk_18015BFC0 + 16 * (v13 & 0x1F));
  v16 = *v15;
  if ( *v15 == v15 )
    goto LABEL_18;
  while ( 1 )
  {
    v17 = v16 - 14;
    if ( v8 != *((_DWORD *)v16 + 38) || (a3 & 8) != 0 && (v17[13] & 1) == 0 )
      goto LABEL_30;
    if ( !a2 )
      break;
    v14 = RtlEqualUnicodeString(a2, (PUNICODE_STRING)(v17 + 9), 1u);
    if ( v14 )
      goto LABEL_16;
LABEL_30:
    v16 = (_QWORD *)*v16;
    if ( v16 == v15 )
      goto LABEL_18;
  }
  if ( (v17[13] & 0x10000000) != 0 || !RtlEqualUnicodeString(v7, (PUNICODE_STRING)(v17 + 11), 1u) )
  {
    v14 = 0;
    goto LABEL_30;
  }
  v14 = 1;
LABEL_16:
  v18 = v17[19];
  if ( *(_DWORD *)(v18 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v18 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)v17 + 69);
  *(_QWORD *)a4 = v17;
LABEL_18:
  v19 = 0;
  if ( v14 )
  {
    if ( a5 )
      *a5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 152LL) + 56LL);
  }
  else
  {
    v19 = -1073741515;
  }
  RtlReleaseSRWLockExclusive(&stru_18015D070);
  v20 = 3;
  if ( a2 )
  {
    if ( v14 )
      v20 = 0;
    if ( RtlGetCurrentServiceSessionId() )
      v23 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v23 = 2147353476LL;
    if ( *(_BYTE *)v23 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v29 = RtlGetCurrentServiceSessionId()
          ? (USHORT *)((char *)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1)
          : (USHORT *)2147353477;
      if ( (*(_BYTE *)v29 & 0x20) != 0 )
        sub_1800CBAB0(5280, 0, 0, v20, (__int64)a2, 0LL);
    }
  }
  else
  {
    if ( v14 )
      v20 = 0;
    if ( RtlGetCurrentServiceSessionId() )
      v21 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v21 = 2147353476LL;
    if ( *(_BYTE *)v21 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v30 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
      else
        v30 = 2147353477LL;
      if ( (*(_BYTE *)v30 & 0x20) != 0 )
        sub_1800CBAB0(5280, 0, 0, v20, (__int64)v7, 0LL);
    }
  }
  return v19;
}
