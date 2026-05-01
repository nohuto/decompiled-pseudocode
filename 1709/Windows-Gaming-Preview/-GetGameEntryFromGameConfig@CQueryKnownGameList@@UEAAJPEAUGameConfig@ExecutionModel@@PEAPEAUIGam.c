/*
 * XREFs of ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003BBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
  unsigned __int64 v14; // rdx
  unsigned int v15; // r9d
  int v16; // esi
  __int64 v17; // r9
  __int64 v18; // rdx
  struct KnownGameList::IEnumerateEntries **v19; // rax
  int v20; // eax
  int EnumerateEntriesInstance; // eax
  __int64 v22; // rbx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned int v27; // r14d
  bool j; // cf
  const unsigned __int16 *v29; // r9
  unsigned int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  int v38; // eax
  unsigned __int16 *v39; // rcx
  __int64 v40; // rcx
  unsigned __int16 **v41; // [rsp+20h] [rbp-E0h]
  unsigned int v42; // [rsp+30h] [rbp-D0h] BYREF
  __int64 i; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int8 *v44; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v45; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v46; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v48[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+60h] [rbp-A0h] BYREF
  KnownGameList *v50; // [rsp+68h] [rbp-98h] BYREF
  KnownGameList *v51; // [rsp+70h] [rbp-90h] BYREF
  struct KnownGameList::IEnumerateEntries **v52; // [rsp+78h] [rbp-88h]
  __int64 v53; // [rsp+80h] [rbp-80h]
  _BYTE v54[4096]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+10D8h] [rbp+FD8h]

  v53 = -2LL;
  v6 = 0LL;
  *a3 = 0LL;
  v7 = (const unsigned __int16 *)*((_QWORD *)a2 + 3);
  *(_QWORD *)v48 = v7;
  v8 = -1LL;
  do
    ++v8;
  while ( v7[v8] );
  TOCIndexByIdentifier = CQueryKnownGameList::GetTOCIndexByIdentifier(this, v7, &v42);
  v10 = TOCIndexByIdentifier;
  if ( TOCIndexByIdentifier < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x17A,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)(unsigned int)TOCIndexByIdentifier);
    return v10;
  }
  v12 = (struct KnownGameList::IEnumerateEntries **)v54;
  v52 = 0LL;
  LODWORD(v44) = 4096;
  v13 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, _BYTE *, unsigned __int8 **))(*(_QWORD *)this + 96LL))(
          this,
          v42,
          v54,
          &v44);
  v16 = v13;
  if ( !v13 )
    goto LABEL_15;
  if ( v13 == -2147024774 )
  {
    v19 = (struct KnownGameList::IEnumerateEntries **)operator new[](
                                                        (unsigned int)v44,
                                                        (const struct std::nothrow_t *)&std::nothrow);
    v12 = v19;
    v6 = v19;
    v52 = v19;
    if ( !v19 )
    {
      v16 = -2147024882;
      v17 = 2147942414LL;
      v18 = 392LL;
      goto LABEL_12;
    }
    v20 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned __int8 **))(*(_QWORD *)this + 96LL))(
            this,
            v42,
            v19,
            &v44);
    v16 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x18C,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
        (const char *)(unsigned int)v20);
      goto LABEL_67;
    }
LABEL_15:
    v49 = 0LL;
    EnumerateEntriesInstance = KnownGameList::CreateEnumerateEntriesInstance(
                                 (KnownGameList *)&v49,
                                 v12,
                                 (unsigned __int8 *)(unsigned int)v44,
                                 v15);
    v16 = EnumerateEntriesInstance;
    v22 = v49;
    if ( EnumerateEntriesInstance >= 0 )
    {
      v16 = 0;
      v23 = 0LL;
      for ( i = 0LL; ; v23 = i )
      {
        if ( v23 )
        {
          i = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        }
        v24 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 24LL))(v22, &i);
        if ( v24 )
        {
          if ( v24 != 1 )
            goto LABEL_61;
          goto LABEL_62;
        }
        v50 = 0LL;
        v25 = (*(__int64 (__fastcall **)(__int64, KnownGameList **, unsigned int *))(*(_QWORD *)i + 24LL))(
                i,
                &v50,
                &v46);
        v16 = v25;
        if ( v25 < 0 )
        {
          v37 = 413LL;
          goto LABEL_58;
        }
        v26 = KnownGameList::StrCmpInsensitive(
                v50,
                (const unsigned __int16 *)v46,
                v48[0],
                (const unsigned __int16 *)(unsigned int)v8,
                (unsigned int)v41);
        v16 = 0;
        if ( v26 > 0 )
          goto LABEL_62;
        if ( !v26 )
          break;
LABEL_49:
        ;
      }
      v25 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)i + 40LL))(i, &v42);
      v16 = v25;
      if ( v25 >= 0 )
      {
        v27 = 0;
        for ( j = (_WORD)v42 != 0; j; j = v27 < (unsigned __int16)v42 )
        {
          v51 = 0LL;
          v41 = &v45;
          v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, KnownGameList **))(*(_QWORD *)i + 56LL))(
                  i,
                  v27,
                  &v47,
                  &v51);
          if ( v16 < 0 )
          {
            v36 = (unsigned int)v16;
            v37 = 440LL;
            goto LABEL_59;
          }
          v16 = 0;
          if ( v47 )
          {
            if ( v47 == 1 )
            {
              v33 = 0;
              if ( !*((_DWORD *)a2 + 4) )
                goto LABEL_49;
              v31 = *((_QWORD *)a2 + 1);
              while ( 1 )
              {
                v32 = v33;
                if ( *(_DWORD *)(v31 + 16LL * v33) == 1 )
                  break;
                if ( ++v33 >= *((_DWORD *)a2 + 4) )
                  goto LABEL_49;
              }
            }
            else
            {
              if ( v47 != 2 )
              {
                v16 = -2147418113;
                v36 = 2147549183LL;
                v37 = 479LL;
                goto LABEL_59;
              }
              v34 = 0;
              if ( !*((_DWORD *)a2 + 4) )
                goto LABEL_49;
              v31 = *((_QWORD *)a2 + 1);
              while ( 1 )
              {
                v32 = v34;
                if ( *(_DWORD *)(v31 + 16LL * v34) == 2 )
                  break;
                if ( ++v34 >= *((_DWORD *)a2 + 4) )
                  goto LABEL_49;
              }
            }
          }
          else
          {
            v30 = 0;
            if ( !*((_DWORD *)a2 + 4) )
              goto LABEL_49;
            v31 = *((_QWORD *)a2 + 1);
            while ( 1 )
            {
              v32 = v30;
              if ( !*(_DWORD *)(v31 + 16LL * v30) )
                break;
              if ( ++v30 >= *((_DWORD *)a2 + 4) )
                goto LABEL_49;
            }
          }
          v35 = *(_QWORD *)(v31 + 16 * v32 + 8);
          if ( !v35 || !KnownGameList::StrStrInsensitive(v51, (const unsigned __int16 *)(unsigned int)v45, v35, v29) )
            goto LABEL_49;
          ++v27;
        }
        v45 = 0LL;
        *(_QWORD *)v48 = i;
        v38 = Microsoft::WRL::Details::MakeAndInitialize<CGameEntry,KnownGameList::IGameEntry,KnownGameList::IGameEntry *>(
                &v45,
                v48);
        v16 = v38;
        if ( v38 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x1FB,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
            (const char *)(unsigned int)v38);
          v39 = v45;
          if ( v45 )
          {
            v45 = 0LL;
            (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v39 + 16LL))(v39);
          }
          goto LABEL_63;
        }
        *a3 = (struct KnownGameList::IGameEntry *)v45;
        v16 = 0;
LABEL_61:
        if ( *a3 )
          goto LABEL_63;
LABEL_62:
        v16 = -2147023728;
        goto LABEL_63;
      }
      v37 = 428LL;
LABEL_58:
      v36 = (unsigned int)v25;
LABEL_59:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v37,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
        (const char *)v36);
LABEL_63:
      v40 = i;
      if ( i )
      {
        i = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x192,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
        (const char *)(unsigned int)EnumerateEntriesInstance);
    }
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    goto LABEL_67;
  }
  if ( v13 < 0 )
  {
    v17 = (unsigned int)v13;
    v18 = 387LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)v17);
  }
LABEL_67:
  if ( v6 )
    operator delete(v6, v14);
  return (unsigned int)v16;
}
