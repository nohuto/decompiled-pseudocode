/*
 * XREFs of ?SetBufferProperty@CPropertyBagMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C001F160
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     ?UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@_K@Z @ 0x1C001EC40 (-UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@_K@Z.c)
 *     ?AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@@Z @ 0x1C001ED38 (-AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@@Z.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CPropertyBagMarshaler::SetBufferProperty(
        DirectComposition::CPropertyBagMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        char *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v6; // ebx
  int v9; // r8d
  int updated; // eax
  char *v12; // rbp
  size_t v13; // r14
  char *v14; // rcx
  char *v15; // rdx
  size_t v16; // r8
  __int64 v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v19[80]; // [rsp+30h] [rbp-88h] BYREF

  v6 = 0;
  if ( Size < 0x10 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 == 1 && Size >= *((_QWORD *)this + 7) )
      {
        v12 = (char *)Win32AllocPoolWithQuota(Size, 0x78704344u);
        if ( !v12 )
          return (unsigned int)-1073741801;
        v13 = *((_QWORD *)this + 7);
        *((_QWORD *)this + 7) = Size;
        v14 = v12;
        if ( Size - 16 < v13 )
        {
          v16 = Size;
          v15 = a4;
        }
        else
        {
          memmove(v12, *((const void **)this + 6), v13);
          v15 = &a4[v13];
          v16 = *((_QWORD *)this + 7) - v13;
          v14 = &v12[v13];
        }
        memmove(v14, v15, v16);
        v17 = *((_QWORD *)this + 6);
        if ( v17 )
          Win32FreePool(v17);
        *((_QWORD *)this + 6) = v12;
        goto LABEL_8;
      }
    }
    else if ( Size <= 0x50 )
    {
      memmove(v19, a4, Size);
      updated = DirectComposition::CPropertyBagMarshaler::UpdatePropertyValue(
                  this,
                  (const struct PropertyUpdate *)v19,
                  Size);
      goto LABEL_6;
    }
    return (unsigned int)-1073741811;
  }
  if ( Size != 16 )
    return (unsigned int)-1073741811;
  v18 = *(_OWORD *)a4;
  updated = DirectComposition::CPropertyBagMarshaler::AddPropertyUpdate(this, (const struct PropertyUpdate *)&v18);
LABEL_6:
  v6 = updated;
  if ( updated >= 0 )
  {
    *((_DWORD *)this + 4) |= 0x20u;
LABEL_8:
    *a6 = 1;
  }
  return v6;
}
