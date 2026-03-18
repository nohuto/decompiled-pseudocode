/*
 * XREFs of ?SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z @ 0x1C00130B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0005D50 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     DwmAsyncCreateDCompositionHwndTarget @ 0x1C00131B0 (DwmAsyncCreateDCompositionHwndTarget.c)
 *     IsWindowDesktopComposed @ 0x1C005AF30 (IsWindowDesktopComposed.c)
 *     ReferenceDwmApiPort @ 0x1C005C820 (ReferenceDwmApiPort.c)
 */

__int64 __fastcall CHwndTargetProp::SetSystemVisual(CHwndTargetProp *this, int a2, struct CompositionObject *a3)
{
  int DCompositionHwndTarget; // edi
  void *v7; // rax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  DCompositionHwndTarget = 0;
  if ( !*((_QWORD *)this + 4) && !(unsigned int)IsWindowDesktopComposed(*((_QWORD *)this + 1))
    || (DCompositionHwndTarget = CompositionObject::OpenDwmHandle(a3, &v9), DCompositionHwndTarget >= 0)
    && (v7 = (void *)ReferenceDwmApiPort(),
        DCompositionHwndTarget = DwmAsyncCreateDCompositionHwndTarget(v7),
        DCompositionHwndTarget >= 0) )
  {
    if ( a2 )
      *((_QWORD *)this + 2) = a3;
    else
      *((_QWORD *)this + 3) = a3;
    ObReferenceObjectByPointer(a3, 3u, ExCompositionObjectType, 0);
  }
  return (unsigned int)DCompositionHwndTarget;
}
