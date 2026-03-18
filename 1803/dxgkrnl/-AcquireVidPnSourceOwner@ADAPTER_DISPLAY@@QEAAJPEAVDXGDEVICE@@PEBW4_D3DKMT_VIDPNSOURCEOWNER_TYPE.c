/*
 * XREFs of ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C010D30C
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010A57C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014A60 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0027E54 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00D95C0 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E1C6C (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C00E2D74 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?HasOpenGlContext@DXGDEVICE@@QEAAEXZ @ 0x1C010AF7C (-HasOpenGlContext@DXGDEVICE@@QEAAEXZ.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C010DFB4 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C01565C4 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::AcquireVidPnSourceOwner(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *a3,
        char *a4,
        unsigned int a5,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a6)
{
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int *v13; // r12
  signed __int64 i; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  struct DXGDEVICE *v25; // r10
  __int64 v26; // rdx
  struct DXGDEVICE *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  signed __int64 v30; // rbp
  __int64 v31; // r12
  __int64 v32; // rcx
  __int64 v33; // rdx
  struct DXGDEVICE *v34; // r9
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // r8d
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r15
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    v40 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v40 + 24) = 1853LL;
    WdLogEvent5_WdAssertion(v40);
  }
  if ( *((_DWORD *)this + 20) < a5 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    LODWORD(v12) = -1073741811;
    v41[4] = a5;
    v41[5] = -1073741811LL;
LABEL_86:
    v41[3] = a2;
LABEL_87:
    WdLogEvent5_WdError(v41);
    return (unsigned int)v12;
  }
  if ( !a3 || !a4 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    LODWORD(v12) = -1073741811;
    v41[4] = a3;
    v41[5] = a4;
    v41[6] = a3;
    v41[7] = -1073741811LL;
    goto LABEL_86;
  }
  v11 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( !v11 || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(v11 + 2464) + 16LL)) )
  {
    v42 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v42 + 24) = 1884LL;
    WdLogEvent5_WdAssertion(v42);
  }
  v12 = 0LL;
  if ( a5 )
  {
    v13 = (unsigned int *)a4;
    for ( i = (char *)a3 - a4; ; i = (char *)a3 - a4 )
    {
      v15 = *(unsigned int *)((char *)v13 + i);
      if ( v15 <= 0 )
        break;
      if ( v15 > 4 )
        break;
      v10 = *v13;
      if ( *((_DWORD *)this + 20) <= (unsigned int)v10 )
        break;
      if ( *((_QWORD *)a2 + 211) != *((_QWORD *)this + 2) )
      {
        v43 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v43 + 24) = 1924LL;
        WdLogEvent5_WdAssertion(v43);
        LODWORD(v10) = *v13;
      }
      if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3760LL * (unsigned int)v10)) )
      {
        v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
        v52 = *(unsigned int *)&a4[4 * v12];
        LODWORD(v12) = -1071774910;
        v50[3] = v52;
        v50[4] = -1071774910LL;
        goto LABEL_67;
      }
      v19 = 0LL;
      if ( (_DWORD)v12 )
      {
        v44 = *v13;
        while ( (_DWORD)v44 != *(_DWORD *)&a4[4 * v19] )
        {
          v19 = (unsigned int)(v19 + 1);
          if ( (unsigned int)v19 >= (unsigned int)v12 )
            goto LABEL_17;
        }
        v41 = (_QWORD *)WdLogNewEntry5_WdError(v44);
        v41[4] = (unsigned int)v12;
        v41[5] = (unsigned int)v19;
        v41[3] = a2;
        v45 = *(unsigned int *)&a4[4 * v19];
        goto LABEL_48;
      }
LABEL_17:
      if ( !ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)this, *v13) )
      {
        v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
        v50[3] = a2;
        v50[4] = (unsigned int)v12;
        v51 = *(unsigned int *)&a4[4 * v12];
        v12 = -1071774972LL;
        goto LABEL_65;
      }
      v10 = *(unsigned int *)((char *)v13 + (char *)a3 - a4);
      if ( (_DWORD)v10 == 1 && !*((_DWORD *)a2 + 82) || (_DWORD)v10 == 3 && *((_DWORD *)a2 + 82) )
        break;
      v23 = *((_QWORD *)this + 14);
      v24 = 3760LL * *v13;
      v25 = *(struct DXGDEVICE **)(v24 + v23 + 688);
      if ( v25 )
      {
        v26 = *(unsigned int *)(v24 + v23 + 696);
        if ( v25 == a2 )
        {
          if ( (_DWORD)v26 != (_DWORD)v10 )
          {
            v41 = (_QWORD *)WdLogNewEntry5_WdError(v10);
            v41[3] = a2;
            v41[4] = *(unsigned int *)&a4[4 * v12];
            v41[5] = *(int *)(3760LL * *(unsigned int *)&a4[4 * v12] + *((_QWORD *)this + 14) + 696);
            goto LABEL_47;
          }
        }
        else
        {
          if ( (_DWORD)v26 != 1 )
            goto LABEL_68;
          if ( (_DWORD)v10 == 1 && *(_BYTE *)(*((_QWORD *)a2 + 5) + 322LL) && *(_BYTE *)(*((_QWORD *)v25 + 5) + 322LL) )
          {
            v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v26, v24);
            v46[3] = a2;
            v46[4] = *(int *)(3760LL * *(unsigned int *)&a4[4 * v12] + *((_QWORD *)this + 14) + 696);
            v46[5] = *(unsigned int *)&a4[4 * v12];
            v47 = a3[v12];
            LODWORD(v12) = -1071774910;
            v46[7] = -1071774910LL;
            v46[6] = v47;
            WdLogEvent5_WdWarning(v46);
            LOBYTE(v48) = 1;
            if ( (unsigned __int8)WdIsDebuggerPresent(v48) )
            {
              DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
              JUMPOUT(0x1C01433A3LL);
            }
            return (unsigned int)v12;
          }
          if ( (_DWORD)v10 == 1 )
          {
LABEL_68:
            v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v26, v24);
            v50[3] = a2;
            v50[4] = *(int *)(3760LL * *(unsigned int *)&a4[4 * v12] + *((_QWORD *)this + 14) + 696);
            v50[5] = *(unsigned int *)&a4[4 * v12];
            v53 = a3[v12];
            LODWORD(v12) = -1071774910;
            v50[7] = -1071774910LL;
            v50[6] = v53;
            goto LABEL_67;
          }
          v27 = *(struct DXGDEVICE **)(v24 + v23 + 704);
          if ( v27 == a2 )
          {
            if ( (_DWORD)v10 != 4 )
            {
              v41 = (_QWORD *)WdLogNewEntry5_WdError(v10);
              v41[3] = a2;
              v41[4] = *(unsigned int *)&a4[4 * v12];
              v41[5] = 4LL;
              goto LABEL_47;
            }
          }
          else if ( v27 )
          {
            v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v26, v24);
            v50[3] = a2;
            v50[4] = *(unsigned int *)&a4[4 * v12];
            v51 = a3[v12];
            v12 = -1071774910LL;
LABEL_65:
            v50[5] = v51;
            v50[6] = v12;
LABEL_67:
            WdLogEvent5_WdWarning(v50);
            return (unsigned int)v12;
          }
        }
      }
      else if ( *(_DWORD *)(v24 + v23 + 696) )
      {
        v49 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v49 + 24) = 2101LL;
        WdLogEvent5_WdAssertion(v49);
      }
      v12 = (unsigned int)(v12 + 1);
      ++v13;
      if ( (unsigned int)v12 >= a5 )
        goto LABEL_28;
    }
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v41[3] = a2;
    v41[4] = (unsigned int)v12;
    v41[5] = *(unsigned int *)&a4[4 * v12];
LABEL_47:
    v45 = a3[v12];
LABEL_48:
    LODWORD(v12) = -1073741811;
    v41[6] = v45;
    v41[7] = -1073741811LL;
    goto LABEL_87;
  }
LABEL_28:
  if ( DXGDEVICE::HasOpenGlContext(a2) )
  {
    v54 = WdLogNewEntry5_WdEvent(v29, v28);
    *(_QWORD *)(v54 + 24) = a2;
    WdLogEvent5_WdEvent(v54);
  }
  if ( a5 )
  {
    v30 = (char *)a3 - a4;
    v31 = a5;
    while ( 1 )
    {
      v32 = *((_QWORD *)this + 14);
      v33 = 3760LL * *(unsigned int *)a4;
      v34 = *(struct DXGDEVICE **)(v33 + v32 + 688);
      if ( !v34 )
        break;
      v35 = *(_DWORD *)&a4[v30];
      if ( v35 != 4 )
      {
        v55 = *(_DWORD *)(v33 + v32 + 696);
        if ( v34 == a2 )
        {
          if ( v55 != v35 )
          {
            v56 = WdLogNewEntry5_WdAssertion(v32);
            *(_QWORD *)(v56 + 24) = 2140LL;
            WdLogEvent5_WdAssertion(v56);
          }
          goto LABEL_34;
        }
        if ( v55 != 1 || v35 == 1 )
        {
          v57 = WdLogNewEntry5_WdAssertion(v32);
          *(_QWORD *)(v57 + 24) = 2150LL;
          WdLogEvent5_WdAssertion(v57);
          v32 = *((_QWORD *)this + 14);
        }
        ADAPTER_DISPLAY::ReleaseSharedVidPnSourceOwner(
          this,
          *(struct DXGDEVICE **)(3760LL * *(unsigned int *)a4 + v32 + 688),
          *(_DWORD *)a4);
        goto LABEL_78;
      }
LABEL_34:
      if ( *(_DWORD *)&a4[v30] == 4 )
      {
        *(_QWORD *)(3760LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 704) = a2;
      }
      else
      {
        v59 = *((_QWORD *)this + 33);
        if ( v59 )
        {
          v60 = *(_QWORD *)(v59 + 8) + 2704LL * *(unsigned int *)a4;
          *(_QWORD *)(v60 + 416) = a2;
          *(_BYTE *)(v60 + 400) = 1;
          if ( (int)BLTQUEUE::IssueCommand((BLTQUEUE *)v60) >= 0 )
          {
            *(_QWORD *)(v60 + 200) = a2;
            memset((void *)(v60 + 160), 0, 0x20uLL);
            *(_DWORD *)(v60 + 848) &= ~4u;
          }
        }
        *(_QWORD *)(3760LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 688) = a2;
        *(_DWORD *)(3760LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 696) = *(_DWORD *)&a4[v30];
        *(struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS *)(3760LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 700) = a6;
      }
      *(_QWORD *)(3760LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 712) = *((_QWORD *)a2 + 5);
      ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, *(_DWORD *)a4);
      v38 = (_QWORD *)WdLogNewEntry5_WdEvent(v37, v36);
      v38[3] = a2;
      v38[4] = *(unsigned int *)a4;
      v38[5] = *(int *)&a4[v30];
      v38[6] = a5;
      WdLogEvent5_WdEvent(v38);
      if ( *(_DWORD *)&a4[v30] == 3 )
      {
        CddInterface = ADAPTER_DISPLAY::GetCddInterface((DXGADAPTER **)this, *(_DWORD *)a4);
        if ( CddInterface )
          (*((void (__fastcall **)(_QWORD))CddInterface + 2))(*(_QWORD *)CddInterface);
      }
      a4 += 4;
      if ( !--v31 )
        return 0LL;
    }
    if ( *(_DWORD *)(v33 + v32 + 696) )
    {
      v58 = WdLogNewEntry5_WdAssertion(v32);
      *(_QWORD *)(v58 + 24) = 2160LL;
      WdLogEvent5_WdAssertion(v58);
    }
LABEL_78:
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((OUTPUTDUPL_CONTEXT ***)this + 13), *(_DWORD *)a4, 0LL, 0, 0, 1);
    goto LABEL_34;
  }
  return 0LL;
}
