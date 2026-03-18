/*
 * XREFs of ?ProcessInput@PalmRejection@@YAHPEAX@Z @ 0x1C01D3CC4
 * Callers:
 *     xxxGeneratePointerInputMessages @ 0x1C01CA88C (xxxGeneratePointerInputMessages.c)
 *     EditionPalmRejectionProcessInput @ 0x1C01D4540 (EditionPalmRejectionProcessInput.c)
 * Callees:
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 *     SetRITTimer @ 0x1C00B22B0 (SetRITTimer.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C019972C (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?DispatchBufferedInputFrames@PalmRejection@@YAXXZ @ 0x1C01D3B10 (-DispatchBufferedInputFrames@PalmRejection@@YAXXZ.c)
 *     ?_HitTestRejectionRegion@PalmRejection@@YAHPEAXUtagPOINT@@@Z @ 0x1C01D4120 (-_HitTestRejectionRegion@PalmRejection@@YAHPEAXUtagPOINT@@@Z.c)
 *     ?_SuppressDeadzoneContacts@PalmRejection@@YAXUtagPOINT@@@Z @ 0x1C01D4324 (-_SuppressDeadzoneContacts@PalmRejection@@YAXUtagPOINT@@@Z.c)
 */

__int64 __fastcall PalmRejection::ProcessInput(PalmRejection *this, void *a2)
{
  _DWORD *v2; // r8
  unsigned int v3; // edi
  struct tagPOINT v4; // rbx
  int v6; // ebp
  int v7; // r11d
  BOOL v8; // r9d
  int v9; // r15d
  int v10; // r14d
  int v11; // r10d
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  const struct tagPOINTER_INFO *PointerInfo; // rax
  const struct tagPOINTER_INFO *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  int v24; // edx
  PalmRejection *v26; // rcx
  struct tagPOINT v27; // rdx
  BOOL v28; // [rsp+80h] [rbp+8h]
  int v29; // [rsp+88h] [rbp+10h]
  int v30; // [rsp+90h] [rbp+18h]
  int v31; // [rsp+98h] [rbp+20h]

  v2 = (_DWORD *)gdwMitConfig;
  v3 = 0;
  v4 = 0LL;
  v29 = 0;
  v28 = 0;
  v6 = 0;
  v30 = 0;
  v7 = 0;
  v31 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( (gdwMitConfig & 4) != 0 )
    v12 = *((_DWORD *)this + 12);
  else
    v12 = *((_DWORD *)this + 10);
  v13 = 0;
  if ( v12 )
  {
    while ( 1 )
    {
      if ( (*v2 & 4) != 0 )
      {
        PointerInfo = CTouchProcessor::GetPointerInfo(gpTouchProcessor, this, v13);
        v2 = (_DWORD *)gdwMitConfig;
        v15 = PointerInfo;
        v8 = v28;
        v7 = v29;
      }
      else if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)(*((_QWORD *)this + 11)
                                                                                       + 216LL * v13)) )
      {
        v15 = (const struct tagPOINTER_INFO *)(v16 + 56);
      }
      else
      {
        v15 = 0LL;
      }
      if ( v15 )
      {
        if ( *(_DWORD *)v15 == 3 )
        {
          if ( !*((_QWORD *)&xmmword_1C03304B0 + 1) )
          {
            if ( (*v2 & 4) != 0 )
              v17 = *((_QWORD *)this + 8);
            else
              v17 = *((_QWORD *)this + 7);
            *((_QWORD *)&xmmword_1C03304B0 + 1) = v17;
          }
          if ( (*v2 & 4) != 0 )
            v18 = *((_QWORD *)this + 8);
          else
            v18 = *((_QWORD *)this + 7);
          if ( v18 != *((_QWORD *)&xmmword_1C03304B0 + 1) )
            return 1LL;
          DWORD2(xmmword_1C03304C0) = *((_DWORD *)v15 + 16);
          v10 = 1;
          v19 = *((_DWORD *)v15 + 3);
          if ( (v19 & 1) != 0 )
          {
            if ( !DWORD1(xmmword_1C03304C0) )
            {
              v4 = (struct tagPOINT)*((_QWORD *)v15 + 7);
              v30 = 1;
            }
            ++DWORD1(xmmword_1C03304C0);
          }
          else if ( (v19 & 2) == 0 )
          {
            --DWORD1(xmmword_1C03304C0);
          }
          if ( (v19 & 0x8000) != 0 )
            v31 = 1;
        }
        else
        {
          if ( *(_DWORD *)v15 != 2 )
            return 1LL;
          if ( !(_QWORD)xmmword_1C03304B0 )
          {
            if ( (*v2 & 4) != 0 )
              v20 = *((_QWORD *)this + 8);
            else
              v20 = *((_QWORD *)this + 7);
            *(_QWORD *)&xmmword_1C03304B0 = v20;
          }
          v21 = (*v2 & 4) != 0 ? *((_QWORD *)this + 8) : *((_QWORD *)this + 7);
          if ( v21 != (_QWORD)xmmword_1C03304B0 )
            return 1LL;
          v22 = *((_DWORD *)v15 + 3);
          v9 = *((_DWORD *)v15 + 16);
          v6 = 1;
          if ( (v22 & 0x10000) != 0 )
          {
            LODWORD(xmmword_1C03304C0) = xmmword_1C03304C0 + 1;
            v23 = PalmRejection::_HitTestRejectionRegion(
                    *((struct tagRECT **)v15 + 2),
                    *((void **)v15 + 7),
                    (struct tagPOINT)v2);
            v8 = v28;
            if ( !v28 )
            {
              v8 = v23 != 0;
              v28 = v8;
            }
            v7 = v29;
            if ( !v29 && !v23 )
            {
              v7 = 1;
              v29 = 1;
            }
            v2 = (_DWORD *)gdwMitConfig;
          }
          else if ( (v22 & 0x40000) != 0 )
          {
            LODWORD(xmmword_1C03304C0) = xmmword_1C03304C0 - 1;
          }
        }
      }
      if ( ++v13 >= v12 )
      {
        v11 = v30;
        break;
      }
    }
  }
  v24 = gPalmRejectData;
  if ( !gPalmRejectData )
  {
    if ( !v10 )
      goto LABEL_59;
    v24 = 1;
    goto LABEL_53;
  }
  if ( v6 && gPalmRejectDisableThr && v9 - DWORD2(xmmword_1C03304C0) > gPalmRejectDisableThr )
  {
    v24 = 0;
LABEL_53:
    gPalmRejectData = v24;
  }
LABEL_59:
  if ( !*(&gPalmRejectData + 1) )
  {
    if ( v24 && (!v10 || !v11) && v6 && v8 )
    {
      *(&gPalmRejectData + 1) = SetRITTimer(
                                  *(&gPalmRejectData + 2),
                                  gPalmRejectTimeThr,
                                  (int)PalmRejection::_PalmRejectTimerProc,
                                  1);
      xmmword_1C03304D0 = this;
      *(&xmmword_1C03304D0 + 1) = this;
      *(&gPalmRejectData + 1) = 1;
      return v3;
    }
    *(&gPalmRejectData + 1) = 2;
    return 1;
  }
  v26 = (PalmRejection *)(unsigned int)(*(&gPalmRejectData + 1) - 1);
  if ( *(&gPalmRejectData + 1) == 1 )
  {
    if ( v10 && v11 )
    {
      v27 = (struct tagPOINT)*(&gPalmRejectData + 1);
      if ( *(&gPalmRejectData + 1) )
      {
        FindTimer(0LL, *(&gPalmRejectData + 1), 4u, 1, 0LL);
        *(&gPalmRejectData + 1) = 0LL;
      }
      PalmRejection::_SuppressDeadzoneContacts(v4, v27);
    }
    else
    {
      if ( !v6 )
        return 1;
      if ( gPalmRejectDelayNonEdge || !v7 )
      {
        *(&xmmword_1C03304D0 + 1) = this;
        return v3;
      }
      if ( *(&gPalmRejectData + 1) )
      {
        FindTimer(0LL, *(&gPalmRejectData + 1), 4u, 1, 0LL);
        *(&gPalmRejectData + 1) = 0LL;
      }
    }
    PalmRejection::DispatchBufferedInputFrames(v26);
    return 1;
  }
  if ( *(&gPalmRejectData + 1) == 2 )
  {
    if ( !(_QWORD)xmmword_1C03304C0 && !v31 )
    {
      xmmword_1C03304B0 = 0uLL;
      *(&gPalmRejectData + 1) = 0;
    }
    return 1;
  }
  return v3;
}
