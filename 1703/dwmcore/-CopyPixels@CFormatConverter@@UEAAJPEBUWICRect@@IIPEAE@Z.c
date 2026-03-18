/*
 * XREFs of ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1801AB090
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18007E324 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z @ 0x1800C75E8 (-ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z @ 0x1801AB480 (-CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z.c)
 *     ?Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z @ 0x1801ABEF4 (-Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z.c)
 */

__int64 __fastcall CFormatConverter::CopyPixels(
        CFormatConverter *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned __int8 *v5; // r12
  int v10; // ebx
  int v11; // r9d
  int v12; // eax
  __int64 v13; // rcx
  INT Y; // r15d
  void (__fastcall ***v15)(_QWORD, GUID *, unsigned int *); // rcx
  unsigned __int8 PixelFormatSize; // al
  SIZE_T v17; // r9
  unsigned int v18; // ecx
  SIZE_T v19; // r8
  LPVOID v20; // rax
  INT Height; // eax
  bool v22; // r14
  bool v23; // zf
  INT Width; // r13d
  INT v25; // esi
  unsigned int v27; // [rsp+20h] [rbp-91h]
  unsigned int v28; // [rsp+60h] [rbp-51h] BYREF
  int X; // [rsp+64h] [rbp-4Dh]
  unsigned int v30; // [rsp+68h] [rbp-49h]
  unsigned int v31[2]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v32; // [rsp+78h] [rbp-39h] BYREF
  unsigned int v33; // [rsp+80h] [rbp-31h] BYREF
  unsigned int v34; // [rsp+84h] [rbp-2Dh] BYREF
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+88h] [rbp-29h] BYREF
  unsigned __int8 *v36[2]; // [rsp+90h] [rbp-21h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-11h] BYREF
  int v38; // [rsp+A8h] [rbp-9h]
  int v39; // [rsp+ACh] [rbp-5h]

  v32 = 0LL;
  v5 = a5;
  v30 = a3;
  v35 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 8) & -(__int64)(this != (CFormatConverter *)16));
  EnterCriticalSection(v35);
  if ( !a5 )
  {
    v10 = -2147024809;
    v27 = 231;
LABEL_3:
    v11 = v10;
LABEL_42:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v27);
    goto LABEL_43;
  }
  if ( !*((_QWORD *)this + 6) )
  {
    v10 = -2003292404;
    v27 = 236;
    goto LABEL_3;
  }
  if ( !a2 )
  {
    v37 = 0LL;
    a2 = (const struct WICRect *)&v37;
    v38 = *((_DWORD *)this + 20);
    v39 = *((_DWORD *)this + 21);
  }
  v12 = HrCheckBufferSize((enum DXGI_FORMAT)*((_DWORD *)this + 17), a3, a2, a4);
  v10 = v12;
  if ( v12 < 0 )
  {
    v27 = 249;
LABEL_41:
    v11 = v12;
    goto LABEL_42;
  }
  v13 = *((_QWORD *)this + 6);
  Y = a2->Y;
  X = a2->X;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 72LL))(v13) - 2 <= 1 )
  {
    v15 = (void (__fastcall ***)(_QWORD, GUID *, unsigned int *))*((_QWORD *)this + 6);
    *(_QWORD *)v31 = 0LL;
    (**v15)(v15, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, v31);
    if ( *(_QWORD *)v31 )
    {
      (*(void (__fastcall **)(_QWORD, const struct WICRect *, __int64, __int64 *))(**(_QWORD **)v31 + 24LL))(
        *(_QWORD *)v31,
        a2,
        1LL,
        &v32);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v31 + 16LL))(*(_QWORD *)v31);
    }
  }
  if ( v32 )
  {
    v36[0] = 0LL;
    v28 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v32 + 64LL))(
            v32,
            &v28,
            v36);
    v10 = v12;
    if ( v12 < 0 )
    {
      v27 = 284;
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v32 + 48LL))(v32, v31, &v34);
      v10 = v12;
      if ( v12 < 0 )
      {
        v27 = 292;
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v32 + 56LL))(v32, &v33);
        v10 = v12;
        if ( v12 < 0 )
        {
          v27 = 298;
        }
        else
        {
          v12 = CFormatConverter::CopyPixelsHelper(
                  (CFormatConverter *)((char *)this - 16),
                  X,
                  Y,
                  v31[0],
                  v34,
                  v33,
                  v28,
                  v36[0],
                  v30,
                  a4,
                  a5);
          v10 = v12;
          if ( v12 >= 0 )
            goto LABEL_43;
          v27 = 312;
        }
      }
    }
    goto LABEL_41;
  }
  if ( !*((_QWORD *)this + 95) )
  {
    PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 14));
    if ( !PixelFormatSize || *((_DWORD *)this + 20) > 0x7FFFFFF8u / PixelFormatSize )
    {
      *((_DWORD *)this + 192) = 0;
      v10 = -2147024362;
      v27 = 323;
      goto LABEL_3;
    }
    v18 = (((*((_DWORD *)this + 20) * (unsigned int)PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
    *((_DWORD *)this + 192) = v18;
    v10 = 0;
    v19 = v18;
    if ( !v18 )
      v19 = v17;
    v20 = HeapAlloc(WPF::g_processHeap, 0, v19);
    *((_QWORD *)this + 95) = v20;
    if ( !v20 )
    {
      v10 = -2147024882;
      v27 = 326;
      goto LABEL_3;
    }
  }
  Height = a2->Height;
  v22 = 0;
  v23 = a2->X == 0;
  Width = a2->Width;
  *(struct WICRect *)v36 = *a2;
  HIDWORD(v36[1]) = 1;
  if ( v23 && !a2->Y && Width == *((_DWORD *)this + 20) )
    v22 = Height == *((_DWORD *)this + 21);
  v25 = Height + Y;
  while ( Y < v25 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 **, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 6) + 64LL))(
            *((_QWORD *)this + 6),
            v36,
            *((unsigned int *)this + 192),
            *((unsigned int *)this + 192),
            *((_QWORD *)this + 95));
    v10 = v12;
    if ( v12 < 0 )
    {
      v27 = 377;
      goto LABEL_41;
    }
    CScanPipeline::Run((CFormatConverter *)((char *)this + 96), v5, *((const void **)this + 95), Width, X, Y);
    v5 += v30;
    ++HIDWORD(v36[0]);
    ++Y;
  }
  if ( v22 )
    ReleaseDecoderCopyBuffers(*((struct IUnknown **)this + 6));
LABEL_43:
  ReleaseInterfaceNoNULL<CD2DPencil>(v32);
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x19Cu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v35);
  return (unsigned int)v10;
}
