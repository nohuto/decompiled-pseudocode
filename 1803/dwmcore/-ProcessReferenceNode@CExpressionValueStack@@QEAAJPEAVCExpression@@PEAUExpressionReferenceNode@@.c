/*
 * XREFs of ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180051B80
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x18002AB80 (--_GCRgnGeometry@@MEAAPEAXI@Z.c)
 *     ??_GCPropertySet@@UEAAPEAXI@Z @ 0x1800386B0 (--_GCPropertySet@@UEAAPEAXI@Z.c)
 *     ?GetProperty@CPropertySet@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180039CA0 (-GetProperty@CPropertySet@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18004BEF0 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18005052C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x180050F80 (-Release@CVisual@@UEAAKXZ.c)
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x180053570 (--_ECExpression@@UEAAPEAXI@Z.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x1800535D8 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x180053660 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_ECComponentTransform2D@@UEAAPEAXI@Z @ 0x180096EE0 (--_ECComponentTransform2D@@UEAAPEAXI@Z.c)
 *     ??_GCSurfaceBrush@@MEAAPEAXI@Z @ 0x1800993D0 (--_GCSurfaceBrush@@MEAAPEAXI@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x1801404D8 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x18017EEF4 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18017EFBC (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801AE054 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x1801CA9F0 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801CD38C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CExpressionValueStack::ProcessReferenceNode(
        CExpressionValueStack *this,
        struct CExpression *a2,
        struct ExpressionReferenceNode *a3)
{
  __int64 v3; // rax
  _DWORD *v7; // r15
  __int64 v8; // rcx
  struct CExpressionValue *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int *v12; // r12
  __int64 v13; // rdx
  __int64 (__fastcall *v14)(CExpression *__hidden, unsigned int, struct CResource **); // rax
  volatile signed __int32 *v15; // rbx
  __int64 (__fastcall *v16)(CMILCOMBase *); // rax
  int v17; // ebx
  __int64 v18; // rdx
  __int64 (__fastcall *v19)(CVisual *, int, struct CExpressionValue *); // rax
  int Property; // eax
  __int64 v21; // rax
  CVisual *v22; // rbx
  volatile signed __int32 *v23; // rsi
  __int64 (__fastcall *v24)(CVisual *); // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r12
  int ObjectPropertyValue; // esi
  __int64 result; // rax
  CPropertySet *(__fastcall *v30)(CPropertySet *, char); // rax
  unsigned int v31; // eax
  unsigned int v32; // eax
  BOOL v33; // eax
  CHAR v34; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int64 Elapsed; // rax
  struct SubchannelMaskInfo *v38; // rcx
  int v39; // eax
  __int64 v40; // rax
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v42; // r10
  __int64 v43; // r10
  __int64 v44; // rax
  CExpressionValueStack *v45; // rcx
  unsigned __int64 v46; // r9
  unsigned int cData; // [rsp+20h] [rbp-E0h]
  CHAR Response[4]; // [rsp+60h] [rbp-A0h] BYREF
  bool v49; // [rsp+64h] [rbp-9Ch] BYREF
  bool v50; // [rsp+65h] [rbp-9Bh] BYREF
  CPropertySet *v51; // [rsp+68h] [rbp-98h] BYREF
  int v52; // [rsp+70h] [rbp-90h]
  struct SubchannelMaskInfo *v53; // [rsp+78h] [rbp-88h]
  __int64 v54; // [rsp+80h] [rbp-80h] BYREF
  __int64 v55; // [rsp+88h] [rbp-78h] BYREF
  CVisual *v56; // [rsp+90h] [rbp-70h] BYREF
  volatile signed __int32 *v57; // [rsp+98h] [rbp-68h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-60h] BYREF
  CVisual *v59; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v61; // [rsp+D0h] [rbp-30h]
  __int64 v62; // [rsp+D8h] [rbp-28h]
  CVisual **v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  volatile signed __int32 **v65; // [rsp+F0h] [rbp-10h]
  __int64 v66; // [rsp+F8h] [rbp-8h]
  __int64 *v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]

  v3 = *((unsigned int *)a3 + 1);
  if ( (unsigned int)v3 >= *((_DWORD *)a2 + 100) )
    v7 = 0LL;
  else
    v7 = (_DWORD *)(*((_QWORD *)a2 + 49) + 24 * v3);
  v8 = *((unsigned int *)this + 4);
  if ( *((_DWORD *)this + 4) == -1 )
  {
    v32 = 232;
LABEL_76:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      v32);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180239D30, 1u, -2147418113, 0x169u);
    return 2147549183LL;
  }
  if ( *((_DWORD *)this + 12) == (_DWORD)v8 )
  {
    v32 = 245;
    goto LABEL_76;
  }
  v53 = 0LL;
  v9 = (struct CExpressionValue *)(*((_QWORD *)this + 3) + 80 * v8);
  v10 = 0LL;
  *((_DWORD *)this + 4) = v8 + 1;
  if ( v7[4] == 1 )
  {
    v10 = *((_QWORD *)a2 + 24);
    v53 = (struct SubchannelMaskInfo *)v10;
  }
  if ( v7[2] == 1 )
  {
    ObjectPropertyValue = CExpression::ReadValueFromCache(a2, v7[3], v9, &v50);
    if ( ObjectPropertyValue < 0 )
    {
      v31 = 432;
      goto LABEL_59;
    }
    if ( !v50 )
    {
      ObjectPropertyValue = CExpressionValueStack::QueryObjectPropertyValue(v45, a2, a3, v46, v9, v53);
      if ( ObjectPropertyValue < 0 )
      {
        v31 = 442;
        goto LABEL_59;
      }
      ObjectPropertyValue = CExpression::StoreValueToCache(a2, v7[3], v9);
      if ( ObjectPropertyValue < 0 )
      {
        v31 = 448;
        goto LABEL_59;
      }
    }
    return 0LL;
  }
  if ( v7[2] != 2 )
  {
    ObjectPropertyValue = -2147418113;
    v31 = 454;
    goto LABEL_59;
  }
  v11 = *((unsigned int *)a3 + 1);
  v51 = 0LL;
  v54 = 0LL;
  v53 = 0LL;
  if ( (unsigned int)v11 >= *((_DWORD *)a2 + 100) )
    v12 = 0LL;
  else
    v12 = (unsigned int *)(*((_QWORD *)a2 + 49) + 24 * v11);
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 35) + 4LL) & 0x40000000) != 0 || CCommonRegistryData::m_fLogExpressionPerfStats )
  {
    v53 = (struct SubchannelMaskInfo *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 240LL) + 96LL);
    QpcStopwatch::Start((QpcStopwatch *)&v54);
  }
  v13 = v12[5];
  v14 = *(__int64 (__fastcall **)(CExpression *__hidden, unsigned int, struct CResource **))(*(_QWORD *)a2 + 240LL);
  if ( v14 != CExpression::ResolveSourceReference )
  {
    v17 = v14(a2, v13, &v51);
    goto LABEL_21;
  }
  if ( (unsigned int)v13 >= *((_DWORD *)a2 + 96) || !*(_QWORD *)(8 * v13 + *((_QWORD *)a2 + 47)) )
  {
    v51 = 0LL;
    goto LABEL_52;
  }
  _mm_lfence();
  v15 = *(volatile signed __int32 **)(*(_QWORD *)(8 * v13 + *((_QWORD *)a2 + 47)) + 8LL);
  v51 = (CPropertySet *)v15;
  if ( !v15 )
  {
LABEL_52:
    v17 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180239D30, 1u, -2147467259, 0x198u);
    goto LABEL_21;
  }
  v16 = *(__int64 (__fastcall **)(CMILCOMBase *))(*(_QWORD *)v15 + 8LL);
  if ( v16 == CResource::AddRef )
  {
    if ( *((int *)v15 + 2) < 0 )
    {
      while ( 1 )
      {
        v52 = IsKernelDebuggerPresent();
        strcpy(Response, "?");
        if ( !v52 )
        {
          v33 = IsDebuggerPresent();
          v34 = Response[0];
          if ( v33 )
            v34 = 103;
          Response[0] = v34;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
          word_180252860,
          word_180252860,
          "Function: ",
          L"CMILCOMBase::InternalAddRef",
          ", ",
          L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
          31);
        if ( !v52 )
        {
          DbgPrintEx(
            0x65u,
            0,
            "(No kernel debugger is present.) Respond with:\n"
            "  g                    -- Go (continue)\n"
            "  eb 0x%p 'p';g  -- terminate Process\n"
            "  eb 0x%p 't';g  -- terminate Thread\n"
            " or regular debugging.\n",
            Response,
            Response);
          JUMPOUT(0x180101730LL);
        }
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
        switch ( Response[0] )
        {
          case 'B':
          case 'b':
            __debugbreak();
            goto LABEL_19;
          case 'G':
          case 'g':
            goto LABEL_19;
          case 'I':
          case 'i':
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
            continue;
          case 'P':
          case 'p':
            CurrentProcess = GetCurrentProcess();
            TerminateProcess(CurrentProcess, 0xC0000001);
            goto LABEL_91;
          case 'T':
          case 't':
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_91;
          default:
LABEL_91:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
            break;
        }
      }
    }
LABEL_19:
    _InterlockedIncrement(v15 + 2);
  }
  else if ( v16 == CMILCOMBase::InternalAddRef )
  {
    CMILCOMBase::InternalAddRef((CMILCOMBase *)v15);
  }
  else
  {
    v16((CMILCOMBase *)v15);
  }
  v17 = 0;
LABEL_21:
  if ( v17 < 0 )
  {
    cData = 293;
LABEL_54:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180239D30, 1u, v17, cData);
LABEL_55:
    v23 = (volatile signed __int32 *)v51;
    goto LABEL_32;
  }
  if ( v54 )
  {
    Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v54);
    v38 = v53;
    ++*((_DWORD *)v53 + 3);
    *((_QWORD *)v38 + 6) += Elapsed;
  }
  v18 = *v12;
  v19 = *(__int64 (__fastcall **)(CVisual *, int, struct CExpressionValue *))(*(_QWORD *)v51 + 96LL);
  if ( (char *)v19 == (char *)CPropertySet::GetProperty )
  {
    Property = CPropertySet::GetProperty(v51, v18, v9);
  }
  else if ( v19 == CVisual::GetProperty )
  {
    Property = CVisual::GetProperty(v51, v18, v9);
  }
  else
  {
    Property = v19(v51, v18, v9);
  }
  v17 = Property;
  if ( Property < 0 )
  {
    cData = 300;
    goto LABEL_54;
  }
  if ( v10 )
  {
    if ( *(_BYTE *)(v10 + 4) )
    {
      v39 = CExpressionValue::ApplyMaskToValue(v9, (struct SubchannelMaskInfo *)v10);
      v17 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180239D30, 1u, v39, 0x13Cu);
        goto LABEL_55;
      }
    }
  }
  v21 = *((_QWORD *)a2 + 22);
  if ( v21 )
    v22 = *(CVisual **)(v21 + 8);
  else
    v22 = 0LL;
  v23 = (volatile signed __int32 *)v51;
  if ( dword_1802D3FE0 > 4u
    && (byte_1802D3FF0 & 2) != 0
    && (qword_1802D3FF8 & 2) == qword_1802D3FF8
    && v22
    && v51
    && *v12 - 1 <= 1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v22 + 48LL))(v22, 151LL)
      && (*(unsigned __int8 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v23 + 48LL))(v23, 83LL) )
    {
      v40 = *(_QWORD *)v22;
      v59 = v22;
      (*(void (__fastcall **)(CVisual *))(v40 + 8))(v22);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
      *((_BYTE *)v22 + 264) |= 4u;
      if ( InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v23 + 88)) )
      {
        if ( CVisual::GetInteractionInternal(v22) )
        {
          InteractionInternal = CVisual::GetInteractionInternal(v22);
          if ( InteractionInternal == v42
            && dword_1802D3FE0 > 4u
            && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
          {
            v61 = v12;
            v63 = &v56;
            v65 = &v57;
            v67 = &v58;
            v62 = 4LL;
            v56 = v22;
            v64 = 8LL;
            v57 = v23;
            v66 = 8LL;
            v58 = v43;
            v68 = 8LL;
            TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A8566, 0LL, 0LL, 6u, &pData);
          }
        }
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v59);
    }
    v23 = (volatile signed __int32 *)v51;
  }
  v17 = 0;
LABEL_32:
  if ( v23 )
  {
    v24 = *(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v23 + 16LL);
    if ( v24 == CResource::Release )
    {
      if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
      {
        --*((_DWORD *)v23 + 2);
        v30 = *(CPropertySet *(__fastcall **)(CPropertySet *, char))(*(_QWORD *)v23 + 24LL);
        if ( (char *)v30 == (char *)CExpression::`vector deleting destructor' )
        {
          CExpression::`vector deleting destructor'((CExpression *)v23, 1u);
        }
        else if ( v30 == CRgnGeometry::`scalar deleting destructor' )
        {
          CRgnGeometry::`scalar deleting destructor'((CRgnGeometry *)v23, 1);
        }
        else if ( v30 == CPropertySet::`scalar deleting destructor' )
        {
          CPropertySet::`scalar deleting destructor'((CPropertySet *)v23, 1);
        }
        else if ( (char *)v30 == (char *)CComponentTransform2D::`vector deleting destructor' )
        {
          CComponentTransform2D::`vector deleting destructor'((CComponentTransform2D *)v23, 1u);
        }
        else if ( (char *)v30 == (char *)CSurfaceBrush::`scalar deleting destructor' )
        {
          CSurfaceBrush::`scalar deleting destructor'((CSurfaceBrush *)v23, 1u);
        }
        else
        {
          v30((CPropertySet *)v23, 1);
        }
      }
    }
    else if ( v24 == CVisual::Release )
    {
      CVisual::Release((CVisual *)v23);
    }
    else
    {
      v24((CVisual *)v23);
    }
  }
  if ( v17 < 0 )
  {
    ObjectPropertyValue = CExpression::ReadValueFromCache(a2, v7[3], v9, &v49);
    if ( ObjectPropertyValue < 0 )
    {
      v31 = 415;
      goto LABEL_59;
    }
    if ( !v49 )
    {
      ObjectPropertyValue = v17;
      v31 = 419;
      goto LABEL_59;
    }
    return 0LL;
  }
  v25 = *((_QWORD *)a2 + 35);
  v26 = 0LL;
  v27 = 0LL;
  v55 = 0LL;
  if ( (*(_DWORD *)(v25 + 4) & 0x40000000) != 0 )
  {
    v27 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 240LL) + 96LL;
    QpcStopwatch::Start((QpcStopwatch *)&v55);
    v26 = v55;
  }
  ObjectPropertyValue = CExpression::StoreValueToCache(a2, v7[3], v9);
  if ( ObjectPropertyValue >= 0 )
  {
    if ( v26 )
    {
      v44 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v55);
      ++*(_DWORD *)(v27 + 16);
      *(_QWORD *)(v27 + 56) += v44;
    }
    return 0LL;
  }
  v31 = 398;
LABEL_59:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180239D30, 1u, ObjectPropertyValue, v31);
  result = (unsigned int)ObjectPropertyValue;
  if ( v9 )
    --*((_DWORD *)this + 4);
  return result;
}
