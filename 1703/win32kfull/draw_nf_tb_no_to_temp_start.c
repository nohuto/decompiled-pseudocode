/*
 * XREFs of draw_nf_tb_no_to_temp_start @ 0x1C00D9B80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall draw_nf_tb_no_to_temp_start(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v5; // rdi
  int v8; // ebx
  __int64 v10; // rsi
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r11
  int v15; // r10d
  int v16; // ebp
  __int64 v17; // r8
  __int64 result; // rax
  __int64 v19; // rcx

  if ( a2 )
  {
    v5 = 0LL;
    v8 = a2;
    do
    {
      --v8;
      v10 = **(_QWORD **)(a1 + 24 * v5 + 8);
      v11 = v10 + 16;
      v12 = *(_DWORD *)(v10 + 8);
      v13 = (*(_BYTE *)v10 + *(_BYTE *)(a1 + 24 * v5 + 16) - (_BYTE)a4) & 7;
      v14 = a3 + ((__int64)(*(_DWORD *)v10 + *(_DWORD *)(a1 + 24 * v5 + 16) - a4) >> 3);
      v15 = (v12 + (int)v13 + 7) >> 3;
      v16 = (v12 + 7) >> 3;
      if ( v15 > 4 )
      {
        v19 = 0LL;
        if ( v15 > v16 )
          v19 = 2LL;
        result = OrAllTableWide[((_DWORD)v13 == 0) | (unsigned __int64)v19](
                   *(_DWORD *)(v10 + 12),
                   v13,
                   a5,
                   v11,
                   v14,
                   v16,
                   v15);
      }
      else
      {
        v17 = 0LL;
        if ( v15 > v16 )
          v17 = 2LL;
        result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, __int64, __int64, int))OrInitialTableNarrow[((_DWORD)v13 == 0) | (unsigned int)(4 * v15) | (unsigned __int64)v17])(
                   *(unsigned int *)(v10 + 12),
                   v13,
                   a5,
                   v11,
                   v14,
                   v16);
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( v8 );
  }
  return result;
}
