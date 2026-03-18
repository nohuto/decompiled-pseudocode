/*
 * XREFs of ?SetBufferProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0154C50
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CSpriteShapeMarshaler::SetBufferProperty(
        DirectComposition::CSpriteShapeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        rsize_t MaxCount)
{
  unsigned int v5; // ebx
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rcx
  void *v11; // rcx

  v5 = 0;
  if ( a3 == 9 && (a4 || !MaxCount) )
  {
    v8 = MaxCount >> 2;
    if ( (unsigned int)(MaxCount >> 2) > *((_DWORD *)this + 20) )
    {
      v9 = Win32AllocPoolWithQuota(MaxCount, 0x64734344u);
      if ( !v9 )
        return (unsigned int)-1073741801;
      v10 = *((_QWORD *)this + 9);
      if ( v10 )
        Win32FreePool(v10);
      *((_QWORD *)this + 9) = v9;
    }
    v11 = (void *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 10) = (unsigned int)v8;
    memcpy_s(v11, 4LL * (unsigned int)v8, a4, MaxCount);
    *((_DWORD *)this + 4) |= 0x400u;
    return v5;
  }
  return (unsigned int)-1073741811;
}
