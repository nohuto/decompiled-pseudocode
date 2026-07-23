/*
 * XREFs of sub_18004FEB8 @ 0x18004FEB8
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180022CD0 (LdrResolveDelayLoadedAPI.c)
 *     sub_18004FD90 @ 0x18004FD90 (sub_18004FD90.c)
 *     sub_180050300 @ 0x180050300 (sub_180050300.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     sub_18002B3EC @ 0x18002B3EC (sub_18002B3EC.c)
 *     sub_18004FB50 @ 0x18004FB50 (sub_18004FB50.c)
 *     sub_180050068 @ 0x180050068 (sub_180050068.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     bsearch_s @ 0x18008DC50 (bsearch_s.c)
 */

__int64 __fastcall sub_18004FEB8(char *BaseOfImage, unsigned int a2, unsigned int a3)
{
  char *v5; // r12
  unsigned int v6; // esi
  _DWORD *v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // r14d
  unsigned int *v10; // rdi
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // r12
  char v17[8]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int *Context; // [rsp+38h] [rbp-38h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp-30h] BYREF
  char *v20; // [rsp+48h] [rbp-28h]
  _QWORD Key[2]; // [rsp+50h] [rbp-20h] BYREF

  v20 = BaseOfImage;
  Context = 0LL;
  Key[0] = 0LL;
  Key[1] = 0LL;
  v5 = BaseOfImage;
  v6 = 0;
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &OutHeaders);
  v7 = sub_18002B3EC(v5);
  if ( v7 )
  {
    if ( *v7 >= 0xB0u )
    {
      v8 = *((_QWORD *)v7 + 21);
      if ( v8 )
      {
        if ( (OutHeaders->OptionalHeader.DllCharacteristics & 0x4000) != 0 )
        {
          v9 = v7[36];
          if ( (v9 & 0x4000) != 0 )
          {
            v10 = (unsigned int *)*((_QWORD *)v7 + 20);
            v11 = (v9 >> 28) + 4;
            if ( !a2 )
              a2 = *v10;
            v12 = *(unsigned int *)((char *)v10 + v11 * ((_DWORD)v8 - 1));
            if ( !a3 )
              a3 = *(unsigned int *)((char *)v10 + v11 * ((_DWORD)v8 - 1));
            if ( a2 <= v12 && *v10 <= a3 && a3 >= a2 )
            {
              if ( *v10 >= a2 )
                goto LABEL_15;
              LODWORD(Key[0]) = a2;
              Context = v10;
              if ( bsearch_s(Key, v10, (unsigned int)v8, v11, sub_18007FAE0, &Context) || a2 != a3 )
              {
                v10 = Context;
LABEL_15:
                LODWORD(v14) = 0;
                while ( (unsigned int)v14 < a3 && (unsigned int)v14 < v12 )
                {
                  v15 = v14;
                  v14 = *v10;
                  if ( v15 >= (unsigned int)v14 )
                    return (unsigned int)-1073741701;
                  v16 = *(_QWORD *)&v5[v14];
                  if ( (unsigned int)sub_180050068(v16, v17) != 1 && (v17[0] & 0x10) != 0 )
                  {
                    v6 = sub_18004FB50(v16, 4u, &OutHeaders);
                    if ( (v6 & 0x80000000) != 0 )
                      return v6;
                  }
                  v5 = v20;
                  v10 = (unsigned int *)((char *)v10 + v11);
                }
                return v6;
              }
            }
            return 0LL;
          }
        }
      }
    }
  }
  return v6;
}
