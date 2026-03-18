/*
 * XREFs of _HasCaptionIcon @ 0x1C001D908
 * Callers:
 *     SendDwmIconChange @ 0x1C001D7AC (SendDwmIconChange.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D980 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxGetMenuBarInfo @ 0x1C00C2D68 (xxxGetMenuBarInfo.c)
 *     FindNCHit @ 0x1C0106D94 (FindNCHit.c)
 *     xxxDrawCaptionTemp @ 0x1C0138108 (xxxDrawCaptionTemp.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0205474 (xxxMNFindWindowFromPoint.c)
 * Callees:
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

__int64 __fastcall HasCaptionIcon(__int64 a1)
{
  char v2; // cl
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // r8
  __int64 Prop; // rax
  __int64 v8; // r8
  __int64 v9; // r10
  unsigned int v10; // r11d

  v2 = *(_BYTE *)(a1 + 64);
  if ( v2 < 0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 70) & 0xC0) != 0x40 && (v2 & 1) == 0 )
    return 1LL;
  if ( (*(_BYTE *)(a1 + 61) & 2) == 0 && *(_WORD *)(*(_QWORD *)(a1 + 168) + 8LL) == 0x8002 )
    return 0LL;
  Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1356LL), 1LL);
  if ( !Prop )
  {
    v4 = GetProp(v9, *(unsigned __int16 *)(gpsi + 1358LL), v8);
    if ( v4 && v4 != *(_QWORD *)(gpsi + 5680LL) )
      return 1LL;
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 168) + 160LL);
    if ( v6 )
    {
      if ( v6 != *(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)*(_DWORD *)(gpsi + 5672LL)) )
        return 1LL;
    }
    return 0LL;
  }
  LOBYTE(v10) = Prop != *(_QWORD *)(gpsi + 5672LL);
  return v10;
}
