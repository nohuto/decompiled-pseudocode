/*
 * XREFs of NtQueryCompositionInputQueueAndTransform @ 0x1C000FF20
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00105C8 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00106C8 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0010B70 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtQueryCompositionInputQueueAndTransform(void *a1, unsigned int a2, unsigned __int64 a3, _OWORD *a4)
{
  int InputQueueForInputType; // ebx
  PVOID Object; // [rsp+20h] [rbp-B8h] BYREF
  _OWORD v11[4]; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD v12[3]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v13; // [rsp+A0h] [rbp-38h]

  InputQueueForInputType = 0;
  if ( !UserIsCurrentProcessDwm() )
    InputQueueForInputType = -1073741790;
  if ( InputQueueForInputType >= 0 )
  {
    InputQueueForInputType = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
    if ( InputQueueForInputType >= 0 )
      InputQueueForInputType = CompositionInputObject::QueryInputQueueForInputType(Object, a2, v12);
    if ( InputQueueForInputType >= 0 )
      InputQueueForInputType = CompositionInputObject::QueryTransform(
                                 (CompositionInputObject *)Object,
                                 (struct tagINPUT_TRANSFORM *)v11);
    if ( Object )
      ObfDereferenceObject(Object);
    if ( InputQueueForInputType >= 0 )
    {
      if ( a3 + 56 < a3 || a3 + 56 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)a3 = v12[0];
      *(_OWORD *)(a3 + 16) = v12[1];
      *(_OWORD *)(a3 + 32) = v12[2];
      *(_QWORD *)(a3 + 48) = v13;
      if ( a4 + 4 < a4 || (unsigned __int64)(a4 + 4) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a4 = v11[0];
      a4[1] = v11[1];
      a4[2] = v11[2];
      a4[3] = v11[3];
    }
  }
  return (unsigned int)InputQueueForInputType;
}
