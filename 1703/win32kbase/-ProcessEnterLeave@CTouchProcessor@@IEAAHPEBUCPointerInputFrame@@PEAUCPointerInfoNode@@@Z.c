/*
 * XREFs of ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0124488
 * Callers:
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C0125158 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C012557C (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z @ 0x1C0125E7C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0047DD0 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0048044 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00480FC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0118184 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C011E704 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122A28 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_SF_qdqd @ 0x1C0129F7C (WPP_RECORDER_SF_qdqd.c)
 */

__int64 __fastcall CTouchProcessor::ProcessEnterLeave(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3)
{
  unsigned int v6; // edi
  struct CPointerInfoNode *v7; // rbx
  int v8; // edx
  CTouchProcessor *v9; // rcx
  int v10; // edx
  int v11; // edx
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  struct tagWND *v15; // rax
  CInputDest *v16; // rax
  struct tagWND *v17; // rax
  CInputDest *v18; // rax
  int v19; // edx
  int v20; // edx
  int v21; // r8d
  int v22; // eax
  int v23; // ecx
  int v24; // r9d
  bool v25; // cf
  int v26; // edx
  int v28; // [rsp+20h] [rbp-E0h]
  int v29[48]; // [rsp+50h] [rbp-B0h] BYREF
  char v30; // [rsp+110h] [rbp+10h]
  _BYTE v31[208]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v32[208]; // [rsp+1F0h] [rbp+F0h] BYREF

  v6 = 0;
  v7 = 0LL;
  memset(v31, 0, 193);
  memset(v29, 0, sizeof(v29));
  v30 = 0;
  v9 = (CTouchProcessor *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      11,
      160,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  if ( !a2 )
  {
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(*((_QWORD *)this + 1), v10, 11, 161, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 162;
LABEL_24:
        LOBYTE(v11) = 5;
        WPP_RECORDER_SF_(v12->DeviceExtension, v11, 11, v13, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
        goto LABEL_42;
      }
      goto LABEL_42;
    }
LABEL_18:
    if ( (*(_DWORD *)a3 & 0x400) != 0 )
    {
      v17 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a3 + 34), 1);
      v18 = CInputDest::CInputDest((CInputDest *)v32, v17);
      CInputDest::operator=((__int64)v31, v18);
      CInputDest::SetEmpty((CInputDest *)v32);
    }
    else
    {
      CInputDest::operator=((__int64)v31, (__int64)a3 + 24);
    }
    if ( CInputDest::operator==(v29, (__int64)v31) )
    {
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_(*((_QWORD *)this + 1), v19, 11, 165, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 166;
        goto LABEL_24;
      }
    }
    else
    {
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_(*((_QWORD *)this + 1), v19, 12, 167, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      if ( (*((_DWORD *)a3 + 1) & 0x200) != 0
        && ((v22 = *((_DWORD *)a3 + 65), (v22 & 4) != 0) || (v22 & 0x40000) != 0)
        && (v22 & 0x10000) == 0 )
      {
        *(_DWORD *)a3 |= 0x40u;
        if ( v7 )
        {
          *(_DWORD *)v7 |= 0x20u;
          v23 = -__CFSHR__(*(_DWORD *)v7, 6);
        }
        else
        {
          LOBYTE(v23) = 0;
        }
        v24 = 169;
        v25 = __CFSHR__(*(_DWORD *)a3, 7);
      }
      else
      {
        *(_DWORD *)a3 |= 8u;
        if ( v7 )
        {
          *(_DWORD *)v7 |= 0x10u;
          v23 = -__CFSHR__(*(_DWORD *)v7, 5);
        }
        else
        {
          LOBYTE(v23) = 0;
        }
        v24 = 168;
        v25 = __CFSHR__(*(_DWORD *)a3, 4);
      }
      WPP_RECORDER_SF_qdqd(*((_QWORD *)this + 1), v20, v21, v24, v28, (char)a3, -v25, (char)v7, v23);
      if ( v7 )
        *(_DWORD *)(240LL * *((unsigned int *)v7 + 2) + *((_QWORD *)a2 + 13) + 220) &= ~1u;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v26) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v26,
          11,
          170,
          (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      }
      v6 = 1;
    }
    goto LABEL_42;
  }
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(v9, a2, *((_WORD *)a3 + 126), 0LL);
  v7 = ValidNodeInFrame;
  if ( ValidNodeInFrame )
  {
    if ( *(char *)ValidNodeInFrame < 0 )
      v7 = 0LL;
    if ( v7 )
    {
      if ( (*(_DWORD *)v7 & 4) != 0 || (*(_DWORD *)v7 & 0x400) != 0 )
      {
        v15 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)v7 + 34), 1);
        v16 = CInputDest::CInputDest((CInputDest *)v32, v15);
        CInputDest::operator=((__int64)v29, v16);
        CInputDest::SetEmpty((CInputDest *)v32);
      }
      else
      {
        CInputDest::operator=((__int64)v29, (__int64)v7 + 24);
      }
    }
    goto LABEL_18;
  }
  if ( CPointerInfoNode::IsForManipulationThread(a3) )
    goto LABEL_18;
  WPP_RECORDER_SF_D(
    *((_QWORD *)this + 1),
    4u,
    0xBu,
    0xA3u,
    (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids,
    *((unsigned __int16 *)a3 + 126));
  v12 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = 164;
    goto LABEL_24;
  }
LABEL_42:
  CInputDest::SetEmpty((CInputDest *)v29);
  CInputDest::SetEmpty((CInputDest *)v31);
  return v6;
}
