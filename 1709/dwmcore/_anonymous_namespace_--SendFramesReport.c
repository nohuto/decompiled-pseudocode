/*
 * XREFs of _anonymous_namespace_::SendFramesReport @ 0x180005B04
 * Callers:
 *     _anonymous_namespace_::SendFramesReports @ 0x1800079D0 (_anonymous_namespace_--SendFramesReports.c)
 * Callees:
 *     _TlgCreateSz @ 0x180001F50 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     _anonymous_namespace_::Encoder::Serialize @ 0x1800059DC (_anonymous_namespace_--Encoder--Serialize.c)
 *     ?push_back@?$vector@DV?$allocator@D@std@@@std@@QEAAX$$QEAD@Z @ 0x1800060BC (-push_back@-$vector@DV-$allocator@D@std@@@std@@QEAAX$$QEAD@Z.c)
 *     ??$_Insert@V?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@std@@@?$vector@DV?$allocator@D@std@@@std@@QEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@D@std@@@std@@@1@V?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x180006108 (--$_Insert@V-$_String_iterator@V-$_String_val@U-$_Simple_types@D@std@@@std@@@std@@@-$vector@DV-$.c)
 *     ??$_Copy_impl@PEBDV?$back_insert_iterator@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@YA?AV?$back_insert_iterator@V?$vector@EV?$allocator@E@std@@@std@@@0@PEBD0V10@U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800062BC (--$_Copy_impl@PEBDV-$back_insert_iterator@V-$vector@EV-$allocator@E@std@@@std@@@std@@@std@@YA-AV.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@IEAAXXZ @ 0x180006454 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@IEAAXXZ.c)
 *     ?push_back@?$vector@EV?$allocator@E@std@@@std@@QEAAX$$QEAE@Z @ 0x180006488 (-push_back@-$vector@EV-$allocator@E@std@@@std@@QEAAX$$QEAE@Z.c)
 *     _anonymous_namespace_::Encoder::Serialize_0 @ 0x1800064D8 (_anonymous_namespace_--Encoder--Serialize_0.c)
 *     _anonymous_namespace_::Encoder::Serialize_1 @ 0x180006624 (_anonymous_namespace_--Encoder--Serialize_1.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x180007474 (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ??$insert@U?$pair@II@std@@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@$$QEAU?$pair@II@1@@Z @ 0x18000778C (--$insert@U-$pair@II@std@@@-$_Tree@V-$_Tmap_traits@IIU-$less@I@std@@V-$allocator@U-$pair@$$CBII@.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@Z @ 0x180007870 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$allocator@U-$.c)
 *     _anonymous_namespace_::QpcToFileTimeAndGetCurrentFileTime @ 0x18000790C (_anonymous_namespace_--QpcToFileTimeAndGetCurrentFileTime.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall anonymous_namespace_::SendFramesReport(__int64 **a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  __int64 *v5; // rax
  int v6; // edi
  DWORD **v7; // rbx
  DWORD **v8; // r15
  DWORD *v9; // r13
  _DWORD *v10; // rax
  __int64 *v11; // rcx
  DWORD v12; // r12d
  LPCSTR *v13; // rax
  LPCSTR *v14; // rcx
  LPCSTR *v15; // r8
  __int64 **v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rdi
  LPCSTR *v19; // rax
  LPCSTR *v20; // rcx
  LPCSTR *v21; // rdx
  DWORD CurrentProcessId; // eax
  void *v23; // rbx
  const CHAR *v24; // rdx
  __int64 v25; // rax
  const GUID *v26; // r8
  LPCGUID v27; // r9
  __int64 v28; // rdx
  signed int LastError; // eax
  char cData; // [rsp+28h] [rbp-E0h]
  int v32; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v33; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v34; // [rsp+40h] [rbp-C8h] BYREF
  void *v35; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B8h]
  int v37; // [rsp+58h] [rbp-B0h]
  __int128 v38; // [rsp+60h] [rbp-A8h] BYREF
  __int64 lpMem; // [rsp+70h] [rbp-98h]
  void *lpMem_8[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v41; // [rsp+88h] [rbp-80h]
  DWORD pSessionId[4]; // [rsp+90h] [rbp-78h] BYREF
  __int64 **v43; // [rsp+A0h] [rbp-68h]
  _BYTE v44[8]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v45[8]; // [rsp+B0h] [rbp-58h] BYREF
  int v46; // [rsp+B8h] [rbp-50h] BYREF
  LPCSTR psz[2]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v49; // [rsp+D8h] [rbp-30h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v51; // [rsp+108h] [rbp+0h]
  __int64 v52; // [rsp+110h] [rbp+8h]
  _BYTE *v53; // [rsp+118h] [rbp+10h]
  __int64 v54; // [rsp+120h] [rbp+18h]
  DWORD *v55; // [rsp+128h] [rbp+20h]
  __int64 v56; // [rsp+130h] [rbp+28h]
  __int64 v57; // [rsp+138h] [rbp+30h]
  __int64 v58; // [rsp+140h] [rbp+38h]
  _BYTE *v59; // [rsp+148h] [rbp+40h]
  __int64 v60; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+158h] [rbp+50h] BYREF
  __int16 *v62; // [rsp+168h] [rbp+60h]
  __int64 v63; // [rsp+170h] [rbp+68h]
  void *v64; // [rsp+178h] [rbp+70h]
  int v65; // [rsp+180h] [rbp+78h]
  int v66; // [rsp+184h] [rbp+7Ch]
  __int64 v67; // [rsp+188h] [rbp+80h]
  int v68; // [rsp+190h] [rbp+88h]
  int v69; // [rsp+194h] [rbp+8Ch]
  void *retaddr; // [rsp+1D0h] [rbp+C8h]

  v43 = a1;
  v49 = 15LL;
  v48 = 0LL;
  LOBYTE(psz[0]) = 0;
  v35 = 0LL;
  v36 = 0LL;
  v2 = operator new(0x28uLL);
  v3 = v2;
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *v2 = v2;
  v4 = v2 + 1;
  if ( v4 )
    *v4 = v3;
  if ( v3 != (_QWORD *)-16LL )
    v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  v5 = *a1;
  v6 = 0;
  v35 = v3;
  *(_OWORD *)lpMem_8 = 0LL;
  v41 = 0LL;
  v7 = (DWORD **)v5[12];
  v8 = (DWORD **)v5[13];
  while ( v7 != v8 )
  {
    v9 = *v7;
    v10 = v3;
    v11 = (__int64 *)v3[1];
    v12 = **v7;
    while ( !*((_BYTE *)v11 + 25) )
    {
      if ( *((_DWORD *)v11 + 7) >= v12 )
      {
        v10 = v11;
        v11 = (__int64 *)*v11;
      }
      else
      {
        v11 = (__int64 *)v11[2];
      }
    }
    if ( v10 == (_DWORD *)v3 || v12 < v10[7] )
    {
      pSessionId[1] = **v7;
      pSessionId[2] = 0;
      v10 = *(_DWORD **)std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::insert<std::pair<unsigned int,unsigned int>>(
                          (int)&v35,
                          (int)&v46);
    }
    v10[8] = v6;
    LOBYTE(v32) = v12;
    LODWORD(v34) = v6 + 1;
    std::vector<char>::push_back(lpMem_8, &v32);
    LOBYTE(v32) = BYTE1(v12);
    std::vector<char>::push_back(lpMem_8, &v32);
    LOBYTE(v32) = BYTE2(v12);
    std::vector<char>::push_back(lpMem_8, &v32);
    LOBYTE(v32) = HIBYTE(v12);
    std::vector<char>::push_back(lpMem_8, &v32);
    LOBYTE(v32) = v12;
    std::vector<char>::push_back(lpMem_8, &v32);
    LOBYTE(v32) = BYTE1(v12);
    std::vector<char>::push_back(lpMem_8, &v32);
    LOBYTE(v32) = BYTE2(v12);
    std::vector<char>::push_back(lpMem_8, &v32);
    LOBYTE(v32) = HIBYTE(v12);
    std::vector<char>::push_back(lpMem_8, &v32);
    v13 = psz;
    v48 = 0LL;
    if ( v49 >= 0x10 )
      v13 = (LPCSTR *)psz[0];
    *(_BYTE *)v13 = 0;
    anonymous_namespace_::Encoder::Serialize_0(v9 + 1, &v35, psz);
    v14 = psz;
    v15 = psz;
    if ( v49 >= 0x10 )
    {
      v14 = (LPCSTR *)psz[0];
      v15 = (LPCSTR *)psz[0];
    }
    std::vector<char>::_Insert<std::_String_iterator<std::_String_val<std::_Simple_types<char>>>>(
      lpMem_8,
      lpMem_8[1],
      v15,
      (char *)v14 + v48);
    LOBYTE(v32) = 0;
    std::vector<char>::push_back(lpMem_8, &v32);
    WPF::ProcessHeapImpl::Free(v9);
    v3 = v35;
    ++v7;
    v6 = v34;
  }
  v33 = v36;
  v37 = 0;
  v38 = 0LL;
  lpMem = 0LL;
  LOBYTE(v32) = 0;
  std::vector<unsigned char>::push_back(&v38, &v32);
  LOBYTE(v32) = 0;
  std::vector<unsigned char>::push_back(&v38, &v32);
  v16 = v43;
  v17 = **v43;
  v18 = (*v43)[1];
  while ( 1 )
  {
    v48 = 0LL;
    v19 = psz;
    if ( v17 == v18 )
      break;
    if ( v49 >= 0x10 )
      v19 = (LPCSTR *)psz[0];
    *(_BYTE *)v19 = 0;
    anonymous_namespace_::Encoder::Serialize_1(v17, &v35, psz);
    ++v37;
    v20 = psz;
    v21 = psz;
    if ( v49 >= 0x10 )
    {
      LODWORD(v20) = psz[0];
      LODWORD(v21) = psz[0];
    }
    std::_Copy_impl<char const *,std::back_insert_iterator<std::vector<unsigned char>>>(
      (unsigned int)&v46,
      (_DWORD)v21,
      (_DWORD)v20 + v48,
      (unsigned int)&v38,
      cData);
    LOBYTE(v32) = 0;
    std::vector<unsigned char>::push_back(&v38, &v32);
    v17 += 456LL;
  }
  if ( v49 >= 0x10 )
    v19 = (LPCSTR *)psz[0];
  *(_BYTE *)v19 = 0;
  anonymous_namespace_::Encoder::Serialize((unsigned int *)*v16 + 6, (__int64)&v35, (__int64)psz);
  anonymous_namespace_::QpcToFileTimeAndGetCurrentFileTime(*(_QWORD *)(**v16 + 440), v45, v44);
  CurrentProcessId = GetCurrentProcessId();
  if ( !ProcessIdToSessionId(CurrentProcessId, pSessionId) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
  }
  v23 = lpMem_8[0];
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
  {
    LODWORD(v34) = 0;
    v51 = &v34;
    v24 = (const CHAR *)psz;
    v52 = 4LL;
    v53 = v44;
    v54 = 8LL;
    v55 = pSessionId;
    v25 = (__int64)(*v16 + 15);
    v56 = 4LL;
    v57 = v25;
    if ( v49 >= 0x10 )
      v24 = psz[0];
    v58 = 16LL;
    v59 = v45;
    v60 = 8LL;
    TlgCreateSz(&pDesc, v24);
    v62 = &v33;
    v65 = LODWORD(lpMem_8[1]) - (_DWORD)v23;
    v63 = 2LL;
    v64 = v23;
    v66 = 0;
    *(_WORD *)v38 = v37;
    v26 = (const GUID *)(unsigned __int16)(WORD4(v38) - v38);
    *(_WORD *)v38 = v37;
    v67 = v38;
    v68 = (unsigned __int16)v26;
    v69 = 0;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180211821, v26, v27, 0xBu, &pData);
  }
  std::vector<unsigned char>::_Tidy(&v38);
  if ( v23 )
    WPF::ProcessHeapImpl::Free(v23);
  std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Erase(
    &v35,
    *((_QWORD *)v35 + 1));
  *((_QWORD *)v35 + 1) = v35;
  *(_QWORD *)v35 = v35;
  *((_QWORD *)v35 + 2) = v35;
  v36 = 0LL;
  WPF::ProcessHeapImpl::Free(v35);
  LOBYTE(v28) = 1;
  return std::string::_Tidy(psz, v28, 0LL);
}
