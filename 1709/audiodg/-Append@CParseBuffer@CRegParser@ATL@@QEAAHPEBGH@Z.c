/*
 * XREFs of ?Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z @ 0x14005248C
 * Callers:
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x140053514 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 * Callees:
 *     memcpy_s @ 0x140034390 (memcpy_s.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x1400387A8 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ??$AtlMultiply@K@ATL@@YAJPEAKKK@Z @ 0x14004692C (--$AtlMultiply@K@ATL@@YAJPEAKKK@Z.c)
 */

__int64 __fastcall ATL::CRegParser::CParseBuffer::Append(
        ATL::CRegParser::CParseBuffer *this,
        const unsigned __int16 *a2,
        int a3)
{
  int v6; // ecx
  signed int v7; // edi
  LPVOID v8; // rax
  int v9; // eax
  int v10; // edx
  errno_t v11; // eax
  SIZE_T cb; // [rsp+50h] [rbp+18h] BYREF

  v6 = *(_DWORD *)this + a3 + 1;
  if ( v6 > *(_DWORD *)this && v6 > a3 )
  {
    v7 = *((_DWORD *)this + 1);
    if ( v6 < v7 )
    {
LABEL_9:
      if ( *(int *)this >= 0 )
      {
        v9 = *((_DWORD *)this + 1);
        if ( *(_DWORD *)this < v9 )
        {
          v10 = v9 - *(_DWORD *)this;
          if ( v10 <= v9 )
          {
            v11 = memcpy_s((void *const)(*((_QWORD *)this + 1) + 2LL * *(int *)this), 2LL * v10, a2, 2 * a3);
            ATL::AtlCrtErrorCheck(v11);
            *(_DWORD *)this += a3;
            *(_WORD *)(*((_QWORD *)this + 1) + 2LL * *(int *)this) = 0;
            return 1LL;
          }
        }
      }
    }
    else
    {
      while ( v7 <= 0x3FFFFFFF )
      {
        v7 *= 2;
        if ( v6 < v7 )
        {
          LODWORD(cb) = 0;
          if ( (int)ATL::AtlMultiply<unsigned long>(&cb, v7, 2u) >= 0 )
          {
            v8 = CoTaskMemRealloc(*((LPVOID *)this + 1), (unsigned int)cb);
            if ( v8 )
            {
              *((_QWORD *)this + 1) = v8;
              *((_DWORD *)this + 1) = v7;
              goto LABEL_9;
            }
          }
          return 0LL;
        }
      }
    }
  }
  return 0LL;
}
