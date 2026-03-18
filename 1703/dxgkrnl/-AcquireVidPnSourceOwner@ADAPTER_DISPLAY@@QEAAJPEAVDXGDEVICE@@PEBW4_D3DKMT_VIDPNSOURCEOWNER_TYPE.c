/*
 * XREFs of ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00E801C
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0098158 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000B5B4 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C000B5F8 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00A05EC (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C00DDD20 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00E6CD4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C00E96E0 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C0101884 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::AcquireVidPnSourceOwner(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *a3,
        char *a4,
        unsigned int a5,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGDEVICE *v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int *v16; // r12
  signed __int64 j; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  char *v31; // rcx
  char *i; // rax
  signed __int64 v33; // r14
  __int64 v34; // r12
  __int64 v35; // rcx
  __int64 v36; // rax
  struct DXGDEVICE *v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned int v45; // ebx
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rdx
  _QWORD *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // r15
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  char v68; // [rsp+70h] [rbp+8h]

  v68 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    v49 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v49 + 24) = 1368LL;
    WdLogEvent5_WdAssertion(v49);
  }
  if ( *((_DWORD *)this + 20) < a5 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    LODWORD(v15) = -1073741811;
    v54[4] = a5;
    v54[5] = -1073741811LL;
LABEL_102:
    v54[3] = a2;
    goto LABEL_103;
  }
  if ( !a3 || !a4 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    LODWORD(v15) = -1073741811;
    v54[4] = a3;
    v54[5] = a4;
    v54[6] = a3;
    v54[7] = -1073741811LL;
    goto LABEL_102;
  }
  v14 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( !v14 || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(v14 + 2288) + 16LL)) )
  {
    v50 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v50 + 24) = 1399LL;
    WdLogEvent5_WdAssertion(v50);
  }
  v15 = 0LL;
  if ( !a5 )
  {
LABEL_25:
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
    {
      v61 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
      *(_QWORD *)(v61 + 24) = 4967LL;
      WdLogEvent5_WdAssertion(v61);
    }
    v31 = (char *)a2 + 344;
    for ( i = (char *)*((_QWORD *)a2 + 43); i != v31 && i; i = *(char **)i )
    {
      if ( *((_DWORD *)i + 36) == 1 )
      {
        v62 = WdLogNewEntry5_WdEvent(v31);
        *(_QWORD *)(v62 + 24) = a2;
        WdLogEvent5_WdEvent(v62);
        break;
      }
    }
    if ( !a5 )
      return 0LL;
    v33 = (char *)a3 - a4;
    v34 = a5;
    while ( 1 )
    {
      v35 = 3208LL * *(unsigned int *)a4;
      v36 = *((_QWORD *)this + 14);
      v37 = *(struct DXGDEVICE **)(v35 + v36 + 688);
      if ( v37 )
      {
        v43 = *(unsigned int *)&a4[v33];
        if ( (_DWORD)v43 == 4 )
          goto LABEL_38;
        if ( v37 == a2 )
        {
          if ( *(_DWORD *)(v35 + v36 + 696) != (_DWORD)v43 )
          {
            v63 = WdLogNewEntry5_WdAssertion(v35, v43, v37, v30);
            *(_QWORD *)(v63 + 24) = 1676LL;
            WdLogEvent5_WdAssertion(v63);
          }
          goto LABEL_38;
        }
        if ( *(_DWORD *)(v35 + v36 + 696) != 1 || (_DWORD)v43 == 1 )
        {
          v64 = WdLogNewEntry5_WdAssertion(v35, v43, v37, v30);
          *(_QWORD *)(v64 + 24) = 1686LL;
          WdLogEvent5_WdAssertion(v64);
        }
        ADAPTER_DISPLAY::ReleaseSharedVidPnSourceOwner(
          this,
          *(struct DXGDEVICE **)(3208LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 688),
          *(_DWORD *)a4);
      }
      else if ( *(_DWORD *)(v35 + v36 + 696) )
      {
        v65 = WdLogNewEntry5_WdAssertion(v35, v27, 0LL, v30);
        *(_QWORD *)(v65 + 24) = 1696LL;
        WdLogEvent5_WdAssertion(v65);
      }
      OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
        *((OUTPUTDUPL_CONTEXT ***)this + 13),
        *(unsigned int *)a4,
        0LL,
        0LL,
        0,
        1);
LABEL_38:
      if ( *(_DWORD *)&a4[v33] == 4 )
      {
        *(_QWORD *)(3208LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 704) = a2;
      }
      else
      {
        v38 = *((_QWORD *)this + 33);
        if ( v38 )
        {
          v66 = *(_QWORD *)(v38 + 8) + 2704LL * *(unsigned int *)a4;
          *(_QWORD *)(v66 + 416) = a2;
          *(_BYTE *)(v66 + 400) = 1;
          if ( (int)BLTQUEUE::IssueCommand((BLTQUEUE *)v66) >= 0 )
          {
            *(_QWORD *)(v66 + 200) = a2;
            memset((void *)(v66 + 160), 0, 0x20uLL);
            *(_DWORD *)(v66 + 848) &= ~4u;
          }
        }
        *(_QWORD *)(3208LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 688) = a2;
        *(_DWORD *)(3208LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 696) = *(_DWORD *)&a4[v33];
        *(struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS *)(3208LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 700) = a6;
      }
      *(_QWORD *)(3208LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 712) = *((_QWORD *)a2 + 5);
      ADAPTER_DISPLAY::SetGammaRamp((PERESOURCE **)this, *(_DWORD *)a4, 0LL);
      v40 = (_QWORD *)WdLogNewEntry5_WdEvent(v39);
      v40[3] = a2;
      v40[4] = *(unsigned int *)a4;
      v40[5] = *(int *)&a4[v33];
      v40[6] = a5;
      WdLogEvent5_WdEvent(v40);
      if ( *(_DWORD *)&a4[v33] == 3 )
      {
        CddInterface = ADAPTER_DISPLAY::GetCddInterface((DXGADAPTER **)this, *(_DWORD *)a4);
        if ( CddInterface )
          (*((void (__fastcall **)(_QWORD))CddInterface + 2))(*(_QWORD *)CddInterface);
      }
      a4 += 4;
      if ( !--v34 )
        return 0LL;
    }
  }
  v16 = (unsigned int *)a4;
  for ( j = (char *)a3 - a4; ; j = (char *)a3 - a4 )
  {
    v18 = *(unsigned int *)((char *)v16 + j);
    if ( v18 != 1 )
    {
      if ( v18 <= 1 )
        goto LABEL_71;
      if ( v18 > 3 )
      {
        if ( v18 != 4 )
          goto LABEL_71;
      }
      else
      {
        v68 = 1;
      }
    }
    if ( *((_DWORD *)this + 20) <= *v16 )
      goto LABEL_71;
    if ( *((_QWORD *)a2 + 225) != *((_QWORD *)this + 2) )
    {
      v51 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      *(_QWORD *)(v51 + 24) = 1440LL;
      WdLogEvent5_WdAssertion(v51);
    }
    if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3208LL * *v16)) )
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      v58 = *(unsigned int *)&a4[4 * v15];
      LODWORD(v15) = -1071774910;
      v59[3] = v58;
      v59[4] = -1071774910LL;
      goto LABEL_89;
    }
    v23 = 0LL;
    if ( (_DWORD)v15 )
    {
      v52 = *v16;
      while ( (_DWORD)v52 != *(_DWORD *)&a4[4 * v23] )
      {
        v23 = (unsigned int)(v23 + 1);
        if ( (unsigned int)v23 >= (unsigned int)v15 )
          goto LABEL_16;
      }
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v52, v19);
      v54[4] = (unsigned int)v15;
      v54[5] = (unsigned int)v23;
      v54[3] = a2;
      v55 = *(unsigned int *)&a4[4 * v23];
      goto LABEL_83;
    }
LABEL_16:
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)this, *v16) )
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v10, v25, v13);
      v59[3] = a2;
      v59[4] = (unsigned int)v15;
      v60 = *(unsigned int *)&a4[4 * v15];
      v15 = -1071774972LL;
      goto LABEL_91;
    }
    v11 = *(unsigned int *)((char *)v16 + (char *)a3 - a4);
    if ( (_DWORD)v11 == 1 && !*((_DWORD *)a2 + 82) || (_DWORD)v11 == 3 && *((_DWORD *)a2 + 82) )
    {
LABEL_71:
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
      v54[3] = a2;
      v54[4] = (unsigned int)v15;
      v54[5] = *(unsigned int *)&a4[4 * v15];
      goto LABEL_81;
    }
    v10 = 3208LL * *v16;
    v26 = *((_QWORD *)this + 14);
    v12 = *(struct DXGDEVICE **)(v10 + v26 + 688);
    if ( v12 )
      break;
    if ( *(_DWORD *)(v10 + v26 + 696) )
    {
      v53 = WdLogNewEntry5_WdAssertion(v11, v10, 0LL, v13);
      *(_QWORD *)(v53 + 24) = 1604LL;
      WdLogEvent5_WdAssertion(v53);
    }
LABEL_23:
    v15 = (unsigned int)(v15 + 1);
    ++v16;
    if ( (unsigned int)v15 >= a5 )
    {
      if ( v68 )
      {
        v44 = *((unsigned int *)this + 20);
        v45 = 0;
        if ( (_DWORD)v44 )
        {
          v46 = *((_QWORD *)this + 14);
          while ( 1 )
          {
            v47 = 3208LL * v45;
            v48 = *(_QWORD *)(v47 + v46 + 688);
            if ( v48 )
            {
              if ( *(_DWORD *)(v47 + v46 + 696) != 1 && *(_DWORD *)(v48 + 328) != *((_DWORD *)a2 + 82) )
                break;
            }
            if ( ++v45 >= (unsigned int)v44 )
              goto LABEL_25;
          }
          v54 = (_QWORD *)WdLogNewEntry5_WdError(v44, v47);
          v56 = v45;
          v15 = -1071774910LL;
          v54[3] = a2;
          v54[4] = v56;
          v54[5] = *(int *)(*(_QWORD *)(3208 * v56 + *((_QWORD *)this + 14) + 688) + 328LL);
          v55 = *((int *)a2 + 82);
          goto LABEL_85;
        }
      }
      goto LABEL_25;
    }
  }
  if ( v12 == a2 )
  {
    if ( *(_DWORD *)(v10 + v26 + 696) == (_DWORD)v11 )
      goto LABEL_23;
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v54[3] = a2;
    v54[4] = *(unsigned int *)&a4[4 * v15];
    v54[5] = *(int *)(3208LL * *(unsigned int *)&a4[4 * v15] + *((_QWORD *)this + 14) + 696);
    goto LABEL_81;
  }
  v42 = *(unsigned int *)(v10 + v26 + 696);
  if ( (_DWORD)v42 != 1 )
    goto LABEL_87;
  if ( (_DWORD)v11 != 1 )
  {
    v12 = *(struct DXGDEVICE **)(v10 + v26 + 704);
    if ( v12 != a2 )
    {
      if ( !v12 )
        goto LABEL_23;
      v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
      v59[3] = a2;
      v59[4] = *(unsigned int *)&a4[4 * v15];
      v60 = a3[v15];
      v15 = -1071774910LL;
LABEL_91:
      v59[5] = v60;
      v59[6] = v15;
      goto LABEL_89;
    }
    if ( (_DWORD)v11 == 4 )
      goto LABEL_23;
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v54[3] = a2;
    v54[4] = *(unsigned int *)&a4[4 * v15];
    v54[5] = 4LL;
LABEL_81:
    v55 = a3[v15];
LABEL_83:
    v15 = -1073741811LL;
LABEL_85:
    v54[6] = v55;
    v54[7] = v15;
LABEL_103:
    WdLogEvent5_WdError(v54);
    return (unsigned int)v15;
  }
  *((_BYTE *)a2 + 1858) = 1;
LABEL_87:
  v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v42, v13);
  v59[3] = a2;
  v59[4] = *(int *)(3208LL * *(unsigned int *)&a4[4 * v15] + *((_QWORD *)this + 14) + 696);
  v59[5] = *(unsigned int *)&a4[4 * v15];
  v57 = a3[v15];
  LODWORD(v15) = -1071774910;
  v59[6] = v57;
  v59[7] = -1071774910LL;
LABEL_89:
  WdLogEvent5_WdWarning(v59);
  return (unsigned int)v15;
}
