/*
 * XREFs of ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x14000B350
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140007C50 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x14000AC54 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXXZ @ 0x140003D90 (-GetFreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CB28 (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x14001E752 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x140030948 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x140030D24 (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140036954 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::CreateAPOConnectionList(CPipeInstance *this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  int v9; // ecx
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r14
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v16; // edx
  _QWORD *v17; // rcx
  int j; // edx
  struct CConnectionInstance *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r14
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  int v26; // edx
  _QWORD *v27; // rcx
  int i; // edx
  __int64 *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r13
  _QWORD *v33; // rax
  _QWORD *v34; // rsi
  int v35; // ecx
  __int64 v36; // r14
  __int64 v37; // rcx
  __int64 v38; // r14
  __int64 *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // edx
  _QWORD *v43; // rax
  _QWORD *v44; // rsi
  int v45; // ecx
  __int64 v46; // r14
  __int64 v47; // rcx
  __int64 v48; // r14
  __int64 *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned __int64 v53; // rcx
  __int64 v54; // rcx
  _QWORD *v55; // rax
  int v56; // edx
  _QWORD *v57; // rcx
  int k; // edx
  __int64 v59; // rcx
  struct CConnectionInstance *v60; // rax
  __int64 v61; // r12
  _QWORD *v62; // rsi
  __int64 v63; // rax
  int v64; // ecx
  __int64 v65; // r14
  __int64 v66; // rcx
  __int64 v67; // r12
  __int64 *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rax
  struct ATL::CAtlPlex *v72; // r8
  int v73; // edx
  _QWORD *v74; // rcx
  int m; // edx
  int pExceptionObject; // [rsp+30h] [rbp-68h] BYREF
  int v77; // [rsp+34h] [rbp-64h] BYREF
  int v78; // [rsp+38h] [rbp-60h] BYREF
  int v79; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int64 v80; // [rsp+40h] [rbp-58h]
  __int64 v81; // [rsp+48h] [rbp-50h]
  long *v82; // [rsp+50h] [rbp-48h] BYREF
  ATL::CAtlException *v83; // [rsp+58h] [rbp-40h] BYREF
  struct CConnectionInstance *v84; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v85; // [rsp+B8h] [rbp+20h]

  v81 = -2LL;
  v2 = 0LL;
  v80 = 0LL;
  try
  {
    v3 = *((_QWORD *)this + 3);
    if ( !v3 )
      ATL::AtlThrowImpl(-2147467259);
    v4 = *(_QWORD *)(v3 + 8);
    v5 = *(_QWORD *)(v3 + 16);
    v85 = v5;
    v6 = *(_QWORD *)this;
    if ( !*(_QWORD *)this )
    {
      if ( !*((_DWORD *)this + 2) )
        goto LABEL_38;
      v7 = operator new(0x40uLL);
      v8 = v7;
      if ( v7 )
      {
        v9 = *(_DWORD *)(v5 + 24);
        v10 = *((_QWORD *)this + 29);
        v7[6] = 0LL;
        *v7 = 0LL;
        v7[1] = -1LL;
        *((_DWORD *)v7 + 4) = v9;
        v7[3] = v5;
        v7[4] = 0LL;
        *((_DWORD *)v7 + 10) = 0;
        v7[7] = 0LL;
        if ( v7[6] != v10 )
        {
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
          v11 = v8[6];
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          v8[6] = v10;
        }
      }
      else
      {
        v8 = 0LL;
      }
      if ( !v8 )
      {
        v77 = -2147024882;
        throw (long *)&v77;
      }
      v12 = *((_QWORD *)this + 8);
      if ( *((_QWORD *)this + 12) )
      {
LABEL_21:
        v19 = (struct CConnectionInstance *)*((_QWORD *)this + 12);
        v84 = v19;
        v20 = *(_QWORD *)v19;
        if ( v19 )
          *((_QWORD *)v19 + 2) = v8;
        *((_QWORD *)this + 12) = v20;
        *((_QWORD *)v19 + 1) = 0LL;
        *(_QWORD *)v19 = v12;
        ++*((_QWORD *)this + 10);
        v21 = *((_QWORD *)this + 8);
        if ( v21 )
          *(_QWORD *)(v21 + 8) = v19;
        else
          *((_QWORD *)this + 9) = v19;
        *((_QWORD *)this + 8) = v19;
        v22 = *((_QWORD *)this + 30);
        if ( *((_QWORD *)this + 34) )
          goto LABEL_33;
        v23 = *((unsigned int *)this + 70);
        if ( *((_DWORD *)this + 70) )
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / v23 < 0x18 )
            goto LABEL_114;
          v24 = 24 * v23;
        }
        else
        {
          v24 = 0LL;
        }
        if ( (unsigned __int64)~v24 >= 8 )
        {
          v25 = malloc(v24 + 8);
          if ( v25 )
          {
            *v25 = *((_QWORD *)this + 33);
            *((_QWORD *)this + 33) = v25;
            v26 = *((_DWORD *)this + 70);
            v27 = &v25[2 * (v26 - 1) + 1 + (unsigned int)(v26 - 1)];
            for ( i = v26 - 1; i >= 0; --i )
            {
              *v27 = *((_QWORD *)this + 34);
              *((_QWORD *)this + 34) = v27;
              v27 -= 3;
            }
LABEL_33:
            v29 = (__int64 *)*((_QWORD *)this + 34);
            v30 = *v29;
            if ( v29 )
              v29[2] = (__int64)v8;
            *((_QWORD *)this + 34) = v30;
            v29[1] = 0LL;
            *v29 = v22;
            ++*((_QWORD *)this + 32);
            v31 = *((_QWORD *)this + 30);
            if ( v31 )
              *(_QWORD *)(v31 + 8) = v29;
            else
              *((_QWORD *)this + 31) = v29;
            *((_QWORD *)this + 30) = v29;
            goto LABEL_38;
          }
        }
LABEL_114:
        ATL::AtlThrowImpl(-2147024882);
      }
      v13 = *((unsigned int *)this + 26);
      if ( *((_DWORD *)this + 26) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v13 < 0x18 )
          goto LABEL_111;
        v14 = 24 * v13;
      }
      else
      {
        v14 = 0LL;
      }
      if ( (unsigned __int64)~v14 >= 8 )
      {
        v15 = malloc(v14 + 8);
        if ( v15 )
        {
          *v15 = *((_QWORD *)this + 11);
          *((_QWORD *)this + 11) = v15;
          v16 = *((_DWORD *)this + 26);
          v17 = &v15[2 * (v16 - 1) + 1 + (unsigned int)(v16 - 1)];
          for ( j = v16 - 1; j >= 0; --j )
          {
            *v17 = *((_QWORD *)this + 12);
            *((_QWORD *)this + 12) = v17;
            v17 -= 3;
          }
          goto LABEL_21;
        }
      }
LABEL_111:
      ATL::AtlThrowImpl(-2147024882);
    }
    if ( !*((_DWORD *)this + 30) || *(_DWORD *)(v6 + 204) )
    {
      v59 = *(_QWORD *)(v6 + 64);
      if ( !v59 )
        ATL::AtlThrowImpl(-2147467259);
      v60 = *(struct CConnectionInstance **)(v59 + 16);
    }
    else
    {
      v84 = 0LL;
      CPipeInstance::GetAPONodeAndConnection(
        (CPipeInstance *)v6,
        &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
        0LL,
        &v84,
        0LL);
      v60 = v84;
      if ( !v84 )
      {
        v84 = 0LL;
        CPipeInstance::GetAPONodeAndConnection(
          *(CPipeInstance **)this,
          &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693,
          0LL,
          &v84,
          0LL);
        v60 = v84;
        if ( !v84 )
        {
          v71 = *(_QWORD *)(*(_QWORD *)this + 64LL);
          if ( !v71 )
            ATL::AtlThrowImpl(-2147467259);
          v60 = *(struct CConnectionInstance **)(v71 + 16);
        }
      }
    }
    v61 = *((_QWORD *)v60 + 1);
    v62 = operator new(0x40uLL);
    if ( v62 )
    {
      v63 = v85;
      v64 = *(_DWORD *)(v85 + 24);
      v65 = *((_QWORD *)this + 29);
      v62[6] = 0LL;
      *v62 = 0LL;
      v62[1] = v61;
      *((_DWORD *)v62 + 4) = v64;
      v62[3] = v63;
      v62[4] = 0LL;
      *((_DWORD *)v62 + 10) = 0;
      v62[7] = 0LL;
      if ( v62[6] != v65 )
      {
        if ( v65 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 8LL))(v65);
        v66 = v62[6];
        if ( v66 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
        v62[6] = v65;
      }
    }
    else
    {
      v62 = 0LL;
    }
    if ( !v62 )
    {
      pExceptionObject = -2147024882;
      throw (long *)&pExceptionObject;
    }
    v67 = *((_QWORD *)this + 8);
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((__int64)this + 64);
    v68 = (__int64 *)*((_QWORD *)this + 12);
    v69 = *v68;
    if ( v68 )
      v68[2] = (__int64)v62;
    *((_QWORD *)this + 12) = v69;
    v68[1] = 0LL;
    *v68 = v67;
    ++*((_QWORD *)this + 10);
    v70 = *((_QWORD *)this + 8);
    if ( v70 )
      *(_QWORD *)(v70 + 8) = v68;
    else
      *((_QWORD *)this + 9) = v68;
    *((_QWORD *)this + 8) = v68;
    v5 = v85;
LABEL_38:
    while ( v4 )
    {
      v32 = *(_QWORD *)(v4 + 16);
      v4 = *(_QWORD *)(v4 + 8);
      v33 = operator new(0x40uLL);
      v34 = v33;
      if ( v33 )
      {
        v35 = *(_DWORD *)(v32 + 24);
        v36 = *((_QWORD *)this + 29);
        v33[6] = 0LL;
        *v33 = 1LL;
        v33[1] = 0LL;
        *((_DWORD *)v33 + 4) = v35;
        v33[3] = v32;
        v33[4] = v5;
        *((_DWORD *)v33 + 10) = 0;
        v33[7] = 0LL;
        if ( v33[6] != v36 )
        {
          if ( v36 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
          v37 = v34[6];
          if ( v37 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
          v34[6] = v36;
        }
      }
      else
      {
        v34 = 0LL;
      }
      if ( !v34 )
      {
        v78 = -2147024882;
        throw (long *)&v78;
      }
      v38 = *((_QWORD *)this + 8);
      if ( !*((_QWORD *)this + 12) )
      {
        v53 = *((unsigned int *)this + 26);
        if ( *((_DWORD *)this + 26) )
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / v53 < 0x18 )
            goto LABEL_119;
          v54 = 24 * v53;
        }
        else
        {
          v54 = 0LL;
        }
        if ( (unsigned __int64)~v54 < 8 || (v55 = malloc(v54 + 8)) == 0LL )
LABEL_119:
          ATL::AtlThrowImpl(-2147024882);
        *v55 = *((_QWORD *)this + 11);
        *((_QWORD *)this + 11) = v55;
        v56 = *((_DWORD *)this + 26);
        v57 = &v55[2 * (v56 - 1) + 1 + (unsigned int)(v56 - 1)];
        for ( k = v56 - 1; k >= 0; --k )
        {
          *v57 = *((_QWORD *)this + 12);
          *((_QWORD *)this + 12) = v57;
          v57 -= 3;
        }
      }
      v39 = (__int64 *)*((_QWORD *)this + 12);
      v40 = *v39;
      if ( v39 )
        v39[2] = (__int64)v34;
      *((_QWORD *)this + 12) = v40;
      v39[1] = 0LL;
      *v39 = v38;
      ++*((_QWORD *)this + 10);
      v41 = *((_QWORD *)this + 8);
      if ( v41 )
        *(_QWORD *)(v41 + 8) = v39;
      else
        *((_QWORD *)this + 9) = v39;
      *((_QWORD *)this + 8) = v39;
      v5 = v32;
    }
    v42 = *((_DWORD *)this + 28);
    if ( ((v42 - 1) & 0xFFFFFFFC) == 0 && v42 != 2 )
    {
      v43 = operator new(0x40uLL);
      v44 = v43;
      if ( v43 )
      {
        v45 = *(_DWORD *)(v5 + 24);
        v46 = *((_QWORD *)this + 29);
        v43[6] = 0LL;
        *v43 = 1LL;
        v43[1] = 0LL;
        *((_DWORD *)v43 + 4) = v45;
        v43[3] = 0LL;
        v43[4] = v5;
        *((_DWORD *)v43 + 10) = 0;
        v43[7] = 0LL;
        if ( v43[6] != v46 )
        {
          if ( v46 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 8LL))(v46);
          v47 = v44[6];
          if ( v47 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
          v44[6] = v46;
        }
      }
      else
      {
        v44 = 0LL;
      }
      if ( !v44 )
      {
        v79 = -2147024882;
        throw (long *)&v79;
      }
      v48 = *((_QWORD *)this + 8);
      if ( !*((_QWORD *)this + 12) )
      {
        v72 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 11, *((unsigned int *)this + 26), 0x18uLL);
        if ( !v72 )
          ATL::AtlThrowImpl(-2147024882);
        v73 = *((_DWORD *)this + 26);
        v74 = (_QWORD *)((char *)v72 + 16 * (v73 - 1) + 8 * (unsigned int)(v73 - 1) + 8);
        for ( m = v73 - 1; m >= 0; --m )
        {
          *v74 = *((_QWORD *)this + 12);
          *((_QWORD *)this + 12) = v74;
          v74 -= 3;
        }
      }
      v49 = (__int64 *)*((_QWORD *)this + 12);
      v50 = *v49;
      if ( v49 )
        v49[2] = (__int64)v44;
      *((_QWORD *)this + 12) = v50;
      v49[1] = 0LL;
      *v49 = v48;
      ++*((_QWORD *)this + 10);
      v51 = *((_QWORD *)this + 8);
      if ( v51 )
        *(_QWORD *)(v51 + 8) = v49;
      else
        *((_QWORD *)this + 9) = v49;
      *((_QWORD *)this + 8) = v49;
    }
  }
  catch ( ATL::CAtlException *v83 )
  {
    v2 = v80;
  }
  catch ( long *v82 )
  {
    v2 = v80;
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return 0LL;
}
