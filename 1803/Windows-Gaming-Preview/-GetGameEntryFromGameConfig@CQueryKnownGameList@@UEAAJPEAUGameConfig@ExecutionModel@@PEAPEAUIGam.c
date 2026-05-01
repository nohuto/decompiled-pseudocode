/*
 * XREFs of ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003DD60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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

// Hidden C++ exception states: #wind=4
__int64 __fastcall CQueryKnownGameList::GetGameEntryFromGameConfig(
        CQueryKnownGameList *this,
        struct ExecutionModel::GameConfig *a2,
        struct KnownGameList::IGameEntry **a3)
{
  struct KnownGameList::IEnumerateEntries **v6; // rdi
  const unsigned __int16 *v7; // rax
  __int64 v8; // r12
  int TOCIndexByIdentifier; // eax
  unsigned int v10; // ebx
  struct KnownGameList::IEnumerateEntries **v12; // rbx
  int v13; // eax
  unsigned int v14; // r9d
  int v15; // esi
  __int64 v16; // r9
  __int64 v17; // rdx
  struct KnownGameList::IEnumerateEntries **v18; // rax
  int v19; // eax
  int EnumerateEntriesInstance; // eax
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned int v26; // r14d
  bool i; // cf
  const unsigned __int16 *v28; // r9
  unsigned int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // r8
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  int v37; // eax
  unsigned __int16 *v38; // rcx
  __int64 v39; // rcx
  unsigned __int16 **v40; // [rsp+20h] [rbp-E0h]
  unsigned int v41; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v42[3]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 *v43; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v44; // [rsp+48h] [rbp-B8h] BYREF
  int v45; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v46[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+58h] [rbp-A8h] BYREF
  KnownGameList *v48; // [rsp+60h] [rbp-A0h] BYREF
  KnownGameList *v49; // [rsp+68h] [rbp-98h] BYREF
  struct KnownGameList::IEnumerateEntries **v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h]
  _BYTE v52[4096]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+10C8h] [rbp+FC8h]

  v51 = -2LL;
  v6 = 0LL;
  *a3 = 0LL;
  v7 = (const unsigned __int16 *)*((_QWORD *)a2 + 3);
  *(_QWORD *)v46 = v7;
  v8 = -1LL;
  do
    ++v8;
  while ( v7[v8] );
  TOCIndexByIdentifier = CQueryKnownGameList::GetTOCIndexByIdentifier(this, v7, &v41);
  v10 = TOCIndexByIdentifier;
  if ( TOCIndexByIdentifier < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17E,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)TOCIndexByIdentifier);
    return v10;
  }
  v12 = (struct KnownGameList::IEnumerateEntries **)v52;
  v50 = 0LL;
  v42[0] = 4096;
  v13 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, _BYTE *, _DWORD *))(*(_QWORD *)this + 96LL))(
          this,
          v41,
          v52,
          v42);
  v15 = v13;
  if ( !v13 )
    goto LABEL_15;
  if ( v13 == -2147024774 )
  {
    v18 = (struct KnownGameList::IEnumerateEntries **)operator new[](
                                                        v42[0],
                                                        (const struct std::nothrow_t *)&std::nothrow);
    v12 = v18;
    if ( !v18 )
    {
      v15 = -2147024882;
      v16 = 2147942414LL;
      v17 = 396LL;
      goto LABEL_14;
    }
    v6 = v18;
    v50 = v18;
    v19 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, _DWORD *))(*(_QWORD *)this + 96LL))(
            this,
            v41,
            v18,
            v42);
    v15 = v19;
    if ( v19 < 0 )
    {
      v16 = (unsigned int)v19;
      v17 = 400LL;
      goto LABEL_14;
    }
LABEL_15:
    v47 = 0LL;
    EnumerateEntriesInstance = KnownGameList::CreateEnumerateEntriesInstance(
                                 (KnownGameList *)&v47,
                                 v12,
                                 (unsigned __int8 *)v42[0],
                                 v14);
    v15 = EnumerateEntriesInstance;
    v21 = v47;
    if ( EnumerateEntriesInstance >= 0 )
    {
      v15 = 0;
      *(_QWORD *)&v42[1] = 0LL;
      do
      {
LABEL_18:
        v22 = *(_QWORD *)&v42[1];
        if ( *(_QWORD *)&v42[1] )
        {
          *(_QWORD *)&v42[1] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        v23 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v21 + 24LL))(v21, &v42[1]);
        if ( v23 )
        {
          if ( v23 != 1 )
            goto LABEL_60;
          goto LABEL_61;
        }
        v48 = 0LL;
        v24 = (*(__int64 (__fastcall **)(_QWORD, KnownGameList **, unsigned int *))(**(_QWORD **)&v42[1] + 24LL))(
                *(_QWORD *)&v42[1],
                &v48,
                &v44);
        v15 = v24;
        if ( v24 < 0 )
        {
          v36 = 417LL;
          goto LABEL_57;
        }
        v25 = KnownGameList::StrCmpInsensitive(
                v48,
                (const unsigned __int16 *)v44,
                v46[0],
                (const unsigned __int16 *)(unsigned int)v8,
                (unsigned int)v40);
        v15 = 0;
        if ( v25 > 0 )
          goto LABEL_61;
      }
      while ( v25 );
      v24 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)&v42[1] + 40LL))(*(_QWORD *)&v42[1], &v41);
      v15 = v24;
      if ( v24 >= 0 )
      {
        v26 = 0;
        for ( i = (_WORD)v41 != 0; i; i = v26 < (unsigned __int16)v41 )
        {
          v49 = 0LL;
          v40 = &v43;
          v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, KnownGameList **))(**(_QWORD **)&v42[1] + 56LL))(
                  *(_QWORD *)&v42[1],
                  v26,
                  &v45,
                  &v49);
          if ( v15 < 0 )
          {
            v35 = (unsigned int)v15;
            v36 = 444LL;
            goto LABEL_58;
          }
          v15 = 0;
          if ( v45 )
          {
            if ( v45 == 1 )
            {
              v32 = 0;
              if ( !*((_DWORD *)a2 + 4) )
                goto LABEL_18;
              v30 = *((_QWORD *)a2 + 1);
              while ( 1 )
              {
                v31 = v32;
                if ( *(_DWORD *)(v30 + 16LL * v32) == 1 )
                  break;
                if ( ++v32 >= *((_DWORD *)a2 + 4) )
                  goto LABEL_18;
              }
            }
            else
            {
              if ( v45 != 2 )
              {
                v15 = -2147418113;
                v35 = 2147549183LL;
                v36 = 483LL;
                goto LABEL_58;
              }
              v33 = 0;
              if ( !*((_DWORD *)a2 + 4) )
                goto LABEL_18;
              v30 = *((_QWORD *)a2 + 1);
              while ( 1 )
              {
                v31 = v33;
                if ( *(_DWORD *)(v30 + 16LL * v33) == 2 )
                  break;
                if ( ++v33 >= *((_DWORD *)a2 + 4) )
                  goto LABEL_18;
              }
            }
          }
          else
          {
            v29 = 0;
            if ( !*((_DWORD *)a2 + 4) )
              goto LABEL_18;
            v30 = *((_QWORD *)a2 + 1);
            while ( 1 )
            {
              v31 = v29;
              if ( !*(_DWORD *)(v30 + 16LL * v29) )
                break;
              if ( ++v29 >= *((_DWORD *)a2 + 4) )
                goto LABEL_18;
            }
          }
          v34 = *(_QWORD *)(v30 + 16 * v31 + 8);
          if ( !v34 || !KnownGameList::StrStrInsensitive(v49, (const unsigned __int16 *)(unsigned int)v43, v34, v28) )
            goto LABEL_18;
          ++v26;
        }
        v43 = 0LL;
        *(_QWORD *)v46 = *(_QWORD *)&v42[1];
        v37 = Microsoft::WRL::Details::MakeAndInitialize<CGameEntry,KnownGameList::IGameEntry,KnownGameList::IGameEntry *>(
                &v43,
                v46);
        v15 = v37;
        if ( v37 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1FF,
            (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)(unsigned int)v37);
          v38 = v43;
          if ( v43 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v38 + 16LL))(v38);
          }
          goto LABEL_62;
        }
        *a3 = (struct KnownGameList::IGameEntry *)v43;
        v15 = 0;
LABEL_60:
        if ( *a3 )
          goto LABEL_62;
LABEL_61:
        v15 = -2147023728;
        goto LABEL_62;
      }
      v36 = 432LL;
LABEL_57:
      v35 = (unsigned int)v24;
LABEL_58:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v36,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)v35);
LABEL_62:
      v39 = *(_QWORD *)&v42[1];
      if ( *(_QWORD *)&v42[1] )
      {
        *(_QWORD *)&v42[1] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x196,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)EnumerateEntriesInstance);
    }
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    goto LABEL_66;
  }
  if ( v13 < 0 )
  {
    v16 = (unsigned int)v13;
    v17 = 391LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v16);
  }
LABEL_66:
  if ( v6 )
    operator delete(v6);
  return (unsigned int)v15;
}
