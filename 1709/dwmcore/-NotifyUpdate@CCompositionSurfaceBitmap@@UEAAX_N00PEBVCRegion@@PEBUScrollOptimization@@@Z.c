/*
 * XREFs of ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1800289A0
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18004AEE0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180028408 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?NotifyOnChangeCompleted@CCompositionSurfaceBitmap@@UEAAXXZ @ 0x180029780 (-NotifyOnChangeCompleted@CCompositionSurfaceBitmap@@UEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9E20 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceBitmap::NotifyUpdate(
        CCompositionSurfaceBitmap *this,
        char a2,
        char a3,
        char a4,
        const struct CRegion *a5,
        const struct ScrollOptimization *a6)
{
  int v9; // eax
  _DWORD *v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  void (__fastcall *v18)(_DWORD *, unsigned __int64, __int64, _DWORD *); // rax
  void (__fastcall *v19)(CCompositionSurfaceBitmap *__hidden); // rax

  *((_QWORD *)this + 10) = 0LL;
  if ( a2 )
    CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)((char *)this - 72), 1);
  if ( a3 || a4 )
  {
    CResource::NotifyOnChanged((char *)this - 72, a3 != 0 ? 6 : 0, 0LL);
  }
  else
  {
    *((_QWORD *)this + 4) = a5;
    if ( a6 )
    {
      *(_OWORD *)((char *)this + 40) = *(_OWORD *)a6;
      *((_QWORD *)this + 7) = *((_QWORD *)a6 + 2);
      *((_DWORD *)this + 16) = *((_DWORD *)a6 + 6);
    }
    v9 = *((_DWORD *)this - 10);
    v10 = (_DWORD *)((char *)this - 72);
    v10[8] = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(v9 + 2)) & 6;
    if ( (((unsigned __int8)v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(v9 + 2)) & 6) & 6) == 2
      && (*(unsigned int (__fastcall **)(_DWORD *, __int64, _DWORD *))(*(_QWORD *)v10 + 144LL))(v10, 1LL, v10) )
    {
      v11 = *((_QWORD *)v10 + 3);
      if ( (v11 & 2) != 0 )
        v11 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v11) = v11 & 1;
      if ( (_DWORD)v11 )
      {
        v12 = 0LL;
        v13 = (unsigned int)v11;
        v14 = 16LL;
        do
        {
          v15 = *((_QWORD *)v10 + 3);
          if ( (v15 & 2) != 0 )
            v16 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v16 = *((_QWORD *)v10 + 3) & 1LL;
          if ( v12 >= v16 )
          {
            v17 = 0LL;
          }
          else
          {
            v17 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v16 != 1 )
              v17 = *(_QWORD *)(v17 + v14);
          }
          v18 = *(void (__fastcall **)(_DWORD *, unsigned __int64, __int64, _DWORD *))(*(_QWORD *)v10 + 72LL);
          if ( (char *)v18 == (char *)CResource::NotifyListenerOfChange )
            CResource::NotifyListenerOfChange(v10, v17, 1LL, v10);
          else
            v18(v10, v17, 1LL, v10);
          ++v12;
          v14 += 8LL;
          --v13;
        }
        while ( v13 );
      }
    }
    v19 = *(void (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v10 + 80LL);
    if ( v19 == CCompositionSurfaceBitmap::NotifyOnChangeCompleted )
      CCompositionSurfaceBitmap::NotifyOnChangeCompleted((CCompositionSurfaceBitmap *)v10);
    else
      v19((CCompositionSurfaceBitmap *)v10);
    v10[8] ^= (v10[8] ^ (2 * (v10[8] >> 1) - 2)) & 6;
  }
}
