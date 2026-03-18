/*
 * XREFs of _HasCaptionIcon @ 0x1C008B3E0
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00764D8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxGetMenuBarInfo @ 0x1C007C018 (xxxGetMenuBarInfo.c)
 *     SendDwmIconChange @ 0x1C008B294 (SendDwmIconChange.c)
 *     FindNCHit @ 0x1C0111248 (FindNCHit.c)
 *     xxxDrawCaptionTemp @ 0x1C013C3E8 (xxxDrawCaptionTemp.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02070B4 (xxxMNFindWindowFromPoint.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 */

__int64 __fastcall HasCaptionIcon(__int64 a1)
{
  unsigned int v2; // ebx
  char v3; // cl
  __int64 v5; // rax
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 Prop; // rax
  int v9; // r8d
  __int64 v10; // r11

  v2 = 0;
  v3 = *(_BYTE *)(a1 + 64);
  if ( v3 < 0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 70) & 0xC0) != 0x40 && (v3 & 1) == 0 )
    return 1LL;
  if ( (*(_BYTE *)(a1 + 61) & 2) == 0 && *(_WORD *)(*(_QWORD *)(a1 + 168) + 8LL) == 0x8002 )
    return 0LL;
  Prop = GetProp(a1, *(_WORD *)(gpsi + 1356LL), 1);
  if ( !Prop )
  {
    v5 = GetProp(v10, *(_WORD *)(gpsi + 1358LL), v9);
    if ( v5 && v5 != *(_QWORD *)(gpsi + 6976LL) )
      return 1LL;
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 168) + 168LL);
    if ( v7 )
    {
      if ( v7 != *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)(gpsi + 6968LL)) )
        return 1LL;
    }
    return 0LL;
  }
  LOBYTE(v2) = Prop != *(_QWORD *)(gpsi + 6968LL);
  return v2;
}
