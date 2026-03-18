/*
 * XREFs of ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0015ADC
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C001638C (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 * Callees:
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0016638 (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C0016AA4 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ApiSetEditionInitiateMouseEventProcessing @ 0x1C0016C4C (ApiSetEditionInitiateMouseEventProcessing.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     IsEqualInputSource @ 0x1C00182F0 (IsEqualInputSource.c)
 *     EtwTraceMouseInputCoalesced @ 0x1C009B6E0 (EtwTraceMouseInputCoalesced.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::QueueMouseEvent(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        const struct _SUBPIXELS *a3,
        const struct tagUIPI_INFO_INT *a4)
{
  int v4; // eax
  char v8; // r12
  char *v9; // rdi
  __int64 v10; // rbx
  bool v11; // r8
  struct CMouseProcessor::RawMouseEvent *v12; // rax
  int v13; // edx
  struct CMouseProcessor::RawMouseEvent *v14; // rdi
  char v15; // r8
  __int64 v16; // rcx
  __int16 v17; // ax
  int v18; // eax
  int v19; // eax
  __int64 v20; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+38h] [rbp-38h]
  __int128 v22; // [rsp+40h] [rbp-30h]
  __int64 v23; // [rsp+50h] [rbp-20h] BYREF
  int v24; // [rsp+58h] [rbp-18h]

  v4 = *((_DWORD *)a2 + 14);
  *(_QWORD *)&v22 = a3;
  v21 = v4 & 0x100;
  v8 = 0;
  if ( (v4 & 0x10) == 0 || (int)IsEditionComputeInjectorUIPISupported() < 0 )
    goto LABEL_2;
  if ( a4 )
  {
    v19 = *((_DWORD *)a4 + 2);
    v23 = *(_QWORD *)a4;
    v24 = v19;
  }
  else
  {
    if ( (*((_BYTE *)a2 + 56) & 1) != 0 )
      goto LABEL_2;
    EditionComputeInjectorUIPI(&v23);
  }
  v8 = 1;
LABEL_2:
  RIMLockExclusive((char *)this + 2568);
  if ( *((_WORD *)this + 1281) )
    v9 = (char *)this + 144 * *((unsigned __int16 *)this + 1280) + 256;
  else
    v9 = 0LL;
  if ( *((_DWORD *)a2 + 18) == 1 || *((_DWORD *)a2 + 18) == 2 )
  {
    LODWORD(v20) = 2;
  }
  else
  {
    if ( (unsigned int)(*((_DWORD *)a2 + 18) - 3) > 1 )
    {
      v17 = *((_WORD *)a2 + 1);
      if ( (v17 & 0x10) != 0 )
      {
        LODWORD(v20) = 4;
      }
      else if ( (v17 & 0x40) != 0 )
      {
        LODWORD(v20) = 8;
      }
      else if ( (v17 & 0x80u) != 0 )
      {
        LODWORD(v20) = 18;
      }
      else
      {
        LODWORD(v20) = (v17 & 0x100 | 0x10u) >> 3;
      }
      v18 = *((_DWORD *)a2 + 14);
      if ( (v18 & 0x40) != 0 )
        HIDWORD(v20) = 1;
      else
        HIDWORD(v20) = ((unsigned __int8)v18 >> 3) & 2;
      goto LABEL_9;
    }
    LODWORD(v20) = 0;
  }
  HIDWORD(v20) = 4;
LABEL_9:
  v10 = v20;
  v11 = v9
     && !*((_WORD *)v9 + 8)
     && (unsigned __int8)IsEqualInputSource(v9 + 80, &v20)
     && !*((_WORD *)a2 + 2)
     && (*((_BYTE *)a2 + 2) & 8) == 0
     && *(_QWORD *)(v9 + 124) == *((_QWORD *)a2 + 8);
  v12 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 256), v11);
  v14 = v12;
  if ( v15 )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), v13, 10, 18, (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
    EtwTraceMouseInputCoalesced();
  }
  else
  {
    if ( !v12 )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(*((_QWORD *)this + 1), v13, 10, 19, (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
      *((_QWORD *)this + 322) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 2568, 0LL);
      KeLeaveCriticalRegion();
      v16 = 1LL;
      goto LABEL_21;
    }
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), v13, 10, 20, (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
    *((_WORD *)v14 + 8) = *((_WORD *)a2 + 2);
    *((_WORD *)v14 + 9) = *((_WORD *)a2 + 3);
    *((_DWORD *)v14 + 5) = *((_DWORD *)a2 + 2);
    *((_QWORD *)v14 + 10) = v10;
    *(_QWORD *)((char *)v14 + 124) = *((_QWORD *)a2 + 8);
  }
  *(_OWORD *)v14 = *(_OWORD *)((char *)a2 + 24);
  *((_QWORD *)v14 + 4) = *((unsigned int *)a2 + 5);
  *((_QWORD *)v14 + 7) = 0LL;
  if ( (*((_DWORD *)a2 + 14) & 0x10000) != 0 )
  {
    v20 = *(_QWORD *)((char *)a2 + 12);
    *((_QWORD *)v14 + 6) = v20;
    *((_QWORD *)v14 + 5) = 0LL;
  }
  else
  {
    *((struct tagPOINT *)v14 + 6) = gptCursorAsync;
    v20 = *(_QWORD *)((char *)a2 + 12);
    *((_QWORD *)v14 + 5) = v20;
    if ( (_QWORD)v22 )
      *((_QWORD *)v14 + 7) = *(_QWORD *)v22;
  }
  *((_OWORD *)v14 + 4) = *(_OWORD *)((char *)a2 + 40);
  *((_DWORD *)v14 + 22) = CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions(a2);
  if ( v8 )
  {
    *(_QWORD *)&v22 = v23;
    DWORD2(v22) = v24;
    BYTE12(v22) = 1;
    *(_OWORD *)((char *)v14 + 92) = v22;
  }
  *((_QWORD *)this + 322) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 2568, 0LL);
  KeLeaveCriticalRegion();
  if ( v21 )
  {
    v16 = 0LL;
LABEL_21:
    ApiSetEditionInitiateMouseEventProcessing(v16);
  }
}
