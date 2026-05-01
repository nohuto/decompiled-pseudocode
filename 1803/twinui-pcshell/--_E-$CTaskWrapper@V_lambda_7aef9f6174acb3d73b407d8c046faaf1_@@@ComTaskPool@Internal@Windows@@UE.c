/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_7aef9f6174acb3d73b407d8c046faaf1_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801173F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_7aef9f6174acb3d73b407d8c046faaf1_>::`vector deleting destructor'(
        void **a1,
        char a2)
{
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
