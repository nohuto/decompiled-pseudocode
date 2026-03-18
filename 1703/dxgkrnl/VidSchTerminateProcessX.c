/*
 * XREFs of VidSchTerminateProcessX @ 0x1C00FA5D0
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

struct DXGGLOBAL *__fastcall VidSchTerminateProcessX(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  __int64 v6; // rdi
  struct DXGGLOBAL *result; // rax
  __int64 v8; // rsi

  v4 = 0;
  v5 = a1;
  v6 = 120LL;
  do
  {
    result = *(struct DXGGLOBAL **)((char *)DXGGLOBAL::GetGlobal(a1, a2, a3, a4) + v6);
    if ( result )
    {
      result = DXGGLOBAL::GetGlobal(a1, a2, a3, a4);
      v8 = *(_QWORD *)((char *)result + v6);
      a1 = *(_QWORD *)(v5 + 64);
      if ( a1 )
      {
        result = (struct DXGGLOBAL *)(unsigned int)(*(_DWORD *)v8 - 1);
        a1 = *(_QWORD *)(a1 + 8LL * (_QWORD)result + 16);
      }
      if ( a1 )
      {
        (*(void (**)(void))(*(_QWORD *)(v8 + 8) + 88LL))();
        result = *(struct DXGGLOBAL **)(v5 + 64);
        a1 = (unsigned int)(*(_DWORD *)v8 - 1);
        *((_QWORD *)result + a1 + 2) = 0LL;
      }
    }
    ++v4;
    v6 += 8LL;
  }
  while ( v4 < 2 );
  return result;
}
