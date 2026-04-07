/*
 * XREFs of ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180045F00
 * Callers:
 *     <none>
 * Callees:
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180046D54 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800470A4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18004751C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWICBitmapWrapper::Lock(
        CWICBitmapWrapper *this,
        __m128i *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // r9d
  INT v12; // r8d
  INT v13; // r9d
  int v14; // ecx
  int v15; // edx
  unsigned int v16; // r8d
  signed int v17; // ecx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v19; // ecx
  unsigned int v20; // r15d
  unsigned __int64 v21; // rcx
  unsigned int v22; // r12d
  __int64 v23; // rax
  void *v24; // r14
  int v25; // eax
  int v26; // eax
  unsigned int v27; // [rsp+20h] [rbp-79h]
  struct IUnknown *v28; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v29; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v30; // [rsp+6Ch] [rbp-2Dh] BYREF
  unsigned int v31; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v32; // [rsp+74h] [rbp-25h] BYREF
  __int64 v33; // [rsp+78h] [rbp-21h] BYREF
  void *v34; // [rsp+80h] [rbp-19h] BYREF
  struct IBitmapLock **v35; // [rsp+88h] [rbp-11h]
  __int64 v36; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v37[4]; // [rsp+98h] [rbp-1h] BYREF

  v33 = 0LL;
  v28 = 0LL;
  v35 = a4;
  v36 = ((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 24) >> 64);
  if ( *(_BYTE *)(v36 + 0x30) )
    EnterCriticalSection((LPCRITICAL_SECTION)((((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 24) >> 64))
                                            + 8));
  *a4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 27))(*((_QWORD *)this + 27), &IID_IWICBitmap, &v33);
  if ( v33 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __m128i *, _QWORD, struct IUnknown **))(*(_QWORD *)v33 + 64LL))(
           v33,
           a2,
           (unsigned int)a3,
           &v28);
    v9 = v8;
    if ( v8 < 0 )
    {
      v27 = 94;
    }
    else
    {
      v8 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, unsigned int *))v28->lpVtbl[1].QueryInterface)(
             v28,
             &v32,
             &v31);
      v9 = v8;
      if ( v8 < 0 )
      {
        v27 = 96;
      }
      else
      {
        v8 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v28->lpVtbl[1].AddRef)(v28, &v30);
        v9 = v8;
        if ( v8 < 0 )
        {
          v27 = 97;
        }
        else
        {
          v8 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, void **))v28->lpVtbl[1].Release)(
                 v28,
                 &v29,
                 &v34);
          v9 = v8;
          if ( v8 < 0 )
          {
            v27 = 98;
          }
          else
          {
            v8 = CBitmap::HrLock(
                   (CWICBitmapWrapper *)((char *)this - 24),
                   v32,
                   v31,
                   (CWICBitmapWrapper *)((char *)this + 176),
                   v30,
                   v29,
                   v34,
                   a3,
                   a4,
                   0,
                   v28);
            v9 = v8;
            if ( v8 >= 0 )
            {
              v28 = 0LL;
              goto LABEL_10;
            }
            v27 = 114;
          }
        }
      }
    }
    v11 = v8;
  }
  else
  {
    if ( a3 != WICBitmapLockRead )
    {
      v9 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x84u);
      goto LABEL_57;
    }
    memset(v37, 0, sizeof(v37));
    if ( a2 )
    {
      if ( a2->m128i_i32[2] <= 0
        || a2->m128i_i32[3] <= 0
        || (v12 = *((_DWORD *)this + 40), a2->m128i_i32[0] >= v12)
        || (v13 = *((_DWORD *)this + 41), a2->m128i_i32[1] >= v13) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xBAu);
      }
      else
      {
        v14 = _mm_cvtsi128_si32(*a2);
        *(__m128i *)v37 = *a2;
        v15 = v37[2];
        v37[0] = v14;
        if ( v14 < 0 )
        {
          v15 = v14 + v37[2];
          v14 = 0;
          v37[2] = v15;
          v37[0] = 0;
        }
        if ( v15 + v14 > v12 )
        {
          v15 = v12 - v14;
          v37[2] = v12 - v14;
        }
        v16 = v37[1];
        v17 = v37[3];
        if ( (v37[1] & 0x80000000) != 0 )
        {
          v17 = v37[1] + v37[3];
          v16 = 0;
          v37[3] += v37[1];
          v37[1] = 0;
        }
        if ( (int)(v17 + v16) > v13 )
        {
          v17 = v13 - v16;
          v37[3] = v13 - v16;
        }
        if ( v15 <= 0 || v17 <= 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xB2u);
      }
    }
    else
    {
      v37[0] = 0;
      v37[1] = 0;
      v37[2] = *((_DWORD *)this + 40);
      v37[3] = *((_DWORD *)this + 41);
    }
    PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 44));
    if ( PixelFormatSize && (v19 = *((_DWORD *)this + 40), v19 <= 0x7FFFFFF8u / PixelFormatSize) )
    {
      v20 = (((v19 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
      v21 = v20 * (unsigned __int64)*((unsigned int *)this + 41);
      v22 = -1;
      if ( v21 <= 0xFFFFFFFF )
        v22 = v20 * *((_DWORD *)this + 41);
      v9 = v21 > 0xFFFFFFFF ? 0x80070216 : 0;
      if ( v21 <= 0xFFFFFFFF )
      {
        v23 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                v22);
        v24 = (void *)v23;
        if ( v23 )
        {
          v25 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 27)
                                                                                           + 56LL))(
                  *((_QWORD *)this + 27),
                  v37,
                  v20,
                  v22,
                  v23);
          v9 = v25;
          if ( v25 >= 0 )
          {
            v26 = CBitmap::HrLock(
                    (CWICBitmapWrapper *)((char *)this - 24),
                    v37[2],
                    v37[3],
                    (CWICBitmapWrapper *)((char *)this + 176),
                    v20,
                    v22,
                    v24,
                    WICBitmapLockRead,
                    v35,
                    1,
                    0LL);
            v9 = v26;
            if ( v26 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xDBu);
            else
              v24 = 0LL;
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xD1u);
          }
          if ( v24 )
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v24);
          goto LABEL_57;
        }
        v9 = -2147024882;
        v27 = 204;
      }
      else
      {
        v27 = 201;
      }
      v11 = v9;
    }
    else
    {
      v11 = -2147024362;
      v27 = 199;
      v9 = -2147024362;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v27);
LABEL_57:
  if ( v28 )
    ((void (__fastcall *)(struct IUnknown *))v28->lpVtbl->Release)(v28);
LABEL_10:
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  CGuard<CMTALock>::~CGuard<CMTALock>(&v36);
  return v9;
}
