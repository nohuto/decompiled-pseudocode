/*
 * XREFs of ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00AD6AC
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E795C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007774 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C00077B8 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0079574 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C007F5EC (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0090640 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?HasOpenGlContext@DXGDEVICE@@QEAAEXZ @ 0x1C009E020 (-HasOpenGlContext@DXGDEVICE@@QEAAEXZ.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C00AF5B8 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C0175E84 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
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
  unsigned int v11; // r12d
  __int64 v12; // rax
  unsigned int v13; // ebx
  unsigned int *v14; // r15
  signed __int64 i; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  struct DXGDEVICE *v25; // r8
  signed __int64 v26; // rbp
  __int64 v27; // r12
  __int64 v28; // rcx
  __int64 v29; // rax
  struct DXGDEVICE *v30; // r8
  int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // r15
  _QWORD *v34; // rax
  struct DXGDEVICE *v36; // r8
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax

  v11 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v37 + 24) = 1840LL;
    WdLogEvent5_WdAssertion(v37);
  }
  if ( *((_DWORD *)this + 20) < a5 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    LODWORD(v47) = -1073741811;
    v38[4] = a5;
    v38[5] = -1073741811LL;
LABEL_84:
    v38[3] = a2;
LABEL_85:
    WdLogEvent5_WdError(v38);
    return (unsigned int)v47;
  }
  if ( !a3 || !a4 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    LODWORD(v47) = -1073741811;
    v38[4] = a3;
    v38[5] = a4;
    v38[6] = a3;
    v38[7] = -1073741811LL;
    goto LABEL_84;
  }
  v12 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( !v12 || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(v12 + 2312) + 16LL)) )
  {
    v39 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v39 + 24) = 1871LL;
    WdLogEvent5_WdAssertion(v39);
  }
  v13 = 0;
  if ( a5 )
  {
    v14 = (unsigned int *)a4;
    for ( i = (char *)a3 - a4; ; i = (char *)a3 - a4 )
    {
      v16 = *(unsigned int *)((char *)v14 + i);
      if ( v16 <= 0 || v16 > 4 || *((_DWORD *)this + 20) <= *v14 )
      {
LABEL_60:
        v38 = (_QWORD *)WdLogNewEntry5_WdError(v10);
        v42 = v13;
        v38[3] = a2;
        v38[4] = v13;
        v38[5] = *(unsigned int *)&a4[4 * v13];
        goto LABEL_61;
      }
      if ( *((_QWORD *)a2 + 209) != *((_QWORD *)this + 2) )
      {
        v40 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v40 + 24) = 1911LL;
        WdLogEvent5_WdAssertion(v40);
      }
      if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3760LL * *v14)) )
      {
        v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
        v50 = v13;
        LODWORD(v47) = -1071774910;
        v45[3] = *(unsigned int *)&a4[4 * v50];
        v45[4] = -1071774910LL;
        goto LABEL_71;
      }
      if ( v13 )
      {
        v41 = *v14;
        while ( (_DWORD)v41 != *(_DWORD *)&a4[4 * v11] )
        {
          if ( ++v11 >= v13 )
            goto LABEL_17;
        }
        v38 = (_QWORD *)WdLogNewEntry5_WdError(v41);
        v38[4] = v13;
        v38[5] = v11;
        v38[3] = a2;
        v43 = *(unsigned int *)&a4[4 * v11];
        goto LABEL_67;
      }
LABEL_17:
      v11 = 0;
      if ( !ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)this, *v14) )
      {
        v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
        v49 = v13;
        v47 = -1071774972LL;
        v45[3] = a2;
        v45[4] = v49;
        v48 = *(unsigned int *)&a4[4 * v49];
LABEL_69:
        v45[5] = v48;
        v45[6] = v47;
LABEL_71:
        WdLogEvent5_WdWarning(v45);
        return (unsigned int)v47;
      }
      v10 = *(unsigned int *)((char *)v14 + (char *)a3 - a4);
      if ( (_DWORD)v10 == 1 && !*((_DWORD *)a2 + 82) || (_DWORD)v10 == 3 && *((_DWORD *)a2 + 82) )
        goto LABEL_60;
      v23 = 3760LL * *v14;
      v24 = *((_QWORD *)this + 14);
      v25 = *(struct DXGDEVICE **)(v23 + v24 + 688);
      if ( v25 )
      {
        if ( v25 == a2 )
        {
          if ( *(_DWORD *)(v23 + v24 + 696) != (_DWORD)v10 )
          {
            v38 = (_QWORD *)WdLogNewEntry5_WdError(v10);
            v38[3] = a2;
            v38[4] = *(unsigned int *)&a4[4 * v13];
            v38[5] = *(int *)(3760LL * *(unsigned int *)&a4[4 * v13] + *((_QWORD *)this + 14) + 696);
            v43 = a3[v13];
            goto LABEL_67;
          }
        }
        else
        {
          if ( *(_DWORD *)(v23 + v24 + 696) != 1 )
            goto LABEL_76;
          if ( (_DWORD)v10 == 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)a2 + 5) + 306LL) && *(_BYTE *)(*((_QWORD *)v25 + 5) + 306LL) )
            {
              v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v23, v25);
              v52 = v13;
              LODWORD(v47) = -1071774910;
              v51[3] = a2;
              v51[4] = *(int *)(3760LL * *(unsigned int *)&a4[4 * v52] + *((_QWORD *)this + 14) + 696);
              v51[5] = *(unsigned int *)&a4[4 * v52];
              v51[6] = a3[v52];
              v51[7] = -1071774910LL;
              WdLogEvent5_WdWarning(v51);
              LOBYTE(v53) = 1;
              if ( (unsigned __int8)WdIsDebuggerPresent(v53) )
              {
                DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
                JUMPOUT(0x1C0134072LL);
              }
              return (unsigned int)v47;
            }
LABEL_76:
            v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v23, v25);
            v54 = v13;
            LODWORD(v47) = -1071774910;
            v45[3] = a2;
            v45[4] = *(int *)(3760LL * *(unsigned int *)&a4[4 * v54] + *((_QWORD *)this + 14) + 696);
            v45[5] = *(unsigned int *)&a4[4 * v54];
            v45[6] = a3[v54];
            v45[7] = -1071774910LL;
            goto LABEL_71;
          }
          v36 = *(struct DXGDEVICE **)(v23 + v24 + 704);
          if ( v36 == a2 )
          {
            if ( (_DWORD)v10 != 4 )
            {
              v38 = (_QWORD *)WdLogNewEntry5_WdError(v10);
              v42 = v13;
              v38[3] = a2;
              v38[4] = *(unsigned int *)&a4[4 * v13];
              v38[5] = 4LL;
LABEL_61:
              v43 = a3[v42];
LABEL_67:
              LODWORD(v47) = -1073741811;
              v38[6] = v43;
              v38[7] = -1073741811LL;
              goto LABEL_85;
            }
          }
          else if ( v36 )
          {
            v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v23, v36);
            v46 = v13;
            v47 = -1071774910LL;
            v45[3] = a2;
            v45[4] = *(unsigned int *)&a4[4 * v46];
            v48 = a3[v46];
            goto LABEL_69;
          }
        }
      }
      else if ( *(_DWORD *)(v23 + v24 + 696) )
      {
        v44 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v44 + 24) = 2088LL;
        WdLogEvent5_WdAssertion(v44);
      }
      ++v13;
      ++v14;
      if ( v13 >= a5 )
        break;
    }
  }
  if ( DXGDEVICE::HasOpenGlContext(a2) )
  {
    v55 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v55 + 24) = a2;
    WdLogEvent5_WdEvent(v55);
  }
  if ( a5 )
  {
    v26 = (char *)a3 - a4;
    v27 = a5;
    while ( 1 )
    {
      v28 = 3760LL * *(unsigned int *)a4;
      v29 = *((_QWORD *)this + 14);
      v30 = *(struct DXGDEVICE **)(v28 + v29 + 688);
      if ( !v30 )
        break;
      v31 = *(_DWORD *)&a4[v26];
      if ( v31 != 4 )
      {
        if ( v30 == a2 )
        {
          if ( *(_DWORD *)(v28 + v29 + 696) != v31 )
          {
            v56 = WdLogNewEntry5_WdAssertion(v28);
            *(_QWORD *)(v56 + 24) = 2127LL;
            WdLogEvent5_WdAssertion(v56);
          }
          goto LABEL_34;
        }
        if ( *(_DWORD *)(v28 + v29 + 696) != 1 || v31 == 1 )
        {
          v57 = WdLogNewEntry5_WdAssertion(v28);
          *(_QWORD *)(v57 + 24) = 2137LL;
          WdLogEvent5_WdAssertion(v57);
        }
        ADAPTER_DISPLAY::ReleaseSharedVidPnSourceOwner(
          this,
          *(struct DXGDEVICE **)(3760LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 688),
          *(_DWORD *)a4);
        goto LABEL_46;
      }
LABEL_34:
      if ( *(_DWORD *)&a4[v26] == 4 )
      {
        *(_QWORD *)(3760LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 704) = a2;
      }
      else
      {
        v32 = *((_QWORD *)this + 33);
        if ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 8) + 2704LL * *(unsigned int *)a4;
          *(_QWORD *)(v33 + 416) = a2;
          *(_BYTE *)(v33 + 400) = 1;
          if ( (int)BLTQUEUE::IssueCommand((BLTQUEUE *)v33) >= 0 )
          {
            *(_QWORD *)(v33 + 200) = a2;
            memset((void *)(v33 + 160), 0, 0x20uLL);
            *(_DWORD *)(v33 + 848) &= ~4u;
          }
        }
        *(_QWORD *)(3760LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 688) = a2;
        *(_DWORD *)(3760LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 696) = *(_DWORD *)&a4[v26];
        *(struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS *)(3760LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 700) = a6;
      }
      *(_QWORD *)(3760LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 712) = *((_QWORD *)a2 + 5);
      ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, *(_DWORD *)a4);
      v34 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v34[3] = a2;
      v34[4] = *(unsigned int *)a4;
      v34[5] = *(int *)&a4[v26];
      v34[6] = a5;
      WdLogEvent5_WdEvent(v34);
      if ( *(_DWORD *)&a4[v26] == 3 )
      {
        CddInterface = ADAPTER_DISPLAY::GetCddInterface((DXGADAPTER **)this, *(_DWORD *)a4);
        if ( CddInterface )
          (*((void (__fastcall **)(_QWORD))CddInterface + 2))(*(_QWORD *)CddInterface);
      }
      a4 += 4;
      if ( !--v27 )
        return 0LL;
    }
    if ( *(_DWORD *)(v28 + v29 + 696) )
    {
      v58 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v58 + 24) = 2147LL;
      WdLogEvent5_WdAssertion(v58);
    }
LABEL_46:
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((OUTPUTDUPL_CONTEXT ***)this + 13), *(_DWORD *)a4, 0LL, 0, 0, 1);
    goto LABEL_34;
  }
  return 0LL;
}
