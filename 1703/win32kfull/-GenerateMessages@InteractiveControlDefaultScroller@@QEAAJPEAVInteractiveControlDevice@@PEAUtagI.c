/*
 * XREFs of ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0221680
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C0220F30 (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1C02219C0 (-GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C0221A98 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAVInteractiveControlDevice@@PEAUtagWND@@@Z @ 0x1C0221CB8 (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAVInteractiveControlDevice@@PEAUtagWND@@@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1C022203C (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 *     ?UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x1C02220DC (-UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateMessages(
        InteractiveControlDefaultScroller *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  signed int updated; // ebx
  int v7; // r14d
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  struct tagWND *v10; // rsi
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  struct InteractiveControlDevice *v13; // rdx
  int v14; // eax
  struct InteractiveControlDevice *v15; // rdx
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  __int16 v19[2]; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp+7h] BYREF
  __int16 *v22; // [rsp+78h] [rbp+17h]
  int v23; // [rsp+80h] [rbp+1Fh]
  int v24; // [rsp+84h] [rbp+23h]

  updated = 0;
  *((_DWORD *)a1 + 14) = a4;
  v7 = 1;
  if ( (unsigned int)(a4 - 1) > 1 )
    updated = -1073700861;
  if ( updated >= 0 )
  {
    v10 = (struct tagWND *)gpqForeground;
    if ( gpqForeground )
      v10 = *(struct tagWND **)(gpqForeground + 80LL);
    updated = v10 == 0LL ? 0xC0000008 : 0;
    if ( v10 )
    {
      updated = InteractiveControlDefaultScroller::UpdateTime(a1, (int *)v19);
      if ( updated >= 0 )
      {
        if ( *(_DWORD *)v19 )
          InteractiveControlDefaultScroller::Reset(a1, v13, v10);
        v14 = *((_DWORD *)a1 + 15);
        v15 = (struct InteractiveControlDevice *)*(unsigned int *)(a3 + 24);
        if ( !v14 || (int)v15 > 0 == v14 > 0 )
          v7 = 0;
        updated = 0;
        *((_DWORD *)a1 + 15) = (_DWORD)v15;
        if ( v7 )
        {
          InteractiveControlDefaultScroller::Reset(a1, v15, v10);
          return (unsigned int)updated;
        }
        updated = InteractiveControlDefaultScroller::UpdateBallistics(a1);
        if ( updated >= 0 )
        {
          updated = InteractiveControlDefaultScroller::GenerateWheelDelta(a1, v19);
          if ( updated >= 0 )
          {
            updated = InteractiveControlDefaultScroller::GenerateWheelMessage(a1, v19[0], v10);
            if ( updated >= 0 || (unsigned int)dword_1C0324190 <= 2 )
              return (unsigned int)updated;
          }
          else if ( (unsigned int)dword_1C0324190 <= 2 )
          {
            return (unsigned int)updated;
          }
        }
        else if ( (unsigned int)dword_1C0324190 <= 2 )
        {
          return (unsigned int)updated;
        }
      }
      else if ( (unsigned int)dword_1C0324190 <= 2 )
      {
        return (unsigned int)updated;
      }
      TlgCreateSz(&pDesc, "Function failed.");
      v24 = 0;
      v22 = v19;
      v23 = 4;
      *(_DWORD *)v19 = updated;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECB18, v16, v17, 4u, &pData);
      return (unsigned int)updated;
    }
    if ( (unsigned int)dword_1C0324190 > 2 )
    {
      TlgCreateSz(&pDesc, "Function failed.");
      v24 = 0;
      v22 = v19;
      v23 = 4;
      *(_DWORD *)v19 = -1073741816;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECB18, v11, v12, 4u, &pData);
    }
  }
  else if ( (unsigned int)dword_1C0324190 > 2 )
  {
    TlgCreateSz(&pDesc, "Function failed.");
    v24 = 0;
    v22 = v19;
    v23 = 4;
    *(_DWORD *)v19 = updated;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECB18, v8, v9, 4u, &pData);
  }
  return (unsigned int)updated;
}
