/*
 * XREFs of ?SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0148400
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     ?SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0147540 (-SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 */

__int64 __fastcall DirectComposition::CTableTransferEffectMarshaler::SetBufferProperty(
        DirectComposition::CTableTransferEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v6; // ebx
  __int64 *v8; // rdi
  void *v9; // rax
  __int64 v10; // rbp

  v6 = 0;
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        v8 = (__int64 *)((char *)this + 104);
        break;
      case 2:
        v8 = (__int64 *)((char *)this + 120);
        break;
      case 3:
        v8 = (__int64 *)((char *)this + 136);
        break;
      default:
        return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetBufferProperty(this, a2, a3, a4, Size, a6);
    }
  }
  else
  {
    v8 = (__int64 *)((char *)this + 88);
  }
  if ( v8 )
  {
    if ( (Size & 3) != 0 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v9 = (void *)Win32AllocPoolWithQuota(Size, 0x62664344u);
      v10 = (__int64)v9;
      if ( v9 )
      {
        memmove(v9, a4, Size);
        if ( *v8 )
          Win32FreePool(*v8);
        *v8 = v10;
        v8[1] = (unsigned int)(Size >> 2);
        *a6 = 1;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v6;
}
