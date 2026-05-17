/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x180022CD0
 * Callers:
 *     sub_180023294 @ 0x180023294 (sub_180023294.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800CB140 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     sub_18000F300 @ 0x18000F300 (sub_18000F300.c)
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18001F704 @ 0x18001F704 (sub_18001F704.c)
 *     sub_18001FA3C @ 0x18001FA3C (sub_18001FA3C.c)
 *     sub_18004FEB8 @ 0x18004FEB8 (sub_18004FEB8.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     sub_1800CB310 @ 0x1800CB310 (sub_1800CB310.c)
 */

__int64 __fastcall LdrResolveDelayLoadedAPI(const void *a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 *a5, int a6)
{
  __int64 v9; // rbx
  int v10; // ecx
  unsigned __int64 v11; // rsi
  int v12; // eax
  char v13; // cl
  char v15; // al
  unsigned __int64 v16; // [rsp+50h] [rbp-38h] BYREF

  v9 = 0LL;
  if ( ((a6 & 0xFFFFDFFF) == 8 || (~((dword_1801596D4 & 4 | 0x7B) << 8) & a6) == 0) && (*a2 & 1) != 0 )
  {
    v10 = sub_18001FA3C((unsigned __int64)a1, (__int64 *)&v16, 0LL);
    if ( v10 < 0 )
    {
      v15 = dword_180156A70;
      if ( (dword_180156A70 & 3) != 0 )
      {
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          1118,
          (unsigned int)"LdrResolveDelayLoadedAPI",
          0,
          "LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
          a1,
          v10);
        v15 = dword_180156A70;
      }
      if ( (v15 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      v9 = *a5;
      v11 = v16;
      if ( *a5 - (__int64)a1 < (unsigned __int64)*(unsigned int *)(v16 + 64) )
      {
        if ( (*(_DWORD *)(v16 + 104) & 0x8000) != 0 )
        {
          v9 = sub_18000F300(v16, (__int64)a2, a3, a4, a5, a6);
        }
        else
        {
          v9 = sub_1800CB310(v16, (_DWORD)a2, a3, a4, (__int64)a5, a6);
          if ( v9 )
          {
            if ( (unsigned int)sub_18001F704() )
            {
              v12 = sub_18004FEB8(a1, (unsigned int)((_DWORD)a5 - (_DWORD)a1), (unsigned int)((_DWORD)a5 - (_DWORD)a1));
              if ( v12 < 0 )
              {
                v13 = dword_180156A70;
                if ( (dword_180156A70 & 3) != 0 )
                {
                  sub_1800CA554(
                    (unsigned int)"minkernel\\ntdll\\ldrdload.c",
                    1097,
                    (unsigned int)"LdrResolveDelayLoadedAPI",
                    0,
                    "LdrResolveDelayLoadedAPI:Unable to unsuppress the export suppressed functions that are imported in t"
                    "he DLL based at 0x%p.Status = 0x%x\n",
                    a1,
                    v12);
                  v13 = dword_180156A70;
                }
                if ( (v13 & 0x10) != 0 )
                  __debugbreak();
              }
            }
          }
        }
      }
      sub_18001F5FC(v11);
    }
  }
  return v9;
}
