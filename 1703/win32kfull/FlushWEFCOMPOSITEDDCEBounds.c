/*
 * XREFs of FlushWEFCOMPOSITEDDCEBounds @ 0x1C01C1FF0
 * Callers:
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x1C01C20F0 (InvalidateWEFCOMPOSITEDDCEs.c)
 * Callees:
 *     UnionRect @ 0x1C0020BD4 (UnionRect.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01C16AC (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     ?PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01C17D0 (-PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z.c)
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
      return UnionRect((_DWORD *)(Prop + 16), (_DWORD *)(Prop + 16), &v7);
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
