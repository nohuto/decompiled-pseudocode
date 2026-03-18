/*
 * XREFs of ??1CHwSurfaceRenderTargetSharedData@@IEAA@XZ @ 0x18004AA0C
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x180078EA0 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 * Callees:
 *     ??_GCHwBitmapBrush@@UEAAPEAXI@Z @ 0x18004D440 (--_GCHwBitmapBrush@@UEAAPEAXI@Z.c)
 *     ??_ECHwSolidBrush@@UEAAPEAXI@Z @ 0x1800C3C50 (--_ECHwSolidBrush@@UEAAPEAXI@Z.c)
 *     ?Release@CHwBrushPoolManager@@QEAAXXZ @ 0x1800C97D8 (-Release@CHwBrushPoolManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwSurfaceRenderTargetSharedData::~CHwSurfaceRenderTargetSharedData(
        CHwSurfaceRenderTargetSharedData *this)
{
  __int64 v2; // rcx
  CHwSolidBrush *v3; // rcx
  CHwBrushPoolManager *v4; // rcx
  CHwBitmapBrush *v5; // rcx
  ULONG v6; // ebx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (CHwSolidBrush *)*((_QWORD *)this + 1);
  if ( v3 )
    CHwSolidBrush::`vector deleting destructor'(v3, 1u);
  v4 = (CHwBrushPoolManager *)*((_QWORD *)this + 2);
  if ( v4 )
    CHwBrushPoolManager::Release(v4);
  v5 = (CHwBitmapBrush *)*((_QWORD *)this + 3);
  if ( v5 )
    CHwBitmapBrush::`scalar deleting destructor'(v5, 1u);
  v6 = *(_DWORD *)this;
  if ( v6 != -1 )
  {
    EnterCriticalSection(&g_ResourceCacheIndexManager);
    RtlClearBits(&BitMapHeader, v6, 1u);
    LeaveCriticalSection(&g_ResourceCacheIndexManager);
  }
}
