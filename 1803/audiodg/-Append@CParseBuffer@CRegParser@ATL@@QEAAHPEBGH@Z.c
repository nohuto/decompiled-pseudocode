/*
 * XREFs of ?Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z @ 0x140050D44
 * Callers:
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x140051E28 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 * Callees:
 *     memcpy_s @ 0x140033200 (memcpy_s.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x140037388 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ??$AtlMultiply@K@ATL@@YAJPEAKKK@Z @ 0x140044B8C (--$AtlMultiply@K@ATL@@YAJPEAKKK@Z.c)
 */

__int64 __fastcall ATL::CRegParser::CParseBuffer::Append(
        ATL::CRegParser::CParseBuffer *this,
        const unsigned __int16 *a2,
        int a3)
{
  int v3; // eax
  int v6; // ecx
  signed int v8; // ebx
  LPVOID v9; // rax
  errno_t v10; // eax
  SIZE_T cb; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_DWORD *)this;
  v6 = *(_DWORD *)this + a3 + 1;
  if ( v6 > v3 && v6 > a3 )
  {
    v8 = *((_DWORD *)this + 1);
    if ( v6 < v8 )
    {
LABEL_9:
      if ( v3 >= 0 && v3 < v8 && v8 - v3 <= v8 )
      {
        v10 = memcpy_s((void *const)(*((_QWORD *)this + 1) + 2LL * v3), 2LL * (v8 - v3), a2, 2 * a3);
        ATL::AtlCrtErrorCheck(v10);
        *(_DWORD *)this += a3;
        *(_WORD *)(*((_QWORD *)this + 1) + 2LL * *(int *)this) = 0;
        return 1LL;
      }
    }
    else
    {
      while ( v8 <= 0x3FFFFFFF )
      {
        v8 *= 2;
        if ( v6 < v8 )
        {
          LODWORD(cb) = 0;
          if ( (int)ATL::AtlMultiply<unsigned long>(&cb, v8, 2u) >= 0 )
          {
            v9 = CoTaskMemRealloc(*((LPVOID *)this + 1), (unsigned int)cb);
            if ( v9 )
            {
              *((_QWORD *)this + 1) = v9;
              v3 = *(_DWORD *)this;
              *((_DWORD *)this + 1) = v8;
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
