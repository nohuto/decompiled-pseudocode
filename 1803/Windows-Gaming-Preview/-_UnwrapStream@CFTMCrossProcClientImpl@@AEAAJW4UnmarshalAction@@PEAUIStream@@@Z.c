/*
 * XREFs of ?_UnwrapStream@CFTMCrossProcClientImpl@@AEAAJW4UnmarshalAction@@PEAUIStream@@@Z @ 0x180041964
 * Callers:
 *     ?UnmarshalInterface@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x1800417F0 (-UnmarshalInterface@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ReleaseMarshalData@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@@Z @ 0x180041840 (-ReleaseMarshalData@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003CAEC (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     CoTaskMemFree_0 @ 0x1800431B6 (CoTaskMemFree_0.c)
 *     RoGetAgileReference_0 @ 0x1800431C8 (RoGetAgileReference_0.c)
 *     CoReleaseMarshalData_0 @ 0x1800431CE (CoReleaseMarshalData_0.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFTMCrossProcClientImpl::_UnwrapStream(ULONG *a1, unsigned int a2, IStream *a3)
{
  HRESULT AgileReference_0; // edi
  __int64 v7; // rcx
  void *v8; // rcx
  LPVOID v9; // rcx
  ULONG *v10; // r14
  SIZE_T v11; // rcx
  BYTE *v12; // rbx
  int v13; // eax
  IStream *v14; // rax
  __int64 v15; // rcx
  IStream *v16; // r14
  LPVOID ppv; // [rsp+20h] [rbp-10h] BYREF
  void *pv; // [rsp+78h] [rbp+48h] BYREF

  if ( a2 )
  {
    AgileReference_0 = CoReleaseMarshalData_0(a3);
  }
  else
  {
    ppv = 0LL;
    AgileReference_0 = CoUnmarshalInterface(a3, &GUID_00000000_0000_0000_c000_000000000046, &ppv);
    if ( AgileReference_0 >= 0 )
    {
      v7 = *((_QWORD *)a1 + 9);
      if ( v7 )
      {
        *((_QWORD *)a1 + 9) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      AgileReference_0 = 0;
      if ( ppv )
      {
        pv = 0LL;
        AgileReference_0 = RoGetAgileReference_0(0LL, &GUID_00000000_0000_0000_c000_000000000046, ppv, &pv);
        if ( AgileReference_0 < 0 )
        {
          v8 = pv;
        }
        else
        {
          v8 = (void *)*((_QWORD *)a1 + 9);
          *((_QWORD *)a1 + 9) = pv;
        }
        if ( v8 )
        {
          pv = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
        }
      }
    }
    v9 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  if ( AgileReference_0 >= 0 )
  {
    v10 = a1 + 8;
    AgileReference_0 = IStream_Read(a3, a1 + 8, 4u);
    if ( AgileReference_0 >= 0 )
    {
      v11 = *v10;
      v12 = 0LL;
      pv = 0LL;
      if ( is_mul_ok(v11, 1uLL) )
      {
        v13 = CTCoAllocPolicy::Alloc((IMalloc *)v11, (v11 * (unsigned __int128)1uLL) >> 64, v11, &pv);
        v12 = (BYTE *)pv;
        AgileReference_0 = v13;
        if ( v13 >= 0 )
        {
          if ( *v10 )
            AgileReference_0 = IStream_Read(a3, pv, *v10);
          if ( AgileReference_0 >= 0 )
          {
            v14 = SHCreateMemStream(v12, *v10);
            v15 = *((_QWORD *)a1 + 10);
            v16 = v14;
            if ( v15 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
            *((_QWORD *)a1 + 10) = v16;
            AgileReference_0 = v16 == 0LL ? 0x8007000E : 0;
            if ( v16 )
              AgileReference_0 = (*(__int64 (__fastcall **)(ULONG *, _QWORD, IStream *))(*(_QWORD *)a1 + 96LL))(
                                   a1,
                                   a2,
                                   v16);
          }
        }
      }
      else
      {
        AgileReference_0 = -2147024362;
      }
      CoTaskMemFree_0(v12);
    }
  }
  return (unsigned int)AgileReference_0;
}
