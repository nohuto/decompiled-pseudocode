/*
 * XREFs of ?vSrcCopyS8D4@@YAXPEAUBLTINFO@@@Z @ 0x1C02A57A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS8D4(struct BLTINFO *a1)
{
  __int64 v1; // rdx
  int v2; // ebp
  int v3; // r15d
  __int64 v4; // r14
  _BYTE *v5; // r8
  unsigned __int8 *v6; // r11
  int v7; // r10d
  _BYTE *v8; // rbx
  unsigned __int8 *v9; // rdi
  int i; // esi
  __int64 v11; // rax
  __int64 v12; // rdx

  v1 = *((int *)a1 + 14);
  v2 = v1 + *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v5 = (_BYTE *)(*((_QWORD *)a1 + 2) + (v1 >> 1));
  v6 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + *((int *)a1 + 12));
  while ( 1 )
  {
    v7 = *((_DWORD *)a1 + 14);
    v8 = v5;
    v9 = v6;
    if ( (v7 & 1) != 0 )
    {
      v9 = v6 + 1;
      v8 = v5 + 1;
      *v5 = *v5 & 0xF0 | *(_BYTE *)(v4 + 4LL * *v6);
      ++v7;
    }
    for ( i = v7 + 1; i < v2; i += 2 )
    {
      v11 = *v9;
      v7 += 2;
      v12 = v9[1];
      v9 += 2;
      *v8++ = (16 * *(_BYTE *)(v4 + 4 * v11)) | *(_BYTE *)(v4 + 4 * v12);
    }
    if ( v7 < v2 )
      *v8 = *v8 & 0xF | (16 * *(_BYTE *)(v4 + 4LL * *v9));
    if ( !--v3 )
      break;
    v6 += *((int *)a1 + 10);
    v5 += *((int *)a1 + 11);
  }
}
