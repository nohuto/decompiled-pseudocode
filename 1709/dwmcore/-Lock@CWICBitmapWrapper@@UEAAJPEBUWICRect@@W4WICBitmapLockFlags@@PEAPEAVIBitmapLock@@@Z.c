/*
 * XREFs of ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800870B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18008CC68 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWICBitmapWrapper::Lock(
        CWICBitmapWrapper *this,
        __m128i *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  void *v6; // r15
  int v9; // eax
  unsigned int v10; // ebx
  DWORD v12; // r9d
  INT v13; // r8d
  INT v14; // r9d
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // r8d
  signed int v18; // ecx
  unsigned __int8 PixelFormatSize; // al
  SIZE_T v20; // r10
  unsigned int v21; // ecx
  unsigned int v22; // r14d
  unsigned __int64 v23; // rcx
  unsigned int v24; // r12d
  SIZE_T v25; // r8
  LPVOID v26; // rax
  int v27; // eax
  DWORD v28; // r9d
  unsigned int v29; // [rsp+20h] [rbp-79h]
  unsigned int v30; // [rsp+20h] [rbp-79h]
  struct IUnknown *v31; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v32; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v33; // [rsp+6Ch] [rbp-2Dh] BYREF
  unsigned int v34; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v35; // [rsp+74h] [rbp-25h] BYREF
  __int64 v36; // [rsp+78h] [rbp-21h] BYREF
  void *v37; // [rsp+80h] [rbp-19h] BYREF
  struct IBitmapLock **v38; // [rsp+88h] [rbp-11h]
  struct _RTL_CRITICAL_SECTION *v39; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v40[4]; // [rsp+98h] [rbp-1h] BYREF

  v36 = 0LL;
  v31 = 0LL;
  v38 = a4;
  v6 = 0LL;
  v39 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 96) & -(__int64)(this != (CWICBitmapWrapper *)24));
  EnterCriticalSection(v39);
  *a4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 25))(*((_QWORD *)this + 25), &IID_IWICBitmap, &v36);
  if ( v36 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __m128i *, _QWORD, struct IUnknown **))(*(_QWORD *)v36 + 64LL))(
           v36,
           a2,
           (unsigned int)a3,
           &v31);
    v10 = v9;
    if ( v9 < 0 )
    {
      v29 = 94;
    }
    else
    {
      v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, unsigned int *))v31->lpVtbl[1].QueryInterface)(
             v31,
             &v35,
             &v34);
      v10 = v9;
      if ( v9 < 0 )
      {
        v29 = 96;
      }
      else
      {
        v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v31->lpVtbl[1].AddRef)(v31, &v33);
        v10 = v9;
        if ( v9 < 0 )
        {
          v29 = 97;
        }
        else
        {
          v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, void **))v31->lpVtbl[1].Release)(
                 v31,
                 &v32,
                 &v37);
          v10 = v9;
          if ( v9 < 0 )
          {
            v29 = 98;
          }
          else
          {
            v9 = CBitmap::HrLock(
                   (CWICBitmapWrapper *)((char *)this - 24),
                   v35,
                   v34,
                   (CWICBitmapWrapper *)((char *)this + 160),
                   v33,
                   v32,
                   v37,
                   a3,
                   a4,
                   0,
                   v31);
            v10 = v9;
            if ( v9 >= 0 )
            {
              v31 = 0LL;
              goto LABEL_8;
            }
            v29 = 114;
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
    v29 = 132;
    v12 = -2003292412;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, v29);
    goto LABEL_55;
  }
  memset(v40, 0, sizeof(v40));
  if ( a2 )
  {
    if ( a2->m128i_i32[2] <= 0
      || a2->m128i_i32[3] <= 0
      || (v13 = *((_DWORD *)this + 36), a2->m128i_i32[0] >= v13)
      || (v14 = *((_DWORD *)this + 37), a2->m128i_i32[1] >= v14) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0xBAu);
    }
    else
    {
      v15 = _mm_cvtsi128_si32(*a2);
      *(__m128i *)v40 = *a2;
      v16 = v40[2];
      v40[0] = v15;
      if ( v15 < 0 )
      {
        v16 = v15 + v40[2];
        v15 = 0;
        v40[2] = v16;
        v40[0] = 0;
      }
      if ( v16 + v15 > v13 )
      {
        v16 = v13 - v15;
        v40[2] = v13 - v15;
      }
      v17 = v40[1];
      v18 = v40[3];
      if ( (v40[1] & 0x80000000) != 0 )
      {
        v18 = v40[1] + v40[3];
        v17 = 0;
        v40[3] += v40[1];
        v40[1] = 0;
      }
      if ( (int)(v18 + v17) > v14 )
      {
        v18 = v14 - v17;
        v40[3] = v14 - v17;
      }
      if ( v16 <= 0 || v18 <= 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0xB2u);
    }
  }
  else
  {
    v40[0] = 0;
    v40[1] = 0;
    v40[2] = *((_DWORD *)this + 36);
    v40[3] = *((_DWORD *)this + 37);
  }
  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 40));
  if ( !PixelFormatSize || (v21 = *((_DWORD *)this + 36), v21 > 0x7FFFFFF8u / PixelFormatSize) )
  {
    v28 = -2147024362;
    v30 = 199;
    v10 = -2147024362;
    goto LABEL_52;
  }
  v22 = (((v21 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  v23 = v22 * (unsigned __int64)*((unsigned int *)this + 37);
  v24 = -1;
  if ( v23 <= 0xFFFFFFFF )
    v24 = v22 * *((_DWORD *)this + 37);
  v10 = v23 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v23 > 0xFFFFFFFF )
  {
    v29 = 201;
    v12 = v23 > 0xFFFFFFFF ? 0x80070216 : 0;
    goto LABEL_14;
  }
  v25 = v24;
  if ( !v24 )
    v25 = v20;
  v26 = HeapAlloc(WPF::g_processHeap, 0, v25);
  v6 = v26;
  if ( !v26 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0xCCu);
    goto LABEL_53;
  }
  v27 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, LPVOID))(**((_QWORD **)this + 25) + 56LL))(
          *((_QWORD *)this + 25),
          v40,
          v22,
          v24,
          v26);
  v10 = v27;
  if ( v27 < 0 )
  {
    v30 = 209;
    goto LABEL_50;
  }
  v27 = CBitmap::HrLock(
          (CWICBitmapWrapper *)((char *)this - 24),
          v40[2],
          v40[3],
          (CWICBitmapWrapper *)((char *)this + 160),
          v22,
          v24,
          v6,
          WICBitmapLockRead,
          v38,
          1,
          0LL);
  v10 = v27;
  if ( v27 < 0 )
  {
    v30 = 219;
LABEL_50:
    v28 = v27;
LABEL_52:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v28, v30);
LABEL_53:
    if ( v6 )
      WPF::ProcessHeapImpl::Free(v6);
  }
LABEL_55:
  if ( v31 )
    ((void (__fastcall *)(struct IUnknown *))v31->lpVtbl->Release)(v31);
LABEL_8:
  ReleaseInterfaceNoNULL<CManipulationManager>(v36);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v39);
  return v10;
}
