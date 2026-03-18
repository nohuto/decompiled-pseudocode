/*
 * XREFs of ?ProcessInput@PalmRejection@@YAHPEAX@Z @ 0x1C01E006C
 * Callers:
 *     xxxGeneratePointerInputMessages @ 0x1C01CECD0 (xxxGeneratePointerInputMessages.c)
 *     EditionPalmRejectionProcessInput @ 0x1C01E09C0 (EditionPalmRejectionProcessInput.c)
 * Callees:
 *     SetRITTimer @ 0x1C00874B0 (SetRITTimer.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01A52F0 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?DispatchBufferedInputFrames@PalmRejection@@YAXXZ @ 0x1C01DFEC0 (-DispatchBufferedInputFrames@PalmRejection@@YAXXZ.c)
 *     ?_HitTestRejectionRegion@PalmRejection@@YAHPEAXUtagPOINT@@@Z @ 0x1C01E0594 (-_HitTestRejectionRegion@PalmRejection@@YAHPEAXUtagPOINT@@@Z.c)
 *     ?_SuppressDeadzoneContacts@PalmRejection@@YAXUtagPOINT@@@Z @ 0x1C01E0794 (-_SuppressDeadzoneContacts@PalmRejection@@YAXUtagPOINT@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C01E09D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C01E0A78 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_qd @ 0x1C01E0BEC (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qddd @ 0x1C01E0CBC (WPP_RECORDER_SF_qddd.c)
 */

__int64 __fastcall PalmRejection::ProcessInput(PalmRejection *this, void *a2, int a3, int a4)
{
  struct tagPOINT v5; // rbx
  unsigned int v6; // edi
  int v7; // ebp
  BOOL v8; // r14d
  struct tagPOINT v9; // r8
  int v10; // r13d
  int v11; // r15d
  int v12; // r9d
  int v13; // r10d
  unsigned int v14; // eax
  unsigned int v15; // r12d
  __int64 v16; // rdx
  const struct tagPOINTER_INFO *PointerInfo; // r14
  int v18; // eax
  __int64 v19; // rcx
  const struct tagPOINTER_INFO *v20; // r11
  __int64 v21; // rax
  int v22; // eax
  char v23; // al
  int v24; // r9d
  bool v25; // zf
  __int64 v26; // rax
  int v27; // eax
  void *v28; // rdx
  struct tagRECT *v29; // rcx
  int v30; // eax
  int v31; // edx
  int v32; // r8d
  int v33; // r9d
  char v34; // cl
  char v35; // al
  PalmRejection *v36; // rcx
  struct tagPOINT v37; // rdx
  __int64 v38; // rax
  int v40; // [rsp+20h] [rbp-88h]
  int v41; // [rsp+50h] [rbp-58h]
  BOOL v42; // [rsp+B0h] [rbp+8h]
  int v43; // [rsp+B8h] [rbp+10h]
  BOOL v44; // [rsp+C0h] [rbp+18h]
  unsigned int v45; // [rsp+C8h] [rbp+20h]

  WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)a2, a3, a4);
  v5 = 0LL;
  v42 = 0;
  v6 = 1;
  v44 = 0;
  v7 = 0;
  v41 = 0;
  v8 = 0;
  v43 = 0;
  v9.x = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( (gdwMitConfig & 4) != 0 )
    v14 = *((_DWORD *)this + 12);
  else
    v14 = *((_DWORD *)this + 10);
  v45 = v14;
  v15 = 0;
  if ( v14 )
  {
    while ( 1 )
    {
      if ( (gdwMitConfig & 4) != 0 )
      {
        PointerInfo = CTouchProcessor::GetPointerInfo(gpTouchProcessor, this, v15);
      }
      else
      {
        v18 = IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)(*((_QWORD *)this + 11) + 216LL * v15));
        PointerInfo = v20;
        if ( v18 )
          PointerInfo = (const struct tagPOINTER_INFO *)(v19 + 56);
      }
      if ( !PointerInfo )
        goto LABEL_51;
      if ( *(_DWORD *)PointerInfo != 3 )
      {
        if ( *(_DWORD *)PointerInfo != 2 )
          goto LABEL_88;
        v16 = xmmword_1C032BA30;
        if ( !(_QWORD)xmmword_1C032BA30 )
        {
          if ( (gdwMitConfig & 4) != 0 )
            v16 = *((_QWORD *)this + 8);
          else
            v16 = *((_QWORD *)this + 7);
          *(_QWORD *)&xmmword_1C032BA30 = v16;
        }
        v26 = (gdwMitConfig & 4) != 0 ? *((_QWORD *)this + 8) : *((_QWORD *)this + 7);
        if ( v26 != v16 )
          goto LABEL_88;
        v27 = *((_DWORD *)PointerInfo + 3);
        v7 = 1;
        v10 = *((_DWORD *)PointerInfo + 16);
        if ( (v27 & 0x10000) != 0 )
        {
          v28 = (void *)*((_QWORD *)PointerInfo + 7);
          v29 = (struct tagRECT *)*((_QWORD *)PointerInfo + 2);
          LODWORD(xmmword_1C032BA40) = xmmword_1C032BA40 + 1;
          v30 = PalmRejection::_HitTestRejectionRegion(v29, v28, v9);
          v34 = v44;
          if ( !v44 )
          {
            v34 = v30 != 0;
            v44 = v30 != 0;
          }
          v8 = v42;
          if ( !v42 )
          {
            v8 = v30 == 0;
            v42 = v8;
          }
          WPP_RECORDER_SF_qddd(
            WPP_GLOBAL_Control->DeviceExtension,
            v31,
            v32,
            v33,
            v40,
            xmmword_1C032BA30,
            xmmword_1C032BA40,
            v34,
            v8);
        }
        else
        {
          if ( (v27 & 0x40000) != 0 )
          {
            v35 = xmmword_1C032BA40;
            if ( (_DWORD)xmmword_1C032BA40 )
            {
              v35 = xmmword_1C032BA40 - 1;
              LODWORD(xmmword_1C032BA40) = xmmword_1C032BA40 - 1;
            }
            WPP_RECORDER_SF_qd(WPP_GLOBAL_Control->DeviceExtension, v16, v9.x, 14, v40, v16, v35);
          }
LABEL_51:
          v8 = v42;
        }
LABEL_52:
        v13 = v43;
        goto LABEL_53;
      }
      v16 = *((_QWORD *)&xmmword_1C032BA30 + 1);
      if ( !*((_QWORD *)&xmmword_1C032BA30 + 1) )
      {
        if ( (gdwMitConfig & 4) != 0 )
          v16 = *((_QWORD *)this + 8);
        else
          v16 = *((_QWORD *)this + 7);
        *((_QWORD *)&xmmword_1C032BA30 + 1) = v16;
      }
      if ( (gdwMitConfig & 4) != 0 )
        v21 = *((_QWORD *)this + 8);
      else
        v21 = *((_QWORD *)this + 7);
      if ( v21 != v16 )
        goto LABEL_88;
      v11 = 1;
      DWORD2(xmmword_1C032BA40) = *((_DWORD *)PointerInfo + 16);
      v22 = *((_DWORD *)PointerInfo + 3);
      if ( (v22 & 1) != 0 )
      {
        if ( !DWORD1(xmmword_1C032BA40) )
        {
          v5 = (struct tagPOINT)*((_QWORD *)PointerInfo + 7);
          v41 = 1;
        }
        v23 = BYTE4(xmmword_1C032BA40) + 1;
        ++DWORD1(xmmword_1C032BA40);
        v24 = 11;
      }
      else
      {
        if ( (v22 & 2) != 0 )
          goto LABEL_29;
        v23 = BYTE4(xmmword_1C032BA40);
        if ( DWORD1(xmmword_1C032BA40) )
        {
          v23 = BYTE4(xmmword_1C032BA40) - 1;
          --DWORD1(xmmword_1C032BA40);
        }
        v24 = 12;
      }
      WPP_RECORDER_SF_qd(WPP_GLOBAL_Control->DeviceExtension, v16, v9.x, v24, v40, v16, v23);
LABEL_29:
      v25 = (*((_DWORD *)PointerInfo + 3) & 0x8000) == 0;
      v8 = v42;
      if ( v25 )
        goto LABEL_52;
      v13 = 1;
      v43 = 1;
LABEL_53:
      if ( ++v15 >= v45 )
      {
        v9.x = v44;
        v12 = v41;
        break;
      }
    }
  }
  LODWORD(v16) = gPalmRejectData;
  if ( !gPalmRejectData )
  {
    if ( !v11 )
      goto LABEL_63;
    LODWORD(v16) = 1;
    goto LABEL_62;
  }
  if ( v7 && gPalmRejectDisableThr && v10 - DWORD2(xmmword_1C032BA40) > gPalmRejectDisableThr )
  {
    LODWORD(v16) = 0;
LABEL_62:
    gPalmRejectData = v16;
  }
LABEL_63:
  if ( *(&gPalmRejectData + 1) )
  {
    v36 = (PalmRejection *)(unsigned int)(*(&gPalmRejectData + 1) - 1);
    if ( *(&gPalmRejectData + 1) == 1 )
    {
      if ( v11 && v12 )
      {
        v37 = (struct tagPOINT)*(&gPalmRejectData + 1);
        if ( *(&gPalmRejectData + 1) )
        {
          FindTimer(0LL, *(&gPalmRejectData + 1), 4u, 1, 0LL);
          *(&gPalmRejectData + 1) = 0LL;
        }
        PalmRejection::_SuppressDeadzoneContacts(v5, v37);
      }
      else
      {
        if ( !v7 )
          goto LABEL_88;
        if ( gPalmRejectDelayNonEdge || !v8 )
        {
          *(&xmmword_1C032BA50 + 1) = this;
          v6 = 0;
          goto LABEL_88;
        }
        if ( *(&gPalmRejectData + 1) )
        {
          FindTimer(0LL, *(&gPalmRejectData + 1), 4u, 1, 0LL);
          *(&gPalmRejectData + 1) = 0LL;
        }
      }
      PalmRejection::DispatchBufferedInputFrames(v36);
    }
    else if ( *(&gPalmRejectData + 1) == 2 && !(_QWORD)xmmword_1C032BA40 && !v13 )
    {
      xmmword_1C032BA30 = 0uLL;
      *(&gPalmRejectData + 1) = 0;
    }
  }
  else if ( (_DWORD)v16 && (!v11 || !v12) && v7 && v9.x )
  {
    v38 = SetRITTimer(*(&gPalmRejectData + 2), gPalmRejectTimeThr, (int)PalmRejection::_PalmRejectTimerProc, 1);
    *(&gPalmRejectData + 1) = 1;
    v6 = 0;
    *(&gPalmRejectData + 1) = v38;
    xmmword_1C032BA50 = this;
    *(&xmmword_1C032BA50 + 1) = this;
  }
  else
  {
    *(&gPalmRejectData + 1) = 2;
  }
LABEL_88:
  WPP_RECORDER_SF_dd(WPP_GLOBAL_Control->DeviceExtension, v16, v9.x, v12, v40, *(&gPalmRejectData + 4), v6);
  return v6;
}
