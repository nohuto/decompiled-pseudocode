/*
 * XREFs of ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800339C0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x180020C3C (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 *     ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x180031090 (--_GCKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ?GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180031300 (-GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ??_GCPropertyBag@@MEAAPEAXI@Z @ 0x1800315F0 (--_GCPropertyBag@@MEAAPEAXI@Z.c)
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x180032360 (--_ECExpression@@UEAAPEAXI@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x1800327E0 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x1800581A0 (--_GCRgnGeometry@@MEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800865A0 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18008AFE0 (-Release@CVisual@@UEAAKXZ.c)
 *     ??_ECAtlasedRectsMesh@@MEAAPEAXI@Z @ 0x1800C0280 (--_ECAtlasedRectsMesh@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x180135348 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x18015FDF0 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18015FEC0 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x18016A9B4 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180189314 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CExpressionValueStack::ProcessReferenceNode(
        CExpressionValueStack *this,
        struct CExpression *a2,
        struct ExpressionReferenceNode *a3,
        __int64 a4)
{
  __int64 v4; // rax
  unsigned int *v5; // r15
  _DWORD *v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // r13
  struct CExpressionValue *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(CExpression *, unsigned int, struct CResource **); // rax
  volatile signed __int32 *v16; // rbx
  unsigned int (__fastcall *v17)(CResource *__hidden); // rax
  int v18; // ebx
  __int64 v19; // rdx
  __int64 (__fastcall *v20)(CPropertyBagBase *, __int64, struct CExpressionValue *); // rax
  int Property; // eax
  CVisual *v22; // rcx
  void (*v23)(void); // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r13
  int v27; // eax
  unsigned int v28; // r15d
  __int64 result; // rax
  CKeyframeAnimation *(__fastcall *v30)(CKeyframeAnimation *, char); // rax
  BOOL v31; // eax
  char v32; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int64 Elapsed; // rax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rax
  int ValueFromCache; // eax
  int v40; // eax
  CExpressionValueStack *v41; // rcx
  unsigned __int64 v42; // r9
  int ObjectPropertyValue; // eax
  int v44; // eax
  unsigned int v45; // [rsp+20h] [rbp-49h]
  CVisual *v46; // [rsp+60h] [rbp-9h] BYREF
  __int64 v47; // [rsp+68h] [rbp-1h] BYREF
  __int64 v48; // [rsp+70h] [rbp+7h] BYREF
  __int64 v49; // [rsp+78h] [rbp+Fh]
  bool v50; // [rsp+D0h] [rbp+67h] BYREF
  __int16 Response; // [rsp+D8h] [rbp+6Fh] BYREF
  int v52; // [rsp+E0h] [rbp+77h]
  __int64 v53; // [rsp+E8h] [rbp+7Fh] BYREF

  v53 = a4;
  v4 = *((unsigned int *)a3 + 1);
  v5 = 0LL;
  if ( (unsigned int)v4 >= *((_DWORD *)a2 + 100) )
    v9 = 0LL;
  else
    v9 = (_DWORD *)(*((_QWORD *)a2 + 47) + 24 * v4);
  v10 = *((_DWORD *)this + 4);
  if ( *((_DWORD *)this + 4) == -1 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0xBFu);
LABEL_61:
    MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, -2147418113, 0x13Cu);
    return 2147549183LL;
  }
  if ( *((_DWORD *)this + 12) == v10 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0xCCu);
    goto LABEL_61;
  }
  v11 = 0LL;
  *((_DWORD *)this + 4) = v10 + 1;
  v12 = (struct CExpressionValue *)(*((_QWORD *)this + 3) + 72LL * v10);
  if ( v9[4] == 1 )
    v11 = *((_QWORD *)a2 + 23);
  if ( v9[2] == 1 )
  {
    v40 = CExpression::ReadValueFromCache(a2, v9[3], v12, &v50);
    v28 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, v40, 0x183u);
      goto LABEL_100;
    }
    if ( !v50 )
    {
      ObjectPropertyValue = CExpressionValueStack::QueryObjectPropertyValue(
                              v41,
                              a2,
                              a3,
                              v42,
                              v12,
                              (struct SubchannelMaskInfo *)v11);
      v28 = ObjectPropertyValue;
      if ( ObjectPropertyValue < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, ObjectPropertyValue, 0x18Du);
        goto LABEL_100;
      }
      v44 = CExpression::StoreValueToCache(a2, v9[3], v12);
      v28 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, v44, 0x193u);
        goto LABEL_100;
      }
    }
    return 0LL;
  }
  if ( v9[2] != 2 )
  {
    v28 = -2147418113;
    MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, -2147418113, 0x199u);
    goto LABEL_100;
  }
  v13 = *((unsigned int *)a3 + 1);
  v46 = 0LL;
  v47 = 0LL;
  v49 = 0LL;
  if ( (unsigned int)v13 < *((_DWORD *)a2 + 100) )
    v5 = (unsigned int *)(*((_QWORD *)a2 + 47) + 24 * v13);
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 25) + 4LL) & 0x40000000) != 0 || CCommonRegistryData::m_fLogExpressionPerfStats )
  {
    v49 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 240LL) + 96LL;
    QpcStopwatch::Start((QpcStopwatch *)&v47);
  }
  v14 = v5[5];
  v15 = *(__int64 (__fastcall **)(CExpression *, unsigned int, struct CResource **))(*(_QWORD *)a2 + 200LL);
  if ( v15 != CExpression::ResolveSourceReference )
  {
    v18 = v15(a2, v14, &v46);
    goto LABEL_21;
  }
  if ( (unsigned int)v14 >= *((_DWORD *)a2 + 84) || !*(_QWORD *)(8 * v14 + *((_QWORD *)a2 + 39)) )
  {
    v46 = 0LL;
    goto LABEL_79;
  }
  _mm_lfence();
  v16 = *(volatile signed __int32 **)(*(_QWORD *)(8 * v14 + *((_QWORD *)a2 + 39)) + 8LL);
  v46 = (CVisual *)v16;
  if ( !v16 )
  {
LABEL_79:
    v18 = -2147467259;
    MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, -2147467259, 0x145u);
    goto LABEL_21;
  }
  v17 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)v16 + 8LL);
  if ( v17 == CResource::AddRef )
  {
    if ( *((int *)v16 + 2) < 0 )
    {
      while ( 1 )
      {
        v52 = IsKernelDebuggerPresent();
        Response = 63;
        if ( !v52 )
        {
          v31 = IsDebuggerPresent();
          v32 = Response;
          if ( v31 )
            v32 = 103;
          LOBYTE(Response) = v32;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
          word_1801D5868,
          word_1801D5868,
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
            &Response,
            &Response);
          JUMPOUT(0x1800E0275LL);
        }
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
        switch ( (char)Response )
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
            goto LABEL_75;
          case 'T':
          case 't':
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_75;
          default:
LABEL_75:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
            break;
        }
      }
    }
LABEL_19:
    _InterlockedIncrement(v16 + 2);
  }
  else if ( v17 == CBitmapOfDeviceBitmaps::AddRef )
  {
    CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)v16);
  }
  else
  {
    v17((CResource *)v16);
  }
  v18 = 0;
LABEL_21:
  if ( v18 < 0 )
  {
    v45 = 252;
    goto LABEL_86;
  }
  if ( v47 )
  {
    Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v47);
    v36 = v49;
    ++*(_DWORD *)(v49 + 12);
    *(_QWORD *)(v36 + 48) += Elapsed;
  }
  v19 = *v5;
  v20 = *(__int64 (__fastcall **)(CPropertyBagBase *, __int64, struct CExpressionValue *))(*(_QWORD *)v46 + 88LL);
  if ( v20 == CPropertyBagBase::GetProperty )
  {
    Property = CPropertyBagBase::GetProperty(v46, v19, v12);
  }
  else if ( (char *)v20 == (char *)CVisual::GetProperty )
  {
    Property = CVisual::GetProperty(v46, v19, v12);
  }
  else
  {
    Property = v20(v46, v19, v12);
  }
  v18 = Property;
  if ( Property < 0 )
  {
    v45 = 259;
LABEL_86:
    MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, v18, v45);
    goto LABEL_29;
  }
  if ( v11
    && *(_BYTE *)(v11 + 4)
    && (v37 = CExpressionValue::ApplyMaskToValue(v12, (struct SubchannelMaskInfo *)v11), v18 = v37, v37 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, v37, 0x113u);
  }
  else
  {
    v18 = 0;
  }
LABEL_29:
  v22 = v46;
  if ( v46 )
  {
    v23 = *(void (**)(void))(*(_QWORD *)v46 + 16LL);
    if ( (char *)v23 == (char *)CResource::Release )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v46 + 2, 0xFFFFFFFF) == 1 )
      {
        --*((_DWORD *)v22 + 2);
        v30 = *(CKeyframeAnimation *(__fastcall **)(CKeyframeAnimation *, char))(*(_QWORD *)v22 + 24LL);
        if ( v30 == CExpression::`vector deleting destructor' )
        {
          CExpression::`vector deleting destructor'(v22, 1);
        }
        else if ( (char *)v30 == (char *)CRgnGeometry::`scalar deleting destructor' )
        {
          CRgnGeometry::`scalar deleting destructor'(v22, 1u);
        }
        else if ( v30 == CPropertyBag::`scalar deleting destructor' )
        {
          CPropertyBag::`scalar deleting destructor'(v22, 1);
        }
        else if ( (char *)v30 == (char *)CAtlasedRectsMesh::`vector deleting destructor' )
        {
          CAtlasedRectsMesh::`vector deleting destructor'(v22, 1u);
        }
        else if ( v30 == CKeyframeAnimation::`scalar deleting destructor' )
        {
          CKeyframeAnimation::`scalar deleting destructor'(v22, 1);
        }
        else
        {
          v30(v22, 1);
        }
      }
    }
    else if ( (char *)v23 == (char *)CVisual::Release )
    {
      CVisual::Release(v46);
    }
    else
    {
      v23();
    }
  }
  if ( v18 < 0 )
  {
    ValueFromCache = CExpression::ReadValueFromCache(a2, v9[3], v12, (bool *)&v53);
    v28 = ValueFromCache;
    if ( ValueFromCache < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, ValueFromCache, 0x172u);
      goto LABEL_100;
    }
    if ( !(_BYTE)v53 )
    {
      v28 = v18;
      MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, v18, 0x176u);
      goto LABEL_100;
    }
    return 0LL;
  }
  v24 = *((_QWORD *)a2 + 25);
  v25 = 0LL;
  v26 = 0LL;
  v48 = 0LL;
  if ( (*(_DWORD *)(v24 + 4) & 0x40000000) != 0 )
  {
    v26 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 240LL) + 96LL;
    QpcStopwatch::Start((QpcStopwatch *)&v48);
    v25 = v48;
  }
  v27 = CExpression::StoreValueToCache(a2, v9[3], v12);
  v28 = v27;
  if ( v27 >= 0 )
  {
    if ( v25 )
    {
      v38 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v48);
      ++*(_DWORD *)(v26 + 16);
      *(_QWORD *)(v26 + 56) += v38;
    }
    return 0LL;
  }
  MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, v27, 0x161u);
LABEL_100:
  result = v28;
  if ( v12 )
    --*((_DWORD *)this + 4);
  return result;
}
