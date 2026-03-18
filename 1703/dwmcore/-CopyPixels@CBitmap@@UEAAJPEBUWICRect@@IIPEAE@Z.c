/*
 * XREFs of ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180055D30
 * Callers:
 *     ?CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z @ 0x1800D5640 (-CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180048AA0 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x18005675C (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18007E324 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18007E394 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x18007E910 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x18007E990 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x18007EA30 (-GetSize@CBitmapLock@@UEAAJPEAI0@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::CopyPixels(
        CBitmap *this,
        struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  CWICBitmapWrapper *v11; // rcx
  __int64 (__fastcall *v12)(CWICBitmapWrapper *, __m128i *, enum WICBitmapLockFlags, struct IBitmapLock **); // rax
  int v13; // eax
  __int64 (__fastcall *v14)(CBitmapLock *__hidden, unsigned int *, unsigned int *); // rax
  int Size; // eax
  __int64 (__fastcall *v16)(CBitmapLock *__hidden, unsigned int *); // rax
  int Stride; // eax
  __int64 (__fastcall *v18)(CBitmapLock *__hidden, unsigned int *, unsigned __int8 **); // rax
  int DataPointer; // eax
  int v21; // r9d
  unsigned int v22; // ecx
  int v23; // edx
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // [rsp+20h] [rbp-71h]
  unsigned int v27; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-3Dh] BYREF
  CBitmapLock *v29; // [rsp+58h] [rbp-39h] BYREF
  unsigned int v30; // [rsp+60h] [rbp-31h] BYREF
  unsigned int v31; // [rsp+64h] [rbp-2Dh] BYREF
  unsigned __int8 *Src; // [rsp+68h] [rbp-29h] BYREF
  LPCRITICAL_SECTION v33; // [rsp+70h] [rbp-21h] BYREF
  __int64 v34; // [rsp+78h] [rbp-19h] BYREF
  int v35; // [rsp+80h] [rbp-11h]
  int v36; // [rsp+84h] [rbp-Dh]
  struct tagRECT v37; // [rsp+88h] [rbp-9h] BYREF

  v29 = 0LL;
  v30 = 0;
  v28 = 0;
  Src = 0LL;
  v27 = 0;
  v33 = (LPCRITICAL_SECTION)(((unsigned __int64)this + 104) & -(__int64)(this != (CBitmap *)16));
  EnterCriticalSection(v33);
  if ( !a5 )
  {
    v10 = -2147024809;
    v26 = 160;
LABEL_22:
    v21 = v10;
LABEL_42:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v26);
    goto LABEL_18;
  }
  if ( !a2 )
  {
    v22 = *((_DWORD *)this + 38);
    v23 = -1;
    v34 = 0LL;
    v24 = -1;
    if ( v22 <= 0x7FFFFFFF )
      v24 = v22;
    v35 = v24;
    v10 = v22 > 0x7FFFFFFF ? 0x80070216 : 0;
    if ( v22 > 0x7FFFFFFF )
    {
      v26 = 168;
      goto LABEL_22;
    }
    v25 = *((_DWORD *)this + 39);
    if ( v25 <= 0x7FFFFFFF )
      v23 = *((_DWORD *)this + 39);
    v36 = v23;
    v10 = v25 > 0x7FFFFFFF ? 0x80070216 : 0;
    if ( v25 > 0x7FFFFFFF )
    {
      v26 = 169;
      goto LABEL_22;
    }
    a2 = (struct WICRect *)&v34;
  }
  v9 = CBitmap::HrCheckPixelRect((CBitmap *)((char *)this - 16), a2, &v37);
  v10 = v9;
  if ( v9 < 0 )
  {
    v26 = 174;
    goto LABEL_41;
  }
  v9 = HrCheckBufferSize((enum DXGI_FORMAT)*((_DWORD *)this + 42), a3, a2, a4);
  v10 = v9;
  if ( v9 < 0 )
  {
    v26 = 179;
    goto LABEL_41;
  }
  v11 = (CBitmap *)((char *)this + 8);
  v12 = *(__int64 (__fastcall **)(CWICBitmapWrapper *, __m128i *, enum WICBitmapLockFlags, struct IBitmapLock **))(*((_QWORD *)this + 1) + 24LL);
  if ( v12 == CWICBitmapWrapper::Lock )
    v13 = CWICBitmapWrapper::Lock(v11, (__m128i *)a2, WICBitmapLockRead, &v29);
  else
    v13 = v12(v11, (__m128i *)a2, WICBitmapLockRead, &v29);
  v10 = v13;
  if ( v13 < 0 )
  {
    v26 = 181;
    goto LABEL_22;
  }
  v14 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *, unsigned int *))(*(_QWORD *)v29 + 48LL);
  if ( v14 == CBitmapLock::GetSize )
    Size = CBitmapLock::GetSize(v29, &v30, &v28);
  else
    Size = v14(v29, &v30, &v28);
  v10 = Size;
  if ( Size < 0 )
  {
    v26 = 183;
    goto LABEL_22;
  }
  v16 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *))(*(_QWORD *)v29 + 56LL);
  if ( v16 == CBitmapLock::GetStride )
    Stride = CBitmapLock::GetStride(v29, &v31);
  else
    Stride = v16(v29, &v31);
  v10 = Stride;
  if ( Stride < 0 )
  {
    v26 = 184;
    goto LABEL_22;
  }
  v18 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *, unsigned __int8 **))(*(_QWORD *)v29 + 64LL);
  if ( v18 == CBitmapLock::GetDataPointer )
    DataPointer = CBitmapLock::GetDataPointer(v29, &v27, &Src);
  else
    DataPointer = v18(v29, &v27, &Src);
  v10 = DataPointer;
  if ( DataPointer < 0 )
  {
    v26 = 186;
    goto LABEL_22;
  }
  v9 = CBitmap::CopyPixelsHelper((enum DXGI_FORMAT)*((_DWORD *)this + 42), a2->Width, v28, v31, v27, Src, a3, a4, a5);
  v10 = v9;
  if ( v9 < 0 )
  {
    v26 = 199;
LABEL_41:
    v21 = v9;
    goto LABEL_42;
  }
LABEL_18:
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v29);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v33);
  return v10;
}
