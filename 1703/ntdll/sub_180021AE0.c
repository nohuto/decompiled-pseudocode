/*
 * XREFs of sub_180021AE0 @ 0x180021AE0
 * Callers:
 *     sub_18001AA5C @ 0x18001AA5C (sub_18001AA5C.c)
 *     sub_18001E19C @ 0x18001E19C (sub_18001E19C.c)
 *     sub_18003BD44 @ 0x18003BD44 (sub_18003BD44.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     sub_18004A930 @ 0x18004A930 (sub_18004A930.c)
 *     LdrGetDllHandleByName @ 0x18007B930 (LdrGetDllHandleByName.c)
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18001FC70 (RtlEqualUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800D62F0 @ 0x1800D62F0 (sub_1800D62F0.c)
 */

__int64 __fastcall sub_180021AE0(PUNICODE_STRING String1, PUNICODE_STRING a2, char a3, __int64 a4, _DWORD *a5)
{
  PUNICODE_STRING v7; // r15
  int v8; // ebx
  int v9; // eax
  int v10; // r9d
  PWCH i; // r10
  unsigned __int16 v12; // r11
  int v13; // ecx
  BOOLEAN v14; // bp
  _QWORD **v15; // rdi
  _QWORD *v16; // r14
  _QWORD *v17; // rsi
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
  v9 = 0;
  if ( v7 )
  {
    v10 = v7->Length >> 1;
    for ( i = v7->Buffer; v10; v9 = v13 + 65599 * v9 )
    {
      v12 = *i++;
      --v10;
      if ( v12 < 0x61u )
      {
        v13 = v12;
      }
      else if ( v12 > 0x7Au )
      {
        v13 = (unsigned __int16)(v12
                               + *(_WORD *)(qword_180159D68
                                          + 2LL
                                          * ((v12 & 0xF)
                                           + (unsigned int)*(unsigned __int16 *)(qword_180159D68
                                                                               + 2LL
                                                                               * (((v12 >> 4) & 0xF)
                                                                                + (unsigned int)*(unsigned __int16 *)(qword_180159D68 + 2 * ((unsigned __int64)v12 >> 8)))))));
      }
      else
      {
        v13 = v12 - 32;
      }
    }
    v8 = v9;
  }
  RtlAcquireSRWLockExclusive(&stru_18015C040);
  v14 = 0;
  v15 = (_QWORD **)((char *)&unk_18015AFA0 + 16 * (v8 & 0x1F));
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
  RtlReleaseSRWLockExclusive(&stru_18015C040);
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
        sub_1800D62F0(5280, 0, 0, v20, (__int64)a2, 0LL);
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
        sub_1800D62F0(5280, 0, 0, v20, (__int64)v7, 0LL);
    }
  }
  return v19;
}
