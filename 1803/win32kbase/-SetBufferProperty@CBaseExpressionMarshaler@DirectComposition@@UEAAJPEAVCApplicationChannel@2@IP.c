/*
 * XREFs of ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C000A260
 * Callers:
 *     ?SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0008EB0 (-SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0009880 (-SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C014B0E4 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C014B170 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const unsigned __int16 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  _OWORD *v12; // rax
  unsigned __int64 v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0;
  if ( a3 != 5 )
  {
    if ( a3 != 8 )
      return (unsigned int)-1073741811;
    if ( !*((_QWORD *)this + 14) && a5 <= 0x7D0 )
    {
      if ( !a5 )
        return v6;
      v10 = Win32AllocPoolWithQuota(a5, 1852392260LL);
      *((_QWORD *)this + 14) = v10;
      if ( v10 )
      {
        v13[0] = 0LL;
        if ( (int)StringCbLengthW(a4, a5, v13) >= 0
          && v13[0] + 2 == a5
          && (int)StringCbCopyW(*((unsigned __int16 **)this + 14), a5, a4) >= 0 )
        {
          *((_DWORD *)this + 4) &= ~0x200u;
          goto LABEL_7;
        }
        Win32FreePool(*((_QWORD *)this + 14));
        *((_QWORD *)this + 14) = 0LL;
        return (unsigned int)-1073741811;
      }
      return (unsigned int)-1073741801;
    }
    return (unsigned int)-1073741790;
  }
  if ( *((_QWORD *)this + 9) )
    return (unsigned int)-1073741790;
  if ( a5 == 12 )
  {
    if ( *(_DWORD *)a4 != 1 )
      return (unsigned int)-1073741811;
    v11 = Win32AllocPoolWithQuota(12LL, 1835352900LL);
    if ( v11 )
    {
      *((_QWORD *)this + 9) = v11;
      *(_QWORD *)v11 = *(_QWORD *)a4;
      *(_DWORD *)(v11 + 8) = *((_DWORD *)a4 + 2);
      goto LABEL_6;
    }
    return (unsigned int)-1073741801;
  }
  if ( a5 == 16 )
  {
    if ( *(_DWORD *)a4 != 2 )
      return (unsigned int)-1073741811;
    v12 = (_OWORD *)Win32AllocPoolWithQuota(16LL, 1835352900LL);
    if ( v12 )
    {
      *((_QWORD *)this + 9) = v12;
      *v12 = *(_OWORD *)a4;
      goto LABEL_6;
    }
    return (unsigned int)-1073741801;
  }
  if ( a5 )
    return (unsigned int)-1073741811;
LABEL_6:
  *((_DWORD *)this + 4) &= ~0x40u;
LABEL_7:
  *a6 = 1;
  return v6;
}
