/*
 * XREFs of ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18003EAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18003FD38 (-HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18003FFFC (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800404F4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v19; // r8d
  unsigned int v20; // esi
  unsigned __int64 v21; // r12
  __int64 v22; // rax
  void *v23; // r15
  int v24; // eax
  int v25; // eax
  unsigned int v26; // [rsp+20h] [rbp-79h]
  struct IUnknown *v27; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v28; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v29; // [rsp+6Ch] [rbp-2Dh] BYREF
  unsigned int v30; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v31; // [rsp+74h] [rbp-25h] BYREF
  __int64 v32; // [rsp+78h] [rbp-21h] BYREF
  void *v33; // [rsp+80h] [rbp-19h] BYREF
  struct IBitmapLock **v34; // [rsp+88h] [rbp-11h]
  __int64 v35; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v36[4]; // [rsp+98h] [rbp-1h] BYREF

  v32 = 0LL;
  v27 = 0LL;
  v34 = a4;
  v35 = ((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 24) >> 64);
  if ( *(_BYTE *)(v35 + 0x30) )
    EnterCriticalSection((LPCRITICAL_SECTION)((((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 24) >> 64))
                                            + 8));
  *a4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 27))(*((_QWORD *)this + 27), &IID_IWICBitmap, &v32);
  if ( v32 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __m128i *, _QWORD, struct IUnknown **))(*(_QWORD *)v32 + 64LL))(
           v32,
           a2,
           (unsigned int)a3,
           &v27);
    v9 = v8;
    if ( v8 < 0 )
    {
      v26 = 94;
    }
    else
    {
      v8 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, unsigned int *))v27->lpVtbl[1].QueryInterface)(
             v27,
             &v31,
             &v30);
      v9 = v8;
      if ( v8 < 0 )
      {
        v26 = 96;
      }
      else
      {
        v8 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v27->lpVtbl[1].AddRef)(v27, &v29);
        v9 = v8;
        if ( v8 < 0 )
        {
          v26 = 97;
        }
        else
        {
          v8 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, void **))v27->lpVtbl[1].Release)(
                 v27,
                 &v28,
                 &v33);
          v9 = v8;
          if ( v8 < 0 )
          {
            v26 = 98;
          }
          else
          {
            v8 = CBitmap::HrLock(
                   (CWICBitmapWrapper *)((char *)this - 24),
                   v31,
                   v30,
                   (CWICBitmapWrapper *)((char *)this + 176),
                   v29,
                   v28,
                   v33,
                   a3,
                   a4,
                   0,
                   v27);
            v9 = v8;
            if ( v8 >= 0 )
            {
              v27 = 0LL;
              goto LABEL_10;
            }
            v26 = 114;
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x84u);
      goto LABEL_55;
    }
    memset(v36, 0, sizeof(v36));
    if ( a2 )
    {
      if ( a2->m128i_i32[2] <= 0
        || a2->m128i_i32[3] <= 0
        || (v12 = *((_DWORD *)this + 40), a2->m128i_i32[0] >= v12)
        || (v13 = *((_DWORD *)this + 41), a2->m128i_i32[1] >= v13) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xBAu);
      }
      else
      {
        v14 = _mm_cvtsi128_si32(*a2);
        *(__m128i *)v36 = *a2;
        v15 = v36[2];
        v36[0] = v14;
        if ( v14 < 0 )
        {
          v15 = v14 + v36[2];
          v14 = 0;
          v36[2] = v15;
          v36[0] = 0;
        }
        if ( v15 + v14 > v12 )
        {
          v15 = v12 - v14;
          v36[2] = v12 - v14;
        }
        v16 = v36[1];
        v17 = v36[3];
        if ( (v36[1] & 0x80000000) != 0 )
        {
          v17 = v36[1] + v36[3];
          v16 = 0;
          v36[3] += v36[1];
          v36[1] = 0;
        }
        if ( (int)(v17 + v16) > v13 )
        {
          v17 = v13 - v16;
          v36[3] = v13 - v16;
        }
        if ( v15 <= 0 || v17 <= 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xB2u);
      }
    }
    else
    {
      v36[0] = 0;
      v36[1] = 0;
      v36[2] = *((_DWORD *)this + 40);
      v36[3] = *((_DWORD *)this + 41);
    }
    PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 44));
    if ( PixelFormatSize && v19 <= 0x7FFFFFF8u / PixelFormatSize )
    {
      v20 = (((v19 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
      v21 = v20 * (unsigned __int64)*((unsigned int *)this + 41);
      if ( v21 <= 0xFFFFFFFF )
      {
        v22 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                (unsigned int)v21);
        v23 = (void *)v22;
        if ( v22 )
        {
          v24 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 27)
                                                                                           + 56LL))(
                  *((_QWORD *)this + 27),
                  v36,
                  v20,
                  (unsigned int)v21,
                  v22);
          v9 = v24;
          if ( v24 >= 0 )
          {
            v25 = CBitmap::HrLock(
                    (CWICBitmapWrapper *)((char *)this - 24),
                    v36[2],
                    v36[3],
                    (CWICBitmapWrapper *)((char *)this + 176),
                    v20,
                    v21,
                    v23,
                    WICBitmapLockRead,
                    v34,
                    1,
                    0LL);
            v9 = v25;
            if ( v25 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xDBu);
            else
              v23 = 0LL;
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xD1u);
          }
          if ( v23 )
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v23);
        }
        else
        {
          v9 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xCCu);
        }
        goto LABEL_55;
      }
      v26 = 201;
    }
    else
    {
      v26 = 199;
    }
    v11 = -2147024362;
    v9 = -2147024362;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v26);
LABEL_55:
  if ( v27 )
    ((void (__fastcall *)(struct IUnknown *))v27->lpVtbl->Release)(v27);
LABEL_10:
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  CGuard<CMTALock>::~CGuard<CMTALock>(&v35);
  return v9;
}
