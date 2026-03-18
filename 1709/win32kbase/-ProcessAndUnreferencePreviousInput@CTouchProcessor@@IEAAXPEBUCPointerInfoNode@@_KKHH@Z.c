/*
 * XREFs of ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0123778
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011E76C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z @ 0x1C0125480 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C001748C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0117004 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C011DD78 (-GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C011F058 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0127CB4 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall CTouchProcessor::ProcessAndUnreferencePreviousInput(
        CTouchProcessor *this,
        const struct CPointerInfoNode *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6)
{
  char v6; // di
  PDEVICE_OBJECT v10; // rcx
  unsigned __int16 v11; // r9
  int v12; // ebx
  struct CPointerInputFrame *FrameById; // rax
  _DWORD *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  struct tagWND *v19; // rax
  CInputDest *v20; // rax
  int v21; // ebx
  CInputDest *v22; // rax
  int v23; // ebx
  char v24; // di
  struct tagWND *v25; // rax
  CInputDest *v26; // rax
  CInputDest *v27; // rax
  int v28; // [rsp+20h] [rbp-E0h]
  _BYTE v30[200]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v31[208]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v32[208]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v33[208]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v34[208]; // [rsp+380h] [rbp+280h] BYREF
  _BYTE v35[208]; // [rsp+450h] [rbp+350h] BYREF
  _BYTE v36[208]; // [rsp+520h] [rbp+420h] BYREF

  v6 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xB7u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  memset(v32, 0, 193);
  if ( (*((_DWORD *)a2 + 65) & 1) != 0 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xBu, 0xB8u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 185;
LABEL_6:
      WPP_RECORDER_SF_(
        (__int64)v10->DeviceExtension,
        5u,
        0xBu,
        v11,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
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
        0xBAu,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_37;
      v11 = 187;
      goto LABEL_6;
    }
    v12 = 0;
    FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a3 + 28));
    if ( FrameById )
    {
      _InterlockedIncrement((volatile signed __int32 *)FrameById + 11);
      v14 = (_DWORD *)(*((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(a3 + 32));
      if ( (*v14 & 0x80u) == 0 )
      {
        v12 = 1;
        *v14 |= 0x80u;
      }
      CTouchProcessor::UnreferenceFrameInt(this, FrameById);
      if ( v12 )
      {
        v18 = *(_DWORD *)a2;
        if ( (*(_DWORD *)a2 & 0x1000) == 0 )
        {
          if ( (v18 & 8) != 0 )
          {
            if ( (v18 & 0x400) != 0 )
            {
              LOBYTE(v15) = 1;
              v19 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a2 + 34), v15, v16, v17);
              v20 = CInputDest::CInputDest((CInputDest *)v34, v19);
              v6 = 1;
            }
            else
            {
              v20 = CInputDest::CInputDest((CInputDest *)v33, (const struct CPointerInfoNode *)((char *)a2 + 24));
              v6 = 2;
            }
            CInputDest::operator=((__int64)v32, (__int64)v20);
            if ( (v6 & 2) != 0 )
            {
              v6 &= ~2u;
              CInputDest::SetEmpty((CInputDest *)v33);
            }
            if ( (v6 & 1) != 0 )
            {
              v6 &= ~1u;
              CInputDest::SetEmpty((CInputDest *)v34);
            }
            v21 = -__CFSHR__(*(_DWORD *)a2, 7);
            v22 = CInputDest::CInputDest((CInputDest *)v30, (const struct CInputDest *)v32);
            v28 = v21;
            v23 = a4;
            CTouchProcessor::GenerateWindowLeaveMessage((__int64 *)this, a3, v22, a4, v28, a5, a6);
          }
          else
          {
            v23 = a4;
          }
          if ( (*(_DWORD *)a2 & 0x40) != 0 )
          {
            if ( (*(_DWORD *)a2 & 0x400) != 0 )
            {
              LOBYTE(v15) = 1;
              v24 = v6 | 4;
              v25 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a2 + 34), v15, v16, v17);
              v26 = CInputDest::CInputDest((CInputDest *)v36, v25);
            }
            else
            {
              v24 = v6 | 8;
              v26 = CInputDest::CInputDest((CInputDest *)v35, (const struct CPointerInfoNode *)((char *)a2 + 24));
            }
            CInputDest::operator=((__int64)v32, (__int64)v26);
            if ( (v24 & 8) != 0 )
            {
              v24 &= ~8u;
              CInputDest::SetEmpty((CInputDest *)v35);
            }
            if ( (v24 & 4) != 0 )
              CInputDest::SetEmpty((CInputDest *)v36);
            v27 = CInputDest::CInputDest((CInputDest *)v31, (const struct CInputDest *)v32);
            CTouchProcessor::GenerateCaptureLostMessage((__int64 *)this, a3, v27, v23);
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
        0xBCu,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  }
LABEL_37:
  CInputDest::SetEmpty((CInputDest *)v32);
}
