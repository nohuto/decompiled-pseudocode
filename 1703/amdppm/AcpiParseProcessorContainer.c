/*
 * XREFs of AcpiParseProcessorContainer @ 0x1C001A8C8
 * Callers:
 *     AcpiGetCoordinatedLpiStates @ 0x1C001A6C4 (AcpiGetCoordinatedLpiStates.c)
 * Callees:
 *     GetDevExtByAcpiId @ 0x1C0008E20 (GetDevExtByAcpiId.c)
 *     memset @ 0x1C000C3C0 (memset.c)
 *     AcpiParseLpiObject @ 0x1C0019FC4 (AcpiParseLpiObject.c)
 */

__int64 __fastcall AcpiParseProcessorContainer(_DWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned int v7; // ecx
  _WORD *v8; // r15
  _WORD *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 i; // rbx
  signed int v12; // ecx
  __int64 v13; // rbx
  size_t v14; // rbx
  PVOID PoolWithTag; // rax
  __int64 v16; // r10
  unsigned __int16 v17; // r8
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int16 v20; // ax
  __int64 v21; // r10
  int v22; // eax
  PVOID v23; // rax
  unsigned int v24; // r9d
  char *v25; // r10
  __int64 *DevExtByAcpiId; // rax
  int v27; // r9d
  __int64 v28; // r11
  __int64 v29; // rax

  v5 = 0LL;
  v6 = 3LL * a2;
  *(_DWORD *)(a3 + 24) = a1[6 * a2 + 3];
  v7 = a1[6 * a2 + 4];
  v8 = (_WORD *)((char *)a1 + v7);
  if ( v8 )
  {
    v9 = (_WORD *)((char *)a1 + v7);
    v10 = (unsigned __int64)(*a1 - v7) >> 1;
    for ( i = v10; v10; --v10 )
    {
      if ( !*v9 )
        break;
      ++v9;
    }
    v12 = v10 == 0 ? 0xC000000D : 0;
    if ( v10 )
      v5 = i - v10;
    else
      v5 = 0LL;
  }
  else
  {
    v12 = -1073741811;
  }
  if ( v12 < 0 )
    v13 = 0LL;
  else
    v13 = 2 * v5;
  if ( v12 >= 0 )
  {
    v14 = v13 + 2;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v14, 0x72637250u);
    *(_QWORD *)(a3 + 8) = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, v14);
    *(_WORD *)(a3 + 2) = v14;
    v16 = 0LL;
    v17 = *(_WORD *)a3;
    v18 = 0LL;
    v12 = 0;
    if ( (((unsigned __int16)v14 | *(_WORD *)a3) & 1) != 0 || v17 > (unsigned __int16)v14 || (_WORD)v14 == 0xFFFF )
    {
      v12 = -1073741811;
    }
    else
    {
      if ( !*(_QWORD *)(a3 + 8) && (v17 || (_WORD)v14) )
      {
        v12 = -1073741811;
      }
      else
      {
        v16 = *(_QWORD *)(a3 + 8);
        v18 = (unsigned __int64)(unsigned __int16)v14 >> 1;
      }
      if ( v12 < 0 )
        return (unsigned int)v12;
      v19 = 0x7FFFLL;
      v12 = 0;
      v20 = 0;
      if ( !v18 )
        goto LABEL_48;
      v21 = v16 - (_QWORD)v8;
      do
      {
        if ( !v19 )
          break;
        if ( !*v8 )
          break;
        *(_WORD *)((char *)v8 + v21) = *v8;
        --v19;
        ++v8;
        ++v20;
        --v18;
      }
      while ( v18 );
      if ( !v18 && v19 )
      {
LABEL_48:
        if ( *v8 )
          v12 = -2147483643;
      }
      *(_WORD *)a3 = 2 * v20;
    }
    if ( v12 < 0 )
      return (unsigned int)v12;
    v22 = a1[2 * v6 + 6];
    *(_DWORD *)(a3 + 28) = v22;
    if ( !v22 )
      goto LABEL_41;
    v23 = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * (unsigned int)a1[2 * v6 + 6], 0x72637250u);
    *(_QWORD *)(a3 + 32) = v23;
    if ( !v23 )
      return (unsigned int)-1073741670;
    v24 = 0;
    v25 = (char *)a1 + (unsigned int)a1[2 * v6 + 7];
    if ( a1[2 * v6 + 6] )
    {
      while ( 1 )
      {
        DevExtByAcpiId = GetDevExtByAcpiId(*(_DWORD *)&v25[4 * v24]);
        if ( !DevExtByAcpiId )
          return (unsigned int)-1073741275;
        v24 = v27 + 1;
        *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4 * v28) = *((_DWORD *)DevExtByAcpiId + 14);
        if ( v24 >= a1[2 * v6 + 6] )
          goto LABEL_41;
      }
    }
    else
    {
LABEL_41:
      v29 = (unsigned int)a1[2 * v6 + 5];
      if ( !(_DWORD)v29 )
        return 0;
      v12 = AcpiParseLpiObject((__int64)a1 + v29, *(const wchar_t **)(a3 + 8), 1, (_QWORD *)(a3 + 16));
      if ( v12 >= 0 )
        return 0;
    }
  }
  return (unsigned int)v12;
}
