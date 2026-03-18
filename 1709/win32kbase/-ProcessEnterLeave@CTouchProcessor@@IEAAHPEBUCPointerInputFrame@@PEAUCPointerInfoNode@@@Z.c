/*
 * XREFs of ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0123AE0
 * Callers:
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C012472C (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0124B58 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z @ 0x1C0125480 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0017190 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00173D4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C001748C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0117004 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C011D4CC (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122080 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_SF_qdqd @ 0x1C01298CC (WPP_RECORDER_SF_qdqd.c)
 */

__int64 __fastcall CTouchProcessor::ProcessEnterLeave(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3)
{
  unsigned int v6; // edi
  struct CPointerInfoNode *v7; // rbx
  CTouchProcessor *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // r9
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  struct tagWND *v15; // rax
  CInputDest *v16; // rax
  struct tagWND *v17; // rax
  CInputDest *v18; // rax
  int v19; // edx
  int v20; // r8d
  int v21; // eax
  int v22; // ecx
  int v23; // r9d
  bool v24; // cf
  int v26; // [rsp+20h] [rbp-E0h]
  int v27[48]; // [rsp+50h] [rbp-B0h] BYREF
  char v28; // [rsp+110h] [rbp+10h]
  _BYTE v29[208]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v30[208]; // [rsp+1F0h] [rbp+F0h] BYREF

  v6 = 0;
  v7 = 0LL;
  memset(v29, 0, 193);
  memset(v27, 0, sizeof(v27));
  v28 = 0;
  v8 = (CTouchProcessor *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xA0u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  if ( !a2 )
  {
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0xA1u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 162;
LABEL_24:
        WPP_RECORDER_SF_(
          (__int64)v12->DeviceExtension,
          5u,
          0xBu,
          v13,
          (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
        goto LABEL_42;
      }
      goto LABEL_42;
    }
LABEL_18:
    if ( (*(_DWORD *)a3 & 0x400) != 0 )
    {
      LOBYTE(v9) = 1;
      v17 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a3 + 34), v9, v10, v11);
      v18 = CInputDest::CInputDest((CInputDest *)v30, v17);
      CInputDest::operator=((__int64)v29, v18);
      CInputDest::SetEmpty((CInputDest *)v30);
    }
    else
    {
      CInputDest::operator=((__int64)v29, (__int64)a3 + 24);
    }
    if ( CInputDest::operator==(v27, (__int64)v29) )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0xA5u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 166;
        goto LABEL_24;
      }
    }
    else
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xCu,
        0xA7u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      if ( (*((_DWORD *)a3 + 1) & 0x200) != 0
        && ((v21 = *((_DWORD *)a3 + 65), (v21 & 4) != 0) || (v21 & 0x40000) != 0)
        && (v21 & 0x10000) == 0 )
      {
        *(_DWORD *)a3 |= 0x40u;
        if ( v7 )
        {
          *(_DWORD *)v7 |= 0x20u;
          v22 = -__CFSHR__(*(_DWORD *)v7, 6);
        }
        else
        {
          LOBYTE(v22) = 0;
        }
        v23 = 169;
        v24 = __CFSHR__(*(_DWORD *)a3, 7);
      }
      else
      {
        *(_DWORD *)a3 |= 8u;
        if ( v7 )
        {
          *(_DWORD *)v7 |= 0x10u;
          v22 = -__CFSHR__(*(_DWORD *)v7, 5);
        }
        else
        {
          LOBYTE(v22) = 0;
        }
        v23 = 168;
        v24 = __CFSHR__(*(_DWORD *)a3, 4);
      }
      WPP_RECORDER_SF_qdqd(*((_QWORD *)this + 1), v19, v20, v23, v26, (char)a3, -v24, (char)v7, v22);
      if ( v7 )
        *(_DWORD *)(240LL * *((unsigned int *)v7 + 2) + *((_QWORD *)a2 + 13) + 220) &= ~1u;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0xBu,
          0xAAu,
          (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v6 = 1;
    }
    goto LABEL_42;
  }
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(v8, a2, *((_WORD *)a3 + 126), 0LL);
  v7 = ValidNodeInFrame;
  if ( ValidNodeInFrame )
  {
    if ( *(char *)ValidNodeInFrame < 0 )
      v7 = 0LL;
    if ( v7 )
    {
      if ( (*(_DWORD *)v7 & 4) != 0 || (*(_DWORD *)v7 & 0x400) != 0 )
      {
        LOBYTE(v9) = 1;
        v15 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)v7 + 34), v9, v10, v11);
        v16 = CInputDest::CInputDest((CInputDest *)v30, v15);
        CInputDest::operator=((__int64)v27, v16);
        CInputDest::SetEmpty((CInputDest *)v30);
      }
      else
      {
        CInputDest::operator=((__int64)v27, (__int64)v7 + 24);
      }
    }
    goto LABEL_18;
  }
  if ( CPointerInfoNode::IsForManipulationThread(a3) )
    goto LABEL_18;
  WPP_RECORDER_SF_d(
    *((_QWORD *)this + 1),
    4u,
    0xBu,
    0xA3u,
    (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids,
    *((unsigned __int16 *)a3 + 126));
  v12 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = 164;
    goto LABEL_24;
  }
LABEL_42:
  CInputDest::SetEmpty((CInputDest *)v27);
  CInputDest::SetEmpty((CInputDest *)v29);
  return v6;
}
