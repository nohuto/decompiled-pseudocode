/*
 * XREFs of ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0119238
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011303C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C011B080 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x1C00370E0 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00371A4 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0037290 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01096A0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01099E4 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C01126B0 (-GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C0113A3C (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C011AA94 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DF60 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011E1F8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessAndUnreferencePreviousInput(
        CTouchProcessor *this,
        const struct CPointerInfoNode *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        int a6)
{
  char v6; // di
  PDEVICE_OBJECT v10; // rcx
  unsigned __int16 v11; // r9
  int v12; // ebx
  const struct CPointerInputFrame *v13; // rax
  _DWORD *v14; // rdx
  int v15; // eax
  CInputDest *v16; // rax
  int v17; // ebx
  CInputDest *v18; // rax
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // di
  CInputDest *v23; // rax
  CInputDest *v24; // rax
  int v25; // [rsp+20h] [rbp-E0h]
  _BYTE v27[192]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v28[12]; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v29[12]; // [rsp+1D0h] [rbp+D0h] BYREF

  v6 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xC6u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  memset(v27, 0, 177);
  if ( (*((_DWORD *)a2 + 61) & 1) != 0 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xBu, 0xC7u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 200;
LABEL_6:
      WPP_RECORDER_SF_(
        (__int64)v10->DeviceExtension,
        5u,
        0xBu,
        v11,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    }
  }
  else
  {
    if ( !a3 )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        2u,
        0xBu,
        0xC9u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_41;
      v11 = 202;
      goto LABEL_6;
    }
    v12 = 0;
    v13 = CTouchProcessor::ReferenceFrame(this, *(_DWORD *)(a3 + 28));
    if ( v13 )
    {
      v14 = (_DWORD *)(*((_QWORD *)v13 + 12) + 576LL * *(unsigned int *)(a3 + 32));
      if ( (*v14 & 0x80u) == 0 )
      {
        v12 = 1;
        *v14 |= 0x80u;
      }
      CTouchProcessor::UnreferenceFrame(this, v13);
      if ( v12 )
      {
        v15 = *(_DWORD *)a2;
        if ( (*(_DWORD *)a2 & 0x1000) == 0 )
        {
          if ( (v15 & 8) != 0 )
          {
            if ( (v15 & 0x400) != 0 )
            {
              v16 = (CInputDest *)CInputDest::CInputDest(v28, *((_QWORD *)a2 + 32), *((_DWORD *)a2 + 119));
              v6 = 1;
            }
            else
            {
              v16 = CInputDest::CInputDest((CInputDest *)v29, (const struct CPointerInfoNode *)((char *)a2 + 24));
              v6 = 2;
            }
            CInputDest::operator=((__int64)v27, (__int64)v16);
            if ( (v6 & 2) != 0 )
            {
              v6 &= ~2u;
              CInputDest::~CInputDest((CInputDest *)v29);
            }
            if ( (v6 & 1) != 0 )
            {
              v6 &= ~1u;
              CInputDest::~CInputDest((CInputDest *)v28);
            }
            v17 = -__CFSHR__(*(_DWORD *)a2, 7);
            v18 = CInputDest::CInputDest((CInputDest *)v28, (const struct CInputDest *)v27);
            v25 = v17;
            v19 = a4;
            CTouchProcessor::GenerateWindowLeaveMessage((__int64)this, a3, v18, a4, v25, a5, a6);
            v15 = *(_DWORD *)a2;
          }
          else
          {
            v19 = a4;
          }
          if ( (v15 & 0x40) != 0 )
          {
            if ( (v15 & 0x400) != 0
              && *((_DWORD *)a2 + 119)
              && !CInputDest::IsEqualByWindowHandle((__int64)a2 + 392, *((void **)a2 + 32), 0) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20);
            }
            if ( (*(_DWORD *)a2 & 0x400) != 0 )
            {
              v22 = v6 | 4;
              v23 = (CInputDest *)CInputDest::CInputDest(v29, *((_QWORD *)a2 + 32), *((_DWORD *)a2 + 119));
            }
            else
            {
              v22 = v6 | 8;
              v23 = CInputDest::CInputDest((CInputDest *)v28, (const struct CPointerInfoNode *)((char *)a2 + 24));
            }
            CInputDest::operator=((__int64)v27, (__int64)v23);
            if ( (v22 & 8) != 0 )
              CInputDest::~CInputDest((CInputDest *)v28);
            if ( (v22 & 4) != 0 )
              CInputDest::~CInputDest((CInputDest *)v29);
            v24 = CInputDest::CInputDest((CInputDest *)v28, (const struct CInputDest *)v27);
            CTouchProcessor::GenerateCaptureLostMessage((__int64)this, a3, v24, v19);
          }
        }
        CTouchProcessor::UnreferenceMsgData(this, a3, 1LL);
      }
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0xCBu,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  }
LABEL_41:
  CInputDest::~CInputDest((CInputDest *)v27);
}
