/*
 * XREFs of ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E6FC
 * Callers:
 *     ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003DAD0 (-GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetGameEntryFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003DBA0 (-GetGameEntryFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003F120 (-GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003F2A4 (-GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003F4A4 (-GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z @ 0x18003F6B8 (-GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z.c)
 *     ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x1800402EC (-CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z.c)
 *     ?StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z @ 0x18004073C (-StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z.c)
 *     ?StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z @ 0x1800407E4 (-StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z.c)
 *     ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x180040C60 (--$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJP.c)
 *     __security_check_cookie @ 0x180041F40 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042940 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 *     _alloca_probe @ 0x1800438D0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
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
  unsigned int v12; // r9d
  int ProcessWorkingDirectoryByPID; // r13d
  __int64 v14; // r9
  __int64 v15; // rdx
  struct KnownGameList::IEnumerateEntries **v16; // rax
  int v17; // eax
  int EnumerateEntriesInstance; // eax
  __int64 v19; // r8
  __int64 v20; // r15
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rbx
  unsigned __int16 *v24; // rdi
  unsigned __int16 *v25; // rsi
  unsigned __int16 *v26; // r14
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  bool i; // cf
  int v32; // eax
  const unsigned __int16 *v33; // r9
  unsigned __int16 *v34; // r13
  unsigned int v35; // r8d
  unsigned __int16 *v36; // r13
  unsigned __int16 *v37; // r13
  const unsigned __int16 *v38; // rax
  __int64 v39; // r13
  __int64 v40; // rcx
  int v41; // eax
  unsigned __int16 *v42; // rcx
  __int64 v43; // rdx
  unsigned __int64 v44; // r9
  struct KnownGameList::IGameEntry **v45; // rcx
  __int64 v46; // rcx
  unsigned int *v47; // [rsp+20h] [rbp-E0h]
  unsigned int v48; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v49; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 *v50; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v51; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v52; // [rsp+4Ch] [rbp-B4h]
  int v53; // [rsp+50h] [rbp-B0h]
  unsigned int v54; // [rsp+54h] [rbp-ACh] BYREF
  int v55; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v56; // [rsp+5Ch] [rbp-A4h] BYREF
  int v57; // [rsp+60h] [rbp-A0h]
  CQueryKnownGameList *v58; // [rsp+68h] [rbp-98h]
  unsigned int v59[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v60; // [rsp+78h] [rbp-88h] BYREF
  KnownGameList *v61; // [rsp+80h] [rbp-80h] BYREF
  KnownGameList *v62; // [rsp+88h] [rbp-78h] BYREF
  struct KnownGameList::IGameEntry **v63; // [rsp+90h] [rbp-70h]
  struct KnownGameList::IEnumerateEntries **v64; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v65; // [rsp+A0h] [rbp-60h]
  unsigned __int16 *v66; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v67; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v68; // [rsp+B8h] [rbp-48h]
  __int64 v69; // [rsp+C0h] [rbp-40h]
  __int64 v70; // [rsp+C8h] [rbp-38h]
  struct KnownGameList::IEnumerateEntries *v71[512]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1128h] [rbp+1028h]

  v70 = -2LL;
  v63 = a4;
  v52 = a3;
  *(_QWORD *)v59 = a2;
  v58 = this;
  *a4 = 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v65 = (unsigned __int16 *)v5;
  TOCIndexByIdentifier = CQueryKnownGameList::GetTOCIndexByIdentifier(this, a2, &v48);
  v7 = TOCIndexByIdentifier;
  if ( TOCIndexByIdentifier < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27F,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)TOCIndexByIdentifier);
    return v7;
  }
  v9 = v71;
  v10 = 0LL;
  v64 = 0LL;
  v51 = 4096;
  v11 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned int *))(*(_QWORD *)this + 96LL))(
          this,
          v48,
          v71,
          &v51);
  ProcessWorkingDirectoryByPID = v11;
  if ( v11 )
  {
    if ( v11 != -2147024774 )
    {
      if ( v11 >= 0 )
        goto LABEL_84;
      v14 = (unsigned int)v11;
      v15 = 647LL;
      goto LABEL_14;
    }
    v16 = (struct KnownGameList::IEnumerateEntries **)operator new[](v51, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v16;
    if ( !v16 )
    {
      ProcessWorkingDirectoryByPID = -2147024882;
      v14 = 2147942414LL;
      v15 = 652LL;
      goto LABEL_14;
    }
    v10 = v16;
    v64 = v16;
    v17 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned int *))(*(_QWORD *)this + 96LL))(
            this,
            v48,
            v16,
            &v51);
    ProcessWorkingDirectoryByPID = v17;
    if ( v17 < 0 )
    {
      v14 = (unsigned int)v17;
      v15 = 656LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)v14);
      goto LABEL_84;
    }
  }
  v60 = 0LL;
  EnumerateEntriesInstance = KnownGameList::CreateEnumerateEntriesInstance(
                               (KnownGameList *)&v60,
                               v9,
                               (unsigned __int8 *)v51,
                               v12);
  ProcessWorkingDirectoryByPID = EnumerateEntriesInstance;
  v20 = v60;
  v21 = 0LL;
  if ( EnumerateEntriesInstance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x294,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)EnumerateEntriesInstance);
    goto LABEL_82;
  }
  v22 = 0LL;
  v49 = 0LL;
  v23 = 0LL;
  v69 = 0LL;
  v24 = 0LL;
  v66 = 0LL;
  v25 = 0LL;
  v67 = 0LL;
  v26 = 0LL;
  v68 = 0LL;
  while ( 1 )
  {
    if ( v22 )
    {
      v49 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v20 + 24LL))(v20, &v49, v19, v21);
    v57 = v27;
    if ( v27 )
    {
LABEL_58:
      if ( v23 )
        goto LABEL_59;
      if ( v27 == 1 )
      {
LABEL_77:
        ProcessWorkingDirectoryByPID = -2147023728;
        goto LABEL_78;
      }
      v45 = v63;
LABEL_76:
      ProcessWorkingDirectoryByPID = 0;
      if ( *v45 )
        goto LABEL_78;
      goto LABEL_77;
    }
    v61 = 0LL;
    ProcessWorkingDirectoryByPID = (*(__int64 (__fastcall **)(__int64, KnownGameList **, unsigned int *))(*(_QWORD *)v49 + 24LL))(
                                     v49,
                                     &v61,
                                     &v54);
    if ( ProcessWorkingDirectoryByPID < 0 )
    {
      v43 = 674LL;
LABEL_71:
      v44 = (unsigned int)ProcessWorkingDirectoryByPID;
      goto LABEL_72;
    }
    v28 = KnownGameList::StrCmpInsensitive(
            v61,
            (const unsigned __int16 *)v54,
            v59[0],
            (const unsigned __int16 *)(unsigned int)v65,
            (unsigned int)v47);
    v21 = 0LL;
    if ( v28 > 0 )
      break;
    if ( v28 )
      goto LABEL_50;
    v29 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64, _QWORD))(*(_QWORD *)v49 + 40LL))(
            v49,
            &v48,
            v19,
            0LL);
    ProcessWorkingDirectoryByPID = v29;
    v21 = 0LL;
    if ( v29 < 0 )
    {
      v44 = (unsigned int)v29;
      v43 = 696LL;
LABEL_72:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v43,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)v44);
      goto LABEL_78;
    }
    v19 = (unsigned __int16)v48;
    if ( (_WORD)v48 && !v52 )
    {
LABEL_50:
      v22 = v49;
    }
    else
    {
      v30 = 0LL;
      for ( i = (_WORD)v48 != 0; ; i = (unsigned int)v30 < (unsigned __int16)v48 )
      {
        v53 = v30;
        if ( !i )
          break;
        v62 = 0LL;
        v50 = 0LL;
        v47 = &v56;
        v32 = (*(__int64 (__fastcall **)(__int64, __int64, int *, KnownGameList **))(*(_QWORD *)v49 + 56LL))(
                v49,
                v30,
                &v55,
                &v62);
        ProcessWorkingDirectoryByPID = v32;
        if ( v32 < 0 )
        {
          v44 = (unsigned int)v32;
          v43 = 717LL;
          goto LABEL_72;
        }
        if ( v55 )
        {
          if ( v55 == 1 )
          {
            if ( !v25 )
            {
              ProcessWorkingDirectoryByPID = CQueryKnownGameList::GetProcessWorkingDirectoryByPID(
                                               v58,
                                               v52,
                                               (const unsigned __int16 **)&v50);
              if ( ProcessWorkingDirectoryByPID < 0 )
              {
                v43 = 732LL;
                goto LABEL_71;
              }
              v36 = v50;
              if ( v50 )
              {
                operator delete(0LL);
                v25 = v36;
                v67 = v36;
              }
            }
            v35 = (unsigned int)v25;
          }
          else
          {
            if ( v55 != 2 )
            {
              ProcessWorkingDirectoryByPID = -2147418113;
              v43 = 748LL;
              goto LABEL_71;
            }
            if ( !v26 )
            {
              ProcessWorkingDirectoryByPID = CQueryKnownGameList::GetProcessParentDirectoryByPID(
                                               v58,
                                               v52,
                                               (const unsigned __int16 **)&v50);
              if ( ProcessWorkingDirectoryByPID < 0 )
              {
                v43 = 741LL;
                goto LABEL_71;
              }
              v37 = v50;
              if ( v50 )
              {
                operator delete(0LL);
                v26 = v37;
                v68 = v37;
              }
            }
            v35 = (unsigned int)v26;
          }
        }
        else
        {
          if ( !v24 )
          {
            ProcessWorkingDirectoryByPID = CQueryKnownGameList::GetProcessArgsByPID(
                                             v58,
                                             v52,
                                             (const unsigned __int16 **)&v50);
            if ( ProcessWorkingDirectoryByPID < 0 )
            {
              v43 = 723LL;
              goto LABEL_71;
            }
            v34 = v50;
            if ( v50 )
            {
              operator delete(0LL);
              v24 = v34;
              v66 = v34;
            }
          }
          v35 = (unsigned int)v24;
        }
        v38 = KnownGameList::StrStrInsensitive(v62, (const unsigned __int16 *)v56, v35, v33);
        v21 = 0LL;
        if ( !v38 )
          goto LABEL_50;
        v30 = (unsigned int)(v53 + 1);
        v19 = (unsigned __int16)v48;
      }
      v22 = v49;
      if ( v23 != v49 )
      {
        v39 = v49;
        if ( v49 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 8LL))(v49);
          v22 = v49;
          v19 = (unsigned __int16)v48;
          v21 = 0LL;
        }
        v40 = v23;
        v23 = v39;
        v69 = v39;
        if ( v40 )
        {
          (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v40 + 16LL))(v40, v22, v19, 0LL);
          v22 = v49;
          v19 = (unsigned __int16)v48;
          v21 = 0LL;
        }
      }
      if ( (_WORD)v19 )
      {
        v27 = v57;
        goto LABEL_58;
      }
    }
  }
  if ( !v23 )
    goto LABEL_77;
LABEL_59:
  v50 = 0LL;
  *(_QWORD *)v59 = v23;
  v41 = Microsoft::WRL::Details::MakeAndInitialize<CGameEntry,KnownGameList::IGameEntry,KnownGameList::IGameEntry *>(
          &v50,
          v59);
  ProcessWorkingDirectoryByPID = v41;
  if ( v41 >= 0 )
  {
    v45 = v63;
    *v63 = (struct KnownGameList::IGameEntry *)v50;
    goto LABEL_76;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30E,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)(unsigned int)v41);
  v42 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v42 + 16LL))(v42);
  }
LABEL_78:
  operator delete(v26);
  operator delete(v25);
  operator delete(v24);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v46 = v49;
  if ( v49 )
  {
    v49 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  }
LABEL_82:
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_84:
  if ( v10 )
    operator delete(v10);
  return (unsigned int)ProcessWorkingDirectoryByPID;
}
