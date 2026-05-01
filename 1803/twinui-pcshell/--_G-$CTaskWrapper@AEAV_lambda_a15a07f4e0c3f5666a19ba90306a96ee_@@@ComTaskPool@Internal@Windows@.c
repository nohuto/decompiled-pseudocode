/*
 * XREFs of ??_G?$CTaskWrapper@AEAV_lambda_a15a07f4e0c3f5666a19ba90306a96ee_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180129460
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_a15a07f4e0c3f5666a19ba90306a96ee_ &>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
