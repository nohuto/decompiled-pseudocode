/*
 * XREFs of ?ProcessAddExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801A811C
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801A82E4 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessAddExclusiveView(CHolographicClient *this, struct IUnknown *a2)
{
  char *v2; // r10
  __int64 v3; // rcx
  unsigned int v4; // eax
  int v5; // ebx
  int v6; // eax
  struct IUnknown *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a2;
  v2 = (char *)this + 72;
  v3 = *((unsigned int *)this + 24);
  v4 = v3 + 1;
  if ( (int)v3 + 1 >= (unsigned int)v3 )
    LODWORD(a2) = v3 + 1;
  v5 = v4 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( v4 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB5u);
  }
  else if ( (unsigned int)a2 > *((_DWORD *)v2 + 5) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8u, 1, &v7);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v2 + 8 * v3) = v7;
    *((_DWORD *)v2 + 6) = (_DWORD)a2;
  }
  if ( v5 >= 0 )
    ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->AddRef)(v7);
}
