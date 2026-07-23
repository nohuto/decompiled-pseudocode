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

__int64 __fastcall LdrpFindLoadedDllByName(
        PUNICODE_STRING String1,
        PUNICODE_STRING a2,
        char a3,
        __int64 a4,
        _DWORD *a5)
{
  PUNICODE_STRING v7; // r15
  unsigned int v8; // ebx
  int v9; // eax
  wchar_t *i; // r9
  unsigned __int16 v11; // r10
  int v12; // ecx
  BOOLEAN v13; // bp
  _QWORD **v14; // rsi
  _QWORD *v15; // r14
  _QWORD *v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // ebx
  unsigned __int8 v19; // di
  struct _PEB *v20; // rax
  _DWORD *SharedData; // rcx
  __int64 v22; // rcx
  __int64 v24; // rcx
  wchar_t *Buffer; // r10
  __int64 Length; // r11
  wchar_t *v27; // rax
  __int16 v28; // cx
  __int16 v29; // ax
  char *v30; // rcx
  __int64 v31; // rcx
  _WORD v32[4]; // [rsp+30h] [rbp-48h] BYREF
  wchar_t *v33; // [rsp+38h] [rbp-40h]

  v7 = String1;
  if ( !String1 )
  {
    Buffer = a2->Buffer;
    Length = a2->Length;
    v27 = (wchar_t *)((char *)Buffer + Length - 2);
    if ( v27 > Buffer )
    {
      while ( *v27 != 92 && *v27 != 47 )
      {
        if ( --v27 <= Buffer )
          goto LABEL_46;
      }
      ++v27;
    }
LABEL_46:
    v33 = v27;
    v7 = (PUNICODE_STRING)v32;
    v28 = (_WORD)v27 - (_WORD)Buffer;
    v29 = a2->MaximumLength - ((_WORD)v27 - (_WORD)Buffer);
    v32[0] = Length - v28;
    v32[1] = v29;
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
  v13 = 0;
  v14 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v8 & 0x1F));
  v15 = *v14;
  if ( *v14 == v14 )
    goto LABEL_18;
  while ( 1 )
  {
    v16 = v15 - 14;
    if ( v8 != *((_DWORD *)v15 + 38) || (a3 & 8) != 0 && (v16[13] & 1) == 0 )
      goto LABEL_30;
    if ( !a2 )
      break;
    v13 = RtlEqualUnicodeString(a2, (PUNICODE_STRING)(v16 + 9), 1u);
    if ( v13 )
      goto LABEL_16;
LABEL_30:
    v15 = (_QWORD *)*v15;
    if ( v15 == v14 )
      goto LABEL_18;
  }
  if ( (v16[13] & 0x10000000) != 0 || !RtlEqualUnicodeString(v7, (PUNICODE_STRING)(v16 + 11), 1u) )
  {
    v13 = 0;
    goto LABEL_30;
  }
  v13 = 1;
LABEL_16:
  v17 = v16[19];
  if ( *(_DWORD *)(v17 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v17 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)v16 + 69);
  *(_QWORD *)a4 = v16;
LABEL_18:
  v18 = 0;
  if ( v13 )
  {
    if ( a5 )
      *a5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 152LL) + 56LL);
  }
  else
  {
    v18 = -1073741515;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  v19 = 3;
  if ( a2 )
  {
    if ( v13 )
      v19 = 0;
    if ( RtlGetCurrentServiceSessionId() )
      v24 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v24 = 2147353476LL;
    if ( *(_BYTE *)v24 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v30 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v30 & 0x20) != 0 )
        LdrpLogEtwEvent(5280, 0, 0, v19, (__int64)a2, 0LL);
    }
  }
  else
  {
    v20 = NtCurrentPeb();
    if ( v13 )
      v19 = 0;
    SharedData = v20->SharedData;
    if ( SharedData && *SharedData )
      v22 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v22 = 2147353476LL;
    if ( *(_BYTE *)v22 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v31 = (__int64)NtCurrentPeb()->SharedData + 555;
      else
        v31 = 2147353477LL;
      if ( (*(_BYTE *)v31 & 0x20) != 0 )
        LdrpLogEtwEvent(5280, 0, 0, v19, (__int64)v7, 0LL);
    }
  }
  return v18;
}
