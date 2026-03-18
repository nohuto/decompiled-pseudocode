/*
 * XREFs of ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01CE864
 * Callers:
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01CD820 (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01CE9A4 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 */

__int64 __fastcall Edgy::_PostEdgyInertia(unsigned __int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  __int64 result; // rax

  result = HMValidateHandleNoSecure(a1, 1);
  if ( result && *(char *)(result + 60) >= 0 && *(char *)(result + 59) >= 0 )
    return PostMessage(result, 573LL, 0LL, (struct _LARGE_STRING *)(a3 | ((unsigned __int64)a2 << 16)));
  return result;
}
