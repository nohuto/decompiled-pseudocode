/*
 * XREFs of ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18001EB98
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x18001EDEC (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x1800B69C4 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800B6AE8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?CheckForDriverUpdating@CDisplaySet@@AEAAJXZ @ 0x1800B6C2C (-CheckForDriverUpdating@CDisplaySet@@AEAAJXZ.c)
 *     ?ComputeDisplayBounds@CDisplaySet@@AEAAXXZ @ 0x1800B6D2C (-ComputeDisplayBounds@CDisplaySet@@AEAAXXZ.c)
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x1800B6D9C (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 *     ??2CDisplaySet@@SAPEAX_K00@Z @ 0x1800C8418 (--2CDisplaySet@@SAPEAX_K00@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::CreateNewDisplaySet(
        CDisplayManager *this,
        const struct CDXGIEnumeration *a2,
        int a3,
        int a4,
        unsigned int a5,
        bool *a6,
        struct CDisplaySet **a7)
{
  bool *v7; // r15
  bool *v8; // rdi
  LONG DisplayConfigBufferSizes; // eax
  unsigned __int64 v13; // rcx
  signed int v14; // ebx
  bool *v15; // rax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned __int64 v20[5]; // [rsp+30h] [rbp-28h] BYREF
  CDisplayManager *v21; // [rsp+60h] [rbp+8h] BYREF

  v21 = this;
  v7 = a6;
  v8 = 0LL;
  *a6 = 0;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, (UINT32 *)v20, (UINT32 *)&a6);
  v14 = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes > 0 )
    v14 = (unsigned __int16)DisplayConfigBufferSizes | 0x80070000;
  LODWORD(v21) = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802773C8, 2u, v14, 0x26Du);
  }
  else
  {
    v15 = (bool *)CDisplaySet::operator new(v13, LODWORD(v20[0]), (unsigned int)a6);
    v8 = v15;
    if ( v15 )
    {
      *((_QWORD *)v15 + 2) = 0LL;
      *((_DWORD *)v15 + 10) = 0;
      *(_DWORD *)v15 = 1;
      *((_DWORD *)v15 + 1) = a3;
      *((_DWORD *)v15 + 2) = a4;
      *((_DWORD *)v15 + 3) = a5;
      *((_DWORD *)v15 + 18) = 0;
      *((_QWORD *)v15 + 6) = v15 + 80;
      *((_QWORD *)v15 + 7) = v15 + 80;
      *((_DWORD *)v15 + 16) = 4;
      *((_DWORD *)v15 + 17) = 4;
      *((_QWORD *)v15 + 66) = 0LL;
      *((_QWORD *)v15 + 67) = 0LL;
      v15[112] = 0;
      *((_DWORD *)v15 + 9) = 0;
      *((_DWORD *)v15 + 8) = 0;
      *((_DWORD *)v15 + 7) = 0;
      *((_DWORD *)v15 + 6) = 0;
      memset_0(v15 + 120, 0, 0x68uLL);
    }
    else
    {
      v8 = 0LL;
    }
    if ( !v8 )
    {
      v14 = -2147024882;
      LODWORD(v21) = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802773C8, 2u, -2147024882, 0x274u);
      goto LABEL_18;
    }
    *((_QWORD *)v8 + 2) = a2;
    if ( a2 )
      (**(void (__fastcall ***)(const struct CDXGIEnumeration *))a2)(a2);
    v16 = CDisplaySet::EnumerateOutputs((CDisplaySet *)v8);
    v14 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802773D0, 1u, v16, 0xBEu);
    }
    else
    {
      v17 = CDisplaySet::ArrangeCloneDisplays((CDisplaySet *)v8);
      v14 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802773D0, 1u, v17, 0xC0u);
      }
      else
      {
        CDisplaySet::ComputeDisplayBounds((CDisplaySet *)v8);
        v18 = CDisplaySet::CheckForDriverUpdating((CDisplaySet *)v8);
        v14 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802773D0, 1u, v18, 0xC4u);
      }
    }
    LODWORD(v21) = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802773C8, 2u, v14, 0x27Fu);
    }
    else
    {
      *a7 = (struct CDisplaySet *)v8;
      v8 = 0LL;
    }
  }
  if ( v14 < 0 )
  {
    if ( !v8 )
      goto LABEL_18;
    *v7 = v8[112];
  }
  if ( v8 )
    CDisplaySet::Release((CDisplaySet *)v8);
LABEL_18:
  TranslateDXGIorD3DErrorInContext((unsigned int)v14, 3LL, &v21);
  return (unsigned int)v21;
}
