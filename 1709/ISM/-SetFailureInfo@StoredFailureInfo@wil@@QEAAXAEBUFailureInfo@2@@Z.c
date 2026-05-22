/*
 * XREFs of ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180002574
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x18000289C (--0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VRawInputProvidersTracing@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180096680 (-NotifyFailure@-$ActivityBase@VRawInputProvidersTracing@@$0A@$0A@$03U_TlgReflectorTag_Param0IsPr.c)
 *     ?NotifyFailure@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180096C00 (-NotifyFailure@-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_.c)
 *     ?NotifyFailure@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800B9EC0 (-NotifyFailure@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?NotifyFailure@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800BA440 (-NotifyFailure@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0.c)
 *     ?NotifyFailure@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800BA9C0 (-NotifyFailure@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflector.c)
 * Callees:
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x180002110 (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180005444 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x1800054FC (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 */

void __fastcall wil::StoredFailureInfo::SetFailureInfo(wil::StoredFailureInfo *this, const struct wil::FailureInfo *a2)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r11
  __int64 v19; // r11
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rbx
  __int64 v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rbp
  __int64 v33; // rbx
  __int64 v34; // rbx
  LPVOID *v35; // rsi
  volatile signed __int32 *v36; // rcx
  rsize_t v37; // rbx
  HANDLE ProcessHeap; // rax
  void *v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  void *v47; // rax
  __int64 v48; // rax
  void *v49; // rax

  *(_OWORD *)this = *(_OWORD *)a2;
  v4 = 2LL;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  v5 = *((_QWORD *)a2 + 2);
  if ( v5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(v5 + 2 * v7) );
    v6 = 2 * v7 + 2;
  }
  else
  {
    v6 = 2LL;
  }
  v8 = *((_QWORD *)a2 + 4);
  if ( v8 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(v8 + v10) );
    v9 = v10 + 1;
  }
  else
  {
    v9 = 1LL;
  }
  v11 = *((_QWORD *)a2 + 5);
  if ( v11 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v11 + v13) );
    v12 = v13 + 1;
  }
  else
  {
    v12 = 1LL;
  }
  v14 = *((_QWORD *)a2 + 6);
  if ( v14 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v14 + v16) );
    v15 = v16 + 1;
  }
  else
  {
    v15 = 1LL;
  }
  v17 = *((_QWORD *)a2 + 8);
  if ( v17 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v17 + v19) );
    v18 = v19 + 1;
  }
  else
  {
    v18 = 1LL;
  }
  v20 = *((_QWORD *)a2 + 15);
  if ( v20 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_BYTE *)(v20 + v22) );
    v21 = v22 + 1;
  }
  else
  {
    v21 = 1LL;
  }
  v23 = *((_QWORD *)a2 + 13);
  if ( v23 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( *(_BYTE *)(v23 + v25) );
    v24 = v25 + 1;
  }
  else
  {
    v24 = 1LL;
  }
  v26 = *((_QWORD *)a2 + 14);
  if ( v26 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *(_WORD *)(v26 + 2 * v28) );
    v27 = 2 * v28 + 2;
  }
  else
  {
    v27 = 2LL;
  }
  v29 = *((_QWORD *)a2 + 10);
  if ( v29 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( *(_BYTE *)(v29 + v31) );
    v30 = v31 + 1;
  }
  else
  {
    v30 = 1LL;
  }
  v32 = *((_QWORD *)a2 + 11);
  if ( v32 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( *(_WORD *)(v32 + 2 * v33) );
    v4 = 2 * v33 + 2;
  }
  v34 = v15 + v18 + v21 + v24 + v27 + v4 + v30;
  v35 = (LPVOID *)((char *)this + 144);
  v36 = (volatile signed __int32 *)*((_QWORD *)this + 18);
  v37 = v6 + v9 + v12 + v34;
  if ( !v36 )
    goto LABEL_56;
  if ( *v36 != 1 || *((_QWORD *)this + 19) < v37 )
  {
    if ( _InterlockedExchangeAdd(v36, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *v35);
    }
    *v35 = 0LL;
    *((_QWORD *)this + 19) = 0LL;
LABEL_56:
    wil::details::shared_buffer::create((LPVOID *)this + 18, 0LL, v37);
  }
  v39 = (void *)(((unsigned __int64)*v35 + 4) & -(__int64)(*v35 != 0LL));
  v40 = ((unsigned __int64)v39 + *((_QWORD *)this + 19)) & -(__int64)(((*((_QWORD *)this + 18) + 4LL) & -(__int64)(*((_QWORD *)this + 18) != 0LL)) != 0);
  v41 = wil::details::WriteResultString<unsigned short const *>(v39);
  v42 = wil::details::WriteResultString<char const *>(v41, v40, *((_QWORD *)a2 + 4), (char *)this + 32);
  v43 = wil::details::WriteResultString<char const *>(v42, v40, *((_QWORD *)a2 + 5), (char *)this + 40);
  v44 = wil::details::WriteResultString<char const *>(v43, v40, *((_QWORD *)a2 + 6), (char *)this + 48);
  v45 = wil::details::WriteResultString<char const *>(v44, v40, *((_QWORD *)a2 + 8), (char *)this + 64);
  v46 = wil::details::WriteResultString<char const *>(v45, v40, *((_QWORD *)a2 + 15), (char *)this + 120);
  v47 = (void *)wil::details::WriteResultString<char const *>(v46, v40, *((_QWORD *)a2 + 13), (char *)this + 104);
  v48 = wil::details::WriteResultString<unsigned short const *>(v47);
  v49 = (void *)wil::details::WriteResultString<char const *>(v48, v40, *((_QWORD *)a2 + 10), (char *)this + 80);
  wil::details::WriteResultString<unsigned short const *>(v49);
}
