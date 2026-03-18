/*
 * XREFs of ?ProcessAddViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FF84C
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801FF9B0 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessAddViewer(CHolographicClient *this, struct IUnknown *a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  unsigned int v8; // ecx
  int v9; // ebx
  int v10; // eax
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  lpVtbl = a2->lpVtbl;
  v11 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_6be85f9e_fb49_4826_8b19_a61973c8ea67,
         &v11) >= 0 )
  {
    v4 = 0LL;
    v5 = *((unsigned int *)this + 40);
    if ( (_DWORD)v5 )
    {
      v6 = v11;
      v7 = (_QWORD *)*((_QWORD *)this + 17);
      while ( v11 != *v7 )
      {
        v4 = (unsigned int)(v4 + 1);
        ++v7;
        if ( (unsigned int)v4 >= (unsigned int)v5 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v8 = v5 + 1;
      v9 = (int)v5 + 1 < (unsigned int)v5 ? 0x80070216 : 0;
      if ( (int)v5 + 1 < (unsigned int)v5 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
      }
      else if ( v8 > *((_DWORD *)this + 39) )
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 136, 8u, 1, &v11);
        v9 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v5) = v11;
        *((_DWORD *)this + 40) = v8;
      }
      if ( v9 < 0 )
      {
        v6 = v11;
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 160LL))(
          *((_QWORD *)this + 3),
          v11,
          v4);
        v6 = 0LL;
        v11 = 0LL;
      }
    }
    ReleaseInterfaceNoNULL<IWICBitmap>(v6);
  }
}
