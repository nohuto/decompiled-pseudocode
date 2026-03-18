/*
 * XREFs of ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800B8790
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180081FE8 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180084360 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWICBitmapWrapper::Lock(
        CWICBitmapWrapper *this,
        __m128i *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  void *v6; // r14
  int v9; // eax
  int v10; // ebx
  int v12; // r9d
  INT v13; // r8d
  INT v14; // r9d
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // r8d
  signed int v18; // ecx
  unsigned __int8 PixelFormatSize; // al
  SIZE_T v20; // r9
  unsigned int v21; // ecx
  unsigned int v22; // esi
  unsigned __int64 v23; // rcx
  unsigned int v24; // r15d
  SIZE_T v25; // r8
  LPVOID v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // [rsp+20h] [rbp-79h]
  struct IUnknown *v29; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v31; // [rsp+6Ch] [rbp-2Dh] BYREF
  unsigned int v32; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v33; // [rsp+74h] [rbp-25h] BYREF
  __int64 v34; // [rsp+78h] [rbp-21h] BYREF
  void *v35; // [rsp+80h] [rbp-19h] BYREF
  struct _RTL_CRITICAL_SECTION *v36; // [rsp+88h] [rbp-11h] BYREF
  unsigned int v37[4]; // [rsp+90h] [rbp-9h] BYREF

  v34 = 0LL;
  v29 = 0LL;
  v6 = 0LL;
  v36 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 96) & -(__int64)(this != (CWICBitmapWrapper *)24));
  EnterCriticalSection(v36);
  *a4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 25))(*((_QWORD *)this + 25), &IID_IWICBitmap, &v34);
  if ( v34 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __m128i *, _QWORD, struct IUnknown **))(*(_QWORD *)v34 + 64LL))(
           v34,
           a2,
           (unsigned int)a3,
           &v29);
    v10 = v9;
    if ( v9 < 0 )
    {
      v28 = 94;
    }
    else
    {
      v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, unsigned int *))v29->lpVtbl[1].QueryInterface)(
             v29,
             &v33,
             &v32);
      v10 = v9;
      if ( v9 < 0 )
      {
        v28 = 96;
      }
      else
      {
        v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v29->lpVtbl[1].AddRef)(v29, &v31);
        v10 = v9;
        if ( v9 < 0 )
        {
          v28 = 97;
        }
        else
        {
          v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, void **))v29->lpVtbl[1].Release)(
                 v29,
                 &v30,
                 &v35);
          v10 = v9;
          if ( v9 < 0 )
          {
            v28 = 98;
          }
          else
          {
            v9 = CBitmap::HrLock(
                   (CWICBitmapWrapper *)((char *)this - 24),
                   v33,
                   v32,
                   (CWICBitmapWrapper *)((char *)this + 160),
                   v31,
                   v30,
                   v35,
                   a3,
                   a4,
                   0,
                   v29);
            v10 = v9;
            if ( v9 >= 0 )
            {
              v29 = 0LL;
              goto LABEL_8;
            }
            v28 = 114;
          }
        }
      }
    }
    v12 = v9;
    goto LABEL_14;
  }
  if ( a3 != WICBitmapLockRead )
  {
    v10 = -2003292412;
    v28 = 132;
LABEL_13:
    v12 = v10;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v28);
    goto LABEL_54;
  }
  memset(v37, 0, sizeof(v37));
  if ( a2 )
  {
    if ( a2->m128i_i32[2] <= 0
      || a2->m128i_i32[3] <= 0
      || (v13 = *((_DWORD *)this + 36), a2->m128i_i32[0] >= v13)
      || (v14 = *((_DWORD *)this + 37), a2->m128i_i32[1] >= v14) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xBAu);
    }
    else
    {
      v15 = _mm_cvtsi128_si32(*a2);
      *(__m128i *)v37 = *a2;
      v16 = v37[2];
      v37[0] = v15;
      if ( v15 < 0 )
      {
        v16 = v15 + v37[2];
        v15 = 0;
        v37[2] = v16;
        v37[0] = 0;
      }
      if ( v16 + v15 > v13 )
      {
        v16 = v13 - v15;
        v37[2] = v13 - v15;
      }
      v17 = v37[1];
      v18 = v37[3];
      if ( (v37[1] & 0x80000000) != 0 )
      {
        v18 = v37[1] + v37[3];
        v17 = 0;
        v37[3] += v37[1];
        v37[1] = 0;
      }
      if ( (int)(v18 + v17) > v14 )
      {
        v18 = v14 - v17;
        v37[3] = v14 - v17;
      }
      if ( v16 <= 0 || v18 <= 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xB2u);
    }
  }
  else
  {
    v37[0] = 0;
    v37[1] = 0;
    v37[2] = *((_DWORD *)this + 36);
    v37[3] = *((_DWORD *)this + 37);
  }
  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 40));
  if ( !PixelFormatSize || (v21 = *((_DWORD *)this + 36), v21 > 0x7FFFFFF8u / PixelFormatSize) )
  {
    v10 = -2147024362;
    v27 = 199;
LABEL_52:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v27);
    if ( v6 )
      operator delete(v6);
    goto LABEL_54;
  }
  v22 = (((v21 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  v23 = v22 * (unsigned __int64)*((unsigned int *)this + 37);
  v24 = -1;
  if ( v23 <= 0xFFFFFFFF )
    v24 = v22 * *((_DWORD *)this + 37);
  v10 = v23 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v23 > 0xFFFFFFFF )
  {
    v28 = 201;
    goto LABEL_13;
  }
  v25 = v24;
  if ( !v24 )
    v25 = v20;
  v26 = HeapAlloc(WPF::g_processHeap, 0, v25);
  v6 = v26;
  if ( !v26 )
  {
    v10 = -2147024882;
    v27 = 204;
    goto LABEL_52;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, LPVOID))(**((_QWORD **)this + 25) + 56LL))(
          *((_QWORD *)this + 25),
          v37,
          v22,
          v24,
          v26);
  if ( v10 < 0 )
  {
    v27 = 209;
    goto LABEL_52;
  }
  v10 = CBitmap::HrLock(
          (CWICBitmapWrapper *)((char *)this - 24),
          v37[2],
          v37[3],
          (CWICBitmapWrapper *)((char *)this + 160),
          v22,
          v24,
          v6,
          WICBitmapLockRead,
          a4,
          1,
          0LL);
  if ( v10 < 0 )
  {
    v27 = 219;
    goto LABEL_52;
  }
LABEL_54:
  if ( v29 )
    ((void (__fastcall *)(struct IUnknown *))v29->lpVtbl->Release)(v29);
LABEL_8:
  ReleaseInterfaceNoNULL<IWICBitmap>(v34);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v36);
  return (unsigned int)v10;
}
