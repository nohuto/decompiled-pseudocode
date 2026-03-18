/*
 * XREFs of ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0222B94
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C022240C (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1C0222EE0 (-GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C0222FBC (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAVInteractiveControlDevice@@PEAUtagWND@@@Z @ 0x1C022314C (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAVInteractiveControlDevice@@PEAUtagWND@@@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1C02234D4 (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 *     ?UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x1C0223574 (-UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateMessages(
        InteractiveControlDefaultScroller *a1,
        __int64 a2,
        __int64 a3,
        const GUID *a4)
{
  signed int updated; // ebx
  int v7; // r14d
  struct tagWND *v8; // rsi
  struct InteractiveControlDevice *v9; // rdx
  int v10; // eax
  struct InteractiveControlDevice *v11; // rdx
  __int16 v13[2]; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v15; // [rsp+60h] [rbp+7h]
  __int64 v16; // [rsp+68h] [rbp+Fh]
  __int16 *v17; // [rsp+70h] [rbp+17h]
  __int64 v18; // [rsp+78h] [rbp+1Fh]

  *((_DWORD *)a1 + 14) = (_DWORD)a4;
  updated = 0;
  v7 = 1;
  if ( (unsigned int)((_DWORD)a4 - 1) > 1 )
    updated = -1073700861;
  if ( updated >= 0 )
  {
    if ( gpqForeground )
      v8 = *(struct tagWND **)(gpqForeground + 112LL);
    else
      v8 = 0LL;
    updated = v8 == 0LL ? 0xC0000008 : 0;
    if ( v8 )
    {
      updated = InteractiveControlDefaultScroller::UpdateTime(a1, (int *)v13);
      if ( updated >= 0 )
      {
        if ( *(_DWORD *)v13 )
          InteractiveControlDefaultScroller::Reset(a1, v9, v8);
        v10 = *((_DWORD *)a1 + 15);
        v11 = (struct InteractiveControlDevice *)*(unsigned int *)(a3 + 24);
        if ( !v10 || (int)v11 > 0 == v10 > 0 )
          v7 = 0;
        *((_DWORD *)a1 + 15) = (_DWORD)v11;
        updated = 0;
        if ( v7 )
        {
          InteractiveControlDefaultScroller::Reset(a1, v11, v8);
        }
        else
        {
          updated = InteractiveControlDefaultScroller::UpdateBallistics(a1);
          if ( updated >= 0 )
          {
            updated = InteractiveControlDefaultScroller::GenerateWheelDelta(a1, v13);
            if ( updated >= 0 )
            {
              updated = InteractiveControlDefaultScroller::GenerateWheelMessage(a1, v13[0], v8);
              if ( updated < 0 && (unsigned int)dword_1C0320190 > 2 )
                goto LABEL_30;
            }
            else if ( (unsigned int)dword_1C0320190 > 2 )
            {
              goto LABEL_30;
            }
          }
          else if ( (unsigned int)dword_1C0320190 > 2 )
          {
            goto LABEL_30;
          }
        }
      }
      else if ( (unsigned int)dword_1C0320190 > 2 )
      {
        goto LABEL_30;
      }
    }
    else if ( (unsigned int)dword_1C0320190 > 2 )
    {
      v16 = 17LL;
      v15 = "Function failed.";
      v17 = v13;
      v18 = 4LL;
      *(_DWORD *)v13 = -1073741816;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8FB5, (LPCGUID)a3, a4, 4u, &pData);
    }
  }
  else if ( (unsigned int)dword_1C0320190 > 2 )
  {
LABEL_30:
    v16 = 17LL;
    v15 = "Function failed.";
    v17 = v13;
    v18 = 4LL;
    *(_DWORD *)v13 = updated;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8FB5, (LPCGUID)a3, a4, 4u, &pData);
  }
  return (unsigned int)updated;
}
