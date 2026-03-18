/*
 * XREFs of ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C012CD3C
 * Callers:
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C01195AC (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00BCA68 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00E839C (WPP_RECORDER_SF_dd.c)
 *     ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x1C01155A0 (-GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C0126DB8 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C012C504 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C012C818 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     ?LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x1C012CB00 (-LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z @ 0x1C012D644 (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z.c)
 *     WPP_RECORDER_SF_qddd @ 0x1C012D91C (WPP_RECORDER_SF_qddd.c)
 *     ?UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@K@Z @ 0x1C0132C98 (-UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemet.c)
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x1C0132D28 (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 */

unsigned __int8 __fastcall DelayZonePalmRejection::ProcessInput(
        DelayZonePalmRejection *this,
        struct CPointerInputFrame *a2)
{
  unsigned int v4; // ecx
  char v5; // r9
  BOOL v6; // r8d
  BOOL v7; // r11d
  int v8; // r10d
  unsigned int v9; // eax
  char v10; // r12
  char v11; // r14
  struct tagPOINT v12; // rbx
  int v13; // r13d
  unsigned __int8 v14; // si
  const struct tagPOINTER_INFO *PointerInfo; // rax
  const struct tagPOINTER_INFO *v16; // r14
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // r12
  int v23; // eax
  __int64 v24; // rax
  int v25; // ecx
  bool v26; // al
  int v27; // r8d
  int v28; // r9d
  char v29; // cl
  bool v30; // r12
  char v31; // al
  __int64 v32; // rcx
  char v33; // dl
  int v34; // ecx
  unsigned int v35; // ecx
  CHidInput *v36; // rcx
  CHidInput *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  int v42; // [rsp+28h] [rbp-A9h]
  struct CDelayZonePanelTelemetryData *v43; // [rsp+30h] [rbp-A1h]
  __int64 v44; // [rsp+38h] [rbp-99h]
  char v45; // [rsp+58h] [rbp-79h]
  char v46; // [rsp+59h] [rbp-78h]
  bool v47; // [rsp+5Ah] [rbp-77h] BYREF
  char v48; // [rsp+5Bh] [rbp-76h]
  char v49; // [rsp+5Ch] [rbp-75h]
  int v50; // [rsp+60h] [rbp-71h]
  BOOL v51; // [rsp+64h] [rbp-6Dh]
  BOOL v52; // [rsp+68h] [rbp-69h]
  unsigned int v53; // [rsp+6Ch] [rbp-65h]
  unsigned int v54; // [rsp+70h] [rbp-61h]
  _OWORD v55[4]; // [rsp+78h] [rbp-59h] BYREF
  _OWORD v56[2]; // [rsp+B8h] [rbp-19h] BYREF
  _OWORD v57[2]; // [rsp+D8h] [rbp+7h] BYREF

  WPP_RECORDER_SF_d(
    *((_QWORD *)this + 14),
    4u,
    0xDu,
    0xDu,
    (__int64)&WPP_f5710132373f3cabafdc12ce4a875db4_Traceguids,
    *((_DWORD *)this + 1));
  v4 = *((_DWORD *)a2 + 12);
  v5 = 0;
  LOBYTE(v6) = 0;
  v46 = 0;
  LOBYTE(v7) = 0;
  v51 = v6;
  v8 = 0;
  v52 = v7;
  v9 = 0;
  v50 = 0;
  v10 = 0;
  v49 = 0;
  v11 = 0;
  v45 = 0;
  v12 = 0LL;
  v48 = 0;
  v13 = 0;
  v54 = v4;
  v53 = 0;
  v14 = 1;
  if ( v4 )
  {
    while ( 1 )
    {
      PointerInfo = CTouchProcessor::GetPointerInfo((PERESOURCE *)gpTouchProcessor, a2, v9);
      v16 = PointerInfo;
      if ( !PointerInfo )
        goto LABEL_32;
      v17 = *(_DWORD *)PointerInfo;
      if ( v17 == 3 )
      {
        v18 = *((_QWORD *)this + 4);
        if ( !v18 )
        {
          v18 = *((_QWORD *)a2 + 8);
          *((_QWORD *)this + 4) = v18;
        }
        if ( *((_QWORD *)a2 + 8) != v18 )
          goto LABEL_83;
        *((_DWORD *)this + 12) = *((_DWORD *)v16 + 16);
        v10 = 1;
        v19 = *((_DWORD *)v16 + 3);
        v45 = 1;
        if ( (v19 & 1) != 0 )
        {
          v20 = *((_DWORD *)this + 11);
          if ( !v20 )
          {
            v12 = (struct tagPOINT)*((_QWORD *)v16 + 7);
            v48 = 1;
          }
          v21 = v20 + 1;
          *((_DWORD *)this + 11) = v21;
          LODWORD(v44) = v21;
          WPP_RECORDER_SF_qd(
            *((_QWORD *)this + 14),
            4u,
            0xDu,
            0xEu,
            (__int64)&WPP_f5710132373f3cabafdc12ce4a875db4_Traceguids,
            v18,
            v44);
          v22 = *((_QWORD *)this + 21);
          if ( v22 )
          {
            memset(&v55[2], 0, 0x20uLL);
            v56[0] = v55[2];
            v56[1] = v55[3];
            DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo(v22, 0xFFFFFFFFLL, v56, v16, v13++);
          }
          v10 = 1;
        }
        else if ( (v19 & 2) == 0 )
        {
          v23 = *((_DWORD *)this + 11);
          if ( v23 )
            *((_DWORD *)this + 11) = --v23;
          LODWORD(v44) = v23;
          WPP_RECORDER_SF_qd(
            *((_QWORD *)this + 14),
            4u,
            0xDu,
            0xFu,
            (__int64)&WPP_f5710132373f3cabafdc12ce4a875db4_Traceguids,
            v18,
            v44);
        }
        v5 = v46;
        v8 = v50;
        if ( (*((_DWORD *)v16 + 3) & 0x8000) != 0 )
          v49 = 1;
        goto LABEL_35;
      }
      if ( v17 != 2 )
        goto LABEL_83;
      v24 = *((_QWORD *)this + 2);
      if ( !v24 )
      {
        v24 = *((_QWORD *)a2 + 8);
        *((_QWORD *)this + 2) = v24;
      }
      if ( *((_QWORD *)a2 + 8) != v24 )
        goto LABEL_83;
      v25 = *((_DWORD *)v16 + 3);
      v8 = *((_DWORD *)v16 + 16);
      v5 = 1;
      v46 = 1;
      v50 = v8;
      if ( (v25 & 0x10000) != 0 )
        break;
      if ( (v25 & 0x40000) == 0 )
        goto LABEL_34;
      v34 = *((_DWORD *)this + 10);
      if ( v34 )
        *((_DWORD *)this + 10) = --v34;
      LODWORD(v44) = v34;
      WPP_RECORDER_SF_qd(
        *((_QWORD *)this + 14),
        4u,
        0xDu,
        0x11u,
        (__int64)&WPP_f5710132373f3cabafdc12ce4a875db4_Traceguids,
        v24,
        v44);
      v5 = 1;
LABEL_33:
      v8 = v50;
LABEL_34:
      v10 = v45;
LABEL_35:
      v9 = v53 + 1;
      v53 = v9;
      if ( v9 >= v54 )
      {
        LOBYTE(v6) = v51;
        LOBYTE(v7) = v52;
        v11 = v48;
        goto LABEL_37;
      }
    }
    ++*((_DWORD *)this + 10);
    v47 = 0;
    memset(v55, 0, 0x20uLL);
    v26 = DelayZonePalmRejection::HitTestRejectionRegion(
            this,
            *((void **)v16 + 2),
            *(struct tagPOINT *)((char *)v16 + 48),
            *(struct tagPOINT *)((char *)v16 + 56),
            &v47,
            (struct CDelayZonePanelTelemetryData *)v55);
    v29 = v52;
    v30 = v26;
    if ( !v52 )
    {
      v29 = v26;
      v52 = v26;
    }
    v31 = v51;
    if ( !v51 )
    {
      v31 = !v30;
      v51 = !v30;
    }
    WPP_RECORDER_SF_qddd(
      *((_QWORD *)this + 14),
      1,
      v27,
      v28,
      v42,
      *((_QWORD *)this + 2),
      *((_DWORD *)this + 10),
      v29,
      v31);
    v32 = *((_QWORD *)this + 21);
    if ( v32 && v30 )
    {
      v57[0] = v55[0];
      v57[1] = v55[1];
      DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo(v32, v47, v57, v16, v13++);
    }
LABEL_32:
    v5 = v46;
    goto LABEL_33;
  }
LABEL_37:
  if ( *(_BYTE *)this || !v10 )
  {
    v33 = *(_BYTE *)this;
    if ( *(_BYTE *)this )
    {
      if ( v5 )
      {
        v35 = *((_DWORD *)this + 27);
        if ( v35 )
        {
          if ( v8 - *((_DWORD *)this + 12) > v35 )
          {
            *(_BYTE *)this = 0;
            v33 = 0;
          }
        }
      }
    }
  }
  else
  {
    *(_BYTE *)this = 1;
    v33 = 1;
  }
  v36 = (CHidInput *)*((unsigned int *)this + 1);
  if ( !(_DWORD)v36 )
  {
    if ( v33 )
    {
      if ( v10 && v11 )
      {
        v38 = *((_QWORD *)this + 21);
        v40 = 2LL;
        *((_DWORD *)this + 1) = 2;
        v14 = 1;
        if ( !v38 )
          goto LABEL_83;
        v39 = 1LL;
LABEL_76:
        DelayZoneTelemetry::UpdateInputPalmRejectStateInfo(v38, v40, v39);
        goto LABEL_83;
      }
      if ( v5 && v7 )
      {
        CHidInput::HandleDelayZonePalmRejectionTimer(v36, 0, *((_DWORD *)this + 25));
        *((_QWORD *)this + 7) = a2;
        *((_BYTE *)this + 8) = 1;
        *((_QWORD *)this + 8) = a2;
        DelayZonePalmRejection::LockTouchDeviceHandle(this);
        v38 = *((_QWORD *)this + 21);
        v14 = 0;
        *((_DWORD *)this + 1) = 1;
        if ( !v38 )
          goto LABEL_83;
        v39 = 0LL;
        v40 = 1LL;
        goto LABEL_76;
      }
    }
    *((_DWORD *)this + 1) = 2;
    goto LABEL_82;
  }
  v37 = (CHidInput *)(unsigned int)((_DWORD)v36 - 1);
  if ( !(_DWORD)v37 )
  {
    if ( v10 && v11 )
    {
      if ( *((_BYTE *)this + 8) == 1 )
      {
        CHidInput::HandleDelayZonePalmRejectionTimer(v37, 1, 0);
        *((_BYTE *)this + 8) = 0;
      }
      DelayZonePalmRejection::SuppressDeadzoneContacts(this, v12);
      DelayZonePalmRejection::DispatchBufferedInputFrames(this);
      v38 = *((_QWORD *)this + 21);
      v14 = 1;
      if ( !v38 )
        goto LABEL_83;
      v39 = 1LL;
LABEL_62:
      v40 = *((unsigned int *)this + 1);
      goto LABEL_76;
    }
    if ( v5 )
    {
      if ( v6 )
      {
        if ( *((_BYTE *)this + 8) == 1 )
        {
          CHidInput::HandleDelayZonePalmRejectionTimer(v37, 1, 0);
          *((_BYTE *)this + 8) = 0;
        }
        DelayZonePalmRejection::DispatchBufferedInputFrames(this);
        v14 = 1;
      }
      else
      {
        *((_QWORD *)this + 8) = a2;
        v14 = 0;
      }
      v38 = *((_QWORD *)this + 21);
      if ( !v38 )
        goto LABEL_83;
      v39 = 0LL;
      goto LABEL_62;
    }
LABEL_82:
    v14 = 1;
    goto LABEL_83;
  }
  if ( (_DWORD)v37 == 1 )
  {
    if ( !*((_DWORD *)this + 11) && !*((_DWORD *)this + 10) && !v49 )
    {
      *((_QWORD *)this + 4) = 0LL;
      *((_QWORD *)this + 2) = 0LL;
      *((_DWORD *)this + 1) = 0;
    }
    goto LABEL_82;
  }
LABEL_83:
  LODWORD(v44) = v14;
  LODWORD(v43) = *((_DWORD *)this + 1);
  WPP_RECORDER_SF_dd(
    *((_QWORD *)this + 14),
    4u,
    0xDu,
    0x12u,
    (__int64)&WPP_f5710132373f3cabafdc12ce4a875db4_Traceguids,
    v43,
    v44);
  return v14;
}
