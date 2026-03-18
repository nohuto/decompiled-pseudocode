/*
 * XREFs of ?ProcessAddTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801A81C0
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801A82E4 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessAddTexture(CHolographicClient *this, struct IUnknown *a2)
{
  unsigned int v3; // edx
  char *v4; // r10
  __int64 v5; // rcx
  unsigned int v6; // eax
  int v7; // ebx
  int v8; // eax
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
    }
    else if ( v3 > *((_DWORD *)v4 + 5) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 8u, 1, &v10);
      v7 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
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
    ReleaseInterfaceNoNULL<CD2DPencil>(v9);
  }
}
