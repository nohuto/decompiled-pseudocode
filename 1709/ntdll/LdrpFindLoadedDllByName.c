/*
 * XREFs of LdrpFindLoadedDllByName @ 0x18002E330
 * Callers:
 *     LdrpFindOrPrepareLoadingModule @ 0x1800203DC (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpFastpthReloadedDll @ 0x18002E270 (LdrpFastpthReloadedDll.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     LdrpFindLoadedDllInternal @ 0x180035624 (LdrpFindLoadedDllInternal.c)
 *     LdrGetDllHandleByName @ 0x18007D190 (LdrGetDllHandleByName.c)
 *     AVrfInitializeVerifier @ 0x1800D9BE0 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18002E610 (RtlEqualUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     LdrpLogEtwEvent @ 0x1800D1E90 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpFindLoadedDllByName(unsigned __int16 *a1, unsigned __int16 *a2, char a3, __int64 a4, _DWORD *a5)
{
  unsigned __int16 *v7; // r15
  unsigned int v8; // ebx
  int v9; // eax
  unsigned __int16 *i; // r9
  unsigned __int16 v11; // r10
  int v12; // ecx
  __int64 v13; // r8
  char v14; // bp
  _QWORD **v15; // rsi
  _QWORD *v16; // r14
  volatile signed __int32 *v17; // rdi
  __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int8 v22; // di
  struct _PEB *v23; // rax
  _DWORD *SharedData; // rcx
  __int64 v25; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // r10
  __int64 v30; // r11
  _WORD *v31; // rax
  __int16 v32; // cx
  __int16 v33; // ax
  char *v34; // rcx
  __int64 v35; // rcx
  _WORD v36[4]; // [rsp+30h] [rbp-48h] BYREF
  _WORD *v37; // [rsp+38h] [rbp-40h]

  v7 = a1;
  if ( !a1 )
  {
    v29 = *((_QWORD *)a2 + 1);
    v30 = *a2;
    v31 = (_WORD *)(v30 + v29 - 2);
    if ( (unsigned __int64)v31 > v29 )
    {
      while ( *v31 != 92 && *v31 != 47 )
      {
        if ( (unsigned __int64)--v31 <= v29 )
          goto LABEL_46;
      }
      ++v31;
    }
LABEL_46:
    v37 = v31;
    v7 = v36;
    v32 = (_WORD)v31 - v29;
    v33 = a2[1] - ((_WORD)v31 - v29);
    v36[0] = v30 - v32;
    v36[1] = v33;
  }
  v8 = 0;
  if ( !v7 )
    goto LABEL_52;
  v9 = *v7 >> 1;
  for ( i = (unsigned __int16 *)*((_QWORD *)v7 + 1); v9; v8 = v12 + 65599 * v8 )
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
                             + *(_WORD *)(Nls844UnicodeUpcaseTable
                                        + 2LL
                                        * ((v11 & 0xF)
                                         + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                             + 2LL
                                                                             * (((v11 >> 4) & 0xF)
                                                                              + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v11 >> 8)))))));
    }
    else
    {
      v12 = v11 - 32;
    }
  }
  if ( !v8 )
LABEL_52:
    v8 = 0x80000000;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v14 = 0;
  v15 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v8 & 0x1F));
  v16 = *v15;
  if ( *v15 == v15 )
    goto LABEL_18;
  while ( 1 )
  {
    v17 = (volatile signed __int32 *)(v16 - 14);
    if ( v8 != *((_DWORD *)v16 + 38) || (a3 & 8) != 0 && (v17[26] & 1) == 0 )
      goto LABEL_30;
    if ( !a2 )
      break;
    LOBYTE(v13) = 1;
    v14 = RtlEqualUnicodeString(a2, v17 + 18, v13);
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
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  v22 = 3;
  if ( a2 )
  {
    if ( v14 )
      v22 = 0;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v21, v20) )
      v28 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v28 = 2147353476LL;
    if ( *(_BYTE *)v28 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v34 = (unsigned int)RtlGetCurrentServiceSessionId(v28, v27)
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v34 & 0x20) != 0 )
        LdrpLogEtwEvent(5280, 0, 0, v22, (__int64)a2, 0LL);
    }
  }
  else
  {
    v23 = NtCurrentPeb();
    if ( v14 )
      v22 = 0;
    SharedData = v23->SharedData;
    if ( SharedData && *SharedData )
      v25 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v25 = 2147353476LL;
    if ( *(_BYTE *)v25 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v25, v20) )
        v35 = (__int64)NtCurrentPeb()->SharedData + 555;
      else
        v35 = 2147353477LL;
      if ( (*(_BYTE *)v35 & 0x20) != 0 )
        LdrpLogEtwEvent(5280, 0, 0, v22, (__int64)v7, 0LL);
    }
  }
  return v19;
}
