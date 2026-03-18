/*
 * XREFs of ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0018340
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C001F3B0 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetBufferProperty(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        const void *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v6; // ebx
  void *v10; // rax
  void *v11; // r14

  v6 = 0;
  *a6 = 0;
  if ( a3 == 19 )
  {
    if ( *((_QWORD *)this + 24) )
    {
      return (unsigned int)-1073741790;
    }
    else if ( Size == 24 * (Size / 0x18) )
    {
      v10 = (void *)Win32AllocPoolWithQuota(Size, 2019902276LL);
      v11 = v10;
      if ( v10 )
      {
        memmove(v10, a4, Size);
        *((_QWORD *)this + 24) = v11;
        *((_DWORD *)this + 50) = Size / 0x18;
        *a6 = 1;
        *((_DWORD *)this + 4) &= ~0x400u;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(this, a2, a3, a4, Size, a6);
  }
  return v6;
}
