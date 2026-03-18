/*
 * XREFs of ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C020F81C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     CalcSBStuff @ 0x1C0077264 (CalcSBStuff.c)
 *     GetWndSBDisableFlags @ 0x1C0082EC0 (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01B5C04 (safe_cast_fnid_to_PSBWND.c)
 */

__int64 __fastcall HitTestScrollBar(struct tagWND *a1, unsigned int a2, struct tagPOINT a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // esi
  __int64 v9; // rbp
  int v10; // edi
  int v11; // ebx
  LONG y; // r12d
  _DWORD *v14; // rbp
  _BYTE v16[64]; // [rsp+30h] [rbp-78h] BYREF

  v5 = safe_cast_fnid_to_PSBWND((__int64)a1);
  v8 = 0;
  v9 = v5;
  if ( v5 )
  {
    v10 = *(_DWORD *)(v5 + 12);
    v11 = v7;
    y = a3.y;
  }
  else
  {
    if ( (*(_BYTE *)(v6 + 66) & 0x40) == 0 || a2 )
      v11 = a3.x - *(_DWORD *)(v6 + 128);
    else
      v11 = *(_DWORD *)(v6 + 136) - a3.x;
    y = a3.y - *(_DWORD *)(v6 + 132);
    LOBYTE(v10) = GetWndSBDisableFlags(v6, a2);
  }
  if ( (v10 & 3) == 3 )
    return 4294967294LL;
  if ( v9 )
  {
    v14 = (_DWORD *)(v9 + 16);
  }
  else
  {
    v14 = v16;
    CalcSBStuff((__int64)a1, (__int64)v16, a2);
  }
  if ( a2 )
    v11 = y;
  if ( v11 < v14[9] )
    return (v10 & 1) != 0 ? -2 : 60;
  if ( v11 >= v14[10] )
    return (v10 & 2) != 0 ? -2 : 61;
  if ( v11 < v14[13] )
    return 62LL;
  LOBYTE(v8) = v11 < v14[12];
  return (unsigned int)(v8 + 63);
}
