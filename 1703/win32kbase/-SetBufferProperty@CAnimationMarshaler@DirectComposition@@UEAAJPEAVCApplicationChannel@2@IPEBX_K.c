/*
 * XREFs of ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00261B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@@Z @ 0x1C0019820 (-AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@.c)
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     ?EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ @ 0x1C0026494 (-EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::SetBufferProperty(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v6; // ebx
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  __int64 v17; // rax
  _QWORD *v18; // rsi
  unsigned __int64 v19; // r15
  _QWORD *v20; // rax
  unsigned int v21; // ecx
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  _OWORD *v24; // rax

  v6 = 0;
  *a6 = 0;
  v10 = a3 - 4;
  if ( !v10 )
  {
    if ( Size == 8 && !*((_QWORD *)this + 15) )
    {
      *((_QWORD *)this + 11) = *a4;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v6 = Size != 8 ? 0xC000000D : 0;
    if ( Size == 8 )
    {
      v17 = *a4;
      *((_DWORD *)this + 4) |= 0x20u;
      *((_QWORD *)this + 12) = v17;
    }
    return v6;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    if ( Size == 16 )
    {
      if ( *((_QWORD *)this + 16) )
        return (unsigned int)-1073741790;
      v24 = (_OWORD *)Win32AllocPoolWithQuota(16LL, 0x67614344u);
      *((_QWORD *)this + 16) = v24;
      if ( v24 )
      {
        *v24 = *(_OWORD *)a4;
        goto LABEL_17;
      }
      return (unsigned int)-1073741801;
    }
    return (unsigned int)-1073741811;
  }
  v13 = v12 - 3;
  if ( !v13 )
  {
    if ( Size == 8 )
    {
      *((_QWORD *)this + 18) = *a4;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  v14 = v13 - 2;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( !v15 )
    {
      if ( Size == 8 && (*((_BYTE *)this + 184) & 2) != 0 )
        v6 = DirectComposition::CAnimationMarshaler::EnsureTimeListEntry((DirectComposition::CAnimationMarshaler *)((char *)this - 16));
      else
        v6 = -1073741811;
      if ( (v6 & 0x80000000) == 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 7) + 24LL) |= 0x10u;
        *(_QWORD *)(*((_QWORD *)this + 7) + 32LL) = *a4;
        *(_QWORD *)(*((_QWORD *)this + 7) + 40LL) = 0LL;
        DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
          a2,
          *((struct DirectComposition::CAnimationTimeList **)this + 7));
        *((_DWORD *)this + 4) |= 0x8000u;
LABEL_17:
        *a6 = 1;
        return v6;
      }
      return v6;
    }
    if ( v15 == 1 && (Size & 0xF) == 0 && (*((_BYTE *)this + 184) & 2) != 0 )
    {
      v18 = 0LL;
      LODWORD(v19) = 0;
      if ( !Size )
        goto LABEL_27;
      v20 = (_QWORD *)Win32AllocPoolWithQuota(Size, 0x65614344u);
      v18 = v20;
      if ( v20 )
      {
        memmove(v20, a4, Size);
        v21 = 1;
        v19 = Size >> 4;
        if ( (unsigned int)(Size >> 4) > 1 )
        {
          v23 = v18 + 2;
          while ( *v23 >= v18[2 * v21 - 2] )
          {
            ++v21;
            v23 += 2;
            if ( v21 >= (unsigned int)v19 )
              goto LABEL_27;
          }
          v6 = -1073741811;
          Win32FreePool(v18);
          return v6;
        }
LABEL_27:
        v22 = *((_QWORD *)this + 27);
        if ( v22 )
        {
          Win32FreePool(v22);
          *((_DWORD *)this + 4) |= 0x10000u;
        }
        *((_DWORD *)this + 57) = 0;
        *((_QWORD *)this + 27) = v18;
        *((_DWORD *)this + 56) = v19;
        goto LABEL_17;
      }
      return (unsigned int)-1073741801;
    }
    return (unsigned int)-1073741811;
  }
  if ( Size == 1 && (*((_BYTE *)this + 184) & 2) != 0 )
    v6 = DirectComposition::CAnimationMarshaler::EnsureTimeListEntry((DirectComposition::CAnimationMarshaler *)((char *)this - 16));
  else
    v6 = -1073741811;
  if ( (v6 & 0x80000000) == 0 )
  {
    *(_DWORD *)(*((_QWORD *)this + 7) + 24LL) |= 8u;
    *(_BYTE *)(*((_QWORD *)this + 7) + 28LL) = *(_BYTE *)a4;
    DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
      a2,
      *((struct DirectComposition::CAnimationTimeList **)this + 7));
    *((_DWORD *)this + 4) |= 0x4000u;
    goto LABEL_17;
  }
  return v6;
}
