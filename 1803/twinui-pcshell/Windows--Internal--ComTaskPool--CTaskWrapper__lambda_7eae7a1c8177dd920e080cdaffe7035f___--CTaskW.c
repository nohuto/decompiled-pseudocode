/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7eae7a1c8177dd920e080cdaffe7035f___::CTaskWrapper__lambda_7eae7a1c8177dd920e080cdaffe7035f_____lambda_7eae7a1c8177dd920e080cdaffe7035f___ @ 0x18014C22C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7eae7a1c8177dd920e080cdaffe7035f___ @ 0x18014C764 (Windows--Internal--ComTaskPool--QueueTask__lambda_7eae7a1c8177dd920e080cdaffe7035f___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7eae7a1c8177dd920e080cdaffe7035f___::CTaskWrapper__lambda_7eae7a1c8177dd920e080cdaffe7035f_____lambda_7eae7a1c8177dd920e080cdaffe7035f___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  *a1 = off_1803282E0;
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != v4 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  return a1;
}
