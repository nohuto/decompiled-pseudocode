/*
 * XREFs of ?SetPrimaryCloneDisplay@CDisplay@@QEAAXPEAV1@@Z @ 0x180077CF8
 * Callers:
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x1800989B0 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x180077F1C (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplay::SetPrimaryCloneDisplay(CDisplay *this, struct CDisplay *a2)
{
  __int64 v2; // r9
  unsigned int *DisplayId; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 16) = a2;
  if ( v2 )
  {
    DisplayId = (unsigned int *)CDisplay::GetDisplayId(this, &v10);
    (*(void (__fastcall **)(__int64, _QWORD))(v5 + 472))(v6, *DisplayId);
  }
  if ( *((_QWORD *)this + 7) )
  {
    v7 = (unsigned int *)CDisplay::GetDisplayId(this, &v10);
    (*(void (__fastcall **)(__int64, _QWORD))(v8 + 472))(v9, *v7);
  }
}
