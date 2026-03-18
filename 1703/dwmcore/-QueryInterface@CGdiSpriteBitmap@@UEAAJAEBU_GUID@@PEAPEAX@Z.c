/*
 * XREFs of ?QueryInterface@CGdiSpriteBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180054600
 * Callers:
 *     ?QueryInterface@CGdiSpriteBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5CB0 (-QueryInterface@CGdiSpriteBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGdiSpriteBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5CC0 (-QueryInterface@CGdiSpriteBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGdiSpriteBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5CD0 (-QueryInterface@CGdiSpriteBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180056D30 (-HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::QueryInterface(CGdiSpriteBitmap *this, const struct _GUID *a2, void **a3)
{
  CImageSource *v3; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 (*v7)(void); // rax
  int Interface; // eax

  v3 = (CGdiSpriteBitmap *)((char *)this + 16);
  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v7 = *(__int64 (**)(void))(*(_QWORD *)v3 + 32LL);
      if ( (char *)v7 == (char *)CImageSource::HrFindInterface )
        Interface = CImageSource::HrFindInterface(v3, a2, a3);
      else
        Interface = v7();
      v5 = Interface;
      if ( Interface < 0 )
      {
        *a3 = 0LL;
        return v5;
      }
    }
    else
    {
      *a3 = v3;
      v5 = 0;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  return v5;
}
