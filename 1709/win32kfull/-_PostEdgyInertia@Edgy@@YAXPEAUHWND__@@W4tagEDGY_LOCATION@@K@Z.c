/*
 * XREFs of ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01D2A18
 * Callers:
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01D19B8 (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01D2B58 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 */

__int64 __fastcall Edgy::_PostEdgyInertia(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // di
  unsigned __int16 v5; // bx
  __int64 result; // rax

  v4 = a2;
  v5 = a3;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2, a3, a4);
  if ( result && *(char *)(result + 60) >= 0 && *(char *)(result + 59) >= 0 )
    return PostMessage(result, 573LL, 0LL, (struct _LARGE_STRING *)(v5 | (unsigned __int64)(v4 << 16)));
  return result;
}
