/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_9888ee29221e6d6bd53d80d31d373ecc_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18004D580
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_9888ee29221e6d6bd53d80d31d373ecc_>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
