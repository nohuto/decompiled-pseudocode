/*
 * XREFs of ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003C5C4
 * Callers:
 *     ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003B900 (-GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetGameEntryFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003B9F0 (-GetGameEntryFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003CFD0 (-GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003D158 (-GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003D348 (-GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z @ 0x18003D54C (-GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z.c)
 *     ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x18003E1C0 (-CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z.c)
 *     ?StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z @ 0x18003E640 (-StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z.c)
 *     ?StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z @ 0x18003E6E8 (-StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z.c)
 *     ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x18003EB8C (--$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJP.c)
 *     __security_check_cookie @ 0x180040F50 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041990 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _alloca_probe @ 0x180042840 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CQueryKnownGameList::GetGameEntryByIdentifier(
        CQueryKnownGameList *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct KnownGameList::IGameEntry **a4)
{
  __int64 v5; // rax
  int TOCIndexByIdentifier; // eax
  unsigned int v7; // ebx
  struct KnownGameList::IEnumerateEntries **v9; // rbx
  struct KnownGameList::IEnumerateEntries **v10; // r12
  int v11; // eax
  unsigned __int64 v12; // rdx
  unsigned int v13; // r9d
  int ProcessWorkingDirectoryByPID; // r13d
  __int64 v15; // r9
  __int64 v16; // rdx
  struct KnownGameList::IEnumerateEntries **v17; // rax
  int v18; // eax
  int EnumerateEntriesInstance; // eax
  __int64 v20; // r15
  __int64 v21; // rbx
  unsigned __int16 *v22; // rdi
  unsigned __int16 *v23; // r14
  unsigned __int16 *v24; // rsi
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  unsigned int v28; // r10d
  const unsigned __int16 *v29; // r9
  unsigned int v30; // r8d
  __int64 v31; // r13
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // eax
  unsigned __int16 *v35; // rcx
  struct KnownGameList::IGameEntry **v36; // rcx
  __int64 v37; // rcx
  unsigned int *v38; // [rsp+20h] [rbp-E0h]
  unsigned int v39; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v40; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v41; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v42; // [rsp+44h] [rbp-BCh]
  __int64 v43; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v44; // [rsp+50h] [rbp-B0h]
  unsigned int v45; // [rsp+54h] [rbp-ACh] BYREF
  int v46; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v47; // [rsp+5Ch] [rbp-A4h] BYREF
  int v48; // [rsp+60h] [rbp-A0h]
  CQueryKnownGameList *v49; // [rsp+68h] [rbp-98h]
  unsigned int v50[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v51; // [rsp+78h] [rbp-88h] BYREF
  KnownGameList *v52; // [rsp+80h] [rbp-80h] BYREF
  KnownGameList *v53; // [rsp+88h] [rbp-78h] BYREF
  struct KnownGameList::IGameEntry **v54; // [rsp+90h] [rbp-70h]
  struct KnownGameList::IEnumerateEntries **v55; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v56; // [rsp+A0h] [rbp-60h]
  unsigned __int16 *v57; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v58; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v59; // [rsp+B8h] [rbp-48h]
  __int64 v60; // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+C8h] [rbp-38h]
  struct KnownGameList::IEnumerateEntries *v62[512]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1128h] [rbp+1028h]

  v61 = -2LL;
  v54 = a4;
  v42 = a3;
  *(_QWORD *)v50 = a2;
  v49 = this;
  *a4 = 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v56 = (unsigned __int16 *)v5;
  TOCIndexByIdentifier = CQueryKnownGameList::GetTOCIndexByIdentifier(this, a2, &v39);
  v7 = TOCIndexByIdentifier;
  if ( TOCIndexByIdentifier < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x270,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)(unsigned int)TOCIndexByIdentifier);
    return v7;
  }
  v9 = v62;
  v10 = 0LL;
  v55 = 0LL;
  v41 = 4096;
  v11 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned int *))(*(_QWORD *)this + 96LL))(
          this,
          v39,
          v62,
          &v41);
  ProcessWorkingDirectoryByPID = v11;
  if ( v11 )
  {
    if ( v11 != -2147024774 )
    {
      if ( v11 >= 0 )
        goto LABEL_86;
      v15 = (unsigned int)v11;
      v16 = 632LL;
      goto LABEL_12;
    }
    v17 = (struct KnownGameList::IEnumerateEntries **)operator new[](v41, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v17;
    v10 = v17;
    v55 = v17;
    if ( !v17 )
    {
      ProcessWorkingDirectoryByPID = -2147024882;
      v15 = 2147942414LL;
      v16 = 637LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
        (const char *)v15);
      goto LABEL_86;
    }
    v18 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned int *))(*(_QWORD *)this + 96LL))(
            this,
            v39,
            v17,
            &v41);
    ProcessWorkingDirectoryByPID = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x281,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
        (const char *)(unsigned int)v18);
      goto LABEL_86;
    }
  }
  v51 = 0LL;
  EnumerateEntriesInstance = KnownGameList::CreateEnumerateEntriesInstance(
                               (KnownGameList *)&v51,
                               v9,
                               (unsigned __int8 *)v41,
                               v13);
  ProcessWorkingDirectoryByPID = EnumerateEntriesInstance;
  v20 = v51;
  if ( EnumerateEntriesInstance < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x285,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)(unsigned int)EnumerateEntriesInstance);
    goto LABEL_84;
  }
  ProcessWorkingDirectoryByPID = 0;
  v43 = 0LL;
  v21 = 0LL;
  v60 = 0LL;
  v22 = 0LL;
  v57 = 0LL;
  v23 = 0LL;
  v58 = 0LL;
  v24 = 0LL;
  v59 = 0LL;
  while ( 1 )
  {
LABEL_18:
    v25 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 24LL))(v20, &v43);
    v48 = v26;
    if ( v26 )
      goto LABEL_65;
    v52 = 0LL;
    ProcessWorkingDirectoryByPID = (*(__int64 (__fastcall **)(__int64, KnownGameList **, unsigned int *))(*(_QWORD *)v43 + 24LL))(
                                     v43,
                                     &v52,
                                     &v45);
    if ( ProcessWorkingDirectoryByPID < 0 )
    {
      v33 = 659LL;
      goto LABEL_63;
    }
    v27 = KnownGameList::StrCmpInsensitive(
            v52,
            (const unsigned __int16 *)v45,
            v50[0],
            (const unsigned __int16 *)(unsigned int)v56,
            (unsigned int)v38);
    ProcessWorkingDirectoryByPID = 0;
    if ( v27 > 0 )
    {
      if ( v21 )
        goto LABEL_66;
      goto LABEL_73;
    }
    if ( !v27 )
    {
      ProcessWorkingDirectoryByPID = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v43 + 40LL))(
                                       v43,
                                       &v39);
      if ( ProcessWorkingDirectoryByPID < 0 )
      {
        v33 = 681LL;
LABEL_63:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v33,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
          (const char *)(unsigned int)ProcessWorkingDirectoryByPID);
        goto LABEL_74;
      }
      v12 = (unsigned __int16)v39;
      ProcessWorkingDirectoryByPID = 0;
      if ( !(_WORD)v39 || v42 )
      {
        v28 = 0;
        v44 = 0;
        if ( (_WORD)v39 )
        {
          while ( 1 )
          {
            v53 = 0LL;
            v40 = 0LL;
            v38 = &v47;
            ProcessWorkingDirectoryByPID = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, KnownGameList **))(*(_QWORD *)v43 + 56LL))(
                                             v43,
                                             v28,
                                             &v46,
                                             &v53);
            if ( ProcessWorkingDirectoryByPID < 0 )
              break;
            ProcessWorkingDirectoryByPID = 0;
            if ( v46 )
            {
              if ( v46 == 1 )
              {
                if ( !v23 )
                {
                  ProcessWorkingDirectoryByPID = CQueryKnownGameList::GetProcessWorkingDirectoryByPID(
                                                   v49,
                                                   v42,
                                                   (const unsigned __int16 **)&v40);
                  if ( ProcessWorkingDirectoryByPID < 0 )
                  {
                    v33 = 717LL;
                    goto LABEL_63;
                  }
                  v23 = v40;
                  v58 = v40;
                  ProcessWorkingDirectoryByPID = 0;
                }
                v30 = (unsigned int)v23;
              }
              else
              {
                if ( v46 != 2 )
                {
                  ProcessWorkingDirectoryByPID = -2147418113;
                  v33 = 733LL;
                  goto LABEL_63;
                }
                if ( !v24 )
                {
                  ProcessWorkingDirectoryByPID = CQueryKnownGameList::GetProcessParentDirectoryByPID(
                                                   v49,
                                                   v42,
                                                   (const unsigned __int16 **)&v40);
                  if ( ProcessWorkingDirectoryByPID < 0 )
                  {
                    v33 = 726LL;
                    goto LABEL_63;
                  }
                  v24 = v40;
                  v59 = v40;
                  ProcessWorkingDirectoryByPID = 0;
                }
                v30 = (unsigned int)v24;
              }
            }
            else
            {
              if ( !v22 )
              {
                ProcessWorkingDirectoryByPID = CQueryKnownGameList::GetProcessArgsByPID(
                                                 v49,
                                                 v42,
                                                 (const unsigned __int16 **)&v40);
                if ( ProcessWorkingDirectoryByPID < 0 )
                {
                  v33 = 708LL;
                  goto LABEL_63;
                }
                v22 = v40;
                v57 = v40;
                ProcessWorkingDirectoryByPID = 0;
              }
              v30 = (unsigned int)v22;
            }
            if ( !KnownGameList::StrStrInsensitive(v53, (const unsigned __int16 *)v47, v30, v29) )
              goto LABEL_18;
            v28 = v44 + 1;
            v44 = v28;
            v12 = (unsigned __int16)v39;
            if ( v28 >= (unsigned __int16)v39 )
              goto LABEL_46;
          }
          v33 = 702LL;
          goto LABEL_63;
        }
LABEL_46:
        v31 = v43;
        if ( v21 == v43 )
        {
          ProcessWorkingDirectoryByPID = 0;
        }
        else
        {
          if ( v43 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
            v12 = (unsigned __int16)v39;
          }
          v32 = v21;
          v21 = v31;
          v60 = v31;
          ProcessWorkingDirectoryByPID = 0;
          if ( v32 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
            v12 = (unsigned __int16)v39;
          }
        }
        if ( (_WORD)v12 )
          break;
      }
    }
  }
  v26 = v48;
LABEL_65:
  if ( !v21 )
  {
    if ( v26 != 1 )
    {
      v36 = v54;
LABEL_72:
      if ( *v36 )
        goto LABEL_74;
    }
LABEL_73:
    ProcessWorkingDirectoryByPID = -2147023728;
    goto LABEL_74;
  }
LABEL_66:
  v40 = 0LL;
  *(_QWORD *)v50 = v21;
  v34 = Microsoft::WRL::Details::MakeAndInitialize<CGameEntry,KnownGameList::IGameEntry,KnownGameList::IGameEntry *>(
          &v40,
          v50);
  ProcessWorkingDirectoryByPID = v34;
  if ( v34 >= 0 )
  {
    v36 = v54;
    *v54 = (struct KnownGameList::IGameEntry *)v40;
    ProcessWorkingDirectoryByPID = 0;
    goto LABEL_72;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x2FF,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
    (const char *)(unsigned int)v34);
  v35 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v35 + 16LL))(v35);
  }
LABEL_74:
  if ( v24 )
    operator delete(v24, v12);
  if ( v23 )
    operator delete(v23, v12);
  if ( v22 )
    operator delete(v22, v12);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v37 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
LABEL_84:
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_86:
  if ( v10 )
    operator delete(v10, v12);
  return (unsigned int)ProcessWorkingDirectoryByPID;
}
