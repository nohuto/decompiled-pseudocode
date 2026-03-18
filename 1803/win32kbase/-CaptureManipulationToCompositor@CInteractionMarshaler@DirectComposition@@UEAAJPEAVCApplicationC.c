/*
 * XREFs of ?CaptureManipulationToCompositor@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@II_K@Z @ 0x1C014B4D0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0149278 (-Grow@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::CaptureManipulationToCompositor(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  char *v5; // rdi
  int v6; // ebx
  _OWORD *v7; // rax
  __int128 v9; // [rsp+20h] [rbp-18h]

  v5 = (char *)this + 280;
  *((_QWORD *)&v9 + 1) = a5;
  v6 = 0;
  *(_QWORD *)&v9 = __PAIR64__(a4, a3);
  if ( *((_DWORD *)this + 72) != *((_DWORD *)this + 73)
    || (v6 = CDynamicArray<InjectManipulationArgs *,2003858261>::Grow((__int64)this + 280), v6 >= 0) )
  {
    if ( *((_DWORD *)v5 + 2) >= *((_DWORD *)v5 + 3) )
      v6 = -1073741823;
    if ( v6 >= 0 )
    {
      v7 = Win32AllocPoolZInit(0x10uLL, 0x64734344u);
      if ( !v7 )
        v6 = -1073741801;
      if ( v6 >= 0 )
      {
        *v7 = v9;
        *(_QWORD *)(*(_QWORD *)v5 + 8LL * (unsigned int)(*((_DWORD *)v5 + 2))++) = v7;
      }
    }
  }
  return (unsigned int)v6;
}
