/*
 * XREFs of wil::details::ScopeExitFn__lambda_7260c1cc97e808763e480021cff48eaf___::_ScopeExitFn__lambda_7260c1cc97e808763e480021cff48eaf___ @ 0x18005C864
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$8 @ 0x180037B84 (_BuildDeviceGraphForStream_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_7260c1cc97e808763e480021cff48eaf___::_ScopeExitFn__lambda_7260c1cc97e808763e480021cff48eaf___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_QWORD *)(result + 104) = 0LL;
  }
  return result;
}
