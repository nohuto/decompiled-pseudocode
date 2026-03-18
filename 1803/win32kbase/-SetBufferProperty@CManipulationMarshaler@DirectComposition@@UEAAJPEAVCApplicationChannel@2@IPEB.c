/*
 * XREFs of ?SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0149450
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?Add@?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1C0148D4C (-Add@-$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetBufferProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _WORD *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v8; // ebx
  unsigned __int64 v10; // rdi
  char *v11; // r12

  v8 = 0;
  *a6 = 0;
  if ( a3 == 7 )
  {
    if ( a4 && Size == 128 )
    {
      v8 = CStructDynamicArray<InjectManipulationArgs>::Add((__int64)this + 112, a4);
      if ( (v8 & 0x80000000) == 0 )
        *a6 = 1;
      return v8;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 18 )
  {
    if ( (Size & 7) == 0 )
    {
      v10 = Size >> 3;
      if ( (unsigned int)(Size >> 3) <= 2 )
      {
        if ( (_DWORD)v10 )
        {
          if ( a4 )
          {
LABEL_14:
            v11 = (char *)this + 672;
            if ( (_DWORD)v10 != *((_DWORD *)this + 167)
              || RtlCompareMemory((char *)this + 672, a4, 8LL * (unsigned int)v10) )
            {
              memmove(v11, a4, 8LL * (unsigned int)v10);
              *((_DWORD *)this + 167) = v10;
              *a6 = 1;
              *((_DWORD *)this + 4) |= 0x100u;
            }
            return v8;
          }
        }
        else if ( !a4 )
        {
          goto LABEL_14;
        }
      }
    }
    return 3221225485LL;
  }
  if ( a3 != 20 || Size - 3 > 0x1FD || !*a4 )
    return (unsigned int)-1073741811;
  memmove((char *)this + 136, a4, Size);
  *((_DWORD *)this + 33) = Size;
  *((_WORD *)this + (Size >> 1) + 68) = 0;
  *a6 = 1;
  *((_DWORD *)this + 4) |= 0x200u;
  return v8;
}
