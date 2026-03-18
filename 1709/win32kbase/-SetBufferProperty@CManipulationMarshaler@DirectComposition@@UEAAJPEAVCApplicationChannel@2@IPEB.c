/*
 * XREFs of ?SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01422F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     ?Add@?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1C0141BFC (-Add@-$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetBufferProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v6; // ebx
  unsigned __int64 v10; // rdi

  v6 = 0;
  *a6 = 0;
  if ( a3 == 7 )
  {
    if ( a4 && a5 == 128 )
    {
      v6 = CStructDynamicArray<InjectManipulationArgs>::Add((__int64)this + 96, a4);
      if ( v6 >= 0 )
        *a6 = 1;
      return (unsigned int)v6;
    }
  }
  else if ( a3 == 18 )
  {
    if ( (a5 & 7) == 0 )
    {
      v10 = a5 >> 3;
      if ( (unsigned int)(a5 >> 3) <= 2 )
      {
        if ( (_DWORD)v10 )
        {
          if ( a4 )
          {
LABEL_10:
            if ( (_DWORD)v10 != *((_DWORD *)this + 33)
              || RtlCompareMemory((char *)this + 136, a4, 8LL * (unsigned int)v10) )
            {
              memmove((char *)this + 136, a4, 8LL * (unsigned int)v10);
              *((_DWORD *)this + 33) = v10;
              *a6 = 1;
              *((_DWORD *)this + 4) |= 0x100u;
            }
            return (unsigned int)v6;
          }
        }
        else if ( !a4 )
        {
          goto LABEL_10;
        }
      }
    }
    return 3221225485LL;
  }
  return (unsigned int)-1073741811;
}
