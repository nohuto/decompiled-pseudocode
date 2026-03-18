/*
 * XREFs of ?ProcessAddDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FF594
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801FF9B0 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessAddDisplay(CHolographicClient *this, struct IUnknown *a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  __int64 v4; // rdi
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // ebx
  int v8; // eax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  lpVtbl = a2->lpVtbl;
  v4 = 0LL;
  v9 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_5e01b98c_b7d8_4f41_8bf2_9dc251835cd5,
         &v9) >= 0 )
  {
    v5 = *((_DWORD *)this + 32);
    v6 = v5 + 1;
    v7 = v5 + 1 < v5 ? 0x80070216 : 0;
    if ( v5 + 1 < v5 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u);
    }
    else if ( v6 > *((_DWORD *)this + 31) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 104, 8u, 1, &v9);
      v7 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 13) + 8LL * v5) = v9;
      *((_DWORD *)this + 32) = v6;
    }
    if ( v7 < 0 )
    {
      v4 = v9;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3), v9);
      v9 = 0LL;
    }
    ReleaseInterfaceNoNULL<IWICBitmap>(v4);
  }
}
