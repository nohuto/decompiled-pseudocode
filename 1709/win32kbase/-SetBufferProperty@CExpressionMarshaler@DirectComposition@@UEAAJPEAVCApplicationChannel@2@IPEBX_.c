/*
 * XREFs of ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C002D740
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C002B2D0 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C01434D4 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0143554 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetBufferProperty(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        size_t Size,
        bool *a6)
{
  bool *v6; // r14
  unsigned int v7; // ebx
  void *v11; // rax
  void *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  if ( a3 == 21 )
  {
    if ( !*((_QWORD *)this + 26) )
    {
      if ( Size != 24 * (Size / 0x18) )
        return (unsigned int)-1073741811;
      v11 = (void *)Win32AllocPoolWithQuota(Size, 0x78654344u);
      v12 = v11;
      if ( v11 )
      {
        memmove(v11, a4, Size);
        *((_QWORD *)this + 26) = v12;
        *((_DWORD *)this + 54) = Size / 0x18;
        *v6 = 1;
        *((_DWORD *)this + 4) &= ~0x800u;
        return v7;
      }
      return (unsigned int)-1073741801;
    }
    return (unsigned int)-1073741790;
  }
  if ( a3 == 22 )
  {
    if ( !*((_QWORD *)this + 28) && Size <= 0x7D0 )
    {
      if ( !Size )
        return v7;
      v13 = Win32AllocPoolWithQuota(Size, 0x6E644344u);
      *((_QWORD *)this + 28) = v13;
      if ( v13 )
      {
        a6 = 0LL;
        if ( (int)StringCbLengthW((const unsigned __int16 *)a4, Size, (unsigned __int64 *)&a6) >= 0
          && a6 + 2 == (bool *)Size
          && (int)StringCbCopyW(*((unsigned __int16 **)this + 28), Size, (const unsigned __int16 *)a4) >= 0 )
        {
          *((_DWORD *)this + 4) &= ~0x1000u;
          *v6 = 1;
          return v7;
        }
        Win32FreePool(*((_QWORD *)this + 28), v14, v15);
        *((_QWORD *)this + 28) = 0LL;
        return (unsigned int)-1073741811;
      }
      return (unsigned int)-1073741801;
    }
    return (unsigned int)-1073741790;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(
                         this,
                         a2,
                         a3,
                         (const unsigned __int16 *)a4,
                         Size,
                         v6);
}
