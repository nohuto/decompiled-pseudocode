/*
 * XREFs of ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C0012064
 * Callers:
 *     NtBindCompositionSurface @ 0x1C000C700 (NtBindCompositionSurface.c)
 *     ?Bind@CCompositionSurface@@UEAAJAEBUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C004C8D0 (-Bind@CCompositionSurface@@UEAAJAEBUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 * Callees:
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@Z @ 0x1C000A234 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@.c)
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C0011D0C (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0011E5C (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x1C004C728 (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C004CA0C (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 */

__int64 __fastcall CCompositionSurface::Bind(
        CCompositionSurface *this,
        const struct CSM_BUFFER_INFO *a2,
        char a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  struct CFlipExBuffer *v5; // rsi
  __int64 v8; // rdx
  signed int v9; // ebx
  __int64 v10; // r10
  bool v11; // r11
  struct CCompositionBuffer *v12; // rbp
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 *v17; // rax
  signed int v19; // eax
  struct CCompositionBuffer *v20; // [rsp+20h] [rbp-28h] BYREF
  struct CFlipExBuffer *v21; // [rsp+50h] [rbp+8h] BYREF

  v20 = 0LL;
  v5 = 0LL;
  v21 = 0LL;
  v9 = CCompositionSurface::GetActiveBuffer(this) != 0LL ? 0xC0000001 : 0;
  if ( *((_QWORD *)this + 13) && *(_DWORD *)v8 != 2 )
    v9 = -1073741790;
  if ( v9 >= 0 )
  {
    if ( *(_DWORD *)v8 == 1 )
    {
      v19 = CCompositionBuffer::Create(
              (const struct CSM_BUFFER_ATTRIBUTES *)(v10 + 16),
              (const struct CSM_SINGLE_BUFFER_INFO *)(v8 + 136),
              &v20);
      v12 = v20;
      v9 = v19;
LABEL_7:
      if ( v9 >= 0 )
      {
        if ( !a3 )
          CCompositionSurface::ReleaseAllBuffers(this);
        v13 = (_QWORD *)((char *)this + 72);
        v14 = *((_QWORD *)this + 9);
        v15 = (_QWORD *)((char *)v12 + 24);
        if ( *(CCompositionSurface **)(v14 + 8) != (CCompositionSurface *)((char *)this + 72) )
          __fastfail(3u);
        *((_QWORD *)v12 + 4) = v13;
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        *v13 = v15;
        ++*((_QWORD *)this + 7);
        ++*((_DWORD *)this + 22);
        v16 = *((_QWORD *)this + 7);
        *((_QWORD *)v12 + 1) = *((_QWORD *)this - 1);
        v17 = a5;
        *((_QWORD *)v12 + 2) = v16;
        *((_BYTE *)v12 + 40) = 1;
        *v17 = *((_QWORD *)this + 7);
        if ( *((_QWORD *)this + 13) )
        {
          if ( v5 )
          {
            v9 = CCompositionSurface::PairBind(this, v5);
            if ( v9 < 0 )
              (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8, 0LL);
          }
        }
      }
      return (unsigned int)v9;
    }
    if ( *(_DWORD *)v8 != 2 )
      return (unsigned int)-1073741811;
    v9 = CFlipExBuffer::Create(
           (const struct CSM_BUFFER_ATTRIBUTES *)(v10 + 16),
           (const struct CSM_SWAPCHAIN_BUFFER_INFO *)(v8 + 136),
           v11,
           &v21);
    if ( v9 >= 0 )
    {
      v5 = v21;
      v12 = v21;
      goto LABEL_7;
    }
  }
  return (unsigned int)v9;
}
