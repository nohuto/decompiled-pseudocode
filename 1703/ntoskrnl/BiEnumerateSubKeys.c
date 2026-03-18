/*
 * XREFs of BiEnumerateSubKeys @ 0x14058A920
 * Callers:
 *     BiDeleteKey @ 0x140578EEC (BiDeleteKey.c)
 *     BiOpenSystemStore @ 0x14058A528 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14058A710 (BiCleanupLoadedStores.c)
 *     BcdEnumerateObjects @ 0x1407349D0 (BcdEnumerateObjects.c)
 *     BiBuildIdentifierList @ 0x14073655C (BiBuildIdentifierList.c)
 * Callees:
 *     BiSanitizeHandle @ 0x14013C160 (BiSanitizeHandle.c)
 *     BiZwEnumerateKey @ 0x14014CEFC (BiZwEnumerateKey.c)
 *     BiZwQueryKey @ 0x14014CF58 (BiZwQueryKey.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiEnumerateSubKeys(void *a1, _QWORD *a2, ULONG *a3)
{
  _QWORD *v3; // rax
  unsigned int v5; // r14d
  void *v6; // r15
  NTSTATUS v7; // ebx
  __int64 v8; // r13
  unsigned int v9; // eax
  unsigned __int64 v10; // r14
  unsigned int v11; // eax
  unsigned int v12; // eax
  char *PoolWithTag; // rax
  char *v14; // r12
  ULONG v15; // r15d
  unsigned int *v16; // rbx
  __int64 v17; // r8
  ULONG j; // esi
  NTSTATUS v19; // eax
  char *v20; // r12
  unsigned int i; // [rsp+34h] [rbp-B4h]
  void *v23; // [rsp+38h] [rbp-B0h]
  _QWORD *v24; // [rsp+40h] [rbp-A8h]
  ULONG ResultLength; // [rsp+48h] [rbp-A0h] BYREF
  PVOID P; // [rsp+50h] [rbp-98h]
  _QWORD *v27; // [rsp+58h] [rbp-90h]
  ULONG *v28; // [rsp+60h] [rbp-88h]
  _QWORD *v29; // [rsp+68h] [rbp-80h]
  ULONG *v30; // [rsp+70h] [rbp-78h]
  char KeyInformation[20]; // [rsp+78h] [rbp-70h] BYREF
  unsigned int v32; // [rsp+8Ch] [rbp-5Ch]
  unsigned int v33; // [rsp+90h] [rbp-58h]

  v28 = a3;
  v3 = a2;
  v27 = a2;
  v29 = a2;
  v30 = a3;
  v5 = 0;
  for ( i = 0; ; i = v5 )
  {
    *v3 = 0LL;
    *a3 = 0;
    P = 0LL;
    v6 = 0LL;
    a1 = (void *)BiSanitizeHandle((__int64)a1);
    v23 = a1;
    v7 = BiZwQueryKey(a1, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( ((v7 + 0x80000000) & 0x80000000) != 0 || v7 == -2147483643 )
    {
      v8 = v32;
      if ( v32 )
      {
        v9 = v33 + 2;
        v10 = 0xFFFFFFFFLL;
        if ( v33 + 2 >= v33 )
          v10 = v9;
        v7 = v9 < v33 ? 0xC0000095 : 0;
        if ( v9 >= v33 )
        {
          v10 *= v32;
          if ( v10 > 0xFFFFFFFF )
          {
            LODWORD(v10) = -1;
            v7 = -1073741675;
          }
          else
          {
            v7 = 0;
          }
        }
        if ( v7 >= 0 )
        {
          v11 = 8 * v32;
          if ( 8 * (unsigned __int64)v32 > 0xFFFFFFFF )
          {
            v11 = -1;
            v7 = -1073741675;
          }
          else
          {
            v7 = 0;
          }
          if ( v7 >= 0 )
          {
            if ( v11 + (unsigned int)v10 < v11 )
            {
              v12 = -1;
              v7 = -1073741675;
            }
            else
            {
              v12 = v11 + v10;
              v7 = 0;
            }
            if ( v7 >= 0 )
            {
              PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v12, 0x4B444342u);
              v6 = PoolWithTag;
              v24 = PoolWithTag;
              if ( PoolWithTag )
              {
                v14 = &PoolWithTag[8 * v8];
                v15 = v33 + 26;
                if ( v33 >= 0xFFFFFFE6 )
                {
                  v15 = -1;
                  v7 = -1073741675;
                }
                else
                {
                  v7 = 0;
                }
                if ( v7 < 0 )
                {
                  v6 = PoolWithTag;
                }
                else
                {
                  v16 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v15, 0x4B444342u);
                  P = v16;
                  if ( v16 )
                  {
                    for ( j = 0; ; ++j )
                    {
                      if ( j >= (unsigned int)v8 )
                        goto LABEL_27;
                      v19 = BiZwEnumerateKey(v23, j, v17, v16, v15, &ResultLength);
                      v7 = v19;
                      if ( v19 == -2147483622 )
                        break;
                      if ( v19 < 0 )
                        goto LABEL_45;
                      v16 = (unsigned int *)P;
                      if ( (unsigned __int64)*((unsigned int *)P + 3) + 2 > (unsigned int)v10 )
                      {
                        v7 = -1073741789;
                        goto LABEL_45;
                      }
                      v24[j] = v14;
                      memmove(v14, v16 + 4, v16[3]);
                      v20 = &v14[v16[3]];
                      *(_WORD *)v20 = 0;
                      v14 = v20 + 2;
                      LODWORD(v10) = -2 - v16[3] + v10;
                    }
                    if ( j )
                    {
LABEL_27:
                      v6 = v24;
                      *v27 = v24;
                      *v28 = j;
                      v7 = 0;
                      goto LABEL_28;
                    }
                  }
                  else
                  {
                    v7 = -1073741670;
                  }
LABEL_45:
                  v6 = v24;
                }
LABEL_28:
                a1 = v23;
              }
              else
              {
                v7 = -1073741670;
              }
            }
          }
        }
        v5 = i;
      }
      else
      {
        v7 = 0;
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0x4B444342u);
    if ( v7 < 0 && v6 )
      ExFreePoolWithTag(v6, 0x4B444342u);
    if ( v7 != -1073741443 )
      break;
    __debugbreak();
    v3 = v27;
    a3 = v28;
    if ( v5 >= 5 )
      break;
    ++v5;
  }
  return (unsigned int)v7;
}
