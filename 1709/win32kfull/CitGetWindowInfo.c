/*
 * XREFs of CitGetWindowInfo @ 0x1C01090E0
 * Callers:
 *     <none>
 * Callees:
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall CitGetWindowInfo(__int64 a1, _WORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int16 v5; // bx
  __int64 v6; // rax
  char v7; // al
  char v8; // dl
  unsigned __int8 v9; // cl
  unsigned __int8 v10; // r8
  __int16 v11; // r11
  unsigned int v12; // eax
  __int16 v13; // dx
  __int16 v14; // r11
  struct tagRECT *Prop; // rax
  struct tagRECT v16; // [rsp+20h] [rbp-38h] BYREF

  result = GetTopLevelWindow(a1);
  v4 = result;
  if ( result )
  {
    v5 = 32;
    v16 = *(struct tagRECT *)(result + 128);
    if ( (*(_BYTE *)(result + 71) & 0x20) != 0 )
    {
      Prop = (struct tagRECT *)GetProp(result, atomCheckpointProp, 1);
      if ( Prop )
        v16 = *Prop;
    }
    LogicalToPhysicalDPIRect(&v16, &v16, *(unsigned int *)(v4 + 368), 0LL);
    *a2 = LOWORD(v16.right) - LOWORD(v16.left);
    a2[1] = LOWORD(v16.bottom) - LOWORD(v16.top);
    v6 = MonitorFromRect(&v16, 1u, 0x12u);
    if ( v6 )
      CitGetMonitorInfo(v6, a2);
    v7 = *(_BYTE *)(v4 + 71);
    if ( (v7 & 0x20) != 0 )
    {
      v9 = 1;
    }
    else if ( (v7 & 1) != 0 )
    {
      v9 = 2;
    }
    else
    {
      v8 = *(_BYTE *)(v4 + 305);
      v9 = 3;
      if ( (v8 & 3) == 3 )
      {
        v9 = 5;
      }
      else if ( (v8 & 1) == 0 )
      {
        if ( (v8 & 2) != 0 )
        {
          v9 = 4;
        }
        else
        {
          v9 = 0;
          if ( (*(_BYTE *)(v4 + 307) & 1) != 0 )
            v9 = 6;
        }
      }
    }
    v10 = 0;
    if ( (*(_DWORD *)(v4 + 368) & 0xF) == 1 )
    {
      v10 = 1;
    }
    else if ( (*(_DWORD *)(v4 + 368) & 0xF) == 2 )
    {
      v10 = 2;
    }
    v11 = v9 | (unsigned __int16)(8 * v10);
    a2[4] = v11;
    v12 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 400LL) + 284LL);
    if ( v12 > 0x60 )
    {
      if ( v12 > 0x78 )
      {
        if ( v12 > 0x90 )
        {
          if ( v12 > 0xA8 )
          {
            v5 = 192;
            if ( v12 > 0xC0 )
            {
              if ( v12 > 0xF0 )
              {
                if ( v12 > 0x120 )
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
    v13 = atomDWMProp;
    a2[4] = v5 | v11;
    result = GetProp(v4, v13, 1);
    if ( result )
    {
      result = *(unsigned int *)result;
      if ( (result & 0x2000) != 0 )
      {
        result = 256LL;
        a2[4] = v14 | 0x100;
      }
    }
  }
  return result;
}
