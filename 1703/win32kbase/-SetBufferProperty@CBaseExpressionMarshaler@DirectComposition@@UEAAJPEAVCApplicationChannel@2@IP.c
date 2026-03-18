/*
 * XREFs of ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C001F3B0
 * Callers:
 *     ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0018340 (-SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 *     ?SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C001FC50 (-SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0143A84 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0143B04 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
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
  _DWORD *v11; // r15
  unsigned __int16 *v12; // rcx
  __int64 v13; // r8
  char v14; // dl
  _OWORD *v15; // rax
  unsigned int v16; // ecx
  int v17; // r9d
  __int128 v18; // [rsp+20h] [rbp-10h]

  v6 = 0;
  if ( a3 != 5 )
  {
    if ( a3 != 8 )
      return (unsigned int)-1073741811;
    if ( !*((_QWORD *)this + 11) )
    {
      if ( !a5 )
        return v6;
      v10 = Win32AllocPoolWithQuota(a5, 0x6E644344u);
      *((_QWORD *)this + 11) = v10;
      if ( v10 )
      {
        v11 = (_DWORD *)((char *)this + 96);
        if ( (int)StringCbLengthW(a4, a5, (unsigned __int64 *)this + 12) < 0
          || (v12 = (unsigned __int16 *)*((_QWORD *)this + 11), *v11 += 2, (int)StringCbCopyW(v12, a5, a4) < 0) )
        {
          v6 = -1073741811;
          Win32FreePool(*((_QWORD *)this + 11));
          *((_QWORD *)this + 11) = 0LL;
          *v11 = 0;
          return v6;
        }
        *((_DWORD *)this + 4) &= ~0x200u;
        goto LABEL_7;
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
    v13 = Win32AllocPoolWithQuota(12LL, 0x6D654344u);
    if ( v13 )
    {
      v14 = *((_BYTE *)a4 + 8);
      LODWORD(v18) = 1;
      BYTE4(v18) = *((_BYTE *)a4 + 4) < 5u ? *((_BYTE *)a4 + 4) : 0;
      *((_QWORD *)this + 9) = v13;
      BYTE8(v18) = v14;
      *(_QWORD *)v13 = v18;
      *(_DWORD *)(v13 + 8) = DWORD2(v18);
      goto LABEL_6;
    }
    return (unsigned int)-1073741801;
  }
  if ( a5 == 16 )
  {
    if ( *(_DWORD *)a4 != 2 )
      return (unsigned int)-1073741811;
    v15 = (_OWORD *)Win32AllocPoolWithQuota(16LL, 0x6D654344u);
    if ( v15 )
    {
      LOBYTE(v16) = *((_BYTE *)a4 + 4);
      LODWORD(v18) = 2;
      if ( (unsigned __int8)v16 > 0x10u || (v17 = 65631, BYTE4(v18) = *((_BYTE *)a4 + 4), !_bittest(&v17, v16)) )
        BYTE4(v18) = 0;
      *((_QWORD *)&v18 + 1) = *((_QWORD *)a4 + 1);
      *((_QWORD *)this + 9) = v15;
      *v15 = v18;
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
