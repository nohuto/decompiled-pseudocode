/*
 * XREFs of sub_180001328 @ 0x180001328
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x18003A360 (LdrResolveDelayLoadedAPI.c)
 *     sub_180058B10 @ 0x180058B10 (sub_180058B10.c)
 *     sub_180073184 @ 0x180073184 (sub_180073184.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 * Callees:
 *     sub_1800014DC @ 0x1800014DC (sub_1800014DC.c)
 *     sub_18000159C @ 0x18000159C (sub_18000159C.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     sub_18003A72C @ 0x18003A72C (sub_18003A72C.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     bsearch_s @ 0x1800987F0 (bsearch_s.c)
 */

__int64 __fastcall sub_180001328(char *BaseOfImage, unsigned int a2, unsigned int a3)
{
  char *v5; // r12
  unsigned int v6; // esi
  __int64 v7; // rax
  unsigned int v8; // r14d
  unsigned int *v9; // rdi
  rsize_t v10; // rdx
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // r12
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
  v7 = sub_18003A72C(v5);
  if ( v7 )
  {
    if ( *(_DWORD *)v7 >= 0xB0u )
    {
      if ( *(_QWORD *)(v7 + 168) )
      {
        if ( (OutHeaders->OptionalHeader.DllCharacteristics & 0x4000) != 0 )
        {
          v8 = *(_DWORD *)(v7 + 144);
          if ( (v8 & 0x4000) != 0 )
          {
            v9 = *(unsigned int **)(v7 + 160);
            v10 = *(unsigned int *)(v7 + 168);
            v11 = (v8 >> 28) + 4;
            if ( !a2 )
              a2 = *v9;
            v12 = *(unsigned int *)((char *)v9 + v11 * ((_DWORD)v10 - 1));
            if ( !a3 )
              a3 = *(unsigned int *)((char *)v9 + v11 * ((_DWORD)v10 - 1));
            if ( a2 <= v12 && *v9 <= a3 && a3 >= a2 )
            {
              if ( *v9 >= a2 )
                goto LABEL_14;
              LODWORD(Key[0]) = a2;
              Context = v9;
              if ( bsearch_s(Key, v9, v10, v11, CompareFunction, &Context) || a2 != a3 )
              {
                v9 = Context;
LABEL_14:
                LODWORD(v13) = 0;
                while ( (unsigned int)v13 < a3 && (unsigned int)v13 < v12 )
                {
                  v14 = v13;
                  v13 = *v9;
                  if ( v14 >= (unsigned int)v13 )
                    return (unsigned int)-1073741701;
                  v15 = *(_QWORD *)&v5[v13];
                  if ( (unsigned int)sub_1800014DC(v15, v17) != 1 && (v17[0] & 0x10) != 0 )
                  {
                    v6 = sub_18000159C(v15, 4LL, &OutHeaders);
                    if ( (v6 & 0x80000000) != 0 )
                      return v6;
                  }
                  v5 = v20;
                  v9 = (unsigned int *)((char *)v9 + v11);
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
