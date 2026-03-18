/*
 * XREFs of BiEnumerateSubKeys @ 0x1405AE9F8
 * Callers:
 *     BiCleanupLoadedStores @ 0x1405ADCF8 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x1405AECB4 (BiOpenSystemStore.c)
 *     BcdEnumerateObjects @ 0x140778C58 (BcdEnumerateObjects.c)
 *     BiDeleteKey @ 0x140779740 (BiDeleteKey.c)
 *     BiBuildIdentifierList @ 0x14077AA54 (BiBuildIdentifierList.c)
 * Callees:
 *     BiSanitizeHandle @ 0x140131B74 (BiSanitizeHandle.c)
 *     BiZwEnumerateKey @ 0x140134A64 (BiZwEnumerateKey.c)
 *     BiZwQueryKey @ 0x140134B0C (BiZwQueryKey.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiEnumerateSubKeys(void *a1, _QWORD *a2, ULONG *a3)
{
  _QWORD *v3; // rax
  unsigned int v5; // esi
  unsigned int *v6; // r15
  _QWORD *v7; // r12
  NTSTATUS v8; // ebx
  __int64 v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // r14d
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  char *PoolWithTag; // rax
  char *v17; // r13
  ULONG v18; // ecx
  __int64 v19; // r8
  ULONG j; // esi
  NTSTATUS v21; // eax
  char *v22; // r13
  unsigned int i; // [rsp+34h] [rbp-B4h]
  void *v25; // [rsp+38h] [rbp-B0h]
  ULONG v26; // [rsp+40h] [rbp-A8h]
  ULONG v27; // [rsp+44h] [rbp-A4h] BYREF
  ULONG v28; // [rsp+48h] [rbp-A0h]
  _QWORD *v29; // [rsp+50h] [rbp-98h]
  ULONG *v30; // [rsp+58h] [rbp-90h]
  _QWORD *v31; // [rsp+60h] [rbp-88h]
  ULONG *v32; // [rsp+68h] [rbp-80h]
  int v33[5]; // [rsp+70h] [rbp-78h] BYREF
  ULONG v34; // [rsp+84h] [rbp-64h]
  unsigned int v35; // [rsp+88h] [rbp-60h]

  v30 = a3;
  v3 = a2;
  v29 = a2;
  v31 = a2;
  v32 = a3;
  v5 = 0;
  for ( i = 0; ; i = v5 )
  {
    *v3 = 0LL;
    *a3 = 0;
    v6 = 0LL;
    v7 = 0LL;
    a1 = (void *)BiSanitizeHandle((__int64)a1);
    v25 = a1;
    v8 = BiZwQueryKey(a1, KeyFullInformation, v33, 0x30u, &v27);
    if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
    {
      v9 = v34;
      v26 = v34;
      if ( v34 )
      {
        v10 = v35 + 2;
        v11 = -1;
        if ( v35 + 2 >= v35 )
          v11 = v35 + 2;
        v8 = v10 < v35 ? 0xC0000095 : 0;
        if ( v10 >= v35 )
        {
          v12 = v34 * (unsigned __int64)v11;
          v11 = -1;
          if ( v12 <= 0xFFFFFFFF )
            v11 = v12;
          v8 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
        }
        if ( v8 >= 0 )
        {
          v13 = 8LL * v34;
          v14 = -1;
          if ( v13 <= 0xFFFFFFFF )
            v14 = v13;
          v8 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v13 <= 0xFFFFFFFF )
          {
            if ( v14 + v11 < v14 )
            {
              v15 = -1;
              v8 = -1073741675;
            }
            else
            {
              v15 = v14 + v11;
              v8 = 0;
            }
            if ( v8 >= 0 )
            {
              PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v15, 0x4B444342u);
              v7 = PoolWithTag;
              if ( PoolWithTag )
              {
                v17 = &PoolWithTag[8 * v9];
                v18 = -1;
                if ( v35 < 0xFFFFFFE6 )
                  v18 = v35 + 26;
                v28 = v18;
                v8 = v35 >= 0xFFFFFFE6 ? 0xC0000095 : 0;
                if ( v35 + 26 >= 0x1A )
                {
                  v6 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v18, 0x4B444342u);
                  if ( v6 )
                  {
                    for ( j = 0; ; ++j )
                    {
                      if ( j >= v26 )
                        goto LABEL_28;
                      v21 = BiZwEnumerateKey(v25, j, v19, v6, v28, &v27);
                      v8 = v21;
                      if ( v21 == -2147483622 )
                        break;
                      if ( v21 < 0 )
                        goto LABEL_29;
                      if ( (unsigned __int64)v6[3] + 2 > v11 )
                      {
                        v8 = -1073741789;
                        goto LABEL_29;
                      }
                      v7[j] = v17;
                      memmove(v17, v6 + 4, v6[3]);
                      v22 = &v17[v6[3]];
                      *(_WORD *)v22 = 0;
                      v17 = v22 + 2;
                      v11 += -2 - v6[3];
                    }
                    if ( j )
                    {
LABEL_28:
                      *v29 = v7;
                      *v30 = j;
                      v8 = 0;
                    }
                  }
                  else
                  {
                    v8 = -1073741670;
                  }
                }
              }
              else
              {
                v8 = -1073741670;
              }
            }
          }
        }
LABEL_29:
        a1 = v25;
      }
      else
      {
        v8 = 0;
      }
      v5 = i;
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0x4B444342u);
    if ( v8 < 0 && v7 )
      ExFreePoolWithTag(v7, 0x4B444342u);
    if ( v8 != -1073741443 )
      break;
    __debugbreak();
    v3 = v29;
    a3 = v30;
    if ( v5 >= 5 )
      break;
    ++v5;
  }
  return (unsigned int)v8;
}
