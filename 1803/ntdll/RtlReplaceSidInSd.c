/*
 * XREFs of RtlReplaceSidInSd @ 0x1800DFF60
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1800746A0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x180077350 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x18007ADB0 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x18007B650 (RtlGetGroupSecurityDescriptor.c)
 *     memcmp @ 0x18008EED0 (memcmp.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall RtlReplaceSidInSd(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v5; // r14d
  size_t v7; // r14
  __int64 v9; // r13
  __int64 result; // rax
  unsigned __int8 v11; // al
  int v12; // ecx
  void *v13; // rsi
  unsigned __int8 v14; // al
  int v15; // ecx
  void *v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdx
  unsigned __int8 v20; // al
  int v21; // ecx
  void *v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rdx
  unsigned __int8 v26; // al
  int v27; // ecx
  void *v28; // r15
  unsigned int v29; // [rsp+20h] [rbp-18h]
  _QWORD v30[2]; // [rsp+28h] [rbp-10h] BYREF
  bool v32; // [rsp+88h] [rbp+50h] BYREF
  __int64 v33; // [rsp+90h] [rbp+58h]
  __int64 v34; // [rsp+98h] [rbp+60h] BYREF

  v33 = a3;
  *a4 = 0;
  v5 = *(unsigned __int8 *)(a2 + 1);
  v34 = 0LL;
  v7 = (unsigned int)(4 * v5);
  v29 = v7;
  v9 = a1;
  result = RtlGetOwnerSecurityDescriptor(a1, &v34, &v32);
  if ( (int)result >= 0 )
  {
    if ( v34 )
    {
      if ( *(_BYTE *)v34 == *(_BYTE *)a2 )
      {
        v11 = *(_BYTE *)(a2 + 1);
        if ( *(_BYTE *)(v34 + 1) == v11 || *(unsigned __int8 *)(v34 + 1) == v11 + 1 )
        {
          v12 = *(_DWORD *)(v34 + 2) - *(_DWORD *)(a2 + 2);
          if ( !v12 )
            v12 = *(unsigned __int16 *)(v34 + 6) - *(unsigned __int16 *)(a2 + 6);
          if ( !v12 )
          {
            v13 = (void *)(v34 + 8);
            if ( !memcmp((const void *)(v34 + 8), (const void *)(a2 + 8), (unsigned int)v7) )
            {
              memmove(v13, (const void *)(a3 + 8), (unsigned int)v7);
              ++*a4;
            }
          }
        }
      }
    }
    v34 = 0LL;
    result = RtlGetGroupSecurityDescriptor(v9, &v34, &v32);
    if ( (int)result >= 0 )
    {
      if ( v34 )
      {
        if ( *(_BYTE *)v34 == *(_BYTE *)a2 )
        {
          v14 = *(_BYTE *)(a2 + 1);
          if ( *(_BYTE *)(v34 + 1) == v14 || *(unsigned __int8 *)(v34 + 1) == v14 + 1 )
          {
            v15 = *(_DWORD *)(v34 + 2) - *(_DWORD *)(a2 + 2);
            if ( !v15 )
              v15 = *(unsigned __int16 *)(v34 + 6) - *(unsigned __int16 *)(a2 + 6);
            if ( !v15 )
            {
              v16 = (void *)(v34 + 8);
              if ( !memcmp((const void *)(v34 + 8), (const void *)(a2 + 8), (unsigned int)v7) )
              {
                memmove(v16, (const void *)(a3 + 8), (unsigned int)v7);
                ++*a4;
              }
            }
          }
        }
      }
      v30[0] = 0LL;
      result = RtlGetDaclSecurityDescriptor(v9, (bool *)&v34, v30, &v32);
      if ( (int)result >= 0 )
      {
        if ( (_BYTE)v34 )
        {
          if ( v30[0] )
          {
            v17 = *(unsigned __int16 *)(v30[0] + 4LL);
            v18 = v30[0] + 8LL;
            if ( *(_WORD *)(v30[0] + 4LL) )
            {
              while ( *(_BYTE *)v18 > 3u )
              {
                if ( *(_BYTE *)v18 == 4 )
                {
                  v19 = 4 * (unsigned int)*(unsigned __int8 *)(v18 + 13) + 8 + v18 + 12;
                  goto LABEL_29;
                }
LABEL_37:
                v18 += *(unsigned __int16 *)(v18 + 2);
                if ( !--v17 )
                {
                  v9 = a1;
                  v7 = (unsigned int)v7;
                  goto LABEL_39;
                }
              }
              v19 = v18 + 8;
LABEL_29:
              if ( *(_BYTE *)v19 == *(_BYTE *)a2 )
              {
                v20 = *(_BYTE *)(a2 + 1);
                if ( *(_BYTE *)(v19 + 1) == v20 || *(unsigned __int8 *)(v19 + 1) == v20 + 1 )
                {
                  v21 = *(_DWORD *)(v19 + 2) - *(_DWORD *)(a2 + 2);
                  if ( !v21 )
                    v21 = *(unsigned __int16 *)(v19 + 6) - *(unsigned __int16 *)(a2 + 6);
                  if ( !v21 )
                  {
                    v22 = (void *)(v19 + 8);
                    if ( !memcmp((const void *)(v19 + 8), (const void *)(a2 + 8), (unsigned int)v7) )
                    {
                      memmove(v22, (const void *)(v33 + 8), (unsigned int)v7);
                      ++*a4;
                    }
                  }
                }
              }
              goto LABEL_37;
            }
          }
        }
LABEL_39:
        v30[0] = 0LL;
        result = RtlGetSaclSecurityDescriptor(v9, (bool *)&v34, v30, &v32);
        if ( (int)result >= 0 && (_BYTE)v34 && v30[0] )
        {
          v23 = *(unsigned __int16 *)(v30[0] + 4LL);
          v24 = v30[0] + 8LL;
          if ( *(_WORD *)(v30[0] + 4LL) )
          {
            while ( *(_BYTE *)v24 > 3u )
            {
              if ( *(_BYTE *)v24 == 4 )
              {
                v25 = 4 * (unsigned int)*(unsigned __int8 *)(v24 + 13) + 8 + v24 + 12;
                goto LABEL_47;
              }
LABEL_55:
              v7 = v29;
              v24 += *(unsigned __int16 *)(v24 + 2);
              if ( !--v23 )
                return 0LL;
            }
            v25 = v24 + 8;
LABEL_47:
            if ( *(_BYTE *)v25 == *(_BYTE *)a2 )
            {
              v26 = *(_BYTE *)(a2 + 1);
              if ( *(_BYTE *)(v25 + 1) == v26 || *(unsigned __int8 *)(v25 + 1) == v26 + 1 )
              {
                v27 = *(_DWORD *)(v25 + 2) - *(_DWORD *)(a2 + 2);
                if ( !v27 )
                  v27 = *(unsigned __int16 *)(v25 + 6) - *(unsigned __int16 *)(a2 + 6);
                if ( !v27 )
                {
                  v28 = (void *)(v25 + 8);
                  if ( !memcmp((const void *)(v25 + 8), (const void *)(a2 + 8), v7) )
                  {
                    memmove(v28, (const void *)(v33 + 8), v7);
                    ++*a4;
                  }
                }
              }
            }
            goto LABEL_55;
          }
          return 0LL;
        }
      }
    }
  }
  return result;
}
