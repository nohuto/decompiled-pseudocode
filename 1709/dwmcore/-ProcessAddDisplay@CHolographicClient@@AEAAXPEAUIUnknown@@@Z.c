/*
 * XREFs of ?ProcessAddDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C2F60
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801C3278 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessAddDisplay(CHolographicClient *this, struct IUnknown *a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // edx
  unsigned int v7; // eax
  signed int v8; // ebx
  signed int v9; // eax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  lpVtbl = a2->lpVtbl;
  v4 = 0LL;
  v10 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_5e01b98c_b7d8_4f41_8bf2_9dc251835cd5,
         &v10) >= 0 )
  {
    v5 = *((unsigned int *)this + 32);
    v6 = v10;
    v7 = v5 + 1;
    if ( (int)v5 + 1 >= (unsigned int)v5 )
      v6 = v5 + 1;
    v8 = v7 < (unsigned int)v5 ? 0x80070216 : 0;
    if ( v7 < (unsigned int)v5 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xB5u);
    }
    else if ( v6 > *((_DWORD *)this + 31) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 104, 8u, 1, &v10);
      v8 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v5) = v10;
      *((_DWORD *)this + 32) = v6;
    }
    if ( v8 < 0 )
    {
      v4 = v10;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3), v10);
      v10 = 0LL;
    }
    ReleaseInterfaceNoNULL<CManipulationManager>(v4);
  }
}
