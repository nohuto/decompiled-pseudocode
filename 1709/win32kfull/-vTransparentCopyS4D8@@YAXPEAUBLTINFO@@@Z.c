/*
 * XREFs of ?vTransparentCopyS4D8@@YAXPEAUBLTINFO@@@Z @ 0x1C026F760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vTransparentCopyS4D8(struct BLTINFO *a1)
{
  int v1; // ebp
  int v2; // r10d
  __int64 v3; // r14
  __int64 v4; // r8
  _BYTE *v5; // r9
  int v6; // esi
  unsigned __int8 *v7; // r11
  _BYTE *v8; // rdi
  int i; // ebx
  unsigned int v10; // eax
  __int64 v11; // rax

  v1 = *((_DWORD *)a1 + 7);
  v2 = *((_DWORD *)a1 + 8);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v4 = *((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1);
  v5 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  while ( v2 )
  {
    v6 = *((_DWORD *)a1 + 12);
    --v2;
    v7 = (unsigned __int8 *)v4;
    v8 = v5;
    for ( i = v1; i; ++v8 )
    {
      v10 = *v7;
      --i;
      if ( (v6 & 1) != 0 )
      {
        v11 = v10 & 0xF;
        ++v7;
      }
      else
      {
        v11 = v10 >> 4;
      }
      LOBYTE(v6) = v6 + 1;
      if ( (_DWORD)v11 != *((_DWORD *)a1 + 37) )
        *v8 = *(_BYTE *)(v3 + 4 * v11);
    }
    v4 += *((int *)a1 + 10);
    v5 += *((int *)a1 + 11);
  }
}
