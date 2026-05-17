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

__int64 __fastcall LdrLoadAlternateResourceModuleEx(
        __int64 a1,
        unsigned __int16 a2,
        __int64 *a3,
        _QWORD *a4,
        unsigned int a5)
{
  wchar_t *v7; // rdi
  unsigned __int64 v8; // r12
  __int64 v9; // rsi
  _DWORD *v10; // rax
  __int64 v11; // r8
  __int64 v13; // r15
  int v14; // eax
  unsigned __int64 v15; // rax
  int appended; // edi
  int v17; // edi
  char v18; // di
  unsigned __int16 v19; // si
  int v20; // r8d
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rsi
  char v24; // al
  bool v25; // cf
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 Heap; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  char v33; // [rsp+52h] [rbp-7E6h]
  unsigned int v34; // [rsp+54h] [rbp-7E4h]
  char v35; // [rsp+58h] [rbp-7E0h] BYREF
  char v36; // [rsp+59h] [rbp-7DFh]
  unsigned int v37; // [rsp+5Ch] [rbp-7DCh] BYREF
  __int64 v38; // [rsp+60h] [rbp-7D8h] BYREF
  int v39; // [rsp+68h] [rbp-7D0h] BYREF
  unsigned int v40; // [rsp+6Ch] [rbp-7CCh]
  int v41; // [rsp+70h] [rbp-7C8h] BYREF
  __int64 v42; // [rsp+78h] [rbp-7C0h]
  __int64 v43; // [rsp+80h] [rbp-7B8h] BYREF
  int v44; // [rsp+88h] [rbp-7B0h] BYREF
  _BYTE *v45; // [rsp+90h] [rbp-7A8h]
  int v46; // [rsp+98h] [rbp-7A0h]
  wchar_t *Str; // [rsp+A0h] [rbp-798h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-790h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-788h] BYREF
  __int64 v50; // [rsp+B8h] [rbp-780h] BYREF
  wchar_t *v51; // [rsp+C0h] [rbp-778h] BYREF
  wchar_t *v52; // [rsp+C8h] [rbp-770h]
  __int16 v53; // [rsp+D0h] [rbp-768h] BYREF
  __int16 v54; // [rsp+D2h] [rbp-766h]
  char *v55; // [rsp+D8h] [rbp-760h]
  __int64 v56; // [rsp+E0h] [rbp-758h] BYREF
  __int64 v57; // [rsp+E8h] [rbp-750h]
  _BYTE v58[2]; // [rsp+F0h] [rbp-748h] BYREF
  __int16 v59; // [rsp+F2h] [rbp-746h]
  char *v60; // [rsp+F8h] [rbp-740h]
  _QWORD *v61; // [rsp+100h] [rbp-738h]
  int v62; // [rsp+108h] [rbp-730h] BYREF
  __int64 v63; // [rsp+110h] [rbp-728h]
  int v64; // [rsp+118h] [rbp-720h] BYREF
  _BYTE *v65; // [rsp+120h] [rbp-718h]
  __int64 v66; // [rsp+130h] [rbp-708h] BYREF
  int v67; // [rsp+138h] [rbp-700h]
  _BYTE v68[56]; // [rsp+140h] [rbp-6F8h] BYREF
  char v69; // [rsp+180h] [rbp-6B8h] BYREF
  WCHAR SourceString[352]; // [rsp+1C0h] [rbp-678h] BYREF
  char v71; // [rsp+480h] [rbp-3B8h] BYREF
  _BYTE v72[704]; // [rsp+530h] [rbp-308h] BYREF

  v61 = a4;
  v42 = a1;
  v40 = a5;
  v48 = 0LL;
  v50 = 0LL;
  v39 = 0;
  v7 = 0LL;
  Str = 0LL;
  v37 = 0;
  v8 = 0LL;
  v57 = 0LL;
  v43 = 0LL;
  v56 = 0LL;
  v33 = 0;
  v66 = 72LL;
  v67 = 1;
  memset(v68, 0, sizeof(v68));
  v35 = 0;
  v41 = -1;
  v52 = 0LL;
  v51 = 0LL;
  v36 = 1;
  v9 = 0LL;
  v49 = 0LL;
  if ( !v42 || !a2 || !a3 )
    return 3221225485LL;
  v10 = sub_18002FF94(v42, a2, &v43, 4);
  if ( v10 == (_DWORD *)-1LL )
  {
    if ( (a5 & 0x400000) == 0 )
    {
      *a3 = 0LL;
      return 3221946374LL;
    }
  }
  else if ( v10 )
  {
    *a3 = (__int64)v10;
    if ( a4 )
      *a4 = v43;
    return 0LL;
  }
  v13 = 0LL;
  v38 = 0LL;
  v46 = v40 & 0x400000;
  if ( (v40 & 0x400000) != 0 )
  {
    v14 = -1073741767;
  }
  else
  {
    v14 = sub_180075FD4(v42, SourceString, v11, &v39, &Str, &v37, &v49);
    v7 = Str;
    v9 = v49;
  }
  if ( v14 < 0 )
  {
    appended = sub_18008C2B0(v42, SourceString, 702LL, &v39, &v51, &v37, &v35);
    v34 = appended;
    if ( appended < 0 )
      goto LABEL_71;
    v7 = v51;
    Str = v51;
  }
  v15 = v39 & 0xFFFFFFFE;
  if ( v15 >= 0x2BE )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)SourceString + v15) = 0;
  if ( wcsrchr(v7, 0x7Eu) && (int)sub_1800E18A4(SourceString, v7) >= 0 )
  {
    v7 = v52;
    Str = v52;
    v30 = -1LL;
    do
      ++v30;
    while ( v52[v30] );
    v37 = 2 * v30;
  }
  v65 = v72;
  v64 = 46006272;
  v63 = 0LL;
  v62 = 0;
  if ( (unsigned __int64)v37 + 12 > 0x3C )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2LL * v37 + 10);
    v8 = Heap;
    v57 = Heap;
    v13 = v38;
    if ( !Heap )
    {
      appended = -1073741801;
      goto LABEL_87;
    }
    v55 = (char *)Heap;
    v54 = 2 * (v37 + 5);
    v7 = Str;
    v9 = v49;
  }
  else
  {
    v55 = &v69;
    v54 = 60;
  }
  v53 = 0;
  appended = RtlAppendUnicodeToString(&v53, v7);
  v34 = appended;
  if ( appended < 0 )
    goto LABEL_71;
  appended = RtlAppendUnicodeToString(&v53, L".mui");
  v34 = appended;
  if ( appended < 0 )
    goto LABEL_71;
  if ( v9 )
    RtlActivateActivationContextUnsafeFast(&v66, v9);
  v17 = sub_18007B4A8(&v53, a2, &v64, &v62, &v56);
  if ( v9 )
    RtlDeactivateActivationContextUnsafeFast(&v66);
  if ( v17 >= 0 )
  {
    v18 = 1;
    v33 = 1;
    v45 = *(_BYTE **)(v56 + 8);
    v44 = *(_DWORD *)v56;
  }
  else
  {
    v18 = 0;
  }
  if ( v18
    || qword_18015A258 == -1
    || qword_18015A258
    && ((v26 = *(_QWORD *)(qword_18015A258 + 16)) == 0
     || (v27 = *(_QWORD *)(v26 + 24)) == 0
     || (*(_DWORD *)(v27 + 48) & 0x100000) != 0) )
  {
    v19 = a2;
LABEL_27:
    if ( v18 )
    {
      v60 = 0LL;
LABEL_30:
      v21 = 2147353477LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      {
        v22 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
        v13 = v38;
      }
      else
      {
        v22 = 2147353477LL;
      }
      if ( (*(_BYTE *)v22 & 1) != 0 )
      {
        v23 = 2147353476LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        {
          v31 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
          v13 = v38;
        }
        else
        {
          v31 = 2147353476LL;
        }
        sub_1800E2008(&v44, *(unsigned __int8 *)v31);
      }
      else
      {
        v23 = 2147353476LL;
      }
      LOBYTE(v20) = v35;
      appended = sub_1800382D4(v42, (unsigned int)&v44, v20, (unsigned int)&v50, (__int64)&v48, (__int64)&v43);
      v34 = appended;
      if ( appended >= 0 )
      {
        v13 = v48 | 1;
        if ( !v33 && !(unsigned __int8)sub_180038554(v42, v48 | 1, v60, v40) )
        {
          ZwUnmapViewOfSection(-1LL, v48);
          ZwClose(v50);
          v50 = 0LL;
          v43 = 0LL;
          v13 = 0LL;
          appended = -1073020926;
          v34 = -1073020926;
        }
      }
      goto LABEL_38;
    }
    v45 = v72;
    v44 = 46006272;
    RtlAppendUnicodeToString(&v44, SourceString);
    v60 = &v71;
    v59 = 170;
    if ( (int)RtlLcidToLocaleName(v19, v58, 2LL) >= 0 )
    {
      RtlAppendUnicodeStringToString(&v44, v58);
      RtlAppendUnicodeToString(&v44, L"\\");
      RtlAppendUnicodeToString(&v44, v55);
      goto LABEL_30;
    }
    appended = -1073741811;
LABEL_87:
    v34 = appended;
    goto LABEL_71;
  }
  v19 = a2;
  v28 = sub_18005D2C8(v42, a2, 0, v40, (__int64)&v41, 0LL);
  v48 = v28;
  if ( !v28 )
    goto LABEL_27;
  v13 = v28 | 1;
  appended = 0;
  v34 = 0;
LABEL_71:
  v23 = 2147353476LL;
  v21 = 2147353477LL;
LABEL_38:
  if ( !v13 )
    v13 = -1LL;
  v38 = v13;
  if ( appended == -1073741659 || appended == -1073741801 || appended == -1073741523 )
    v24 = 0;
  else
    v24 = v36;
  if ( v24 )
  {
    v25 = v46 != 0;
    v46 = -v46;
    sub_18005CB40(v42, (unsigned int)&v38, (unsigned int)&v50, 0, v41, a2, v25 ? 33 : 1, appended, v43);
  }
  if ( v38 == -1 )
  {
    *a3 = 0LL;
  }
  else
  {
    if ( v41 == -1 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v21 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
      if ( (*(_BYTE *)v21 & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v23 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
        sub_1800E2008(&v44, *(unsigned __int8 *)v23);
      }
      if ( qword_18015A258 != -1 )
        sub_180002EE8();
    }
    *a3 = v38;
    if ( v61 )
      *v61 = v43;
    appended = 0;
    v34 = 0;
  }
  if ( v51 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v51);
    appended = v34;
  }
  if ( v52 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v52);
    appended = v34;
  }
  if ( v8 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
    return v34;
  }
  return (unsigned int)appended;
}
