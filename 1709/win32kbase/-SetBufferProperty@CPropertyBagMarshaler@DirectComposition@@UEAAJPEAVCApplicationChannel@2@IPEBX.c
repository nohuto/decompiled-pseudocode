/*
 * XREFs of ?SetBufferProperty@CPropertyBagMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C002AD70
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     ?UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@_K@Z @ 0x1C002A760 (-UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@_K@Z.c)
 *     ?AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@@Z @ 0x1C002A86C (-AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v21[80]; // [rsp+30h] [rbp-88h] BYREF

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
        v19 = *((_QWORD *)this + 6);
        if ( v19 )
          Win32FreePool(v19, v17, v18);
        *((_QWORD *)this + 6) = v12;
        goto LABEL_8;
      }
    }
    else if ( Size <= 0x50 )
    {
      memmove(v21, a4, Size);
      updated = DirectComposition::CPropertyBagMarshaler::UpdatePropertyValue(
                  this,
                  (const struct PropertyUpdate *)v21,
                  Size);
      goto LABEL_6;
    }
    return (unsigned int)-1073741811;
  }
  if ( Size != 16 )
    return (unsigned int)-1073741811;
  v20 = *(_OWORD *)a4;
  updated = DirectComposition::CPropertyBagMarshaler::AddPropertyUpdate(this, (const struct PropertyUpdate *)&v20);
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
