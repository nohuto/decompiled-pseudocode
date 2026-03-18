/*
 * XREFs of ?ProcessAddTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FF780
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801FF9B0 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessAddTexture(CHolographicClient *this, struct IUnknown *a2)
{
  char *v3; // r10
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_6ea01fc5_ef58_46aa_b361_da5050ef3873,
         &v9) >= 0 )
  {
    v3 = (char *)this + 40;
    v4 = *((_DWORD *)this + 16);
    v5 = v4 + 1;
    v6 = v4 + 1 < v4 ? 0x80070216 : 0;
    if ( v4 + 1 < v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
    }
    else if ( v5 > *((_DWORD *)v3 + 5) )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v3, 8u, 1, &v9);
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v3 + 8LL * v4) = v9;
      *((_DWORD *)v3 + 6) = v5;
    }
    v8 = v9;
    if ( v6 >= 0 )
      v8 = 0LL;
    v9 = v8;
    ReleaseInterfaceNoNULL<IWICBitmap>(v8);
  }
}
