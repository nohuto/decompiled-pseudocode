/*
 * XREFs of ?QueryInterface@CSwRenderTargetGetBounds@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003DC50
 * Callers:
 *     ?QueryInterface@CSwRenderTargetGetBounds@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5FB0 (-QueryInterface@CSwRenderTargetGetBounds@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSwRenderTargetGetBounds@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5FC0 (-QueryInterface@CSwRenderTargetGetBounds@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?HrFindInterface@CSwRenderTargetGetBounds@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003DEC0 (-HrFindInterface@CSwRenderTargetGetBounds@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::QueryInterface(
        CSwRenderTargetGetBounds *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 (*v6)(void); // rax
  int Interface; // eax

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      v6 = *(__int64 (**)(void))(*(_QWORD *)this + 32LL);
      if ( (char *)v6 == (char *)CSwRenderTargetGetBounds::HrFindInterface )
        Interface = CSwRenderTargetGetBounds::HrFindInterface(this, a2, a3);
      else
        Interface = v6();
      v4 = Interface;
      if ( Interface < 0 )
      {
        *a3 = 0LL;
        return v4;
      }
    }
    else
    {
      *a3 = this;
      v4 = 0;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  return v4;
}
