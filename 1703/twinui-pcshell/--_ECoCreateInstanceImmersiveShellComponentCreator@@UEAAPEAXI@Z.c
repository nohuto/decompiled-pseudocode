/*
 * XREFs of ??_ECoCreateInstanceImmersiveShellComponentCreator@@UEAAPEAXI@Z @ 0x1800CB0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180194C3C (--3@YAXPEAX@Z.c)
 */

CoCreateInstanceImmersiveShellComponentCreator *__fastcall CoCreateInstanceImmersiveShellComponentCreator::`vector deleting destructor'(
        CoCreateInstanceImmersiveShellComponentCreator *this,
        char a2)
{
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
