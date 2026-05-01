/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b65209c995f1ff64cab6d619e0087d7___::CTaskWrapper__lambda_0b65209c995f1ff64cab6d619e0087d7_____lambda_0b65209c995f1ff64cab6d619e0087d7___ @ 0x1801C6528
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0b65209c995f1ff64cab6d619e0087d7___ @ 0x1801C73A0 (Windows--Internal--ComTaskPool--QueueTask__lambda_0b65209c995f1ff64cab6d619e0087d7___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b65209c995f1ff64cab6d619e0087d7___::CTaskWrapper__lambda_0b65209c995f1ff64cab6d619e0087d7_____lambda_0b65209c995f1ff64cab6d619e0087d7___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  *a1 = off_180332C88;
  v4 = a2 + 1;
  a1[2] = *a2;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  a1[4] = a2[2];
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1 + 4);
  return a1;
}
