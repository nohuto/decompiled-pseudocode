/*
 * XREFs of ?ProcessDragContinue@PTPProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18006EDB4
 * Callers:
 *     ?OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18006E8A0 (-OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z @ 0x18006F1C8 (-DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z.c)
 *     ?DeliverTouchpadGestureMessage@PTPProcessor@@AEAAJPEAUInputInfo@@_N1@Z @ 0x18006F2A8 (-DeliverTouchpadGestureMessage@PTPProcessor@@AEAAJPEAUInputInfo@@_N1@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall PTPProcessor::ProcessDragContinue(PTPProcessor *this, struct InputInfo *a2)
{
  int v3; // eax
  __int64 v4; // r8
  struct InputInfo *v5; // rax
  _OWORD *v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // edi
  int v18; // r9d
  _BYTE v20[2848]; // [rsp+30h] [rbp-B38h] BYREF

  if ( (unsigned int)(*((_DWORD *)this + 149) - 1) <= 1 )
  {
    v15 = PTPProcessor::DeliverMouseMessage(this, a2, 0, 0);
    v17 = v15;
    if ( v15 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v18 = 499;
      goto LABEL_21;
    }
  }
  else
  {
    if ( *((_DWORD *)this + 152) == 1 )
    {
      v3 = *((_DWORD *)a2 + 2);
      if ( *((_BYTE *)this + 613) )
      {
        if ( (unsigned int)(v3 - *((_DWORD *)this + 154)) >= 0x64 )
        {
          v4 = 22LL;
          *((_BYTE *)this + 613) = 0;
          v5 = a2;
          v6 = v20;
          do
          {
            v7 = *((_OWORD *)v5 + 1);
            *v6 = *(_OWORD *)v5;
            v8 = *((_OWORD *)v5 + 2);
            v6[1] = v7;
            v9 = *((_OWORD *)v5 + 3);
            v6[2] = v8;
            v10 = *((_OWORD *)v5 + 4);
            v6[3] = v9;
            v11 = *((_OWORD *)v5 + 5);
            v6[4] = v10;
            v12 = *((_OWORD *)v5 + 6);
            v6[5] = v11;
            v13 = *((_OWORD *)v5 + 7);
            v5 = (struct InputInfo *)((char *)v5 + 128);
            v6[6] = v12;
            v6 += 8;
            *(v6 - 1) = v13;
            --v4;
          }
          while ( v4 );
          v14 = *((_OWORD *)v5 + 1);
          *v6 = *(_OWORD *)v5;
          v6[1] = v14;
          v15 = PTPProcessor::DeliverTouchpadGestureMessage(this, a2, 1, 0);
          v17 = v15;
          if ( v15 >= 0 )
          {
            *((_DWORD *)this + 149) = 1;
            v15 = PTPProcessor::DeliverMouseMessage(this, (struct InputInfo *)v20, 0, 1);
            v17 = v15;
            if ( v15 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              return v17;
            v18 = 550;
          }
          else
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              return v17;
            v18 = 547;
          }
LABEL_21:
          McTemplateU0qqq(v16, &MinInput_Warning_CheckResult, 11, v18, v15);
          return v17;
        }
      }
      else
      {
        *((_DWORD *)this + 154) = v3;
        *((_BYTE *)this + 613) = 1;
      }
    }
    else
    {
      *((_BYTE *)this + 613) = 0;
    }
    v15 = PTPProcessor::DeliverTouchpadGestureMessage(this, a2, 0, 0);
    v17 = v15;
    if ( v15 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v18 = 540;
      goto LABEL_21;
    }
  }
  return v17;
}
