/*
 * XREFs of ?IsVbr@PC_DISK@@QEAAEXZ @ 0x14016209C
 * Callers:
 *     ?Reset@PC_DISK@@QEAAJXZ @ 0x1401621A4 (-Reset@PC_DISK@@QEAAJXZ.c)
 * Callees:
 *     ?Validate@MBR_ENTRY@@QEAAEK_K@Z @ 0x140161F84 (-Validate@MBR_ENTRY@@QEAAEK_K@Z.c)
 */

char __fastcall PC_DISK::IsVbr(PC_DISK *this)
{
  __int64 v1; // rsi
  char v2; // bl
  int v5; // ecx
  _BYTE *i; // rax
  unsigned __int64 v7; // r8
  unsigned int v8; // edi

  v1 = *((_QWORD *)this + 6);
  v2 = 0;
  if ( *(_WORD *)(v1 + 510) == 0xAA55 && ((*(_BYTE *)v1 + 23) & 0xFD) == 0 )
  {
    v2 = 1;
    if ( *((_DWORD *)this + 4) == 11 )
    {
      if ( *(_QWORD *)(v1 + 3) == *(_QWORD *)"NTFS    " )
        return v2;
      v5 = 0;
      for ( i = (_BYTE *)(v1 + 450); !*i; i += 16 )
      {
        if ( (unsigned int)++v5 >= 4 )
          return v2;
      }
    }
    v7 = *((_QWORD *)this + 4);
    v8 = 0;
    while ( MBR_ENTRY::Validate((MBR_ENTRY *)(16LL * v8 + v1 + 446), 0, v7) )
    {
      if ( ++v8 >= 4 )
        return 0;
    }
  }
  return v2;
}
