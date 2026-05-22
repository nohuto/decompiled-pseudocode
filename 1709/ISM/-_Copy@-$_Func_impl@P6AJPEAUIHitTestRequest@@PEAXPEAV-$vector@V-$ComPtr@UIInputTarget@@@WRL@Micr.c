/*
 * XREFs of ?_Copy@?$_Func_impl@P6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@ZV?$allocator@H@3@JPEAU1@PEAXPEAV23@@std@@EEBAPEAV?$_Func_base@JPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@2@PEAX@Z @ 0x180005670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl<long (*)(IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *),std::allocator<int>,long,IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *>::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  if ( a2 )
  {
    *a2 = &std::_Func_impl<long (*)(IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *),std::allocator<int>,long,IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *>::`vftable';
    a2[1] = *(_QWORD *)(a1 + 8);
  }
  return a2;
}
