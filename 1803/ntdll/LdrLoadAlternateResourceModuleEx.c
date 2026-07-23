/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x180034390
 * Callers:
 *     sub_180033EB8 @ 0x180033EB8 (sub_180033EB8.c)
 *     sub_1800515C0 @ 0x1800515C0 (sub_1800515C0.c)
 *     LdrLoadAlternateResourceModule @ 0x18007D9F0 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     sub_1800107D4 @ 0x1800107D4 (sub_1800107D4.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_18002B698 @ 0x18002B698 (sub_18002B698.c)
 *     sub_18002E0EC @ 0x18002E0EC (sub_18002E0EC.c)
 *     RtlAppendUnicodeToString @ 0x180034F00 (RtlAppendUnicodeToString.c)
 *     RtlLcidToLocaleName @ 0x180036A00 (RtlLcidToLocaleName.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003B310 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003B460 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeStringToString @ 0x180040250 (RtlAppendUnicodeStringToString.c)
 *     sub_180041510 @ 0x180041510 (sub_180041510.c)
 *     sub_1800541C8 @ 0x1800541C8 (sub_1800541C8.c)
 *     sub_1800770AC @ 0x1800770AC (sub_1800770AC.c)
 *     sub_18007B934 @ 0x18007B934 (sub_18007B934.c)
 *     sub_180087F60 @ 0x180087F60 (sub_180087F60.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008B278 (__report_rangecheckfailure.c)
 *     wcsrchr @ 0x180090EA0 (wcsrchr.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800CC088 @ 0x1800CC088 (sub_1800CC088.c)
 *     sub_1800DB564 @ 0x1800DB564 (sub_1800DB564.c)
 *     sub_1800DBCC0 @ 0x1800DBCC0 (sub_1800DBCC0.c)
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
  __int64 v9; // r14
  WCHAR *v10; // rsi
  _DWORD *v11; // rax
  ULONG v13; // r13d
  ULONG v14; // r15d
  int v15; // eax
  unsigned __int64 v16; // rax
  int appended; // edi
  int v18; // edi
  PVOID v19; // r14
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  char v23; // al
  __int64 v24; // rcx
  WCHAR *Heap; // rax
  __int64 v26; // rax
  int v27; // r8d
  __int64 v28; // rax
  __int64 v29; // rcx
  char v30; // [rsp+50h] [rbp-AB8h] BYREF
  NTSTATUS v31; // [rsp+54h] [rbp-AB4h]
  char v32; // [rsp+58h] [rbp-AB0h]
  LANGID v33; // [rsp+5Ah] [rbp-AAEh]
  char v34; // [rsp+5Ch] [rbp-AACh]
  __int64 v35; // [rsp+60h] [rbp-AA8h] BYREF
  _UNICODE_STRING v36; // [rsp+68h] [rbp-AA0h] BYREF
  PVOID DllHandlea; // [rsp+78h] [rbp-A90h]
  void *v38; // [rsp+80h] [rbp-A88h] BYREF
  int v39; // [rsp+88h] [rbp-A80h]
  SIZE_T Size; // [rsp+8Ch] [rbp-A7Ch]
  ULONG_PTR v41; // [rsp+98h] [rbp-A70h] BYREF
  wchar_t *Str; // [rsp+A0h] [rbp-A68h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+A8h] [rbp-A60h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-A50h] BYREF
  HANDLE v45; // [rsp+C0h] [rbp-A48h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp-A40h] BYREF
  PVOID v47; // [rsp+D0h] [rbp-A38h]
  _UNICODE_STRING Destination; // [rsp+D8h] [rbp-A30h] BYREF
  PVOID *v49; // [rsp+E8h] [rbp-A20h]
  WCHAR *v50; // [rsp+F0h] [rbp-A18h]
  PUNICODE_STRING v51; // [rsp+F8h] [rbp-A10h] BYREF
  ULONG_PTR *v52; // [rsp+100h] [rbp-A08h]
  WCHAR *v53; // [rsp+108h] [rbp-A00h]
  int v54; // [rsp+110h] [rbp-9F8h]
  __int64 v55; // [rsp+118h] [rbp-9F0h]
  int v56; // [rsp+120h] [rbp-9E8h]
  _WORD *v57; // [rsp+128h] [rbp-9E0h]
  _UNICODE_STRING DestinationString; // [rsp+130h] [rbp-9D8h] BYREF
  __int64 v59; // [rsp+140h] [rbp-9C8h] BYREF
  int v60; // [rsp+148h] [rbp-9C0h]
  _BYTE v61[56]; // [rsp+150h] [rbp-9B8h] BYREF
  char v62; // [rsp+190h] [rbp-978h] BYREF
  WCHAR Source[352]; // [rsp+1D0h] [rbp-938h] BYREF
  _WORD v64[352]; // [rsp+490h] [rbp-678h] BYREF
  char v65; // [rsp+750h] [rbp-3B8h] BYREF
  WCHAR SourceString[352]; // [rsp+800h] [rbp-308h] BYREF

  v52 = ResourceOffset;
  v49 = ResourceDllBase;
  v33 = LanguageId;
  DllHandlea = DllHandle;
  v45 = 0LL;
  v39 = 0;
  v7 = 0LL;
  Str = 0LL;
  LODWORD(v35) = 0;
  v8 = 0LL;
  v53 = 0LL;
  v41 = 0LL;
  v51 = 0LL;
  v32 = 0;
  v59 = 72LL;
  v60 = 1;
  memset(v61, 0, sizeof(v61));
  v30 = 0;
  v47 = 0LL;
  BaseAddress = 0LL;
  v34 = 1;
  v9 = 0LL;
  v44 = 0LL;
  v10 = SourceString;
  v50 = SourceString;
  Size = 0x1000002BELL;
  if ( !DllHandle || !v33 || !ResourceDllBase )
    return -1073741811;
  v11 = sub_1800107D4((unsigned __int64)DllHandle, v33, &v41, 4);
  if ( v11 == (_DWORD *)-1LL )
  {
    v13 = Flags;
    v14 = Flags & 0x400000;
    if ( (Flags & 0x400000) == 0 )
    {
      *v49 = 0LL;
      return -1073020922;
    }
  }
  else
  {
    if ( v11 )
    {
      *ResourceDllBase = v11;
      if ( v52 )
        *v52 = v41;
      v31 = 0;
      return 0;
    }
    v13 = Flags;
    v14 = Flags & 0x400000;
  }
  v38 = 0LL;
  if ( v14 )
  {
    v15 = -1073741767;
  }
  else
  {
    v15 = sub_1800541C8(DllHandlea, Source, (__int64)&Str, (__int64)&v35, (__int64)&v44);
    v7 = Str;
    v9 = v44;
  }
  if ( v15 >= 0 )
  {
LABEL_13:
    v16 = v39 & 0xFFFFFFFE;
    if ( v16 >= 0x2BE )
      _report_rangecheckfailure();
    *(WCHAR *)((char *)Source + v16) = 0;
    if ( wcsrchr(v7, 0x7Eu) && (int)sub_1800DB564(Source, v7) >= 0 )
    {
      v7 = (const wchar_t *)v47;
      Str = (wchar_t *)v47;
      v26 = -1LL;
      do
        ++v26;
      while ( *((_WORD *)v47 + v26) );
      LODWORD(v35) = 2 * v26;
    }
    v57 = v64;
    v56 = 46006272;
    v55 = 0LL;
    v54 = 0;
    if ( (unsigned __int64)(unsigned int)v35 + 12 > 0x3C )
    {
      Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * (unsigned int)v35 + 10);
      v8 = Heap;
      v53 = Heap;
      if ( !Heap )
      {
        appended = -1073741801;
LABEL_76:
        v31 = appended;
        goto LABEL_67;
      }
      Destination.Buffer = Heap;
      Destination.MaximumLength = 2 * (v35 + 5);
      v7 = Str;
      v9 = v44;
    }
    else
    {
      Destination.Buffer = (PWCH)&v62;
      Destination.MaximumLength = 60;
    }
    Destination.Length = 0;
    appended = RtlAppendUnicodeToString(&Destination, v7);
    v31 = appended;
    if ( appended < 0 )
      goto LABEL_67;
    appended = RtlAppendUnicodeToString(&Destination, L".mui");
    v31 = appended;
    if ( appended < 0 )
      goto LABEL_67;
    if ( v9 )
      RtlActivateActivationContextUnsafeFast(&v59, v9);
    v18 = sub_1800770AC(&Destination, &v51);
    if ( v9 )
      RtlDeactivateActivationContextUnsafeFast(&v59);
    if ( v18 >= 0 )
    {
      v32 = 1;
      v36.Buffer = v51->Buffer;
      v36.Length = v51->Length;
      v36.MaximumLength = v51->MaximumLength;
    }
    if ( v32 )
    {
      LocaleName.Buffer = 0LL;
      HIDWORD(Size) = 0;
      goto LABEL_29;
    }
    v36.Buffer = v64;
    *(_DWORD *)&v36.Length = 46006272;
    RtlAppendUnicodeToString(&v36, Source);
    LocaleName.Buffer = (PWCH)&v65;
    LocaleName.MaximumLength = 170;
    if ( RtlLcidToLocaleName(v33, &LocaleName, 2u, 0) >= 0 )
    {
      RtlAppendUnicodeStringToString(&v36, &LocaleName);
      RtlAppendUnicodeToString(&v36, "\\");
      RtlAppendUnicodeToString(&v36, Destination.Buffer);
      v31 = sub_180041510(LocaleName.Buffer, v36.Buffer);
      if ( v31 == -1073741789 )
      {
        v10 = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Size);
        v50 = v10;
        if ( v10 )
          v31 = sub_180041510(LocaleName.Buffer, v36.Buffer);
      }
      if ( v31 >= 0 && RtlInitUnicodeStringEx(&DestinationString, v10) >= 0 )
      {
        v19 = DllHandlea;
        appended = sub_18002E0EC(
                     (__int64)DllHandlea,
                     (__int128 *)&DestinationString,
                     v30,
                     v13,
                     (__int64)LocaleName.Buffer,
                     2,
                     &v45,
                     &v41,
                     (unsigned __int64 *)&v38);
        v31 = appended;
        if ( appended >= 0 )
        {
          RtlInitUnicodeStringEx(&v36, v10);
          goto LABEL_32;
        }
        if ( appended != -1073741772 )
        {
          LOBYTE(v27) = v30;
          sub_1800CC088(appended, (unsigned int)&DestinationString, v27, v13, (__int64)&LocaleName);
        }
LABEL_30:
        v20 = sub_18002E0EC(
                (__int64)v19,
                (__int128 *)&v36,
                v30,
                v13,
                (__int64)LocaleName.Buffer,
                SHIDWORD(Size),
                &v45,
                &v41,
                (unsigned __int64 *)&v38);
        appended = v20;
        v31 = v20;
        if ( (v20 == -1073741766 || v20 == -1073741772) && (unsigned __int8)sub_18007B934(Source, v21, v64) )
        {
          v36.Buffer = v64;
          v28 = -1LL;
          do
            ++v28;
          while ( v64[v28] );
          v36.Length = 2 * v28;
          v36.MaximumLength = 702;
          RtlAppendUnicodeToString(&v36, "\\");
          RtlAppendUnicodeStringToString(&v36, &LocaleName);
          RtlAppendUnicodeToString(&v36, "\\");
          RtlAppendUnicodeToString(&v36, Destination.Buffer);
          appended = sub_18002E0EC(
                       (__int64)v19,
                       (__int128 *)&v36,
                       v30,
                       v13,
                       (__int64)LocaleName.Buffer,
                       SHIDWORD(Size),
                       &v45,
                       &v41,
                       (unsigned __int64 *)&v38);
          v31 = appended;
        }
        goto LABEL_32;
      }
LABEL_29:
      v19 = DllHandlea;
      goto LABEL_30;
    }
    appended = -1073741811;
    goto LABEL_76;
  }
  appended = sub_180087F60(DllHandlea, Source, (__int64)&BaseAddress, (__int64)&v35, (__int64)&v30);
  v31 = appended;
  if ( appended >= 0 )
  {
    v7 = (const wchar_t *)BaseAddress;
    Str = (wchar_t *)BaseAddress;
    goto LABEL_13;
  }
LABEL_67:
  v19 = DllHandlea;
LABEL_32:
  v22 = (__int64)v38;
  if ( !v38 )
    v22 = -1LL;
  v38 = (void *)v22;
  if ( appended == -1073741659 || appended == -1073741801 || appended == -1073741523 )
    v23 = 0;
  else
    v23 = v34;
  if ( v23 )
    sub_18002B698((__int64)v19, &v38, &v45, 0LL, v33, v14 != 0 ? 33 : 1, appended, v41);
  if ( v38 == (void *)-1LL )
  {
    *v49 = 0LL;
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v24 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
    else
      v24 = 2147353477LL;
    if ( (*(_BYTE *)v24 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v29 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
      else
        v29 = 2147353476LL;
      sub_1800DBCC0(&v36, *(unsigned __int8 *)v29);
    }
    *v49 = v38;
    if ( v52 )
      *v52 = v41;
    appended = 0;
    v31 = 0;
  }
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    appended = v31;
  }
  if ( v47 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v47);
    appended = v31;
  }
  if ( v8 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    appended = v31;
  }
  if ( v10 && SourceString != v10 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    return v31;
  }
  return appended;
}
