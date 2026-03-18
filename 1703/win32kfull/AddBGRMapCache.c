/*
 * XREFs of AddBGRMapCache @ 0x1C023CDF4
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C003390C (CreateDyesColorMappingTable.c)
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     TrimBGRMapCache @ 0x1C023DFE0 (TrimBGRMapCache.c)
 */

__int64 __fastcall AddBGRMapCache(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  int v5; // r8d
  int v6; // ecx
  int v7; // ebp
  unsigned __int64 v8; // rax
  PVOID v9; // rax
  void *v10; // rsi
  PVOID v11; // rdi
  _DWORD *v12; // rdx
  __int64 v13; // rax

  v4 = 1;
  EngAcquireSemaphore(qword_1C032C838);
  v5 = dword_1C032C858;
  if ( dword_1C032C858 > 5 && HIDWORD(qword_1C032C85C) )
  {
    TrimBGRMapCache();
    v5 = dword_1C032C858;
  }
  v6 = qword_1C032C85C;
  if ( v5 >= (int)qword_1C032C85C && (int)qword_1C032C85C + 10 >= (unsigned int)qword_1C032C85C )
  {
    v7 = qword_1C032C85C + 10;
    v8 = 16LL * (unsigned int)(qword_1C032C85C + 10);
    if ( v8 <= 0xFFFFFFFF )
    {
      v9 = EngAllocMem(1u, v8, 0x30365448u);
      v10 = v9;
      if ( v9 )
      {
        v11 = Src;
        if ( Src )
        {
          memmove(v9, Src, 16LL * dword_1C032C858);
          EngFreeMem(v11);
        }
        v6 = v7;
        Src = v10;
        LODWORD(qword_1C032C85C) = v7;
      }
      else
      {
        v6 = qword_1C032C85C;
      }
      v5 = dword_1C032C858;
    }
  }
  v12 = Src;
  if ( Src && v5 < v6 )
  {
    v13 = 2LL * v5;
    dword_1C032C858 = v5 + 1;
    *((_QWORD *)Src + v13) = a1;
    v12[2 * v13 + 3] = a2;
    v12[2 * v13 + 2] = 1;
  }
  else
  {
    v4 = 0;
  }
  EngReleaseSemaphore(qword_1C032C838);
  return v4;
}
