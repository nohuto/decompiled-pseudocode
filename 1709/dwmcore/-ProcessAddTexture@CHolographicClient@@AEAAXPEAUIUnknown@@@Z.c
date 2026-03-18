/*
 * XREFs of ?ProcessAddTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C3154
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801C3278 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessAddTexture(CHolographicClient *this, struct IUnknown *a2)
{
  unsigned int v3; // edx
  char *v4; // r10
  __int64 v5; // rcx
  unsigned int v6; // eax
  signed int v7; // ebx
  signed int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_6ea01fc5_ef58_46aa_b361_da5050ef3873,
         &v10) >= 0 )
  {
    v3 = v10;
    v4 = (char *)this + 40;
    v5 = *((unsigned int *)this + 16);
    v6 = v5 + 1;
    if ( (int)v5 + 1 >= (unsigned int)v5 )
      v3 = v5 + 1;
    v7 = v6 < (unsigned int)v5 ? 0x80070216 : 0;
    if ( v6 < (unsigned int)v5 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xB5u);
    }
    else if ( v3 > *((_DWORD *)v4 + 5) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 8u, 1, &v10);
      v7 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v4 + 8 * v5) = v10;
      *((_DWORD *)v4 + 6) = v3;
    }
    v9 = v10;
    if ( v7 >= 0 )
      v9 = 0LL;
    v10 = v9;
    ReleaseInterfaceNoNULL<CManipulationManager>(v9);
  }
}
