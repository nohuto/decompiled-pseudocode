/*
 * XREFs of ACPIRegReadEntireAcpiTable @ 0x1C0081D08
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0071964 (ACPIRegReadAMLRegistryEntry.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0002234 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     WPP_RECORDER_SF_d @ 0x1C00377D8 (WPP_RECORDER_SF_d.c)
 *     OSReadRegValue @ 0x1C00829B8 (OSReadRegValue.c)
 */

__int64 __fastcall ACPIRegReadEntireAcpiTable(__int64 a1, const void **a2)
{
  _DWORD *v2; // rbx
  char *PoolWithTag; // rdi
  unsigned int v6; // r12d
  unsigned int v7; // ebp
  unsigned int *v8; // r13
  unsigned int *v9; // rsi
  unsigned int v10; // ecx
  unsigned int v11; // eax
  PVOID v12; // rax
  PVOID v13; // r14
  unsigned int v14; // edx
  SIZE_T v15; // rdx
  char *v16; // rax
  char *v17; // r14
  int v18; // esi
  int v19; // [rsp+34h] [rbp-64h]
  char pszDest[16]; // [rsp+40h] [rbp-58h] BYREF

  v2 = *a2;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x4000uLL, 0x42706341u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v6 = v2[1];
  v19 = 0;
  RtlStringCchPrintfA(pszDest, 9uLL, "%08lx", 0);
LABEL_18:
  if ( (int)OSReadRegValue(pszDest) >= 0 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = (unsigned int *)*a2;
      v9 = (unsigned int *)&PoolWithTag[v7];
      v10 = v9[1];
      v11 = *v9;
      if ( v10 )
      {
        v15 = v10 + v11;
        if ( (unsigned int)v15 <= v6 )
        {
          v17 = (char *)*a2;
        }
        else
        {
          v6 = v10 + v11;
          v16 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x74706341u);
          v17 = v16;
          if ( !v16 )
          {
            ExFreePoolWithTag(PoolWithTag, 0);
            return 3221225626LL;
          }
          memmove(v16, *a2, v8[1]);
          ExFreePoolWithTag((PVOID)*a2, 0);
          *a2 = v17;
          v10 = v9[1];
          v11 = *v9;
        }
        memmove(&v17[v11], v9 + 2, v10);
      }
      else if ( v11 != v8[1] )
      {
        v6 = *v9;
        v12 = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x74706341u);
        v13 = v12;
        if ( !v12 )
        {
          ExFreePoolWithTag(PoolWithTag, 0);
          return 3221225626LL;
        }
        v14 = *v9;
        if ( *v9 >= v8[1] )
          v14 = v8[1];
        memmove(v12, *a2, v14);
        ExFreePoolWithTag((PVOID)*a2, 0);
        *a2 = v13;
      }
      v7 += v9[1] + 8;
      if ( v7 >= 0x4000 )
      {
        v18 = v19++;
        RtlStringCchPrintfA(pszDest, 9uLL, "%08lx", v18 + 1);
        goto LABEL_18;
      }
    }
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}
