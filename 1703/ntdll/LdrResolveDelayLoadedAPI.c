/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x18003A360
 * Callers:
 *     sub_18003A2D4 @ 0x18003A2D4 (sub_18003A2D4.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800D5B80 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     sub_180001328 @ 0x180001328 (sub_180001328.c)
 *     sub_180004ED8 @ 0x180004ED8 (sub_180004ED8.c)
 *     sub_180030138 @ 0x180030138 (sub_180030138.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180030264 @ 0x180030264 (sub_180030264.c)
 *     sub_1800324E0 @ 0x1800324E0 (sub_1800324E0.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall LdrResolveDelayLoadedAPI(const void *a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 *a5, int a6)
{
  __int64 v9; // rbx
  int v10; // r10d
  char v11; // al
  int v12; // ecx
  unsigned __int64 v13; // rsi
  int v14; // eax
  char v15; // cl
  char v17; // al
  unsigned __int64 v18; // [rsp+50h] [rbp-38h] BYREF

  v9 = 0LL;
  if ( (a6 & 0xFFFFDFFF) == 8 )
    goto LABEL_5;
  v10 = 32512;
  if ( (dword_180158674 & 4) == 0 )
    v10 = 31488;
  if ( (~v10 & a6) != 0 )
    v11 = 0;
  else
LABEL_5:
    v11 = 1;
  if ( v11 && (*a2 & 1) != 0 )
  {
    v12 = sub_180030264((unsigned __int64)a1, (__int64 *)&v18, 0LL);
    if ( v12 < 0 )
    {
      v17 = dword_180155A10;
      if ( (dword_180155A10 & 3) != 0 )
      {
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          1118,
          (unsigned int)"LdrResolveDelayLoadedAPI",
          0,
          "LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
          a1,
          v12);
        v17 = dword_180155A10;
      }
      if ( (v17 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      v9 = *a5;
      v13 = v18;
      if ( *a5 - (__int64)a1 < (unsigned __int64)*(unsigned int *)(v18 + 64) )
      {
        if ( (*(_DWORD *)(v18 + 104) & 0x8000) != 0 )
        {
          v9 = sub_1800324E0(v18, (__int64)a2, a3, a4, a5, a6);
        }
        else
        {
          v9 = sub_180004ED8(v18, (int)a2, a3, a4, a5, a6);
          if ( v9 )
          {
            if ( sub_180030138() )
            {
              v14 = sub_180001328((__int64)a1, (int)a5 - (int)a1, (int)a5 - (int)a1);
              if ( v14 < 0 )
              {
                v15 = dword_180155A10;
                if ( (dword_180155A10 & 3) != 0 )
                {
                  sub_1800D5274(
                    (unsigned int)"minkernel\\ntdll\\ldrdload.c",
                    1097,
                    (unsigned int)"LdrResolveDelayLoadedAPI",
                    0,
                    "LdrResolveDelayLoadedAPI:Unable to unsuppress the export suppressed functions that are imported in t"
                    "he DLL based at 0x%p.Status = 0x%x\n",
                    a1,
                    v14);
                  v15 = dword_180155A10;
                }
                if ( (v15 & 0x10) != 0 )
                  __debugbreak();
              }
            }
          }
        }
      }
      sub_18003015C(v13);
    }
  }
  return v9;
}
