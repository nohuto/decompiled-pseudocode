/*
 * XREFs of ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0135A50
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C00394DC (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 * Callees:
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C003A0CC (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z.c)
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C003A490 (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ?ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C003A604 (-ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C003A6B4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0055980 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     ApiSetEditionInitiateMouseEventProcessing @ 0x1C0066250 (ApiSetEditionInitiateMouseEventProcessing.c)
 *     IsEqualInputSource @ 0x1C00670A0 (IsEqualInputSource.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     EtwTraceMouseInputCoalesced @ 0x1C00AC170 (EtwTraceMouseInputCoalesced.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::QueueMouseEvent(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        const struct _SUBPIXELS *a3,
        const struct tagUIPI_INFO_INT *a4)
{
  bool v7; // r14
  bool v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  char *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rbx
  struct CMouseProcessor::RawMouseEvent *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct CMouseProcessor::RawMouseEvent *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // [rsp+30h] [rbp-40h]
  bool v25; // [rsp+31h] [rbp-3Fh]
  bool v26; // [rsp+32h] [rbp-3Eh]
  __int64 v27; // [rsp+38h] [rbp-38h] BYREF
  __int128 v28; // [rsp+40h] [rbp-30h]
  __int64 v29; // [rsp+50h] [rbp-20h] BYREF
  int v30; // [rsp+58h] [rbp-18h]

  *(_QWORD *)&v28 = a3;
  v25 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16LL);
  v7 = 0;
  v26 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 256LL);
  v24 = 0;
  v29 = 0LL;
  v30 = 0;
  if ( !v25 || (int)IsEditionComputeInjectorUIPISupported() < 0 )
    goto LABEL_10;
  v8 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 1LL);
  if ( a4 )
  {
    if ( v8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
    v11 = *((_DWORD *)a4 + 2);
    v29 = *(_QWORD *)a4;
    v30 = v11;
  }
  else
  {
    if ( v8 )
      goto LABEL_10;
    EditionComputeInjectorUIPI(&v29);
  }
  v24 = 1;
LABEL_10:
  RIMLockExclusive((__int64)this + 2424);
  if ( *((_WORD *)this + 1209) )
    v12 = (char *)this + 144 * *((unsigned __int16 *)this + 1208) + 112;
  else
    v12 = 0LL;
  CMouseProcessor::MouseInputDataEx::ComputeMouseDataInputSource(a2, (struct tagINPUT_MESSAGE_SOURCE *)&v27);
  v14 = v27;
  if ( v12
    && !*((_WORD *)v12 + 8)
    && IsEqualInputSource((_DWORD *)v12 + 20, &v27)
    && !*((_WORD *)a2 + 2)
    && (*((_BYTE *)a2 + 2) & 8) == 0 )
  {
    v7 = *(_QWORD *)(v12 + 124) == *((_QWORD *)a2 + 8);
  }
  LOBYTE(v13) = v7;
  v15 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 112), v13);
  v18 = v15;
  if ( v7 )
  {
    if ( !v15 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16);
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xAu, 0x12u, (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
    EtwTraceMouseInputCoalesced(v19);
  }
  else
  {
    v20 = *((_QWORD *)this + 1);
    if ( !v15 )
    {
      WPP_RECORDER_SF_(v20, 2u, 0xAu, 0x13u, (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
      CInpPushLock::UnLockExclusive((CMouseProcessor *)((char *)this + 2424));
      v21 = 1;
LABEL_37:
      ApiSetEditionInitiateMouseEventProcessing(v21);
      return;
    }
    WPP_RECORDER_SF_(v20, 4u, 0xAu, 0x14u, (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
    *((_WORD *)v18 + 8) = *((_WORD *)a2 + 2);
    *((_WORD *)v18 + 9) = *((_WORD *)a2 + 3);
    *((_DWORD *)v18 + 5) = *((_DWORD *)a2 + 2);
    *((_WORD *)v18 + 12) = *((_WORD *)a2 + 1);
    *((_QWORD *)v18 + 10) = v14;
    *(_QWORD *)((char *)v18 + 124) = *((_QWORD *)a2 + 8);
  }
  *(_OWORD *)v18 = *(_OWORD *)((char *)a2 + 24);
  *((_QWORD *)v18 + 4) = *((unsigned int *)a2 + 5);
  *((_QWORD *)v18 + 7) = 0LL;
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x10000LL) )
  {
    v27 = *(_QWORD *)((char *)a2 + 12);
    *((_QWORD *)v18 + 6) = v27;
    *((_QWORD *)v18 + 5) = 0LL;
  }
  else
  {
    *((struct tagPOINT *)v18 + 6) = gptCursorAsync;
    v27 = *(_QWORD *)((char *)a2 + 12);
    *((_QWORD *)v18 + 5) = v27;
    if ( (_QWORD)v28 )
      *((_QWORD *)v18 + 7) = *(_QWORD *)v28;
  }
  *((_OWORD *)v18 + 4) = *(_OWORD *)((char *)a2 + 40);
  *((_DWORD *)v18 + 22) = CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions((__int64)a2);
  if ( v24 )
  {
    if ( !v25 || CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 1LL) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22);
    *(_QWORD *)&v28 = v29;
    DWORD2(v28) = v30;
    BYTE12(v28) = 1;
    *(_OWORD *)((char *)v18 + 92) = v28;
  }
  CInpPushLock::UnLockExclusive((CMouseProcessor *)((char *)this + 2424));
  if ( v26 )
  {
    v21 = 0;
    goto LABEL_37;
  }
}
