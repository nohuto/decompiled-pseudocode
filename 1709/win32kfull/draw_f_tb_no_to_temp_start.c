/*
 * XREFs of draw_f_tb_no_to_temp_start @ 0x1C02B00C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall draw_f_tb_no_to_temp_start(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5, int a6)
{
  __int64 v6; // rsi
  int v8; // edi
  int v10; // ebx
  _DWORD *v11; // r14
  int v12; // eax
  _DWORD *v13; // r9
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // r11
  int v17; // ebp
  int v18; // r10d
  __int64 v19; // r8
  __int64 result; // rax
  __int64 v21; // rcx

  if ( a2 )
  {
    v6 = 0LL;
    v8 = a2;
    v10 = *(_DWORD *)(a1 + 16) - a4;
    do
    {
      --v8;
      v11 = **(_DWORD ***)(a1 + 24 * v6 + 8);
      v12 = v11[2];
      v13 = v11 + 4;
      v14 = v10 + *v11;
      v15 = ((_BYTE)v10 + *(_BYTE *)v11) & 7;
      v16 = a3 + ((__int64)v14 >> 3);
      v17 = (v12 + 7) >> 3;
      v18 = (v12 + (int)v15 + 7) >> 3;
      if ( v18 > 4 )
      {
        v21 = 0LL;
        if ( v18 > v17 )
          v21 = 2LL;
        result = OrAllTableWide[((_DWORD)v15 == 0) | (unsigned __int64)v21](v11[3], v15, a5, (int)v13, v16, v17, v18);
      }
      else
      {
        v19 = 0LL;
        if ( v18 > v17 )
          v19 = 2LL;
        result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _DWORD *, __int64, int))OrInitialTableNarrow[((_DWORD)v15 == 0) | (unsigned int)(4 * v18) | (unsigned __int64)v19])(
                   (unsigned int)v11[3],
                   v15,
                   a5,
                   v13,
                   a3 + ((__int64)v14 >> 3),
                   v17);
      }
      v10 += a6;
      v6 = (unsigned int)(v6 + 1);
    }
    while ( v8 );
  }
  return result;
}
