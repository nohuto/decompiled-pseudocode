/*
 * XREFs of LdrpUnsuppressAddressTakenIat @ 0x180001314
 * Callers:
 *     LdrpDoPostSnapWork @ 0x18001C2FC (LdrpDoPostSnapWork.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180022944 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrResolveDelayLoadedAPI @ 0x180029F10 (LdrResolveDelayLoadedAPI.c)
 *     AvrfMiniLoadDll @ 0x1800DB92C (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlValidateUserCallTarget @ 0x1800014D4 (RtlValidateUserCallTarget.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x180001594 (RtlGuardGrantSuppressedCallAccess.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1800230B8 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     bsearch_s @ 0x1800936F0 (bsearch_s.c)
 */

__int64 __fastcall LdrpUnsuppressAddressTakenIat(char *a1, unsigned int a2, unsigned int a3)
{
  char *v5; // r12
  unsigned int v6; // esi
  __int64 Config; // rax
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

  v20 = a1;
  Context = 0LL;
  Key[0] = 0LL;
  Key[1] = 0LL;
  v5 = a1;
  v6 = 0;
  RtlImageNtHeaderEx(3u, a1, 0LL, &OutHeaders);
  Config = LdrImageDirectoryEntryToLoadConfig((int)v5);
  if ( Config )
  {
    if ( *(_DWORD *)Config >= 0xB0u )
    {
      if ( *(_QWORD *)(Config + 168) )
      {
        if ( (OutHeaders->OptionalHeader.DllCharacteristics & 0x4000) != 0 )
        {
          v8 = *(_DWORD *)(Config + 144);
          if ( (v8 & 0x4000) != 0 )
          {
            v9 = *(unsigned int **)(Config + 160);
            v10 = *(unsigned int *)(Config + 168);
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
              if ( bsearch_s(Key, v9, v10, v11, LdrpTargetCompare, &Context) || a2 != a3 )
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
                  if ( (unsigned int)RtlValidateUserCallTarget(v15, v17) != 1 && (v17[0] & 0x10) != 0 )
                  {
                    v6 = RtlGuardGrantSuppressedCallAccess(v15, 4LL, &OutHeaders);
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
