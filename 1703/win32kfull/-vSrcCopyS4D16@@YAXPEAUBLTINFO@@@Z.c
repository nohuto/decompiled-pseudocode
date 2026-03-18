/*
 * XREFs of ?vSrcCopyS4D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02A6DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS4D16(struct BLTINFO *a1)
{
  unsigned int v1; // edi
  int v2; // esi
  _WORD *v3; // r10
  unsigned __int8 *v4; // rdx
  __int64 v5; // r14
  int v6; // r8d
  _WORD *v7; // r9
  unsigned __int8 *v8; // r11
  char v9; // bl
  unsigned __int64 v10; // rax

  LOBYTE(v1) = 0;
  v2 = *((_DWORD *)a1 + 8);
  v3 = (_WORD *)(*((_QWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 14));
  v4 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1));
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  while ( 1 )
  {
    v6 = *((_DWORD *)a1 + 12);
    v7 = v3;
    v8 = v4;
    if ( (v6 & 1) != 0 )
    {
      LOBYTE(v1) = *v4;
      v8 = v4 + 1;
    }
    if ( v6 != *((_DWORD *)a1 + 13) )
    {
      v9 = v1;
      do
      {
        if ( (v6 & 1) != 0 )
        {
          v10 = v9 & 0xF;
        }
        else
        {
          v1 = *v8++;
          v9 = v1;
          v10 = (unsigned __int64)v1 >> 4;
        }
        ++v6;
        *v7++ = *(_WORD *)(v5 + 4 * v10);
      }
      while ( v6 != *((_DWORD *)a1 + 13) );
    }
    if ( !--v2 )
      break;
    v4 += *((int *)a1 + 10);
    v3 = (_WORD *)((char *)v3 + *((int *)a1 + 11));
  }
}
