/*
 * XREFs of ?GetDisplay@CDisplaySet@@QEBAJU_LUID@@VDisplayId@@PEAPEBVCDisplay@@@Z @ 0x18000A818
 * Callers:
 *     ?GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z @ 0x18000A740 (-GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z.c)
 * Callees:
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x1800B7888 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplaySet::GetDisplay(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  void (__fastcall ***v4)(_QWORD); // rbx
  unsigned int v6; // r10d
  unsigned int v7; // r9d
  char v8; // r11
  unsigned int v9; // edi
  __int64 v10; // r14
  __int64 v11; // rcx
  _DWORD *DisplayId; // rax
  void (__fastcall ***v13)(_QWORD); // rcx
  int v14; // r8d
  char v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+48h] [rbp+10h]

  v17 = a2;
  v4 = 0LL;
  *a4 = 0LL;
  v6 = a2;
  v7 = *(_DWORD *)(a1 + 72);
  v8 = 0;
  v9 = 0;
  if ( v7 )
  {
    v10 = *(_QWORD *)(a1 + 48);
    while ( 1 )
    {
      v11 = *(_QWORD *)(v10 + 8LL * v9);
      if ( *(_QWORD *)(v11 + 248) == __PAIR64__(HIDWORD(v17), v6) )
      {
        DisplayId = (_DWORD *)CDisplay::GetDisplayId(v11, &v16);
        if ( *DisplayId == v14 )
          break;
      }
      if ( ++v9 >= v7 )
        goto LABEL_6;
    }
    v4 = v13;
    (**v13)(v13);
    v8 = 1;
  }
LABEL_6:
  *a4 = v4;
  return v8 == 0 ? 0x80070057 : 0;
}
