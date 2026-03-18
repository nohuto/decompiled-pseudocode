/*
 * XREFs of ?vSrcCopyS4D8@@YAXPEAUBLTINFO@@@Z @ 0x1C02A5D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS4D8(struct BLTINFO *a1)
{
  unsigned int v1; // edi
  _BYTE *v2; // r10
  __int64 v3; // r14
  int v4; // esi
  unsigned __int8 *v5; // rdx
  int v6; // r8d
  _BYTE *v7; // r9
  unsigned __int8 *v8; // r11
  char v9; // bl
  unsigned __int64 v10; // rax

  LOBYTE(v1) = 0;
  v2 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v4 = *((_DWORD *)a1 + 8);
  v5 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1));
  do
  {
    v6 = *((_DWORD *)a1 + 12);
    v7 = v2;
    v8 = v5;
    if ( (v6 & 1) != 0 )
    {
      LOBYTE(v1) = *v5;
      v8 = v5 + 1;
    }
    if ( v6 < *((_DWORD *)a1 + 13) )
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
        *v7++ = *(_BYTE *)(v3 + 4 * v10);
      }
      while ( v6 < *((_DWORD *)a1 + 13) );
    }
    v5 += *((int *)a1 + 10);
    v2 += *((int *)a1 + 11);
    --v4;
  }
  while ( v4 );
}
