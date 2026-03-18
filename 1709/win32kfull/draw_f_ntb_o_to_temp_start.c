/*
 * XREFs of draw_f_ntb_o_to_temp_start @ 0x1C02AFF50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void __fastcall draw_f_ntb_o_to_temp_start(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5, int a6, int a7)
{
  __int64 v7; // rsi
  int v8; // ebx
  int v9; // r14d
  int v10; // edi
  _DWORD *v12; // r10
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // r12d
  int v17; // r11d
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // [rsp+80h] [rbp+18h]

  if ( a2 )
  {
    v22 = a3;
    v7 = 0LL;
    v8 = *(_DWORD *)(a1 + 16) - a4;
    v9 = *(_DWORD *)(a1 + 20) - a7;
    v10 = a2;
    do
    {
      --v10;
      v12 = **(_DWORD ***)(a1 + 24 * v7 + 8);
      v13 = v12[2];
      v14 = v8 + *v12;
      v15 = ((_BYTE)v8 + *(_BYTE *)v12) & 7;
      v16 = (v13 + 7) >> 3;
      v17 = (v13 + (int)v15 + 7) >> 3;
      v18 = a3 + (int)(a5 * (v9 + v12[1]));
      v19 = v18 + ((__int64)v14 >> 3);
      if ( v17 > 4 )
      {
        v21 = 0LL;
        if ( v17 > v16 )
          v21 = 2LL;
        OrAllTableWide[((_DWORD)v15 == 0) | (unsigned __int64)v21](v12[3], v15, a5, (int)(v12 + 4), v19, v16, v17);
      }
      else
      {
        v20 = 0LL;
        if ( v17 > v16 )
          v20 = 2LL;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _DWORD *, __int64, int))OrAllTableNarrow[((_DWORD)v15 == 0) | (unsigned int)(4 * v17) | (unsigned __int64)v20])(
          (unsigned int)v12[3],
          v15,
          a5,
          v12 + 4,
          v18 + ((__int64)v14 >> 3),
          v16);
      }
      v8 += a6;
      v7 = (unsigned int)(v7 + 1);
      a3 = v22;
    }
    while ( v10 );
  }
}
