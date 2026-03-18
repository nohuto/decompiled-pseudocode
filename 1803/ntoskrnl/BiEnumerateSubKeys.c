/*
 * XREFs of BiEnumerateSubKeys @ 0x140607E7C
 * Callers:
 *     BiDeleteKey @ 0x1405EE92C (BiDeleteKey.c)
 *     BiCleanupLoadedStores @ 0x140606C04 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x140608164 (BiOpenSystemStore.c)
 *     BcdEnumerateObjects @ 0x1407E18C4 (BcdEnumerateObjects.c)
 *     BiBuildIdentifierList @ 0x1407E3440 (BiBuildIdentifierList.c)
 * Callees:
 *     BiSanitizeHandle @ 0x1400D2628 (BiSanitizeHandle.c)
 *     BiZwEnumerateKey @ 0x140164358 (BiZwEnumerateKey.c)
 *     BiZwQueryKey @ 0x1401643EC (BiZwQueryKey.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiEnumerateSubKeys(void *a1, _QWORD *a2, ULONG *a3)
{
  _QWORD *v3; // rax
  unsigned int v5; // esi
  unsigned int *v6; // r13
  void *v7; // r15
  NTSTATUS v8; // ebx
  unsigned int v9; // eax
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  char *PoolWithTag; // rax
  char *v16; // r12
  ULONG v17; // r15d
  __int64 v18; // r8
  ULONG j; // esi
  NTSTATUS v20; // eax
  char *v21; // r12
  unsigned int i; // [rsp+34h] [rbp-B4h]
  void *v24; // [rsp+38h] [rbp-B0h]
  _QWORD *v25; // [rsp+40h] [rbp-A8h]
  ULONG v26; // [rsp+48h] [rbp-A0h]
  ULONG v27; // [rsp+4Ch] [rbp-9Ch] BYREF
  _QWORD *v28; // [rsp+50h] [rbp-98h]
  ULONG *v29; // [rsp+58h] [rbp-90h]
  _QWORD *v30; // [rsp+60h] [rbp-88h]
  ULONG *v31; // [rsp+68h] [rbp-80h]
  int v32[5]; // [rsp+70h] [rbp-78h] BYREF
  ULONG v33; // [rsp+84h] [rbp-64h]
  unsigned int v34; // [rsp+88h] [rbp-60h]

  v29 = a3;
  v3 = a2;
  v28 = a2;
  v30 = a2;
  v31 = a3;
  v5 = 0;
  for ( i = 0; ; i = v5 )
  {
    *v3 = 0LL;
    *a3 = 0;
    v6 = 0LL;
    v7 = 0LL;
    a1 = (void *)BiSanitizeHandle((__int64)a1);
    v24 = a1;
    v8 = BiZwQueryKey(a1, KeyFullInformation, v32, 0x30u, &v27);
    if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
    {
      v26 = v33;
      if ( v33 )
      {
        v9 = v34 + 2;
        v10 = 0xFFFFFFFFLL;
        if ( v34 + 2 >= v34 )
          v10 = v9;
        v8 = v9 < v34 ? 0xC0000095 : 0;
        v11 = v33;
        if ( v9 >= v34 )
        {
          v10 *= v33;
          if ( v10 > 0xFFFFFFFF )
          {
            LODWORD(v10) = -1;
            v8 = -1073741675;
          }
          else
          {
            v8 = 0;
          }
        }
        if ( v8 >= 0 )
        {
          v12 = 8 * v33;
          if ( 8 * (unsigned __int64)v33 > 0xFFFFFFFF )
          {
            v12 = -1;
            v8 = -1073741675;
          }
          else
          {
            v8 = 0;
          }
          if ( v8 >= 0 )
          {
            v13 = v12 + v10;
            v14 = -1;
            if ( v12 + (unsigned int)v10 >= v12 )
              v14 = v12 + v10;
            v8 = v13 < v12 ? 0xC0000095 : 0;
            if ( v13 >= v12 )
            {
              PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v14, 0x4B444342u);
              v7 = PoolWithTag;
              v25 = PoolWithTag;
              if ( PoolWithTag )
              {
                v16 = &PoolWithTag[8 * v11];
                v17 = -1;
                if ( v34 < 0xFFFFFFE6 )
                  v17 = v34 + 26;
                v8 = v34 >= 0xFFFFFFE6 ? 0xC0000095 : 0;
                if ( v34 + 26 >= 0x1A )
                {
                  v6 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v17, 0x4B444342u);
                  if ( v6 )
                  {
                    for ( j = 0; ; ++j )
                    {
                      if ( j >= v26 )
                        goto LABEL_27;
                      v20 = BiZwEnumerateKey(v24, j, v18, v6, v17, &v27);
                      v8 = v20;
                      if ( v20 == -2147483622 )
                        break;
                      if ( v20 < 0 )
                        goto LABEL_43;
                      if ( (unsigned __int64)v6[3] + 2 > (unsigned int)v10 )
                      {
                        v8 = -1073741789;
                        goto LABEL_43;
                      }
                      v25[j] = v16;
                      memmove(v16, v6 + 4, v6[3]);
                      v21 = &v16[v6[3]];
                      *(_WORD *)v21 = 0;
                      v16 = v21 + 2;
                      LODWORD(v10) = -2 - v6[3] + v10;
                    }
                    if ( j )
                    {
LABEL_27:
                      v7 = v25;
                      *v28 = v25;
                      *v29 = j;
                      v8 = 0;
                      goto LABEL_28;
                    }
                  }
                  else
                  {
                    v8 = -1073741670;
                  }
                }
LABEL_43:
                v7 = v25;
              }
              else
              {
                v8 = -1073741670;
              }
            }
          }
        }
LABEL_28:
        a1 = v24;
        v5 = i;
      }
      else
      {
        v8 = 0;
      }
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0x4B444342u);
    if ( v8 < 0 && v7 )
      ExFreePoolWithTag(v7, 0x4B444342u);
    if ( v8 != -1073741443 )
      break;
    __debugbreak();
    v3 = v28;
    a3 = v29;
    if ( v5 >= 5 )
      break;
    ++v5;
  }
  return (unsigned int)v8;
}
