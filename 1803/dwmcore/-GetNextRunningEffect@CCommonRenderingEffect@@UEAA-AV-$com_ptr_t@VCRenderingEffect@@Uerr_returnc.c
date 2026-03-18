/*
 * XREFs of ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x180074160
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?IsWhitePixelInTopLeft@CAtlasImageSource@@UEBA_NXZ @ 0x180013170 (-IsWhitePixelInTopLeft@CAtlasImageSource@@UEBA_NXZ.c)
 *     ?GetPixelFormatInfo@CD3DSurface@@UEBA?AUPixelFormatInfo@@XZ @ 0x180042AD0 (-GetPixelFormatInfo@CD3DSurface@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?IsWhitePixelInTopLeft@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180047850 (-IsWhitePixelInTopLeft@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x180073FB4 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ?GetPixelFormatInfo@CD2DBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x180077420 (-GetPixelFormatInfo@CD2DBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x18008B9AC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x1800C457C (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char **__fastcall CCommonRenderingEffect::GetNextRunningEffect(char *a1, char **a2, char *a3, bool *a4)
{
  __int64 v5; // rax
  char *v6; // r14
  _QWORD *v8; // rbx
  _BYTE *v9; // r15
  unsigned int v10; // esi
  struct CCommonRenderingEffect **v11; // r12
  char *v12; // rbp
  CCompositionSurfaceBitmap *v13; // rcx
  void (__fastcall **v14)(char *, bool (__fastcall *)(CCompositionSurfaceBitmap *), bool (__fastcall *)(CAtlasImageSource *)); // rax
  char *v15; // rcx
  bool v17; // al
  bool (__fastcall *v18)(CAtlasImageSource *); // rax
  char IsWhitePixelInTopLeft; // al
  _DWORD *v20; // rcx
  void (__fastcall *v21)(_DWORD *, _DWORD *); // rax
  char *v22; // rbx
  struct CObjectCache *ObjectCache; // rax
  int v24; // edx
  _QWORD *v25; // r10
  char *v26; // rax
  __int64 v27; // r8
  __int16 v28; // [rsp+30h] [rbp-98h] BYREF
  char v29; // [rsp+32h] [rbp-96h]
  __int16 v30; // [rsp+40h] [rbp-88h] BYREF
  char v31; // [rsp+42h] [rbp-86h]
  struct CCommonRenderingEffect *v32; // [rsp+50h] [rbp-78h] BYREF
  bool *v33; // [rsp+58h] [rbp-70h]
  _DWORD v34[4]; // [rsp+60h] [rbp-68h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+0h]

  *a4 = 0;
  v5 = *(_QWORD *)a3;
  v33 = a4;
  v6 = a3;
  if ( (*(unsigned int (__fastcall **)(char *))(v5 + 64))(a3) )
  {
    *a2 = v6;
    (**(void (__fastcall ***)(char *))v6)(v6);
  }
  else if ( v6 == a1 )
  {
    *a2 = a1;
    if ( a1 )
      (**(void (__fastcall ***)(char *))a1)(a1);
  }
  else
  {
    v8 = v6 + 16;
    v9 = v6 + 65;
    v32 = 0LL;
    v10 = 0;
    v11 = &v32;
    v12 = (char *)(a1 - v6);
    do
    {
      v13 = *(CCompositionSurfaceBitmap **)&v12[(_QWORD)v8];
      if ( v13 )
      {
        if ( *v8 )
        {
          v17 = v13 != (CCompositionSurfaceBitmap *)*v8 || v12[(_QWORD)v8 + 16] != *((_BYTE *)v8 + 16);
          if ( v17 || v12[(_QWORD)v9 - 1] != *(v9 - 1) || v12[(_QWORD)v9] != *v9 )
            goto LABEL_33;
          if ( v12[(_QWORD)v9 + 1] != v9[1] )
          {
            *a2 = v6;
            v15 = v6;
            v14 = *(void (__fastcall ***)(char *, bool (__fastcall *)(CCompositionSurfaceBitmap *), bool (__fastcall *)(CAtlasImageSource *)))v6;
LABEL_12:
            (*v14)(v15, CCompositionSurfaceBitmap::IsWhitePixelInTopLeft, CAtlasImageSource::IsWhitePixelInTopLeft);
            return a2;
          }
        }
        else
        {
          if ( !CCommonRegistryData::m_fEnableCommonSuperSets )
            goto LABEL_51;
          v18 = *(bool (__fastcall **)(CAtlasImageSource *))(*(_QWORD *)v13 + 144LL);
          if ( v18 == CCompositionSurfaceBitmap::IsWhitePixelInTopLeft )
            IsWhitePixelInTopLeft = CCompositionSurfaceBitmap::IsWhitePixelInTopLeft(v13);
          else
            IsWhitePixelInTopLeft = v18 == CAtlasImageSource::IsWhitePixelInTopLeft
                                  ? CAtlasImageSource::IsWhitePixelInTopLeft(v13)
                                  : ((__int64 (__fastcall *)(CCompositionSurfaceBitmap *, bool (__fastcall *)(CCompositionSurfaceBitmap *), bool (__fastcall *)(CAtlasImageSource *)))v18)(
                                      v13,
                                      CCompositionSurfaceBitmap::IsWhitePixelInTopLeft,
                                      CAtlasImageSource::IsWhitePixelInTopLeft);
          if ( !IsWhitePixelInTopLeft )
            goto LABEL_51;
          if ( v10 != 1 )
          {
            v20 = *(_DWORD **)&v12[(_QWORD)v8 + 8];
            v21 = *(void (__fastcall **)(_DWORD *, _DWORD *))(*(_QWORD *)v20 + 24LL);
            if ( (char *)v21 == (char *)CD2DBitmap::GetPixelFormatInfo )
            {
              CD2DBitmap::GetPixelFormatInfo(v20, v34);
            }
            else if ( (char *)v21 == (char *)CD3DSurface::GetPixelFormatInfo )
            {
              CD3DSurface::GetPixelFormatInfo(v20, v34);
            }
            else
            {
              v21(v20, v34);
            }
            if ( v34[2] )
            {
LABEL_51:
              wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
                a2,
                v6);
              return a2;
            }
          }
          *(_DWORD *)v11 = -1;
        }
      }
      else if ( *v8 )
      {
        *(_DWORD *)v11 = 1;
      }
      ++v10;
      v8 += 3;
      v9 += 3;
      v11 = (struct CCommonRenderingEffect **)((char *)v11 + 4);
    }
    while ( v10 < 2 );
    if ( (int)v32 <= 0 && SHIDWORD(v32) <= 0 )
    {
      *v33 = (int)v32 + HIDWORD(v32) < 0;
      *a2 = a1;
      if ( !a1 )
        return a2;
      v14 = *(void (__fastcall ***)(char *, bool (__fastcall *)(CCompositionSurfaceBitmap *), bool (__fastcall *)(CAtlasImageSource *)))a1;
      v15 = a1;
      goto LABEL_12;
    }
    if ( (_DWORD)v32 * HIDWORD(v32) != -1 || !CCommonRegistryData::m_fEnableCommonSuperSets )
    {
LABEL_33:
      *a2 = v6;
      v15 = v6;
      v14 = *(void (__fastcall ***)(char *, bool (__fastcall *)(CCompositionSurfaceBitmap *), bool (__fastcall *)(CAtlasImageSource *)))v6;
      goto LABEL_12;
    }
    if ( (_DWORD)v32 == -1 )
    {
      v22 = a1;
    }
    else
    {
      v22 = v6;
      v6 = a1;
    }
    ObjectCache = CThreadContext::GetObjectCache((struct CCommonRenderingEffect *)(unsigned int)v32);
    v24 = *((_DWORD *)ObjectCache + 1);
    if ( v24 )
    {
      v25 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
      *((_QWORD *)ObjectCache + 1) = *v25;
      *((_DWORD *)ObjectCache + 1) = v24 - 1;
    }
    else
    {
      v25 = 0LL;
    }
    if ( !v25 )
    {
      v25 = HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
      if ( !v25 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    v28 = *(_WORD *)(v6 + 67);
    v29 = v6[69];
    v30 = *((_WORD *)v22 + 32);
    v31 = v22[66];
    v26 = (char *)CCommonRenderingEffect::CCommonRenderingEffect(
                    (__int64)v25,
                    (__int64 *)v22 + 2,
                    (__int64)&v30,
                    (__int64 *)v6 + 5,
                    (__int64)&v28);
    *a2 = v26;
    if ( v26 )
      (**(void (__fastcall ***)(char *, char *, __int64))v26)(v26, v26, v27);
  }
  return a2;
}
