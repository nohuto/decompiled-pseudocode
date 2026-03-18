/*
 * XREFs of FlushWEFCOMPOSITEDDCEBounds @ 0x1C01C51D0
 * Callers:
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x1C01C52D0 (InvalidateWEFCOMPOSITEDDCEs.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     UnionRect @ 0x1C00F8EC0 (UnionRect.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01C4EEC (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     ?PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01C5010 (-PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z.c)
 */

__int64 __fastcall FlushWEFCOMPOSITEDDCEBounds(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 Prop; // rax
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  struct tagWND *v6; // rcx
  struct tagRECT v7; // [rsp+20h] [rbp-28h] BYREF

  result = GreGetBounds(*(_QWORD *)(a1 + 8), &v7, 4LL);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 32);
    if ( (*(_BYTE *)(v3 + 67) & 0x10) != 0 )
    {
      Prop = GetProp(v3, atomLayer, 1);
      return UnionRect((_DWORD *)(Prop + 16), (int *)(Prop + 16), &v7.left);
    }
    else
    {
      IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
      v6 = *(struct tagWND **)(a1 + 32);
      if ( IsResourceAcquiredExclusiveLite )
        return InvalidateWEFCOMPOSITEDWindow(v6, (__m128i *)&v7);
      else
        return PostCOMPOSITEDInvalidateAPC(v6, &v7);
    }
  }
  return result;
}
