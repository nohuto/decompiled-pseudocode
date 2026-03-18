/*
 * XREFs of ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C0080A38
 * Callers:
 *     _ExcludeUpdateRgn @ 0x1C0080120 (_ExcludeUpdateRgn.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C005EF84 (GetMonitorRectForDpi.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     GetScreenRectForWindow @ 0x1C023A808 (GetScreenRectForWindow.c)
 */

void __fastcall CalcVirtualScreenClipRegion(HRGN a1, struct tagWND *a2)
{
  __int64 v4; // rax
  unsigned __int16 v5; // di
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 DispInfo; // rax
  __m128i *MonitorRectForDpi; // rax
  __int64 EmptyRgn; // rbp
  __int64 i; // rbx
  __m128i v13; // [rsp+20h] [rbp-48h] BYREF
  __m128i v14; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 432LL);
  if ( v4 && (*(_DWORD *)(**(_QWORD **)(v4 + 8) + 52LL) & 1) != 0 && (v5 = (*((_DWORD *)a2 + 92) >> 8) & 0x1FF) != 0 )
  {
    SetEmptyRgn(a1);
    if ( *(_DWORD *)*gpDispInfo == 1 )
    {
      DispInfo = GetDispInfo();
      MonitorRectForDpi = GetMonitorRectForDpi(&v13, *(_QWORD *)(DispInfo + 88), v5);
LABEL_6:
      v14 = *MonitorRectForDpi;
      SetRectRgnIndirect(a1, &v14);
      return;
    }
    EmptyRgn = CreateEmptyRgn(gpDispInfo, v6, v7, v8);
    if ( !EmptyRgn )
    {
      MonitorRectForDpi = (__m128i *)GetScreenRectForWindow(&v13, a2);
      goto LABEL_6;
    }
    for ( i = *(_QWORD *)(gpDispInfo + 96LL); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v14 = *GetMonitorRectForDpi(&v13, i, v5);
        SetRectRgnIndirect(EmptyRgn, &v14);
        GreCombineRgn(a1, a1, EmptyRgn, 2LL);
      }
    }
    GreDeleteObject(EmptyRgn);
  }
  else
  {
    GreCombineRgn(a1, *(_QWORD *)(gpDispInfo + 112LL), 0LL, 5LL);
  }
}
