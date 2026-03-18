/*
 * XREFs of ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180048AA0
 * Callers:
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180055D30 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x1800568D8 (-HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWICBitmapWrapper::Lock(
        CWICBitmapWrapper *this,
        __m128i *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  void *v6; // r12
  int v9; // eax
  unsigned int v10; // ebx
  INT v12; // r8d
  INT v13; // r9d
  int v14; // ecx
  int v15; // edx
  unsigned int v16; // r8d
  signed int v17; // ecx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v19; // r8d
  SIZE_T v20; // r9
  unsigned int v21; // esi
  unsigned __int64 v22; // r15
  SIZE_T v23; // r8
  LPVOID v24; // rax
  int v25; // eax
  int v26; // r9d
  int v27; // r9d
  unsigned int v28; // [rsp+20h] [rbp-79h]
  unsigned int v29; // [rsp+20h] [rbp-79h]
  struct IUnknown *v30; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v31; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v32; // [rsp+6Ch] [rbp-2Dh] BYREF
  unsigned int v33; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v34; // [rsp+74h] [rbp-25h] BYREF
  __int64 v35; // [rsp+78h] [rbp-21h] BYREF
  void *v36; // [rsp+80h] [rbp-19h] BYREF
  struct IBitmapLock **v37; // [rsp+88h] [rbp-11h]
  LPCRITICAL_SECTION v38; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v39[4]; // [rsp+98h] [rbp-1h] BYREF

  v35 = 0LL;
  v30 = 0LL;
  v37 = a4;
  v6 = 0LL;
  v38 = (LPCRITICAL_SECTION)(((unsigned __int64)this + 96) & -(__int64)(this != (CWICBitmapWrapper *)24));
  EnterCriticalSection(v38);
  *a4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 25))(*((_QWORD *)this + 25), &IID_IWICBitmap, &v35);
  if ( v35 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __m128i *, _QWORD, struct IUnknown **))(*(_QWORD *)v35 + 64LL))(
           v35,
           a2,
           (unsigned int)a3,
           &v30);
    v10 = v9;
    if ( v9 < 0 )
    {
      v28 = 94;
    }
    else
    {
      v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, unsigned int *))v30->lpVtbl[1].QueryInterface)(
             v30,
             &v34,
             &v33);
      v10 = v9;
      if ( v9 < 0 )
      {
        v28 = 96;
      }
      else
      {
        v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v30->lpVtbl[1].AddRef)(v30, &v32);
        v10 = v9;
        if ( v9 < 0 )
        {
          v28 = 97;
        }
        else
        {
          v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, void **))v30->lpVtbl[1].Release)(
                 v30,
                 &v31,
                 &v36);
          v10 = v9;
          if ( v9 < 0 )
          {
            v28 = 98;
          }
          else
          {
            v9 = CBitmap::HrLock(
                   (CWICBitmapWrapper *)((char *)this - 24),
                   v34,
                   v33,
                   (CWICBitmapWrapper *)((char *)this + 160),
                   v32,
                   v31,
                   v36,
                   a3,
                   a4,
                   0,
                   v30);
            v10 = v9;
            if ( v9 >= 0 )
            {
              v30 = 0LL;
              goto LABEL_8;
            }
            v28 = 114;
          }
        }
      }
    }
    v26 = v9;
    goto LABEL_40;
  }
  if ( a3 == WICBitmapLockRead )
  {
    memset(v39, 0, sizeof(v39));
    if ( a2 )
    {
      if ( a2->m128i_i32[2] <= 0
        || a2->m128i_i32[3] <= 0
        || (v12 = *((_DWORD *)this + 36), a2->m128i_i32[0] >= v12)
        || (v13 = *((_DWORD *)this + 37), a2->m128i_i32[1] >= v13) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xBAu);
      }
      else
      {
        v14 = _mm_cvtsi128_si32(*a2);
        *(__m128i *)v39 = *a2;
        v15 = v39[2];
        v39[0] = v14;
        if ( v14 < 0 )
        {
          v15 = v14 + v39[2];
          v14 = 0;
          v39[2] = v15;
          v39[0] = 0;
        }
        if ( v15 + v14 > v12 )
        {
          v15 = v12 - v14;
          v39[2] = v12 - v14;
        }
        v16 = v39[1];
        v17 = v39[3];
        if ( (v39[1] & 0x80000000) != 0 )
        {
          v17 = v39[1] + v39[3];
          v16 = 0;
          v39[3] += v39[1];
          v39[1] = 0;
        }
        if ( (int)(v17 + v16) > v13 )
        {
          v17 = v13 - v16;
          v39[3] = v13 - v16;
        }
        if ( v15 <= 0 || v17 <= 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xB2u);
      }
    }
    else
    {
      v39[0] = 0;
      v39[1] = 0;
      v39[2] = *((_DWORD *)this + 36);
      v39[3] = *((_DWORD *)this + 37);
    }
    PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 40));
    if ( !PixelFormatSize || v19 > 0x7FFFFFF8u / PixelFormatSize )
    {
      v27 = -2147024362;
      v29 = 199;
      v10 = -2147024362;
      goto LABEL_52;
    }
    v21 = (((v19 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
    v22 = v21 * (unsigned __int64)*((unsigned int *)this + 37);
    if ( v22 <= 0xFFFFFFFF )
    {
      v23 = (unsigned int)v22;
      if ( !(_DWORD)v22 )
        v23 = v20;
      v24 = HeapAlloc(WPF::g_processHeap, 0, v23);
      v6 = v24;
      if ( !v24 )
      {
        v10 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xCCu);
        goto LABEL_53;
      }
      v25 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, LPVOID))(**((_QWORD **)this + 25) + 56LL))(
              *((_QWORD *)this + 25),
              v39,
              v21,
              (unsigned int)v22,
              v24);
      v10 = v25;
      if ( v25 < 0 )
      {
        v29 = 209;
      }
      else
      {
        v25 = CBitmap::HrLock(
                (CWICBitmapWrapper *)((char *)this - 24),
                v39[2],
                v39[3],
                (CWICBitmapWrapper *)((char *)this + 160),
                v21,
                v22,
                v6,
                WICBitmapLockRead,
                v37,
                1,
                0LL);
        v10 = v25;
        if ( v25 >= 0 )
          goto LABEL_33;
        v29 = 219;
      }
      v27 = v25;
LABEL_52:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, v29);
LABEL_53:
      if ( v6 )
        WPF::ProcessHeapImpl::Free(v6);
      goto LABEL_33;
    }
    v26 = -2147024362;
    v28 = 201;
    v10 = -2147024362;
  }
  else
  {
    v10 = -2003292412;
    v28 = 132;
    v26 = -2003292412;
  }
LABEL_40:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, v28);
LABEL_33:
  if ( v30 )
    ((void (*)(void))v30->lpVtbl->Release)();
LABEL_8:
  ReleaseInterfaceNoNULL<CD2DPencil>(v35);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v38);
  return v10;
}
