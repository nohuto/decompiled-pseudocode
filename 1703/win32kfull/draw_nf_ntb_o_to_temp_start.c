/*
 * XREFs of draw_nf_ntb_o_to_temp_start @ 0x1C0084400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall draw_nf_ntb_o_to_temp_start(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6, int a7)
{
  __int64 v7; // rbp
  int v10; // r14d
  __int64 v11; // r8
  __int64 v12; // r11
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // esi
  int v16; // edi
  _BYTE *v17; // rax
  __int64 v18; // r10
  __int64 v19; // r8
  unsigned __int8 *v20; // r9
  __int64 (__fastcall *v21)(); // r11
  unsigned __int8 *v22; // r10
  unsigned __int8 v23; // r8
  __int64 v24; // r10

  if ( a2 )
  {
    v7 = 0LL;
    v10 = a2;
    v11 = a1;
    do
    {
      --v10;
      v12 = **(_QWORD **)(v11 + 24 * v7 + 8);
      v13 = *(_DWORD *)(v12 + 8);
      v14 = (*(_BYTE *)v12 + *(_BYTE *)(v11 + 24 * v7 + 16) - (_BYTE)a4) & 7;
      v15 = (v13 + 7) >> 3;
      v16 = (int)(v13 + v14 + 7) >> 3;
      v17 = (_BYTE *)(a3
                    + a5 * (*(_DWORD *)(v11 + 24 * v7 + 20) + *(_DWORD *)(v12 + 4) - a7)
                    + ((__int64)(*(_DWORD *)v12 + *(_DWORD *)(v11 + 24 * v7 + 16) - a4) >> 3));
      if ( v16 > 4 )
      {
        v24 = 0LL;
        if ( v16 > v15 )
          v24 = 2LL;
        OrAllTableWide[(v14 == 0) | (unsigned __int64)v24](
          *(_DWORD *)(v12 + 12),
          v14,
          a5,
          v12 + 16,
          (__int64)v17,
          v15,
          v16);
      }
      else
      {
        v18 = *(int *)(v12 + 12);
        v19 = 0LL;
        v20 = (unsigned __int8 *)(v12 + 16);
        if ( v16 > v15 )
          v19 = 2LL;
        v21 = OrAllTableNarrow[(v14 == 0) | (unsigned int)(4 * v16) | (unsigned __int64)v19];
        if ( (char *)v21 == (char *)or_all_2_wide_rotated_no_last )
        {
          v22 = &v20[v18];
          do
          {
            v23 = *v20++;
            *v17 |= v23 >> v14;
            v17[1] |= v23 << (8 - v14);
            v17 += a5;
          }
          while ( v20 != v22 );
        }
        else
        {
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, unsigned __int8 *, _BYTE *, int))v21)(
            (unsigned int)v18,
            v14,
            (unsigned int)a5,
            v20,
            v17,
            v15);
        }
      }
      v11 = a1;
      v7 = (unsigned int)(v7 + 1);
    }
    while ( v10 );
  }
}
