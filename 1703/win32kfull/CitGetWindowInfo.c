/*
 * XREFs of CitGetWindowInfo @ 0x1C0101740
 * Callers:
 *     <none>
 * Callees:
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall CitGetWindowInfo(__int64 a1, _WORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int16 v5; // bx
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v7; // rax
  char v8; // al
  char v9; // dl
  __int16 v10; // cx
  __int16 v11; // r10
  __int16 v12; // r10
  unsigned int v13; // eax
  __int16 v14; // dx
  __int16 v15; // r10
  __int128 *Prop; // rax
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF

  result = GetTopLevelWindow(a1);
  v4 = result;
  if ( result )
  {
    v17 = *(_OWORD *)(result + 128);
    v5 = 32;
    if ( (*(_BYTE *)(result + 71) & 0x20) != 0 )
    {
      Prop = (__int128 *)GetProp(result, atomCheckpointProp, 1);
      if ( Prop )
        v17 = *Prop;
    }
    MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(v4);
    LogicalToPhysicalDPIRect(&v17, &v17, MonitorFlagsFromWindow, 0LL);
    *a2 = WORD4(v17) - v17;
    a2[1] = WORD6(v17) - WORD2(v17);
    v7 = MonitorFromRect((int *)&v17, 0x21u);
    if ( v7 )
      CitGetMonitorInfo(v7, a2);
    v8 = *(_BYTE *)(v4 + 71);
    if ( (v8 & 0x20) != 0 )
    {
      v10 = 1;
    }
    else if ( (v8 & 1) != 0 )
    {
      v10 = 2;
    }
    else
    {
      v9 = *(_BYTE *)(v4 + 305);
      v10 = 3;
      if ( (v9 & 3) == 3 )
      {
        v10 = 5;
      }
      else if ( (v9 & 1) == 0 )
      {
        if ( (v9 & 2) != 0 )
        {
          v10 = 4;
        }
        else
        {
          v10 = 0;
          if ( (*(_BYTE *)(v4 + 307) & 1) != 0 )
            v10 = 6;
        }
      }
    }
    v11 = 0;
    if ( (*(_DWORD *)(v4 + 368) & 0xF) == 1 )
    {
      v11 = 1;
    }
    else if ( (*(_DWORD *)(v4 + 368) & 0xF) == 2 )
    {
      v11 = 2;
    }
    v12 = v10 | (8 * v11);
    a2[4] = v12;
    v13 = *(unsigned __int16 *)(gpsi + 8678LL);
    if ( v13 > 0x60 )
    {
      if ( v13 > 0x78 )
      {
        if ( v13 > 0x90 )
        {
          if ( v13 > 0xA8 )
          {
            v5 = 192;
            if ( v13 > 0xC0 )
            {
              if ( v13 > 0xF0 )
              {
                if ( v13 > 0x120 )
                  v5 = 224;
              }
              else
              {
                v5 = 160;
              }
            }
            else
            {
              v5 = 128;
            }
          }
          else
          {
            v5 = 96;
          }
        }
        else
        {
          v5 = 64;
        }
      }
    }
    else
    {
      v5 = 0;
    }
    v14 = atomDWMProp;
    a2[4] = v5 | v12;
    result = GetProp(v4, v14, 1);
    if ( result )
    {
      result = *(unsigned int *)result;
      if ( (result & 0x2000) != 0 )
      {
        result = 256LL;
        a2[4] = v15 | 0x100;
      }
    }
  }
  return result;
}
