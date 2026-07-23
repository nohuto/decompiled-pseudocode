/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x180036E50
 * Callers:
 *     sub_18003697C @ 0x18003697C (sub_18003697C.c)
 *     sub_18005A0E4 @ 0x18005A0E4 (sub_18005A0E4.c)
 *     LdrLoadAlternateResourceModule @ 0x180084380 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     sub_180002EE8 @ 0x180002EE8 (sub_180002EE8.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_18002FF94 @ 0x18002FF94 (sub_18002FF94.c)
 *     sub_1800382D4 @ 0x1800382D4 (sub_1800382D4.c)
 *     sub_180038554 @ 0x180038554 (sub_180038554.c)
 *     RtlAppendUnicodeStringToString @ 0x18003C260 (RtlAppendUnicodeStringToString.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800416D0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180043B20 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlAppendUnicodeToString @ 0x180044AB0 (RtlAppendUnicodeToString.c)
 *     RtlLcidToLocaleName @ 0x1800454D0 (RtlLcidToLocaleName.c)
 *     sub_18005CB40 @ 0x18005CB40 (sub_18005CB40.c)
 *     sub_18005D2C8 @ 0x18005D2C8 (sub_18005D2C8.c)
 *     sub_180075FD4 @ 0x180075FD4 (sub_180075FD4.c)
 *     sub_18007B4A8 @ 0x18007B4A8 (sub_18007B4A8.c)
 *     sub_18008C2B0 @ 0x18008C2B0 (sub_18008C2B0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     __report_rangecheckfailure @ 0x180096038 (__report_rangecheckfailure.c)
 *     wcsrchr @ 0x18009BC50 (wcsrchr.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800E18A4 @ 0x1800E18A4 (sub_1800E18A4.c)
 *     sub_1800E2008 @ 0x1800E2008 (sub_1800E2008.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModuleEx(
        PVOID DllHandle,
        LANGID LanguageId,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  const wchar_t *v7; // rdi
  WCHAR *v8; // r12
  __int64 v9; // rsi
  _DWORD *v10; // rax
  __int64 v12; // r15
  int v13; // eax
  unsigned __int64 v14; // rax
  int appended; // edi
  int v16; // edi
  char v17; // di
  LANGID v18; // si
  int v19; // r8d
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rsi
  char v23; // al
  bool v24; // cf
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  WCHAR *Heap; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  char v32; // [rsp+52h] [rbp-7E6h]
  NTSTATUS v33; // [rsp+54h] [rbp-7E4h]
  __int16 v34; // [rsp+58h] [rbp-7E0h] BYREF
  unsigned int v35; // [rsp+5Ch] [rbp-7DCh] BYREF
  void *v36; // [rsp+60h] [rbp-7D8h] BYREF
  int v37; // [rsp+68h] [rbp-7D0h]
  ULONG v38; // [rsp+6Ch] [rbp-7CCh]
  __int64 v39; // [rsp+70h] [rbp-7C8h] BYREF
  PVOID DllHandlea; // [rsp+78h] [rbp-7C0h]
  ULONG_PTR v41; // [rsp+80h] [rbp-7B8h] BYREF
  _UNICODE_STRING v42; // [rsp+88h] [rbp-7B0h] BYREF
  int v43; // [rsp+98h] [rbp-7A0h]
  wchar_t *Str; // [rsp+A0h] [rbp-798h] BYREF
  PVOID v45; // [rsp+A8h] [rbp-790h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-788h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-780h] BYREF
  PVOID BaseAddress; // [rsp+C0h] [rbp-778h] BYREF
  PVOID v49; // [rsp+C8h] [rbp-770h]
  _UNICODE_STRING Destination; // [rsp+D0h] [rbp-768h] BYREF
  PUNICODE_STRING v51; // [rsp+E0h] [rbp-758h] BYREF
  WCHAR *v52; // [rsp+E8h] [rbp-750h]
  _UNICODE_STRING LocaleName; // [rsp+F0h] [rbp-748h] BYREF
  ULONG_PTR *v54; // [rsp+100h] [rbp-738h]
  int v55; // [rsp+108h] [rbp-730h]
  __int64 v56; // [rsp+110h] [rbp-728h]
  int v57; // [rsp+118h] [rbp-720h]
  _BYTE *v58; // [rsp+120h] [rbp-718h]
  __int64 v59; // [rsp+130h] [rbp-708h] BYREF
  int v60; // [rsp+138h] [rbp-700h]
  _BYTE v61[56]; // [rsp+140h] [rbp-6F8h] BYREF
  char v62; // [rsp+180h] [rbp-6B8h] BYREF
  WCHAR Source[352]; // [rsp+1C0h] [rbp-678h] BYREF
  char v64; // [rsp+480h] [rbp-3B8h] BYREF
  _BYTE v65[704]; // [rsp+530h] [rbp-308h] BYREF

  v54 = ResourceOffset;
  DllHandlea = DllHandle;
  v38 = Flags;
  v45 = 0LL;
  Handle = 0LL;
  v37 = 0;
  v7 = 0LL;
  Str = 0LL;
  v35 = 0;
  v8 = 0LL;
  v52 = 0LL;
  v41 = 0LL;
  v51 = 0LL;
  v32 = 0;
  v59 = 72LL;
  v60 = 1;
  memset(v61, 0, sizeof(v61));
  v34 = 256;
  LODWORD(v39) = -1;
  v49 = 0LL;
  BaseAddress = 0LL;
  v9 = 0LL;
  v46 = 0LL;
  if ( !DllHandlea || !LanguageId || !ResourceDllBase )
    return -1073741811;
  v10 = sub_18002FF94((unsigned __int64)DllHandlea, LanguageId, &v41, 4);
  if ( v10 == (_DWORD *)-1LL )
  {
    if ( (Flags & 0x400000) == 0 )
    {
      *ResourceDllBase = 0LL;
      return -1073020922;
    }
  }
  else if ( v10 )
  {
    *ResourceDllBase = v10;
    if ( ResourceOffset )
      *ResourceOffset = v41;
    return 0;
  }
  v12 = 0LL;
  v36 = 0LL;
  v43 = v38 & 0x400000;
  if ( (v38 & 0x400000) != 0 )
  {
    v13 = -1073741767;
  }
  else
  {
    v13 = sub_180075FD4(DllHandlea, Source, (__int64)&Str, (__int64)&v35, (__int64)&v46);
    v7 = Str;
    v9 = v46;
  }
  if ( v13 < 0 )
  {
    appended = sub_18008C2B0(DllHandlea, Source, (__int64)&BaseAddress, (__int64)&v35, (__int64)&v34);
    v33 = appended;
    if ( appended < 0 )
      goto LABEL_71;
    v7 = (const wchar_t *)BaseAddress;
    Str = (wchar_t *)BaseAddress;
  }
  v14 = v37 & 0xFFFFFFFE;
  if ( v14 >= 0x2BE )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)Source + v14) = 0;
  if ( wcsrchr(v7, 0x7Eu) && (int)sub_1800E18A4(Source, v7) >= 0 )
  {
    v7 = (const wchar_t *)v49;
    Str = (wchar_t *)v49;
    v29 = -1LL;
    do
      ++v29;
    while ( *((_WORD *)v49 + v29) );
    v35 = 2 * v29;
  }
  v58 = v65;
  v57 = 46006272;
  v56 = 0LL;
  v55 = 0;
  if ( (unsigned __int64)v35 + 12 > 0x3C )
  {
    Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * v35 + 10);
    v8 = Heap;
    v52 = Heap;
    v12 = (__int64)v36;
    if ( !Heap )
    {
      appended = -1073741801;
      goto LABEL_87;
    }
    Destination.Buffer = Heap;
    Destination.MaximumLength = 2 * (v35 + 5);
    v7 = Str;
    v9 = v46;
  }
  else
  {
    Destination.Buffer = (PWCH)&v62;
    Destination.MaximumLength = 60;
  }
  Destination.Length = 0;
  appended = RtlAppendUnicodeToString(&Destination, v7);
  v33 = appended;
  if ( appended < 0 )
    goto LABEL_71;
  appended = RtlAppendUnicodeToString(&Destination, L".mui");
  v33 = appended;
  if ( appended < 0 )
    goto LABEL_71;
  if ( v9 )
    RtlActivateActivationContextUnsafeFast(&v59, v9);
  v16 = sub_18007B4A8(&Destination, &v51);
  if ( v9 )
    RtlDeactivateActivationContextUnsafeFast(&v59);
  if ( v16 >= 0 )
  {
    v17 = 1;
    v32 = 1;
    v42.Buffer = v51->Buffer;
    v42.Length = v51->Length;
    v42.MaximumLength = v51->MaximumLength;
  }
  else
  {
    v17 = 0;
  }
  if ( v17
    || qword_18015A258 == (PVOID)-1LL
    || qword_18015A258
    && ((v25 = *((_QWORD *)qword_18015A258 + 2)) == 0
     || (v26 = *(_QWORD *)(v25 + 24)) == 0
     || (*(_DWORD *)(v26 + 48) & 0x100000) != 0) )
  {
    v18 = LanguageId;
LABEL_27:
    if ( v17 )
    {
      LocaleName.Buffer = 0LL;
LABEL_30:
      v20 = 2147353477LL;
      if ( RtlGetCurrentServiceSessionId() )
      {
        v21 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
        v12 = (__int64)v36;
      }
      else
      {
        v21 = 2147353477LL;
      }
      if ( (*(_BYTE *)v21 & 1) != 0 )
      {
        v22 = 2147353476LL;
        if ( RtlGetCurrentServiceSessionId() )
        {
          v30 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
          v12 = (__int64)v36;
        }
        else
        {
          v30 = 2147353476LL;
        }
        sub_1800E2008(&v42, *(unsigned __int8 *)v30);
      }
      else
      {
        v22 = 2147353476LL;
      }
      LOBYTE(v19) = v34;
      appended = sub_1800382D4(
                   (_DWORD)DllHandlea,
                   (unsigned int)&v42,
                   v19,
                   (unsigned int)&Handle,
                   (__int64)&v45,
                   (__int64)&v41);
      v33 = appended;
      if ( appended >= 0 )
      {
        v12 = (unsigned __int64)v45 | 1;
        if ( !v32 && !(unsigned __int8)sub_180038554(DllHandlea, (unsigned __int64)v45 | 1, LocaleName.Buffer, v38) )
        {
          ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v45);
          ZwClose(Handle);
          Handle = 0LL;
          v41 = 0LL;
          v12 = 0LL;
          appended = -1073020926;
          v33 = -1073020926;
        }
      }
      goto LABEL_38;
    }
    v42.Buffer = (PWCH)v65;
    *(_DWORD *)&v42.Length = 46006272;
    RtlAppendUnicodeToString(&v42, Source);
    LocaleName.Buffer = (PWCH)&v64;
    LocaleName.MaximumLength = 170;
    if ( RtlLcidToLocaleName(v18, &LocaleName, 2u, 0) >= 0 )
    {
      RtlAppendUnicodeStringToString(&v42, &LocaleName);
      RtlAppendUnicodeToString(&v42, L"\\");
      RtlAppendUnicodeToString(&v42, Destination.Buffer);
      goto LABEL_30;
    }
    appended = -1073741811;
LABEL_87:
    v33 = appended;
    goto LABEL_71;
  }
  v18 = LanguageId;
  v27 = sub_18005D2C8(DllHandlea, (__int64)&v39, 0LL);
  v45 = (PVOID)v27;
  if ( !v27 )
    goto LABEL_27;
  v12 = v27 | 1;
  appended = 0;
  v33 = 0;
LABEL_71:
  v22 = 2147353476LL;
  v20 = 2147353477LL;
LABEL_38:
  if ( !v12 )
    v12 = -1LL;
  v36 = (void *)v12;
  if ( appended == -1073741659 || appended == -1073741801 || appended == -1073741523 )
    v23 = 0;
  else
    v23 = HIBYTE(v34);
  if ( v23 )
  {
    v24 = v43 != 0;
    v43 = -v43;
    sub_18005CB40(
      (_DWORD)DllHandlea,
      (unsigned int)&v36,
      (unsigned int)&Handle,
      0,
      v39,
      LanguageId,
      v24 ? 33 : 1,
      appended,
      v41);
  }
  if ( v36 == (void *)-1LL )
  {
    *ResourceDllBase = 0LL;
  }
  else
  {
    if ( (_DWORD)v39 == -1 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v20 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
      if ( (*(_BYTE *)v20 & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v22 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
        sub_1800E2008(&v42, *(unsigned __int8 *)v22);
      }
      if ( qword_18015A258 != (PVOID)-1LL )
        sub_180002EE8();
    }
    *ResourceDllBase = v36;
    if ( v54 )
      *v54 = v41;
    appended = 0;
    v33 = 0;
  }
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    appended = v33;
  }
  if ( v49 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v49);
    appended = v33;
  }
  if ( v8 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    return v33;
  }
  return appended;
}
