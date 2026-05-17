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

__int64 __fastcall sub_180021AE0(unsigned __int16 *a1, unsigned __int16 *a2, char a3, __int64 a4, _DWORD *a5)
{
  unsigned __int16 *v7; // r15
  int v8; // ebx
  int v9; // eax
  int v10; // r9d
  unsigned __int16 *i; // r10
  unsigned __int16 v12; // r11
  int v13; // ecx
  char v14; // bp
  _QWORD **v15; // rdi
  _QWORD *v16; // r14
  _QWORD *v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int8 v24; // di
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  unsigned __int64 v34; // r10
  __int64 v35; // r11
  _WORD *v36; // rax
  __int16 v37; // cx
  __int16 v38; // ax
  char *v39; // rcx
  __int64 v40; // rcx
  _WORD v41[4]; // [rsp+30h] [rbp-48h] BYREF
  _WORD *v42; // [rsp+38h] [rbp-40h]

  v7 = a1;
  if ( !a1 )
  {
    v34 = *((_QWORD *)a2 + 1);
    v35 = *a2;
    v36 = (_WORD *)(v35 + v34 - 2);
    if ( (unsigned __int64)v36 > v34 )
    {
      while ( *v36 != 92 && *v36 != 47 )
      {
        if ( (unsigned __int64)--v36 <= v34 )
          goto LABEL_46;
      }
      ++v36;
    }
LABEL_46:
    v42 = v36;
    v7 = v41;
    v37 = (_WORD)v36 - v34;
    v38 = a2[1] - ((_WORD)v36 - v34);
    v41[0] = v35 - v37;
    v41[1] = v38;
  }
  v8 = 0;
  v9 = 0;
  if ( v7 )
  {
    v10 = *v7 >> 1;
    for ( i = (unsigned __int16 *)*((_QWORD *)v7 + 1); v10; v9 = v13 + 65599 * v9 )
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
  RtlAcquireSRWLockExclusive(&qword_18015C040);
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
    v14 = RtlEqualUnicodeString(a2, (unsigned __int16 *)v17 + 36, 1);
    if ( v14 )
      goto LABEL_16;
LABEL_30:
    v16 = (_QWORD *)*v16;
    if ( v16 == v15 )
      goto LABEL_18;
  }
  if ( (v17[13] & 0x10000000) != 0 || !RtlEqualUnicodeString(v7, (unsigned __int16 *)v17 + 44, 1) )
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
  RtlReleaseSRWLockExclusive(&qword_18015C040);
  v24 = 3;
  if ( a2 )
  {
    if ( v14 )
      v24 = 0;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v21, v20, v22, v23) )
      v33 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v33 = 2147353476LL;
    if ( *(_BYTE *)v33 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v39 = (unsigned int)RtlGetCurrentServiceSessionId(v33, v30, v31, v32)
          ? (char *)NtCurrentPeb()->HotpatchInformation + 555
          : (char *)2147353477;
      if ( (*v39 & 0x20) != 0 )
        sub_1800D62F0(5280, 0, 0, v24, (__int64)a2, 0LL);
    }
  }
  else
  {
    if ( v14 )
      v24 = 0;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v21, v20, v22, v23) )
      v28 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v28 = 2147353476LL;
    if ( *(_BYTE *)v28 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v28, v25, v26, v27) )
        v40 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
      else
        v40 = 2147353477LL;
      if ( (*(_BYTE *)v40 & 0x20) != 0 )
        sub_1800D62F0(5280, 0, 0, v24, (__int64)v7, 0LL);
    }
  }
  return v19;
}
