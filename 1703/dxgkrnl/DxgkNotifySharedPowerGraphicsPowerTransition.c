/*
 * XREFs of DxgkNotifySharedPowerGraphicsPowerTransition @ 0x1C0197604
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0122680 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkNotifySharedPowerGraphicsPowerTransition(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  unsigned int v5; // r15d
  struct DXGGLOBAL *Global; // rax
  struct _KTHREAD **v8; // rdi
  __int64 ***v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 **i; // rbx

  v4 = a3;
  v5 = a2;
  Global = DXGGLOBAL::GetGlobal(a1, a2, a3, a4);
  v8 = (struct _KTHREAD **)((char *)Global + 1152);
  v9 = (__int64 ***)((char *)Global + 1192);
  DXGFASTMUTEX::Acquire((struct DXGGLOBAL *)((char *)Global + 1152));
  for ( i = *v9; i != (__int64 **)v9 && i; i = (__int64 **)*i )
  {
    if ( i[4] == (__int64 *)a1 )
    {
      LOBYTE(v11) = v4;
      ((void (__fastcall *)(__int64, _QWORD, __int64, __int64 *))i[5])(a1, v5, v11, i[3]);
    }
  }
  DXGFASTMUTEX::Release(v8, v10, v11, v12);
}
